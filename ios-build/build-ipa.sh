ARCHIVE="$OUT/NgocRong5SaoChamCom.xcarchive"#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
PROJECT="$ROOT/Unity-iPhone.xcodeproj"
SCHEME="Unity-iPhone"
CONFIG="Release"
METHOD="${1:-unsigned}"
TEAM="${DEVELOPMENT_TEAM:-}"
BUNDLE_ID="${BUNDLE_ID:-com.DefaultCompany.DragonBoy002}"
BUILD_NUMBER="${BUILD_NUMBER:-1}"
OUT="$ROOT/ios-build/out"
ARCHIVE="$OUT/NgocRong5SaoChamCom.xcarchive"
EXPORT_DIR="$OUT/ipa"
APP_NAME="NgocRong5SaoChamCom"

if [[ "$(uname -s)" != "Darwin" ]]; then
  echo "LOI: script nay phai chay tren macOS co Xcode." >&2
  exit 1
fi

if ! command -v xcodebuild >/dev/null 2>&1; then
  echo "LOI: khong tim thay xcodebuild." >&2
  exit 1
fi

case "$METHOD" in
  unsigned) OVERRIDES=(CODE_SIGNING_ALLOWED=NO CODE_SIGNING_REQUIRED=NO CODE_SIGN_IDENTITY="" ENTITLEMENTS_REQUIRED=NO) ;;
  development|ad-hoc|app-store-connect|app-store) OVERRIDES=() ;;
  *) echo "LOI: method khong hop le: $METHOD" >&2; exit 1 ;;
esac

if [[ "$METHOD" != "unsigned" && -z "$TEAM" ]]; then
  echo "LOI: thieu DEVELOPMENT_TEAM." >&2
  exit 1
fi

mkdir -p "$OUT"
rm -rf "$ARCHIVE" "$EXPORT_DIR"

SETTINGS=(
  -project "$PROJECT"
  -scheme "$SCHEME"
  -configuration "$CONFIG"
  -destination "generic/platform=iOS"
  BUILD_NUMBER="$BUILD_NUMBER"
  CURRENT_PROJECT_VERSION="$BUILD_NUMBER"
)

[[ -n "$BUNDLE_ID" ]] && SETTINGS+=(PRODUCT_BUNDLE_IDENTIFIER="$BUNDLE_ID")
[[ -n "$TEAM" ]] && SETTINGS+=(DEVELOPMENT_TEAM="$TEAM")
[[ "$METHOD" != "unsigned" ]] && SETTINGS+=(-allowProvisioningUpdates)

if [[ "$METHOD" == "unsigned" ]]; then
  echo "==> Build khong ky (unsigned)"
  xcodebuild "${SETTINGS[@]}" -derivedDataPath "$OUT/DerivedData" \
    "${OVERRIDES[@]}" build

  APP="$OUT/DerivedData/Build/Products/$CONFIG-iphoneos/$APP_NAME.app"
  [[ -d "$APP" ]] || {
    echo "LOI: khong thay $APP sau khi build" >&2
    exit 1
  }

  rm -rf "$OUT/Payload" "$OUT/$APP_NAME-unsigned.ipa"
  mkdir -p "$OUT/Payload"
  cp -R "$APP" "$OUT/Payload/"
  (cd "$OUT" && zip -qry "$APP_NAME-unsigned.ipa" Payload)
  rm -rf "$OUT/Payload"

  echo "==> Xong: $OUT/$APP_NAME-unsigned.ipa"
  exit 0
fi

echo "==> Archive (method: $METHOD, team: $TEAM)"
xcodebuild "${SETTINGS[@]}" -archivePath "$ARCHIVE" archive

PLIST="$OUT/ExportOptions-$METHOD.plist"
cat > "$PLIST" <<PLIST_EOF
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>method</key>
    <string>$METHOD</string>
    <key>teamID</key>
    <string>$TEAM</string>
    <key>signingStyle</key>
    <string>automatic</string>
    <key>stripSwiftSymbols</key>
    <true/>
    <key>compileBitcode</key>
    <false/>
    <key>uploadSymbols</key>
    <true/>
</dict>
</plist>
PLIST_EOF

echo "==> Export .ipa"
xcodebuild -exportArchive \
  -archivePath "$ARCHIVE" \
  -exportOptionsPlist "$PLIST" \
  -exportPath "$EXPORT_DIR" \
  -allowProvisioningUpdates

echo "==> Xong: $(ls -1 "$EXPORT_DIR"/*.ipa 2>/dev/null || echo "khong thay .ipa trong $EXPORT_DIR")"
