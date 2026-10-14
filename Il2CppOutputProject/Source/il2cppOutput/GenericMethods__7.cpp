#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker<T1, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[3] = { &p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D;
struct Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F;
struct Dictionary_2_t48934936522AEB6F71D7681E71616505B5032D05;
struct Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455;
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
struct EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2;
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
struct EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581;
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_t3E42C5AD2A20A09F9DCF1AED7384C6A1DC064099;
struct ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44;
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A;
struct ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442;
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281;
struct ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF;
struct ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D;
struct ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D;
struct ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6;
struct ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15;
struct ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D;
struct ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D;
struct ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C;
struct List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331;
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
struct List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t78C08040A5145ABB53E7FCB788F282811E60DB39;
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324;
struct List_1_tBFA73B26AF72BABC85549F091C4BA5A95B9FB412;
struct List_1_tC0DB86C8C8EEBD50C33C1B9B8B375EBE994F49D8;
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B;
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5;
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF;
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302;
struct ValueCollection_tD8CEC042EAA3D1B0C017DC17F7E307019CECF1CA;
struct downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D;
struct downmix_func_1_t6BAA4EE8298FE6F3965456CDD78095618EE9C4D3;
struct EntryU5BU5D_tC5C7E6C4C3CCDE7C83D7C598F38A045722C89C2D;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct SByteU5BU5DU5BU5D_t9042899DE0306D67CDDEDC06C44CEFAD76730699;
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
struct AnalysisInfoU5BU5D_t646F843F0B7F36B1C4AC1BBA86EE635A857182FD;
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A;
struct AtlasAssetBaseU5BU5D_t6D8EAEA3267D1DFC3FBFAA3ECE699B48E92E5C82;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IRenderPipelineGraphicsSettingsU5BU5D_t13C894F2F332E48CE3D526E4FF2024E8F1ABF78A;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SideInfoIndicesU5BU5D_t09C8A117457CF3B12593FAD8E92057BE9BEE8067;
struct SilkChannelEncoderU5BU5D_t241B8ADEDA30B816D7957AE8B0615ACADD8DE0B3;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C;
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2;
struct AnimationStateData_t47D4F60C663435EF5F6514A679B9711A837244DB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BlendModeMaterials_t3DA4B85DB36B60D661B6403BD49E7D62F56B81D8;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322;
struct CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5;
struct EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct INativeCallbackProvider_t9C3AAA36B250E1A3DD05DF6F0A4C236CA6DD6DFF;
struct IReadonlyOrderedAssemblyList_t544ADC4FC185A12BE2877D68B86635F394C2E5FC;
struct IRenderPipelineGraphicsSettings_tFD0CD27795DA54240F76B377D953AA3DD9929947;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LifecycleMethodRegistry_t683994E033865F86C96A14E5F2674E6AD8B97EA8;
struct MDCTLookup_t8591ACE481D5B4565A85E369B549A23E5C44953C;
struct MLP_tB517FA86884DE058F05982457A04C24E07CC0473;
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
struct MeshGenerator_t754492D79919D913B93BE05E83D270CEACAC392C;
struct MeshGeneratorDelegate_t799773C2F6BEC0D47D27646DB0FBE22A28821E8B;
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
struct MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B;
struct MethodInfo_t;
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
struct NLSFCodebook_tCA9050BB728851D5D0BA83098F14B182A9CF489E;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E;
struct OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9;
struct PulseCache_tDFD13AECB90CD7E4C4A76DC116FFF4AA7B682404;
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69;
struct RenderPipelineGlobalSettings_t3F883EA6174C636143F71211A146A0B1D9E76000;
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct SideInfoIndices_tFB542FA845A0D8F91A7086AE2BDB51D936168EF8;
struct SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194;
struct SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507;
struct SilkLPState_t6EE94EFEA3049A2CF71AFB1B7A174F88DDFE1C4F;
struct SilkNSQState_tF5F9257BE71123EEDC4AD9C8E2374DF010E83953;
struct SilkPrefilterState_tCF90BF3D28F4ECCC589A9D989B27A47AFDEA64D7;
struct SilkResamplerState_tF5AD63DBBEC7D4D72423608D7670FB661D2688D8;
struct SilkShapeState_t0370EE5449FBC7D22F1BCB5796F34CF55DD234F6;
struct SilkVADState_t95B359841FE5ADF821BCEF69FCD74F07CD27277F;
struct Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3;
struct SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254;
struct SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F;
struct SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97;
struct StereoEncodeState_t2756EA02BBA670AA6ED5204DD84B8170F2FC967D;
struct StereoWidthState_tF25794762BEB382FD8D450D2C8D2B96CCBE60FBB;
struct String_t;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447;
struct Type_t;
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E;
struct InstructionDelegate_t751C3C0C3012ADBD85CD298FF1DCCDE3541B57B6;
struct SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7;
struct SpriteMaskInteractionMaterials_tF9C97C34FC619F4BCF4E47C16262899351C10720;

IL2CPP_EXTERN_C RuntimeClass* AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7;
IL2CPP_EXTERN_C String_t* _stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral5DC354ED76FAFB0A34CA2332E99474E27A28C69F;
IL2CPP_EXTERN_C String_t* _stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC;
IL2CPP_EXTERN_C String_t* _stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C const RuntimeMethod* Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m0A9791A878A24FD213FBF19D37BB974525CD23B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB83471E6DB330FD9D458123C6584717A4BF8F763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct SilkChannelEncoderU5BU5D_t241B8ADEDA30B816D7957AE8B0615ACADD8DE0B3;
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C;
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D  : public RuntimeObject
{
	int32_t ___Val;
};
struct Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tC5C7E6C4C3CCDE7C83D7C598F38A045722C89C2D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t3E42C5AD2A20A09F9DCF1AED7384C6A1DC064099* ____keys;
	ValueCollection_tD8CEC042EAA3D1B0C017DC17F7E307019CECF1CA* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};
struct EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2  : public RuntimeObject
{
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};
struct EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581  : public RuntimeObject
{
};
struct ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44  : public RuntimeObject
{
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF  : public RuntimeObject
{
	UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D  : public RuntimeObject
{
	UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D  : public RuntimeObject
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6  : public RuntimeObject
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331  : public RuntimeObject
{
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D  : public RuntimeObject
{
	IRenderPipelineGraphicsSettingsU5BU5D_t13C894F2F332E48CE3D526E4FF2024E8F1ABF78A* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B  : public RuntimeObject
{
	UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5  : public RuntimeObject
{
	UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A  : public RuntimeObject
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2  : public RuntimeObject
{
	bool ___enabled;
	int32_t ___valid;
	float ___tonality;
	float ___tonality_slope;
	float ___noisiness;
	float ___activity;
	float ___music_prob;
	int32_t ___bandwidth;
};
struct CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03  : public RuntimeObject
{
	int32_t ___Fs;
	int32_t ___overlap;
	int32_t ___nbEBands;
	int32_t ___effEBands;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___preemph;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___eBands;
	int32_t ___maxLM;
	int32_t ___nbShortMdcts;
	int32_t ___shortMdctSize;
	int32_t ___nbAllocVectors;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___allocVectors;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___logN;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___window;
	MDCTLookup_t8591ACE481D5B4565A85E369B549A23E5C44953C* ___mdct;
	PulseCache_tDFD13AECB90CD7E4C4A76DC116FFF4AA7B682404* ___cache;
};
struct EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5  : public RuntimeObject
{
	int32_t ___nChannelsAPI;
	int32_t ___nChannelsInternal;
	int32_t ___API_sampleRate;
	int32_t ___maxInternalSampleRate;
	int32_t ___minInternalSampleRate;
	int32_t ___desiredInternalSampleRate;
	int32_t ___payloadSize_ms;
	int32_t ___bitRate;
	int32_t ___packetLossPercentage;
	int32_t ___complexity;
	int32_t ___useInBandFEC;
	int32_t ___useDTX;
	int32_t ___useCBR;
	int32_t ___maxBits;
	int32_t ___toMono;
	int32_t ___opusCanSwitch;
	int32_t ___reducedDependency;
	int32_t ___internalSampleRate;
	int32_t ___allowBandwidthSwitch;
	int32_t ___inWBmodeWithoutVariableLP;
	int32_t ___stereoWidth_Q14;
	int32_t ___switchReady;
};
struct EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf;
	int32_t ___buf_ptr;
	uint32_t ___storage;
	uint32_t ___end_offs;
	uint32_t ___end_window;
	int32_t ___nend_bits;
	int32_t ___nbits_total;
	uint32_t ___offs;
	uint32_t ___rng;
	uint32_t ___val;
	uint32_t ___ext;
	int32_t ___rem;
	int32_t ___error;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};
struct NativeSliceExtensions_tA2B0303180122826FD5887061B8DBA5F342A726B  : public RuntimeObject
{
};
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};
struct NativeSortExtension_t69298E80751CF0D0DB847C79277B6E0A2C92A4F2  : public RuntimeObject
{
};
struct NoAllocHelpers_t5108A9272D2BFBFF50B14D2A1B5330A629180360  : public RuntimeObject
{
};
struct OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9  : public RuntimeObject
{
	uint8_t ___toc;
	int32_t ___nb_frames;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___frames;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___frames_ptrs;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___len;
	int32_t ___framesize;
};
struct PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D  : public RuntimeObject
{
};
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
};
struct Resources_t4745F52065DB80D8880840AEDC45965DE35128E1  : public RuntimeObject
{
};
struct RuntimeHelpers_t9E6C71E90FD7CAB0987E101A77FBDA52EFDE284C  : public RuntimeObject
{
};
struct ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347  : public RuntimeObject
{
	StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97* ____assemblyList;
	LifecycleMethodRegistry_t683994E033865F86C96A14E5F2674E6AD8B97EA8* ____lifecycleMethodRegistry;
	RuntimeObject* ___U3CNativeCallbackProviderU3Ek__BackingField;
};
struct SetPropertyUtility_t7A9A8AC1523C59CF066D8802A39FD11F635AE623  : public RuntimeObject
{
};
struct SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___In_HP_State;
	int32_t ___variable_HP_smth1_Q15;
	int32_t ___variable_HP_smth2_Q15;
	SilkLPState_t6EE94EFEA3049A2CF71AFB1B7A174F88DDFE1C4F* ___sLP;
	SilkVADState_t95B359841FE5ADF821BCEF69FCD74F07CD27277F* ___sVAD;
	SilkNSQState_tF5F9257BE71123EEDC4AD9C8E2374DF010E83953* ___sNSQ;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___prev_NLSFq_Q15;
	int32_t ___speech_activity_Q8;
	int32_t ___allow_bandwidth_switch;
	int8_t ___LBRRprevLastGainIndex;
	int8_t ___prevSignalType;
	int32_t ___prevLag;
	int32_t ___pitch_LPC_win_length;
	int32_t ___max_pitch_lag;
	int32_t ___API_fs_Hz;
	int32_t ___prev_API_fs_Hz;
	int32_t ___maxInternal_fs_Hz;
	int32_t ___minInternal_fs_Hz;
	int32_t ___desiredInternal_fs_Hz;
	int32_t ___fs_kHz;
	int32_t ___nb_subfr;
	int32_t ___frame_length;
	int32_t ___subfr_length;
	int32_t ___ltp_mem_length;
	int32_t ___la_pitch;
	int32_t ___la_shape;
	int32_t ___shapeWinLength;
	int32_t ___TargetRate_bps;
	int32_t ___PacketSize_ms;
	int32_t ___PacketLoss_perc;
	int32_t ___frameCounter;
	int32_t ___Complexity;
	int32_t ___nStatesDelayedDecision;
	int32_t ___useInterpolatedNLSFs;
	int32_t ___shapingLPCOrder;
	int32_t ___predictLPCOrder;
	int32_t ___pitchEstimationComplexity;
	int32_t ___pitchEstimationLPCOrder;
	int32_t ___pitchEstimationThreshold_Q16;
	int32_t ___LTPQuantLowComplexity;
	int32_t ___mu_LTP_Q9;
	int32_t ___sum_log_gain_Q7;
	int32_t ___NLSF_MSVQ_Survivors;
	int32_t ___first_frame_after_reset;
	int32_t ___controlled_since_last_payload;
	int32_t ___warping_Q16;
	int32_t ___useCBR;
	int32_t ___prefillFlag;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pitch_lag_low_bits_iCDF;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pitch_contour_iCDF;
	NLSFCodebook_tCA9050BB728851D5D0BA83098F14B182A9CF489E* ___psNLSF_CB;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___input_quality_bands_Q15;
	int32_t ___input_tilt_Q15;
	int32_t ___SNR_dB_Q7;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___VAD_flags;
	int8_t ___LBRR_flag;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___LBRR_flags;
	SideInfoIndices_tFB542FA845A0D8F91A7086AE2BDB51D936168EF8* ___indices;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___pulses;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___inputBuf;
	int32_t ___inputBufIx;
	int32_t ___nFramesPerPacket;
	int32_t ___nFramesEncoded;
	int32_t ___nChannelsAPI;
	int32_t ___nChannelsInternal;
	int32_t ___channelNb;
	int32_t ___frames_since_onset;
	int32_t ___ec_prevSignalType;
	int16_t ___ec_prevLagIndex;
	SilkResamplerState_tF5AD63DBBEC7D4D72423608D7670FB661D2688D8* ___resampler_state;
	int32_t ___useDTX;
	int32_t ___inDTX;
	int32_t ___noSpeechCounter;
	int32_t ___useInBandFEC;
	int32_t ___LBRR_enabled;
	int32_t ___LBRR_GainIncreases;
	SideInfoIndicesU5BU5D_t09C8A117457CF3B12593FAD8E92057BE9BEE8067* ___indices_LBRR;
	SByteU5BU5DU5BU5D_t9042899DE0306D67CDDEDC06C44CEFAD76730699* ___pulses_LBRR;
	SilkShapeState_t0370EE5449FBC7D22F1BCB5796F34CF55DD234F6* ___sShape;
	SilkPrefilterState_tCF90BF3D28F4ECCC589A9D989B27A47AFDEA64D7* ___sPrefilt;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___x_buf;
	int32_t ___LTPCorr_Q15;
};
struct SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507  : public RuntimeObject
{
	SilkChannelEncoderU5BU5D_t241B8ADEDA30B816D7957AE8B0615ACADD8DE0B3* ___state_Fxx;
	StereoEncodeState_t2756EA02BBA670AA6ED5204DD84B8170F2FC967D* ___sStereo;
	int32_t ___nBitsUsedLBRR;
	int32_t ___nBitsExceeded;
	int32_t ___nChannelsAPI;
	int32_t ___nChannelsInternal;
	int32_t ___nPrevChannelsInternal;
	int32_t ___timeSinceSwitchAllowed_ms;
	int32_t ___allowBandwidthSwitch;
	int32_t ___prev_decode_only_middle;
};
struct SpanHelpers_tCA85E2BE495D0EC31B7D20D20E9FC3309265176A  : public RuntimeObject
{
};
struct SpriteDataAccessExtensions_t3E42874762D049E221636AD9A719EBAE7F9C9980  : public RuntimeObject
{
};
struct StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97  : public RuntimeObject
{
	int32_t ____count;
	List_1_t78C08040A5145ABB53E7FCB788F282811E60DB39* ____assemblyStacks;
};
struct StereoWidthState_tF25794762BEB382FD8D450D2C8D2B96CCBE60FBB  : public RuntimeObject
{
	int32_t ___XX;
	int32_t ___XY;
	int32_t ___YY;
	int32_t ___smoothed_width;
	int32_t ___max_follower;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Tables_tF67CEF206011C741D6FC36A23379D6659E460F29  : public RuntimeObject
{
};
struct TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447  : public RuntimeObject
{
	bool ___enabled;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___angle;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___d_angle;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___d2_angle;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___inmem;
	int32_t ___mem_fill;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___prev_band_tonality;
	float ___prev_tonality;
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___E;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lowE;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___highE;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___meanE;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___mem;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___cmean;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___std;
	float ___music_prob;
	float ___Etracker;
	float ___lowECount;
	int32_t ___E_count;
	int32_t ___last_music;
	int32_t ___last_transition;
	int32_t ___count;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___subframe_mem;
	int32_t ___analysis_offset;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pspeech;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pmusic;
	float ___speech_confidence;
	float ___music_confidence;
	int32_t ___speech_confidence_count;
	int32_t ___music_confidence_count;
	int32_t ___write_pos;
	int32_t ___read_pos;
	int32_t ___read_subframe;
	AnalysisInfoU5BU5D_t646F843F0B7F36B1C4AC1BBA86EE635A857182FD* ___info;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t2657D985DD7B7661A7722D6396F5D65A8D9239A1 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t9BFFF9586EFFB05517670778FC645523EFB2AA41 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 
{
	union
	{
		struct
		{
		};
		uint8_t Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9__padding[1];
	};
};
struct ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_tCD6518F15D44935EFDC820F5ACCB8F718BDF1CCC 
{
	intptr_t ____value;
};
struct ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 
{
	intptr_t ____value;
};
struct ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_ClipEntityId;
	float ___m_Weight;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor;
	float ___m_ColorMultiplier;
	float ___m_FadeDuration;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct OpusApplication_tA3FA244EBBA4A040CFD2982020A94EDCC8C26765 
{
	int32_t ___value__;
};
struct OpusBandwidth_t5ED3488243BAC170E9AE3C5E63F7454F9132B919 
{
	int32_t ___value__;
};
struct OpusFramesize_tBCD544BDA3F0F0158856D55E1F90AF71F20EA774 
{
	int32_t ___value__;
};
struct OpusMode_t534C7A39C4E3CB4F611CC3A9CB5D4102B71F4CFB 
{
	int32_t ___value__;
};
struct OpusSignal_t4A33C9623D88FED2FCB6F5554D3AD533178E7379 
{
	int32_t ___value__;
};
struct PInfo_t8E650D58C9259127E18C225459323E41106C2877 
{
	int32_t ___value__;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PropertyAttributes_tE026D5D3C04F074C19F2200702FE4F265C309797 
{
	int32_t ___value__;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Collider;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	intptr_t ___m_Ptr;
};
struct SpriteMaskInteraction_tC888A8071B3F72BFCCC7717F292C303839070D42 
{
	int32_t ___value__;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___prevPosition;
};
struct UpdateMode_t3F2A909DE2682AEDBDF54EAFDD1A065FB1E5384A 
{
	int32_t ___value__;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	int32_t ___value__;
};
struct NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 
{
	ByReference_1_tCD6518F15D44935EFDC820F5ACCB8F718BDF1CCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322  : public RuntimeObject
{
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* ___mode;
	int32_t ___channels;
	int32_t ___stream_channels;
	int32_t ___force_intra;
	int32_t ___clip;
	int32_t ___disable_pf;
	int32_t ___complexity;
	int32_t ___upsample;
	int32_t ___start;
	int32_t ___end;
	int32_t ___bitrate;
	int32_t ___vbr;
	int32_t ___signalling;
	int32_t ___constrained_vbr;
	int32_t ___loss_rate;
	int32_t ___lsb_depth;
	int32_t ___variable_duration;
	int32_t ___lfe;
	uint32_t ___rng;
	int32_t ___spread_decision;
	int32_t ___delayedIntra;
	int32_t ___tonal_average;
	int32_t ___lastCodedBands;
	int32_t ___hf_average;
	int32_t ___tapset_decision;
	int32_t ___prefilter_period;
	int32_t ___prefilter_gain;
	int32_t ___prefilter_tapset;
	int32_t ___consec_transient;
	AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* ___analysis;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___preemph_memE;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___preemph_memD;
	int32_t ___vbr_reservoir;
	int32_t ___vbr_drift;
	int32_t ___vbr_offset;
	int32_t ___vbr_count;
	int32_t ___overlap_max;
	int32_t ___stereo_saving;
	int32_t ___intensity;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___energy_mask;
	int32_t ___spec_avg;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___in_mem;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___prefilter_mem;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___oldBandE;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___oldLogE;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___oldLogE2;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C 
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	String_t* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_pinvoke
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	char* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_com
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	Il2CppChar* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode;
	bool ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E  : public RuntimeObject
{
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* ___silk_mode;
	int32_t ___application;
	int32_t ___channels;
	int32_t ___delay_compensation;
	int32_t ___force_channels;
	int32_t ___signal_type;
	int32_t ___user_bandwidth;
	int32_t ___max_bandwidth;
	int32_t ___user_forced_mode;
	int32_t ___voice_ratio;
	int32_t ___Fs;
	int32_t ___use_vbr;
	int32_t ___vbr_constraint;
	int32_t ___variable_duration;
	int32_t ___bitrate_bps;
	int32_t ___user_bitrate_bps;
	int32_t ___lsb_depth;
	int32_t ___encoder_buffer;
	int32_t ___lfe;
	TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* ___analysis;
	int32_t ___stream_channels;
	int16_t ___hybrid_stereo_width_Q14;
	int32_t ___variable_HP_smth2_Q15;
	int32_t ___prev_HB_gain;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp_mem;
	int32_t ___mode;
	int32_t ___prev_mode;
	int32_t ___prev_channels;
	int32_t ___prev_framesize;
	int32_t ___bandwidth;
	int32_t ___silk_bw_switch;
	int32_t ___first;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___energy_masking;
	StereoWidthState_tF25794762BEB382FD8D450D2C8D2B96CCBE60FBB* ___width_mem;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___delay_buffer;
	int32_t ___detected_bandwidth;
	uint32_t ___rangeFinal;
	SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* ___SilkEncoder;
	CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* ___Celt_Encoder;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8  : public MulticastDelegate_t
{
};
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302  : public MulticastDelegate_t
{
};
struct downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D  : public MulticastDelegate_t
{
};
struct downmix_func_1_t6BAA4EE8298FE6F3965456CDD78095618EE9C4D3  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RenderPipelineGlobalSettings_t3F883EA6174C636143F71211A146A0B1D9E76000  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* ___U3CsettingsMapU3Ek__BackingField;
};
struct RuntimePropertyInfo_t5F54C4304A36C216127C93BF1553920A8685537D  : public PropertyInfo_t
{
	intptr_t ___klass;
	intptr_t ___prop;
	MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C ___info;
	int32_t ___cached;
	GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E* ___cached_getter;
};
struct SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	AtlasAssetBaseU5BU5D_t6D8EAEA3267D1DFC3FBFAA3ECE699B48E92E5C82* ___atlasAssets;
	float ___scale;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___skeletonJSON;
	bool ___isUpgradingBlendModeMaterials;
	BlendModeMaterials_t3DA4B85DB36B60D661B6403BD49E7D62F56B81D8* ___blendModeMaterials;
	List_1_tBFA73B26AF72BABC85549F091C4BA5A95B9FB412* ___skeletonDataModifiers;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fromAnimation;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___toAnimation;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___duration;
	float ___defaultMix;
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___controller;
	SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___skeletonData;
	AnimationStateData_t47D4F60C663435EF5F6514A679B9711A837244DB* ___stateData;
};
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	uint32_t ___m_NonSerializedVersion;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info;
	RuntimeObject* ___GenericCache;
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor;
};
struct SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___skeletonDataAsset;
	String_t* ___initialSkinName;
	bool ___initialFlipX;
	bool ___initialFlipY;
	int32_t ___updateMode;
	int32_t ___updateWhenInvisible;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separatorSlotNames;
	List_1_tC0DB86C8C8EEBD50C33C1B9B8B375EBE994F49D8* ___separatorSlots;
	float ___zSpacing;
	bool ___useClipping;
	bool ___immutableTriangles;
	bool ___pmaVertexColors;
	bool ___clearStateOnDisable;
	bool ___tintBlack;
	bool ___singleSubmesh;
	bool ___fixDrawOrder;
	bool ___addNormals;
	bool ___calculateTangents;
	int32_t ___maskInteraction;
	SpriteMaskInteractionMaterials_tF9C97C34FC619F4BCF4E47C16262899351C10720* ___maskMaterials;
	bool ___disableRenderingOnOverride;
	InstructionDelegate_t751C3C0C3012ADBD85CD298FF1DCCDE3541B57B6* ___generateMeshOverride;
	MeshGeneratorDelegate_t799773C2F6BEC0D47D27646DB0FBE22A28821E8B* ___OnPostProcessVertices;
	Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* ___customMaterialOverride;
	Dictionary_2_t48934936522AEB6F71D7681E71616505B5032D05* ___customSlotMaterials;
	SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* ___currentInstructions;
	MeshGenerator_t754492D79919D913B93BE05E83D270CEACAC392C* ___meshGenerator;
	MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* ___rendererBuffers;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter;
	bool ___valid;
	Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___skeleton;
	SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7* ___OnRebuild;
	SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7* ___OnMeshAndMaterialsUpdated;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___reusedPropertyBlock;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer;
};
struct EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F_StaticFields
{
	EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2_StaticFields
{
	EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* ___defaultComparer;
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer;
};
struct EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24_StaticFields
{
	EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields
{
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* ___defaultComparer;
};
struct List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331_StaticFields
{
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* ___s_emptyArray;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___s_emptyArray;
};
struct List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D_StaticFields
{
	IRenderPipelineGraphicsSettingsU5BU5D_t13C894F2F332E48CE3D526E4FF2024E8F1ABF78A* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___s_emptyArray;
};
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B_StaticFields
{
	UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* ___s_emptyArray;
};
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5_StaticFields
{
	UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* ___s_emptyArray;
};
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_StaticFields
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___s_emptyArray;
};
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03_StaticFields
{
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* ___mode48000_960_120;
};
struct EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___correction;
};
struct PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_StaticFields
{
	Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110* ___objectPools;
	int32_t ___targetFPS;
	int32_t ___currentFrame;
	bool ___enableOptimizations;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___updateCounters;
};
struct ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347_StaticFields
{
	String_t* ___k_ProfilerMarkerPrefix;
	String_t* ___k_DetailedInvokeMarkerPrefix;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___dct_table;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___analysis_window;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tbands;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extra_bands;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___topo;
	MLP_tB517FA86884DE058F05982457A04C24E07CC0473* ___net;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___tansig_table;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___mono_voice_bandwidth_thresholds;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___mono_music_bandwidth_thresholds;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stereo_voice_bandwidth_thresholds;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stereo_music_bandwidth_thresholds;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___mode_thresholds;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null;
};
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes;
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef;
};
struct SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_StaticFields
{
	int32_t ___STENCIL_COMP_PARAM_ID;
	int32_t ___SUBMESH_DUMMY_PARAM_ID;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 m_Items[1];

	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 value)
	{
		m_Items[index] = value;
	}
};
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C  : public RuntimeArray
{
	ALIGN_FIELD (8) UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD m_Items[1];

	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD value)
	{
		m_Items[index] = value;
	}
};
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC  : public RuntimeArray
{
	ALIGN_FIELD (8) UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC m_Items[1];

	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC value)
	{
		m_Items[index] = value;
	}
};
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SilkChannelEncoderU5BU5D_t241B8ADEDA30B816D7957AE8B0615ACADD8DE0B3  : public RuntimeArray
{
	ALIGN_FIELD (8) SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194* m_Items[1];

	inline SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mD0C60D5A0038A9DA582985ADC92B8B6714A1E8AD_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, int32_t ___1_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC_gshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_gshared_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mE1E3E6FEAAF3E0DBBFC735EDC3267ECA2221A628_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m29CD0E18938F36295FC793E98250D48F9835B32F_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m659221DBCD9303407ACE89F7078861892495AD48_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m9B0BEB44FDA36870CF47F7A7995FD97E953FE551_gshared (void* ___0_array, int32_t ___1_length, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333_gshared_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA3840C7226D793D4B75979B13B1A6B0B25342950_gshared_inline (ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5_gshared_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414_gshared_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** UnsafeUtility_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7E01BE5B3130A632C43D1F86A8781C30A93D3DCF_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mBF6027BF398B4F00E727BC7265644490A41EC946_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4B62593B8671BB60809057D57DC60568557315E6_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mF5EF98414FB608E53A165ED38C4FB0C0764AC00E_gshared (List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mD1D84001E0B4C85B5C7F8B48796ED4B814779FB8_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m7B92303796B477EA0A27AF48F502382B2A85B213_gshared (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m3BDCA1A17A3EF6EF6D0443961D6EDDF7165364F0_gshared (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analysis_run_analysis_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF67026CF1AEA386A80BE9DDE4F2E3DFFF88626A1_gshared (TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* ___0_analysis, CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* ___1_celt_mode, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___2_analysis_pcm, int32_t ___3_analysis_pcm_ptr, int32_t ___4_analysis_frame_size, int32_t ___5_frame_size, int32_t ___6_c1, int32_t ___7_c2, int32_t ___8_C, int32_t ___9_Fs, int32_t ___10_lsb_depth, downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D* ___11_downmix, AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* ___12_analysis_info, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpusEncoder_opus_encode_native_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD9B3E8A05692DBC0F0457EB2EC48F0B9210F49FC_gshared (OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_pcm, int32_t ___1_pcm_ptr, int32_t ___2_frame_size, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_data, int32_t ___4_data_ptr, int32_t ___5_out_data_bytes, int32_t ___6_lsb_depth, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___7_analysis_pcm, int32_t ___8_analysis_pcm_ptr, int32_t ___9_analysis_size, int32_t ___10_c1, int32_t ___11_c2, int32_t ___12_analysis_channels, downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D* ___13_downmix, int32_t ___14_float_api, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD_gshared (BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* __this, int32_t ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7_gshared (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int16_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E_gshared (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_src_idx, int32_t ___2_dst_idx, int32_t ___3_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2719AC789D5D25B4A08674C479D2F2FA27319C77_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_mD259039B129098644F0E324CADD1070CB7638E1E_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m02DF2B39305B32F97D425178F5054CE9830BFB10_gshared_inline (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Queue_1_Dequeue_m1ECED0A4B619428F2561AA3D053E73A097A10193_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* SkeletonRenderer_AddSpineComponent_TisIl2CppSharedGenericObject_mD9CF25035F3C95B6542E8CDC327C4FFF14CE8B7C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___1_skeletonDataAsset, bool ___2_quiet, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774_gshared (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_CreateComparer_mEC9E7D42057D720BD5C432BEBEAF047B1E459907_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_CreateComparer_mB6F7C63A873735C1C9DCC17393C8844B9F014DC1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_CreateComparer_m779CEAAA847760E44B83AED6B8E7A854F40754FF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared (const RuntimeMethod* method) ;

inline void NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958 (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958_gshared)(__this, ___0_array, method);
}
inline void NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A_gshared)(__this, ___0_array, method);
}
inline void NativeSlice_1__ctor_mD0C60D5A0038A9DA582985ADC92B8B6714A1E8AD (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, int32_t ___1_start, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mD0C60D5A0038A9DA582985ADC92B8B6714A1E8AD_gshared)(__this, ___0_array, ___1_start, method);
}
inline void NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D_gshared)(__this, ___0_array, ___1_start, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, int32_t, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9, const RuntimeMethod*))NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC_gshared)(___0_array, ___1_i, ___2_n, ___3_lo, ___4_comp, method);
}
inline void NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D_gshared)(___0_array, ___1_lhs, ___2_rhs, method);
}
inline int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60 (Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* __this, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___0_a, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___1_b, const RuntimeMethod* method) ;
inline void UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED (int32_t ___0_value, const RuntimeMethod* method) ;
inline void NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, int32_t, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9, const RuntimeMethod*))NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46_gshared)(___0_array, ___1_lo, ___2_hi, ___3_depth, ___4_comp, method);
}
inline void NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9, const RuntimeMethod*))NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023_gshared)(___0_array, ___1_lhs, ___2_rhs, ___3_comp, method);
}
inline void NativeSortExtension_InsertionSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mE1E3E6FEAAF3E0DBBFC735EDC3267ECA2221A628 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9, const RuntimeMethod*))NativeSortExtension_InsertionSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mE1E3E6FEAAF3E0DBBFC735EDC3267ECA2221A628_gshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline void NativeSortExtension_HeapSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m29CD0E18938F36295FC793E98250D48F9835B32F (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9, const RuntimeMethod*))NativeSortExtension_HeapSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m29CD0E18938F36295FC793E98250D48F9835B32F_gshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline int32_t NativeSortExtension_Partition_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m659221DBCD9303407ACE89F7078861892495AD48 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, int32_t, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9, const RuntimeMethod*))NativeSortExtension_Partition_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m659221DBCD9303407ACE89F7078861892495AD48_gshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline void NativeSortExtension_IntroSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m9B0BEB44FDA36870CF47F7A7995FD97E953FE551 (void* ___0_array, int32_t ___1_length, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9, const RuntimeMethod*))NativeSortExtension_IntroSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m9B0BEB44FDA36870CF47F7A7995FD97E953FE551_gshared)(___0_array, ___1_length, ___2_comp, method);
}
inline ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* UnsafeUtility_As_TisListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442_m32094283939C75A047F5F7EC76EE93ACA2AC0F66 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* UnsafeUtility_As_TisListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D_m51A93F68EE024709BF80FA3338328FD001FB9A28 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void ReadOnlySpan_1__ctor_mA3840C7226D793D4B75979B13B1A6B0B25342950_inline (ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55*, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA3840C7226D793D4B75979B13B1A6B0B25342950_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9_gshared)(__this, method);
}
inline void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline)(__this, method);
}
inline ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** UnsafeUtility_As_TisList_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mCF5F8927BE5A0D9A4F9E7858A43AE6987DA7C753_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7E01BE5B3130A632C43D1F86A8781C30A93D3DCF_gshared_inline)(___0_from, method);
}
inline void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_mBF6027BF398B4F00E727BC7265644490A41EC946 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Capacity_mBF6027BF398B4F00E727BC7265644490A41EC946_gshared)(__this, method);
}
inline void List_1_set_Capacity_m4B62593B8671BB60809057D57DC60568557315E6 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m4B62593B8671BB60809057D57DC60568557315E6_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_gshared_inline)(__this, method);
}
inline ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D** UnsafeUtility_As_TisList_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_TisListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D_m122C8B5FFDB2625EADFCB3EFE09A4BD84AA5EF23_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E** ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D** (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7E01BE5B3130A632C43D1F86A8781C30A93D3DCF_gshared_inline)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* UnsafeUtility_As_TisListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44_m2234A4367BABD668D6673D661C235BF49A5D51ED (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* UnsafeUtility_As_TisListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF_m6295AFFEC5A4895799E00800F846A6B37B0DE78E (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* UnsafeUtility_As_TisListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D_m92707351231B1BC2E6E27C63D0D03FB6ECD9B3A5 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* UnsafeUtility_As_TisListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6_mE5FD3C189A791B18279B00F6A758B785560A43C2 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D* UnsafeUtility_As_TisListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D_m7ECC5926A1569737D3D76F83E8878B272D106C7A (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline int32_t List_1_get_Capacity_mF5EF98414FB608E53A165ED38C4FB0C0764AC00E (List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331*, const RuntimeMethod*))List_1_get_Capacity_mF5EF98414FB608E53A165ED38C4FB0C0764AC00E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t List_1_get_Capacity_mD1D84001E0B4C85B5C7F8B48796ED4B814779FB8 (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))List_1_get_Capacity_mD1D84001E0B4C85B5C7F8B48796ED4B814779FB8_gshared)(__this, method);
}
inline int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, const RuntimeMethod*))List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared)(__this, method);
}
inline int32_t List_1_get_Capacity_m7B92303796B477EA0A27AF48F502382B2A85B213 (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B*, const RuntimeMethod*))List_1_get_Capacity_m7B92303796B477EA0A27AF48F502382B2A85B213_gshared)(__this, method);
}
inline int32_t List_1_get_Capacity_m3BDCA1A17A3EF6EF6D0443961D6EDDF7165364F0 (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5*, const RuntimeMethod*))List_1_get_Capacity_m3BDCA1A17A3EF6EF6D0443961D6EDDF7165364F0_gshared)(__this, method);
}
inline int32_t List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96_gshared)(__this, method);
}
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mCA5E2E9BF64B7203CE8B1ECFCFAA0370606984D4 (Type_t* ___0_type, bool ___1_includeInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26 (RuntimeObject* ___0_arg, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312 (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntropyCoder__ctor_m25C7C7999A3D8436E66648B462B3E45F004B297C (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalysisInfo__ctor_mFE8D82FB07AE0D7CAD9DDD44727826313BAD34AB (AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* CeltEncoder_GetMode_m51A6C31A1CCF60B36D8EAEB3F95A5D0D918A01C4_inline (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, const RuntimeMethod* method) ;
inline void Analysis_run_analysis_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF67026CF1AEA386A80BE9DDE4F2E3DFFF88626A1 (TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* ___0_analysis, CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* ___1_celt_mode, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___2_analysis_pcm, int32_t ___3_analysis_pcm_ptr, int32_t ___4_analysis_frame_size, int32_t ___5_frame_size, int32_t ___6_c1, int32_t ___7_c2, int32_t ___8_C, int32_t ___9_Fs, int32_t ___10_lsb_depth, downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D* ___11_downmix, AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* ___12_analysis_info, const RuntimeMethod* method)
{
	((  void (*) (TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447*, CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03*, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D*, AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2*, const RuntimeMethod*))Analysis_run_analysis_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF67026CF1AEA386A80BE9DDE4F2E3DFFF88626A1_gshared)(___0_analysis, ___1_celt_mode, ___2_analysis_pcm, ___3_analysis_pcm_ptr, ___4_analysis_frame_size, ___5_frame_size, ___6_c1, ___7_c2, ___8_C, ___9_Fs, ___10_lsb_depth, ___11_downmix, ___12_analysis_info, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodecHelpers_compute_stereo_width_m5C127400C31A1D98227D88461EE89484B2BBB003 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_pcm, int32_t ___1_pcm_ptr, int32_t ___2_frame_size, int32_t ___3_Fs, StereoWidthState_tF25794762BEB382FD8D450D2C8D2B96CCBE60FBB* ___4_mem, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpusEncoder_user_bitrate_to_bitrate_m49D5722068434C645F19C61C577B66506D95F317 (OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* __this, int32_t ___0_frame_size, int32_t ___1_max_data_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CodecHelpers_gen_toc_m36D3043E7AE9BA3F43D6025DB507D4AB1C072773 (int32_t ___0_mode, int32_t ___1_framerate, int32_t ___2_bandwidth, int32_t ___3_channels, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpusRepacketizer_PadPacket_m73673282B4FEE94293683AA943B65F1DED670723 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_data_offset, int32_t ___2_len, int32_t ___3_new_len, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncControlState__ctor_mFC294B69243BF8AA052700ADEBC545D52EF59E72 (EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodeAPI_silk_InitEncoder_m4E684FC14340B80B00193C6B83650DB1FF548964 (SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* ___0_encState, EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* ___1_encStatus, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpusBandwidthHelpers_MIN_m43E41E09D058376547611B89154E5FF74E1B93F0 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpusBandwidthHelpers_MAX_m9D4142AD1C219302EA647F0B58218227C9C0154D (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_SetLSBDepth_mF6D3829124F5D80DE20D3AB5E758010C5135C31B (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpusRepacketizer__ctor_m0C07EA7248DAD51F4882B26E36B99B10873E9891 (OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* __this, const RuntimeMethod* method) ;
inline int32_t OpusEncoder_opus_encode_native_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD9B3E8A05692DBC0F0457EB2EC48F0B9210F49FC (OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_pcm, int32_t ___1_pcm_ptr, int32_t ___2_frame_size, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_data, int32_t ___4_data_ptr, int32_t ___5_out_data_bytes, int32_t ___6_lsb_depth, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___7_analysis_pcm, int32_t ___8_analysis_pcm_ptr, int32_t ___9_analysis_size, int32_t ___10_c1, int32_t ___11_c2, int32_t ___12_analysis_channels, downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D* ___13_downmix, int32_t ___14_float_api, const RuntimeMethod* method)
{
	return ((  int32_t (*) (OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E*, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, int32_t, int32_t, int32_t, int32_t, downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D*, int32_t, const RuntimeMethod*))OpusEncoder_opus_encode_native_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD9B3E8A05692DBC0F0457EB2EC48F0B9210F49FC_gshared)(__this, ___0_pcm, ___1_pcm_ptr, ___2_frame_size, ___3_data, ___4_data_ptr, ___5_out_data_bytes, ___6_lsb_depth, ___7_analysis_pcm, ___8_analysis_pcm_ptr, ___9_analysis_size, ___10_c1, ___11_c2, ___12_analysis_channels, ___13_downmix, ___14_float_api, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpusRepacketizer_AddPacket_m52B8369195511585403F6C1AF8033335BA77DC68 (OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_data_offset, int32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpusRepacketizer_opus_repacketizer_out_range_impl_m0E435E83E330DE8F1DC57BCED55BA32B274C362E (OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* __this, int32_t ___0_begin, int32_t ___1_end, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_data, int32_t ___3_data_ptr, int32_t ___4_maxlen, int32_t ___5_self_delimited, int32_t ___6_pad, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntropyCoder_enc_init_mF8EFBA613294599669ACAD9336D240DCD32FCE9B (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0__buf, int32_t ___1_buf_ptr, uint32_t ___2__size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_lin2log_m13CE80A79E86A855158F9AD128C300253AA54787_inline (int32_t ___0_inLin, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_LSHIFT_mA37756351362D68182AD1C173A43FBDB753390D0_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_SMLAWB_m848A6EC6C9D0BA25BB0D3D3035475AEF74EBA860_inline (int32_t ___0_a32, int32_t ___1_b32, int32_t ___2_c32, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_RSHIFT_m91357BE2399E9EA7017E2F08E94110205620DFC1_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_log2lin_mAA1230C7B095DFEC8345BB1D7C951470856E4738_inline (int32_t ___0_inLog_Q7, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodecHelpers_hp_cutoff_mA1C0E41BEFC0BC5FFE38AA7FA13F5BA81F025104 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_input, int32_t ___1_input_ptr, int32_t ___2_cutoff_Hz, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___3_output, int32_t ___4_output_ptr, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_hp_mem, int32_t ___6_len, int32_t ___7_channels, int32_t ___8_Fs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodecHelpers_dc_reject_mFC4BCC9AC624D6FA5D8E467FFAA4980965D5E2B8 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_input, int32_t ___1_input_ptr, int32_t ___2_cutoff_Hz, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___3_output, int32_t ___4_output_ptr, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_hp_mem, int32_t ___6_len, int32_t ___7_channels, int32_t ___8_Fs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_SHL32_m75BFDFD5C80D2CB588BD2517779B5A73F5C0EF03_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_SHR32_mD57FC2703588CAD4DF39825E0FEC2F158F622A29_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MIN16_m91DF88A9ABB47E6D010FC82CD4B9404DA512623E_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MAX16_m664F24DFE9E917BEC0D4536CF6520277285EF0CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_HALF16_mA3D84B14909E6EF84F654D342E679A9EB1111DF2_inline (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MULT16_16_m1284C34FE095820278CB6AEDD3575C2165F1FC1A_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_PSHR32_mFAD319902E74B0D0ED8DCB30992F78B21833ADA3_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MAX32_m0EDA35029F6C04CDC5D3FBC144A35A8E6BDA9044_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_IMAX_mF826EDBD765651BC22E22C96C35C8DFB9F9176D2_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
inline void BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD (BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* __this, int32_t ___0_v, const RuntimeMethod* method)
{
	((  void (*) (BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D*, int32_t, const RuntimeMethod*))BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD_gshared)(__this, ___0_v, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodecHelpers_gain_fade_m26704332D22E7F8E8EE5769198B4875ED7912E68 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_buffer, int32_t ___1_buf_ptr, int32_t ___2_g1, int32_t ___3_g2, int32_t ___4_overlap48, int32_t ___5_frame_size, int32_t ___6_channels, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___7_window, int32_t ___8_Fs, const RuntimeMethod* method) ;
inline void Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int16_t ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int16_t, int32_t, const RuntimeMethod*))Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7_gshared)(___0_array, ___1_value, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodeAPI_silk_Encode_mAF5926287B296B28EA7C79AE8233F4AB92C1A1A3 (SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* ___0_psEnc, EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* ___1_encControl, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___2_samplesIn, int32_t ___3_nSamplesIn, EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* ___4_psRangeEnc, BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* ___5_nBytesOut, int32_t ___6_prefillFlag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_SetEndBand_m070330249160FAF5D757022B8F8189E21AEE46B4 (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_SetChannels_m50CF4C9194D5F501CB240D886F08A0F00A7C4508 (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_SetBitrate_m2B60EDAC47731279F443E62BF5B58786005B1173 (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_SetVBR_m7C511506875FCE7374D16F807DCEB92E999370F3 (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_SetPrediction_m10EF7A6247FF017B39312260122B5E110FA67AC0 (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9 (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_SetVBRConstraint_m059C6FEBC2DBED0F70099E27CFCDFDEAEACD6671 (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, bool ___0_value, const RuntimeMethod* method) ;
inline void Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_src_idx, int32_t ___2_dst_idx, int32_t ___3_length, const RuntimeMethod* method)
{
	((  void (*) (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, int32_t, int32_t, const RuntimeMethod*))Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E_gshared)(___0_array, ___1_src_idx, ___2_dst_idx, ___3_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_SHL16_m768B89D36A8CC1CA8F33C9FCFB60981068D424F0_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodecHelpers_stereo_fade_m62DCD7281AF01A177277B2D1B37486951913E63D (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_pcm_buf, int32_t ___1_g1, int32_t ___2_g2, int32_t ___3_overlap48, int32_t ___4_frame_size, int32_t ___5_channels, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___6_window, int32_t ___7_Fs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntropyCoder_enc_bit_logp_mA5A97FA79C53558E3D593C6055C553A5AE849771 (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* __this, int32_t ___0__val, uint32_t ___1__logp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntropyCoder_enc_uint_mC2D55A26DDAFEE3BCD9D5BB4E963BC6830D7416F (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* __this, uint32_t ___0__fl, uint32_t ___1__ft, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntropyCoder_enc_done_mCD60036BB229EF7821D76F440AE65BA28B856B60 (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntropyCoder_enc_shrink_m681ECDF029CD15A3BCC795140148DC5FFDDC327C (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* __this, uint32_t ___0__size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_SetAnalysis_mEB032D63E6F6E4AA45765EA3AF736D7554DA5411 (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_SetStartBand_m2E9281A33555F11C4CEE4832A2E85F56D9CADE1F (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4 (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_pcm, int32_t ___1_pcm_ptr, int32_t ___2_frame_size, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_compressed, int32_t ___4_compressed_ptr, int32_t ___5_nbCompressedBytes, EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* ___6_enc, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t CeltEncoder_GetFinalRange_m2092F8FCA30E8FAA7776C95301B7356C1C6A698A_inline (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CeltEncoder_ResetState_mB75E57E79EFAD09094038C584BCF675F90EFA1E7 (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m0A9791A878A24FD213FBF19D37BB974525CD23B3 (Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2719AC789D5D25B4A08674C479D2F2FA27319C77_gshared)(__this, ___0_key, method);
}
inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* Dictionary_2_get_Item_mB83471E6DB330FD9D458123C6584717A4BF8F763 (Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* (*) (Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mD259039B129098644F0E324CADD1070CB7638E1E_gshared)(__this, ___0_key, method);
}
inline int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_get_Count_m02DF2B39305B32F97D425178F5054CE9830BFB10_gshared_inline)(__this, method);
}
inline RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_Dequeue_m1ECED0A4B619428F2561AA3D053E73A097A10193_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared)(__this, method);
}
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared)(__this, method);
}
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared)(__this, method);
}
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared)(__this, method);
}
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared)(__this, method);
}
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared)(__this, method);
}
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared)(__this, method);
}
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared)(__this, method);
}
inline bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
inline void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
inline RuntimeObject* List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD (List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared)(__this, ___0_index, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_inline (List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D*, const RuntimeMethod*))List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Resources_FindObjectsOfTypeAll_mECAB6322D6A605B60AF0598F6D81F169ACE74C00 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2 (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*, const RuntimeMethod*))Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared)(___0_rawObjects, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_GetBuiltinResource_mD67A5C47BA93B04E0A9398611A735EA1803CAE5B (Type_t* ___0_type, String_t* ___1_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33 (String_t* ___0_path, Type_t* ___1_systemTypeInstance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Resources_LoadAll_m7A2507FF57FF618BC37FDF8E9AB3ACCE18592C51 (String_t* ___0_path, Type_t* ___1_systemTypeInstance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___0_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScopeTransitionHelper_get_AllAssemblies_m3D52FB986E172746F435A46F24CAA4ED7795AADA_inline (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInOrder_mE0926AEB4A09521C95A0209F5D06BF5CC33D4E99 (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, Type_t* ___0_attributeType, RuntimeObject* ___1_assemblies, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInReverseOrder_mE98773AD3E2B6C72D02888DFE1960902C8161542 (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, Type_t* ___0_attributeType, RuntimeObject* ___1_assemblies, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline)(method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline)(method);
}
inline EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_gshared_inline)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_gshared_inline)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline)(method);
}
inline EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_gshared_inline)(method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline)(method);
}
inline Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* SkeletonRenderer_AddSpineComponent_TisIl2CppSharedGenericObject_mD9CF25035F3C95B6542E8CDC327C4FFF14CE8B7C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___1_skeletonDataAsset, bool ___2_quiet, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F*, bool, const RuntimeMethod*))SkeletonRenderer_AddSpineComponent_TisIl2CppSharedGenericObject_mD9CF25035F3C95B6542E8CDC327C4FFF14CE8B7C_gshared)(___0_gameObject, ___1_skeletonDataAsset, ___2_quiet, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
inline int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48 (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppChar*, Il2CppChar, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
inline bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774 (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppChar*, Il2CppChar*, int32_t, const RuntimeMethod*))SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774_gshared)(___0_first, ___1_second, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Inlines_silk_CLZ_FRAC_mD066D7CE4E23D7C82C309DB5E6E19A377D916AAC_inline (int32_t ___0_input, int32_t* ___1_lz, int32_t* ___2_frac_Q7, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_MUL_m4A3ED7EC9DC0041A3B36F753375D9C7FBB6B5ECD_inline (int32_t ___0_a32, int32_t ___1_b32, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_SMULWB_mFA9CAB5599FB77045FEC1524E60236EE09DCB545_inline (int32_t ___0_a32, int32_t ___1_b32, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_SMULBB_mE06C6FFCE0F1AD81838ACF9261859C8DA62857E8_inline (int32_t ___0_a32, int32_t ___1_b32, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_ADD_RSHIFT32_m1AF65D0A324776CAD8055D505579BC05437473C9_inline (int32_t ___0_a, int32_t ___1_b, int32_t ___2_shift, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_MLA_mD6080DA54B0CBDDB190C18A791300A8B8CEE4087_inline (int32_t ___0_a32, int32_t ___1_b32, int32_t ___2_c32, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_EXTEND32_mEF007582BF2038B94335FD0D3749B9B4287D2B57_inline (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared)(method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared)(method);
}
inline EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_CreateComparer_mEC9E7D42057D720BD5C432BEBEAF047B1E459907 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEC9E7D42057D720BD5C432BEBEAF047B1E459907_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_CreateComparer_mB6F7C63A873735C1C9DCC17393C8844B9F014DC1 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB6F7C63A873735C1C9DCC17393C8844B9F014DC1_gshared)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared)(method);
}
inline EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_CreateComparer_m779CEAAA847760E44B83AED6B8E7A854F40754FF (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m779CEAAA847760E44B83AED6B8E7A854F40754FF_gshared)(method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_CLZ32_m1139CDC6B22F27D33E9405011AAF76B517147B28_inline (int32_t ___0_in32, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_ROR32_m3D0A69FBA3F37AAF60A38DA6087B52A1E2D1690C_inline (int32_t ___0_a32, int32_t ___1_rot, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_ADD32_m9235346EAA49AA507DBC4FCB84FCD7A0A38BD8C8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_EC_ILOG_m248C732E16636411540FAB4F8F06B2D7EFA4B89F_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Inlines_silk_ROR32_mC801C8B76107C1CFB9083D76714494B56AE1C6CB_inline (uint32_t ___0_a32, int32_t ___1_rot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mD7CEBD73999042AAC575D52A40749352CD4C0D60_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m65662D0552415B85C6F0258540EF727CC2A6CF44_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m05E8F9125CBCF8D65D1C1572A90497410BAD4B3F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m117AA5E13A68B1719DD55833C648C2D67C2DE8BC_gshared (NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mAD7CC2792BD7E04169E1F6BE13A79E82506A9503_gshared (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327_gshared (NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DF14FFECC3CE4E179B56AB77F3BCC0FF90E92BF_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0_gshared (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8E5335741788115AF07635B3B9C543C6BA1F2D3C_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mE1FE8B3F94C2D43FDF7F6D5262F6173FC1EB1FA1_gshared (NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB2BB76E27C7772E7D2DCBCDB4AA5B648A3226079_gshared (NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m9D209EFA9DBD8484A0CDD800845D2D7C06DB0523_gshared (NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mFBED36CE5261154BAF02BE89D6BD1010461FC9E5_gshared (NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9231A3A37DACBDC6025949E7128AD85EA7F93FED_gshared (NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m5B75D7768ACB5898065B4B62F6E486808BF8C580_gshared (NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m3A7B4E33372830F8300E858FC7A3FF52DB68C19E_gshared (NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m229408D0C10FBA26788E8FD42AE3D91E34190745_gshared (NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m669864507FB48385B04690B2996BC6FA992EF019_gshared (NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSliceExtensions_Slice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m55D1C0502E68602CADC5C0CEA2FAAB0EA47ED380_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_thisArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_thisArray;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mB3B087259D57CBD3742B7A6BFE5BD1C0FF0E4A73_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSliceExtensions_Slice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m243F649E1D63E248DA2A0D10147965B8D41C8DE3_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_thisArray, int32_t ___1_start, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeSlice_1__ctor_mD0C60D5A0038A9DA582985ADC92B8B6714A1E8AD((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mAC2337A7622D49D3416C69479705764FAE2B6FA8_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m1143D56A871E65A71C2921FFEA2E1EF6C36ED508_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mBE6FCA861657FCB95F2683BE7EA6F8CF74FD1583_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9A2B4BB7177667D1A9E3AC345815C6478C6B441_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m363AC6C6F7FE24031C819DB8047CDC74E077B220_gshared (NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m8606277D2C33BD6678B91699AC7FC8E854F143B1_gshared (NativeSlice_1_t2657D985DD7B7661A7722D6396F5D65A8D9239A1 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_t2657D985DD7B7661A7722D6396F5D65A8D9239A1 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0B676DC51FACE97ED8BDBE80FDEE1D024D852A62_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9E07E56FC25FFBA7224A83C7874682E5ED2022AA_gshared (NativeSlice_1_t9BFFF9586EFFB05517670778FC645523EFB2AA41 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_t9BFFF9586EFFB05517670778FC645523EFB2AA41 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mEC1AFAC960FD48CA2A336183B83469047B5B851D_gshared (NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB3AAF18DA01A2871ABC3A6C17DE5051ABF758556_gshared (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C21A5534F31A98810D38191D4F5511CDF6F7FCD_gshared (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
	const Il2CppFullySharedGenericAny L_18 = L_7;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_7: *(void**)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_18: *(void**)L_18));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m29CD0E18938F36295FC793E98250D48F9835B32F_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_7 = ___3_comp;
		NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_18 = ___3_comp;
		NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_gshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	const Il2CppFullySharedGenericStruct L_29 = L_3;
	const Il2CppFullySharedGenericStruct L_41 = L_3;
	const Il2CppFullySharedGenericStruct L_48 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_30 = L_17;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_23 = L_7;
	const Il2CppFullySharedGenericAny L_25 = L_7;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	memset(V_0, 0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(V_2, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B4_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B3_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B8_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B7_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_8 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_7);
		if (L_8)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_0033;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_9, G_B3_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_0033:
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___3_lo;
		int32_t L_12 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1)), (Il2CppFullySharedGenericStruct*)L_13);
		void* L_14 = ___0_array;
		int32_t L_15 = ___3_lo;
		int32_t L_16 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), (Il2CppFullySharedGenericStruct*)L_17);
		Il2CppConstrainedCallData L_19;
		Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B4_0, &L_19, L_18);
		int32_t L_21 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_20, L_19.method,L_19.thisPtr, L_13, L_17);
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_23);
		if (L_24)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_0073;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_25, G_B7_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_2, L_25, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_0073:
	{
		void* L_26 = ___0_array;
		int32_t L_27 = ___3_lo;
		int32_t L_28 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_26, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_27, L_28)), 1)), (Il2CppFullySharedGenericStruct*)L_29);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B8_0, &L_32, L_31);
		int32_t L_34 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_33, L_32.method,L_32.thisPtr, L_29, L_30);
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		void* L_38 = ___0_array;
		int32_t L_39 = ___3_lo;
		int32_t L_40 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, L_40)), 1)), (Il2CppFullySharedGenericStruct*)L_41);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_41);
		int32_t L_42 = V_1;
		___1_i = L_42;
	}

IL_00a6:
	{
		int32_t L_43 = ___1_i;
		int32_t L_44 = ___2_n;
		if ((((int32_t)L_43) <= ((int32_t)((int32_t)(L_44/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_45 = ___0_array;
		int32_t L_46 = ___3_lo;
		int32_t L_47 = ___1_i;
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_45, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_46, L_47)), 1)), L_48);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC_gshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B4_0 = NULL;
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_3;
		L_3 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_11;
		L_11 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_16;
		L_16 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_22;
		L_22 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), il2cpp_rgctx_method(method->rgctx_data, 0));
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_23 = V_0;
		int32_t L_24;
		L_24 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_31;
		L_31 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_38 = V_0;
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, il2cpp_rgctx_method(method->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_16 = L_4;
	const Il2CppFullySharedGenericStruct L_26 = L_4;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	const Il2CppFullySharedGenericAny L_15 = L_13;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	memset(V_2, 0, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(V_3, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B6_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B5_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(L_13, V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_13);
		if (L_14)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
			goto IL_0044;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}
	{
		il2cpp_codegen_memcpy(L_15, G_B5_0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(V_3, L_15, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_16, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		void* L_17 = ___0_array;
		int32_t L_18 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_17, L_18, (Il2CppFullySharedGenericStruct*)L_19);
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B6_0, &L_21, L_20);
		int32_t L_23 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_22, L_21.method,L_21.thisPtr, L_16, L_19);
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_24 = ___0_array;
		int32_t L_25 = V_1;
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0068:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = ___2_hi;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mE1E3E6FEAAF3E0DBBFC735EDC3267ECA2221A628_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_4;
		L_4 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_9;
		L_9 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_18;
		L_18 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_21 = V_2;
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_gshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_4: *(void**)L_4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m9B0BEB44FDA36870CF47F7A7995FD97E953FE551_gshared (void* ___0_array, int32_t ___1_length, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	const Il2CppFullySharedGenericAny L_25 = L_8;
	const Il2CppFullySharedGenericAny L_30 = L_8;
	const Il2CppFullySharedGenericAny L_35 = L_8;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_41 = L_17;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_8: *(void**)L_8));
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_13: *(void**)L_13));
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_14, L_15, L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_17: *(void**)L_17));
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_21: *(void**)L_21));
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_23, L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_25: *(void**)L_25));
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_27, L_28, L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_30: *(void**)L_30));
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		int32_t L_36;
		L_36 = InvokerFuncInvoker4< int32_t, void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_32, L_33, L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_35: *(void**)L_35));
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_41: *(void**)L_41));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_14, L_15, L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mE1E3E6FEAAF3E0DBBFC735EDC3267ECA2221A628(L_22, L_23, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_30 = ___4_comp;
		NativeSortExtension_HeapSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m29CD0E18938F36295FC793E98250D48F9835B32F(L_27, L_28, L_29, L_30, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m659221DBCD9303407ACE89F7078861892495AD48(L_32, L_33, L_34, L_35, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_33 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_28 = L_17;
	const Il2CppFullySharedGenericStruct L_42 = L_17;
	const Il2CppFullySharedGenericStruct L_32 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_46 = L_32;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_25 = L_6;
	const Il2CppFullySharedGenericAny L_27 = L_6;
	const Il2CppFullySharedGenericAny L_39 = L_6;
	const Il2CppFullySharedGenericAny L_41 = L_6;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	memset(V_1, 0, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(V_4, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B4_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B3_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B8_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B7_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_6: *(void**)L_6));
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_7, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_10: *(void**)L_10));
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_11, L_12, L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_14: *(void**)L_14));
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_15, L_16, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_25, V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_26 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_25);
		if (L_26)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_0060;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_27, G_B3_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_4, L_27, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_0060:
	{
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_29 = ___0_array;
		int32_t L_30 = V_2;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_2 = L_31;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_29, L_31, (Il2CppFullySharedGenericStruct*)L_32);
		Il2CppConstrainedCallData L_34;
		Il2CppMethodPointer L_35 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 6), (void*)G_B4_0, &L_34, L_33);
		int32_t L_36 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_35, L_34.method,L_34.thisPtr, L_28, L_32);
		if ((((int32_t)L_36) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_39, V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_39);
		if (L_40)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_009a;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B7_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_4, L_41, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_009a:
	{
		il2cpp_codegen_memcpy(L_42, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_43 = ___0_array;
		int32_t L_44 = V_3;
		int32_t L_45 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		V_3 = L_45;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_43, L_45, (Il2CppFullySharedGenericStruct*)L_46);
		Il2CppConstrainedCallData L_48;
		Il2CppMethodPointer L_49 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 6), (void*)G_B8_0, &L_48, L_47);
		int32_t L_50 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_49, L_48.method,L_48.thisPtr, L_42, L_46);
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_51 = V_2;
		int32_t L_52 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)L_52)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_53 = ___0_array;
		int32_t L_54 = V_2;
		int32_t L_55 = V_3;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_53, L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_00c0:
	{
		int32_t L_56 = V_2;
		int32_t L_57 = V_3;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_58 = ___0_array;
		int32_t L_59 = V_2;
		int32_t L_60 = ___2_hi;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_58, L_59, ((int32_t)il2cpp_codegen_subtract(L_60, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_61 = V_2;
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m659221DBCD9303407ACE89F7078861892495AD48_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B4_0 = NULL;
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_11, L_12, L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_30;
		L_30 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_27, L_29, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_31;
		L_31 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_39;
		L_39 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_36, L_38, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_40;
		L_40 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_43, L_44, L_45, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_51 = V_2;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (void*)L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_2: *(void**)L_2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m833A76E2A3090F3B6BF62151EA680FE358D76D75_gshared (int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* ___0_ptr, int32_t ___1_length, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_2 = ___2_comp;
		NativeSortExtension_IntroSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m9B0BEB44FDA36870CF47F7A7995FD97E953FE551((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	memset(V_0, 0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_3, L_4, L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9, L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_7;
		L_7 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_3, L_4, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_10 = V_0;
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(V_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B3_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B2_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_2);
		if (L_3)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
			goto IL_001e;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B2_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}

IL_001e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_12, L_11);
		int32_t L_14 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_13, L_12.method,L_12.thisPtr, L_7, L_10);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_15 = ___0_array;
		int32_t L_16 = ___1_lhs;
		int32_t L_17 = ___2_rhs;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_15, L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023_gshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_5;
		L_5 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_8;
		L_8 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_9;
		L_9 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_10, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC NoAllocHelpers_CreateReadOnlySpan_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mCCB7DE853132163109C7C2ED8342724A9E993447_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* V_0 = NULL;
	ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC));
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_4 = V_0;
		NullCheck(L_4);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 NoAllocHelpers_CreateReadOnlySpan_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4FADC6ED8D687945B1F9C619243F848C3604F401_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* V_0 = NULL;
	ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442_m32094283939C75A047F5F7EC76EE93ACA2AC0F66((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_4 = V_0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 NoAllocHelpers_CreateReadOnlySpan_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mB02064CCF9FB6928265BE2F0BE6D2861DCDCA976_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* V_0 = NULL;
	ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55));
		ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D_m51A93F68EE024709BF80FA3338328FD001FB9A28((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_4 = V_0;
		NullCheck(L_4);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mA3840C7226D793D4B75979B13B1A6B0B25342950_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE NoAllocHelpers_CreateReadOnlySpan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDFD9463D90166A3D4380ED80423053E54EF0649F_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* V_0 = NULL;
	ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE));
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___0_list;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_4 = V_0;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 NoAllocHelpers_CreateReadOnlySpan_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4F4B5DDE30856A2C326B1DE1FEB2BF9B40FE316A_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* V_0 = NULL;
	ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6));
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_4 = V_0;
		NullCheck(L_4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC NoAllocHelpers_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_mC3833ABA237F5EEEE4815E56BC0773989DC842BB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_0 = NULL;
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_3;
		L_3 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCC69B853EEBECBAF3DCBFD8A0B26691430128057_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_4 = ___0_list;
		NullCheck(L_4);
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_5 = ___0_list;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_7 = ___1_count;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_8 = ___0_list;
		int32_t L_9 = ___1_count;
		NullCheck(L_8);
		List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0038:
	{
		int32_t L_10 = ___1_count;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_11 = ___0_list;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** L_13;
		L_13 = UnsafeUtility_As_TisList_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mCF5F8927BE5A0D9A4F9E7858A43AE6987DA7C753_inline((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 5));
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_14 = il2cpp_codegen_ldind<ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D*, ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D*>(L_13);
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_15 = L_14;
		int32_t L_16 = ___1_count;
		NullCheck(L_15);
		L_15->____size = L_16;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_17 = L_15;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppSharedGenericObject_m403FA989CB7BD0F0B15A5082CE6094A0FABE7ABD_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_4 = ___0_list;
		NullCheck(L_4);
		List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_5 = ___0_list;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Capacity_mBF6027BF398B4F00E727BC7265644490A41EC946(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_7 = ___1_count;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_8 = ___0_list;
		int32_t L_9 = ___1_count;
		NullCheck(L_8);
		List_1_set_Capacity_m4B62593B8671BB60809057D57DC60568557315E6(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0038:
	{
		int32_t L_10 = ___1_count;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_11 = ___0_list;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D** L_13;
		L_13 = UnsafeUtility_As_TisList_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_TisListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D_m122C8B5FFDB2625EADFCB3EFE09A4BD84AA5EF23_inline((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 5));
		ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D* L_14 = il2cpp_codegen_ldind<ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D*, ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D*>(L_13);
		ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D* L_15 = L_14;
		int32_t L_16 = ___1_count;
		NullCheck(L_15);
		L_15->____size = L_16;
		ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D* L_17 = L_15;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m28F7CCEFA354ED25B6E156C88890C5D01F5D9B6B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = ___0_list;
		NullCheck(L_4);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___0_list;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_7 = ___1_count;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_8 = ___0_list;
		int32_t L_9 = ___1_count;
		NullCheck(L_8);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0038:
	{
		int32_t L_10 = ___1_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = ___0_list;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C** L_13;
		L_13 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C** (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 5));
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_14 = il2cpp_codegen_ldind<ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C*, ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C*>(L_13);
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_15 = L_14;
		int32_t L_16 = ___1_count;
		NullCheck(L_15);
		L_15->____size = L_16;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_17 = L_15;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* NoAllocHelpers_ExtractArrayFromList_TisAnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03_mF7E4E9C086875B395072E47303A11B0E9BED0FE1_gshared (List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A*)NULL;
	}

IL_0005:
	{
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44_m2234A4367BABD668D6673D661C235BF49A5D51ED((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
	}

IL_0005:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NoAllocHelpers_ExtractArrayFromList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4AAC237725FD42066F40BCFA27A194003603208C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
	}

IL_0005:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442_m32094283939C75A047F5F7EC76EE93ACA2AC0F66((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* NoAllocHelpers_ExtractArrayFromList_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m94EB8197B54F97258F5E5D32716FB2C46B6A9BD0_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)NULL;
	}

IL_0005:
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* NoAllocHelpers_ExtractArrayFromList_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_mDB9FBF099D05FDB9B0A1B8AFFA0A915F14F70FB1_gshared (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C*)NULL;
	}

IL_0005:
	{
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF_m6295AFFEC5A4895799E00800F846A6B37B0DE78E((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* NoAllocHelpers_ExtractArrayFromList_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m0F204545DE342C2298F69296AF7C7F2DDC607EDA_gshared (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC*)NULL;
	}

IL_0005:
	{
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D_m92707351231B1BC2E6E27C63D0D03FB6ECD9B3A5((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* NoAllocHelpers_ExtractArrayFromList_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mC5B59AF5E180ADFEF712A896034CBCE082727C2E_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)NULL;
	}

IL_0005:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D_m51A93F68EE024709BF80FA3338328FD001FB9A28((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* NoAllocHelpers_ExtractArrayFromList_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F97FC7D40BA0FC71130687AEFD440306EED539D_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)NULL;
	}

IL_0005:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = ___0_list;
		ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6_mE5FD3C189A791B18279B00F6A758B785560A43C2((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
	}

IL_0005:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = ___0_list;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL;
	}

IL_0005:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* NoAllocHelpers_ExtractArrayFromList_TisIl2CppSharedGenericObject_m4AF53C5C0D6E4086AC91E4C0D98C087A63B99C17_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)NULL;
	}

IL_0005:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_1 = ___0_list;
		ListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D* L_2;
		L_2 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tCB393DA0D5923E0DEFF6F4931F4929DDAE69836D_m7ECC5926A1569737D3D76F83E8878B272D106C7A((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m86C3B8CC91B7D7314F277C8EE09559E89700607E_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0005:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_2;
		L_2 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisAnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03_m8A926559D78F08707BBD30083B776E5F0EEF447D_gshared (List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44_m2234A4367BABD668D6673D661C235BF49A5D51ED((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version;
		NullCheck(L_2);
		L_2->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m2A7268AAF2DD674361E4D53B19E212A80B951B73_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version;
		NullCheck(L_2);
		L_2->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mCD2E29232E721AA7A8E337B8F1EF4E12B652A5B6_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version;
		NullCheck(L_2);
		L_2->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m1023861290B7CD53F5E3CC9F4C2EBADAF520EFD4_gshared (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF_m6295AFFEC5A4895799E00800F846A6B37B0DE78E((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version;
		NullCheck(L_2);
		L_2->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m9BD4D820764CA0415D385EE5DDC1BE9D8F4D32F2_gshared (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D_m92707351231B1BC2E6E27C63D0D03FB6ECD9B3A5((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version;
		NullCheck(L_2);
		L_2->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m9491CD8CD7B01CE1C68F07F1D8660A854DD003A0_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D_m51A93F68EE024709BF80FA3338328FD001FB9A28((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version;
		NullCheck(L_2);
		L_2->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m112BA57CE6FB963CCB504FA939CD989022ECB10C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version;
		NullCheck(L_2);
		L_2->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m8CFD0DBE178C7266D389A3802C052AF8D69254BC_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version;
		NullCheck(L_2);
		L_2->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisIl2CppFullySharedGenericAny_m7A9FE6DC6671678C50E1E153E8D76851389E95AD_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_1;
		L_1 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version;
		NullCheck(L_2);
		L_2->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisAnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03_m8AB2F7089E35CE5505684B0480D360D5DA073D97_gshared (List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* V_0 = NULL;
	{
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mF5EF98414FB608E53A165ED38C4FB0C0764AC00E(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_mF5EF98414FB608E53A165ED38C4FB0C0764AC00E(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* L_13;
		L_13 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44_m2234A4367BABD668D6673D661C235BF49A5D51ED((RuntimeObject*)L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* L_16 = V_0;
		ListPrivateFieldAccess_1_t598ABB8E372DED43B6EF942EA995F7E3C1760F44* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m9827F5CF1883F08E33D7940EA1058EE7B100A6B7_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* V_0 = NULL;
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mD1D84001E0B4C85B5C7F8B48796ED4B814779FB8(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_mD1D84001E0B4C85B5C7F8B48796ED4B814779FB8(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_13;
		L_13 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203((RuntimeObject*)L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_16 = V_0;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mC69AC2FE59E4ED2C813055058FCB5D28E30EA2DA_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_13;
		L_13 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_16 = V_0;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_mD8FB578570D12EE96413B1B6854FB48676DFEADB_gshared (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* V_0 = NULL;
	{
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m7B92303796B477EA0A27AF48F502382B2A85B213(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m7B92303796B477EA0A27AF48F502382B2A85B213(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* L_13;
		L_13 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF_m6295AFFEC5A4895799E00800F846A6B37B0DE78E((RuntimeObject*)L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* L_16 = V_0;
		ListPrivateFieldAccess_1_t31A8863F851A9BB6ECAB97E2DE29C6CBF79925FF* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_mF1C3A4438B904D8BEA39DD4343CF75C181CB5924_gshared (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* V_0 = NULL;
	{
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m3BDCA1A17A3EF6EF6D0443961D6EDDF7165364F0(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m3BDCA1A17A3EF6EF6D0443961D6EDDF7165364F0(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* L_13;
		L_13 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D_m92707351231B1BC2E6E27C63D0D03FB6ECD9B3A5((RuntimeObject*)L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* L_16 = V_0;
		ListPrivateFieldAccess_1_t41736AEBA1F4D1207FD756078C9521F1FB86013D* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m1F8EC94417F1A4ABCE65617A395A53EF40748746_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* V_0 = NULL;
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_13;
		L_13 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D_m51A93F68EE024709BF80FA3338328FD001FB9A28((RuntimeObject*)L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_16 = V_0;
		ListPrivateFieldAccess_1_t75A76BD497B68BF754BA783EBDC526A3F985114D* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m27377FEC44009E0255F0ACE92BA50F1998EE6847_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* V_0 = NULL;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = ___0_list;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_13;
		L_13 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF((RuntimeObject*)L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_16 = V_0;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB052256BCED2C9EE70B441EA93AD058E89B7C4AD_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* V_0 = NULL;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_13;
		L_13 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07((RuntimeObject*)L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_16 = V_0;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisIl2CppFullySharedGenericAny_m93612CD6BAA573D3C3E198539B5195CBD0DBAFB9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_0 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_13;
		L_13 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((RuntimeObject*)L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_13;
		bool L_14;
		L_14 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->____size;
		int32_t L_17 = ___1_size;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0055;
		}
	}
	{
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_18 = V_0;
		NullCheck(L_18);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = L_18->____items;
		int32_t L_20 = ___1_size;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->____size;
		int32_t L_23 = ___1_size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), NULL);
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_24 = V_0;
		int32_t L_25 = ___1_size;
		NullCheck(L_24);
		L_24->____size = L_25;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_26 = V_0;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_27 = L_26;
		NullCheck(L_27);
		int32_t L_28 = L_27->____version;
		NullCheck(L_27);
		L_27->____version = ((int32_t)il2cpp_codegen_add(L_28, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDE7B561CE172B3EB697DE30C3A79C67F70018E6F_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m910F55DA116EEF0221ADFF22689A9842AC46C5FE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m93B5F242BED5886BC6615790C453095C3681BD24_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB85A915B5401A23E2802BF2945052148967220E2_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m201A65A21E6A7CC7D1A0C35A7D5CEBE2DD8A49B2_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericAny_mD1DA27D7DEDDDE717B58255E05299BE55E56F095_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_FindObjectOfType_TisIl2CppSharedGenericObject_m524CF1756663DDC45F94A5F30CDCE4DE581FC7F8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindObjectOfType_mCA5E2E9BF64B7203CE8B1ECFCFAA0370606984D4(L_1, (bool)0, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_Instantiate_TisIl2CppSharedGenericObject_mF0D359599A496A8B6523AA2B27AB24A4270153CD_gshared (Il2CppSharedGenericObject* ___0_original, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppSharedGenericObject* G_B2_0 = NULL;
	Il2CppSharedGenericObject* G_B1_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_original;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26((RuntimeObject*)L_0, _stringLiteralF704B54D833421164E45E576DFD279921246BCEA, NULL);
		Il2CppSharedGenericObject* L_1 = ___0_original;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, NULL);
		Il2CppSharedGenericObject* L_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			G_B2_0 = L_3;
			goto IL_0039;
		}
		G_B1_0 = L_3;
	}
	{
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_5 = (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)));
		UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0039:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpusEncoder_opus_encode_native_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD9B3E8A05692DBC0F0457EB2EC48F0B9210F49FC_gshared (OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_pcm, int32_t ___1_pcm_ptr, int32_t ___2_frame_size, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_data, int32_t ___4_data_ptr, int32_t ___5_out_data_bytes, int32_t ___6_lsb_depth, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___7_analysis_pcm, int32_t ___8_analysis_pcm_ptr, int32_t ___9_analysis_size, int32_t ___10_c1, int32_t ___11_c2, int32_t ___12_analysis_channels, downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D* ___13_downmix, int32_t ___14_float_api, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* V_0 = NULL;
	CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* V_28 = NULL;
	AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* V_29 = NULL;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_32 = NULL;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* V_42 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_43 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_44 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_45 = NULL;
	int32_t V_46 = 0;
	int32_t V_47 = 0;
	int32_t V_48 = 0;
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_51 = NULL;
	int32_t V_52 = 0;
	int32_t V_53 = 0;
	int32_t V_54 = 0;
	int32_t V_55 = 0;
	int32_t V_56 = 0;
	OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* V_57 = NULL;
	int32_t V_58 = 0;
	int32_t V_59 = 0;
	int32_t V_60 = 0;
	int32_t V_61 = 0;
	int32_t V_62 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_63 = NULL;
	BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* V_64 = NULL;
	int32_t V_65 = 0;
	int32_t V_66 = 0;
	int32_t V_67 = 0;
	int32_t V_68 = 0;
	int32_t V_69 = 0;
	int32_t V_70 = 0;
	int16_t V_71 = 0;
	int32_t V_72 = 0;
	int32_t V_73 = 0;
	BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* V_74 = NULL;
	int32_t V_75 = 0;
	int32_t V_76 = 0;
	int32_t V_77 = 0;
	int32_t V_78 = 0;
	int32_t V_79 = 0;
	int32_t V_80 = 0;
	int32_t V_81 = 0;
	int32_t V_82 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_83 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_84 = NULL;
	int32_t V_85 = 0;
	int32_t V_86 = 0;
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* G_B18_0 = NULL;
	TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* G_B18_1 = NULL;
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* G_B17_0 = NULL;
	TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* G_B17_1 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B19_0 = NULL;
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* G_B19_1 = NULL;
	TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* G_B19_2 = NULL;
	int32_t G_B46_0 = 0;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B84_0 = NULL;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B83_0 = NULL;
	int32_t G_B85_0 = 0;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B85_1 = NULL;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B98_0 = NULL;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B97_0 = NULL;
	int32_t G_B99_0 = 0;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B99_1 = NULL;
	int32_t G_B113_0 = 0;
	int32_t G_B112_0 = 0;
	int32_t G_B114_0 = 0;
	int32_t G_B114_1 = 0;
	int32_t G_B131_0 = 0;
	int32_t G_B214_0 = 0;
	int32_t G_B232_0 = 0;
	int32_t G_B232_1 = 0;
	int32_t G_B232_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B232_3 = NULL;
	int32_t G_B232_4 = 0;
	int32_t G_B232_5 = 0;
	OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* G_B232_6 = NULL;
	int32_t G_B231_0 = 0;
	int32_t G_B231_1 = 0;
	int32_t G_B231_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B231_3 = NULL;
	int32_t G_B231_4 = 0;
	int32_t G_B231_5 = 0;
	OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* G_B231_6 = NULL;
	int32_t G_B233_0 = 0;
	int32_t G_B233_1 = 0;
	int32_t G_B233_2 = 0;
	int32_t G_B233_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B233_4 = NULL;
	int32_t G_B233_5 = 0;
	int32_t G_B233_6 = 0;
	OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* G_B233_7 = NULL;
	int32_t G_B252_0 = 0;
	int32_t G_B252_1 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B252_2 = NULL;
	int32_t G_B251_0 = 0;
	int32_t G_B251_1 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B251_2 = NULL;
	int32_t G_B253_0 = 0;
	int32_t G_B253_1 = 0;
	int32_t G_B253_2 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B253_3 = NULL;
	int32_t G_B262_0 = 0;
	int32_t G_B265_0 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B305_0 = NULL;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B304_0 = NULL;
	int32_t G_B306_0 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B306_1 = NULL;
	int32_t G_B338_0 = 0;
	int32_t G_B337_0 = 0;
	int32_t G_B339_0 = 0;
	int32_t G_B339_1 = 0;
	int32_t G_B345_0 = 0;
	int32_t G_B375_0 = 0;
	int32_t G_B378_0 = 0;
	int32_t G_B382_0 = 0;
	int32_t G_B382_1 = 0;
	int32_t G_B381_0 = 0;
	int32_t G_B381_1 = 0;
	int32_t G_B383_0 = 0;
	int32_t G_B383_1 = 0;
	int32_t G_B383_2 = 0;
	{
		V_3 = 0;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_0 = (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)il2cpp_codegen_object_new(EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A_il2cpp_TypeInfo_var);
		EntropyCoder__ctor_m25C7C7999A3D8436E66648B462B3E45F004B297C(L_0, NULL);
		V_5 = L_0;
		V_7 = 0;
		V_8 = 0;
		V_9 = 0;
		V_10 = 0;
		V_11 = 0;
		V_14 = 0;
		V_15 = (uint32_t)0;
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_1 = (AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2*)il2cpp_codegen_object_new(AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2_il2cpp_TypeInfo_var);
		AnalysisInfo__ctor_mFE8D82FB07AE0D7CAD9DDD44727826313BAD34AB(L_1, NULL);
		V_29 = L_1;
		V_30 = (-1);
		V_31 = (-1);
		int32_t L_2 = ___5_out_data_bytes;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)1276), L_2, NULL);
		V_25 = L_3;
		__this->___rangeFinal = (uint32_t)0;
		int32_t L_4 = __this->___variable_duration;
		if (L_4)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_5 = ___2_frame_size;
		int32_t L_6 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)400), L_5))) == ((int32_t)L_6)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_7 = ___2_frame_size;
		int32_t L_8 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)200), L_7))) == ((int32_t)L_8)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_9 = ___2_frame_size;
		int32_t L_10 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)100), L_9))) == ((int32_t)L_10)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_11 = ___2_frame_size;
		int32_t L_12 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)50), L_11))) == ((int32_t)L_12)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_13 = ___2_frame_size;
		int32_t L_14 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)25), L_13))) == ((int32_t)L_14)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_15 = ___2_frame_size;
		int32_t L_16 = __this->___Fs;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)50), L_15))) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(3, L_16))))))
		{
			goto IL_00ac;
		}
	}

IL_0098:
	{
		int32_t L_17 = ___2_frame_size;
		int32_t L_18 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)400), L_17))) < ((int32_t)L_18)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_19 = V_25;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}

IL_00ac:
	{
		return (-1);
	}

IL_00ae:
	{
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_20 = __this->___SilkEncoder;
		V_0 = L_20;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_21 = __this->___Celt_Encoder;
		V_1 = L_21;
		int32_t L_22 = __this->___application;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)2051)))))
		{
			goto IL_00ce;
		}
	}
	{
		V_20 = 0;
		goto IL_00d6;
	}

IL_00ce:
	{
		int32_t L_23 = __this->___delay_compensation;
		V_20 = L_23;
	}

IL_00d6:
	{
		int32_t L_24 = ___6_lsb_depth;
		int32_t L_25 = __this->___lsb_depth;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(L_24, L_25, NULL);
		___6_lsb_depth = L_26;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_27 = V_1;
		NullCheck(L_27);
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_28;
		L_28 = CeltEncoder_GetMode_m51A6C31A1CCF60B36D8EAEB3F95A5D0D918A01C4_inline(L_27, NULL);
		V_28 = L_28;
		__this->___voice_ratio = (-1);
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_29 = __this->___analysis;
		NullCheck(L_29);
		bool L_30 = L_29->___enabled;
		if (!L_30)
		{
			goto IL_0214;
		}
	}
	{
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_31 = V_29;
		NullCheck(L_31);
		L_31->___valid = 0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_32 = __this->___silk_mode;
		NullCheck(L_32);
		int32_t L_33 = L_32->___complexity;
		if ((((int32_t)L_33) < ((int32_t)7)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_34 = __this->___Fs;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)48000)))))
		{
			goto IL_016e;
		}
	}
	{
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_35 = __this->___analysis;
		NullCheck(L_35);
		int32_t L_36 = L_35->___read_pos;
		V_30 = L_36;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_37 = __this->___analysis;
		NullCheck(L_37);
		int32_t L_38 = L_37->___read_subframe;
		V_31 = L_38;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_39 = __this->___analysis;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_40 = V_28;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_41 = ___7_analysis_pcm;
		if (L_41)
		{
			G_B18_0 = L_40;
			G_B18_1 = L_39;
			goto IL_0150;
		}
		G_B17_0 = L_40;
		G_B17_1 = L_39;
	}
	{
		G_B19_0 = ((Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(NULL));
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_0152;
	}

IL_0150:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_42 = ___7_analysis_pcm;
		G_B19_0 = L_42;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_0152:
	{
		int32_t L_43 = ___8_analysis_pcm_ptr;
		int32_t L_44 = ___9_analysis_size;
		int32_t L_45 = ___2_frame_size;
		int32_t L_46 = ___10_c1;
		int32_t L_47 = ___11_c2;
		int32_t L_48 = ___12_analysis_channels;
		int32_t L_49 = __this->___Fs;
		int32_t L_50 = ___6_lsb_depth;
		downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D* L_51 = ___13_downmix;
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_52 = V_29;
		Analysis_run_analysis_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF67026CF1AEA386A80BE9DDE4F2E3DFFF88626A1(G_B19_2, G_B19_1, G_B19_0, L_43, L_44, L_45, L_46, L_47, L_48, L_49, L_50, L_51, L_52, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_016e:
	{
		__this->___detected_bandwidth = (int32_t)0;
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_53 = V_29;
		NullCheck(L_53);
		int32_t L_54 = L_53->___valid;
		if (!L_54)
		{
			goto IL_0214;
		}
	}
	{
		int32_t L_55 = __this->___signal_type;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)-1000)))))
		{
			goto IL_01b4;
		}
	}
	{
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_56 = V_29;
		NullCheck(L_56);
		float L_57 = L_56->___music_prob;
		double L_58 = (il2cpp_codegen_conv<double,float,float,false,false>(((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply((100.0f), ((float)il2cpp_codegen_subtract((1.0f), L_57)))))),NULL));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_59;
		L_59 = floor(L_58);
		int32_t L_60 = (il2cpp_codegen_conv<int32_t,double,double,false,false>(L_59,NULL));
		__this->___voice_ratio = L_60;
	}

IL_01b4:
	{
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_61 = V_29;
		NullCheck(L_61);
		int32_t L_62 = L_61->___bandwidth;
		V_33 = L_62;
		int32_t L_63 = V_33;
		if ((((int32_t)L_63) > ((int32_t)((int32_t)12))))
		{
			goto IL_01d0;
		}
	}
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1101);
		goto IL_0214;
	}

IL_01d0:
	{
		int32_t L_64 = V_33;
		if ((((int32_t)L_64) > ((int32_t)((int32_t)14))))
		{
			goto IL_01e3;
		}
	}
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1102);
		goto IL_0214;
	}

IL_01e3:
	{
		int32_t L_65 = V_33;
		if ((((int32_t)L_65) > ((int32_t)((int32_t)16))))
		{
			goto IL_01f6;
		}
	}
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1103);
		goto IL_0214;
	}

IL_01f6:
	{
		int32_t L_66 = V_33;
		if ((((int32_t)L_66) > ((int32_t)((int32_t)18))))
		{
			goto IL_0209;
		}
	}
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1104);
		goto IL_0214;
	}

IL_0209:
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1105);
	}

IL_0214:
	{
		int32_t L_67 = __this->___channels;
		if ((!(((uint32_t)L_67) == ((uint32_t)2))))
		{
			goto IL_023e;
		}
	}
	{
		int32_t L_68 = __this->___force_channels;
		if ((((int32_t)L_68) == ((int32_t)1)))
		{
			goto IL_023e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_69 = ___0_pcm;
		int32_t L_70 = ___1_pcm_ptr;
		int32_t L_71 = ___2_frame_size;
		int32_t L_72 = __this->___Fs;
		StereoWidthState_tF25794762BEB382FD8D450D2C8D2B96CCBE60FBB* L_73 = __this->___width_mem;
		int32_t L_74;
		L_74 = CodecHelpers_compute_stereo_width_m5C127400C31A1D98227D88461EE89484B2BBB003(L_69, L_70, L_71, L_72, L_73, NULL);
		V_27 = L_74;
		goto IL_0241;
	}

IL_023e:
	{
		V_27 = 0;
	}

IL_0241:
	{
		int32_t L_75 = V_20;
		V_26 = L_75;
		int32_t L_76 = ___2_frame_size;
		int32_t L_77 = V_25;
		int32_t L_78;
		L_78 = OpusEncoder_user_bitrate_to_bitrate_m49D5722068434C645F19C61C577B66506D95F317(__this, L_76, L_77, NULL);
		__this->___bitrate_bps = L_78;
		int32_t L_79 = __this->___Fs;
		int32_t L_80 = ___2_frame_size;
		V_21 = ((int32_t)(L_79/L_80));
		int32_t L_81 = __this->___use_vbr;
		if (L_81)
		{
			goto IL_02a0;
		}
	}
	{
		int32_t L_82 = __this->___Fs;
		int32_t L_83 = ___2_frame_size;
		V_35 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(3, L_82))/L_83));
		int32_t L_84 = __this->___bitrate_bps;
		int32_t L_85 = V_35;
		int32_t L_86 = V_35;
		int32_t L_87 = V_25;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_88;
		L_88 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(3, L_84))/8)), ((int32_t)(L_85/2))))/L_86)), L_87, NULL);
		V_34 = L_88;
		int32_t L_89 = V_34;
		int32_t L_90 = V_35;
		__this->___bitrate_bps = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_89, L_90)), 8))/3));
		int32_t L_91 = V_34;
		V_25 = L_91;
	}

IL_02a0:
	{
		int32_t L_92 = V_25;
		if ((((int32_t)L_92) < ((int32_t)3)))
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_93 = __this->___bitrate_bps;
		int32_t L_94 = V_21;
		if ((((int32_t)L_93) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, L_94)), 8)))))
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_95 = V_21;
		if ((((int32_t)L_95) >= ((int32_t)((int32_t)50))))
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_96 = V_25;
		int32_t L_97 = V_21;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_96, L_97))) < ((int32_t)((int32_t)300))))
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_98 = __this->___bitrate_bps;
		if ((((int32_t)L_98) >= ((int32_t)((int32_t)2400))))
		{
			goto IL_03a0;
		}
	}

IL_02d8:
	{
		int32_t L_99 = __this->___mode;
		V_36 = L_99;
		int32_t L_100 = __this->___bandwidth;
		if (!L_100)
		{
			goto IL_02f0;
		}
	}
	{
		int32_t L_101 = __this->___bandwidth;
		G_B46_0 = ((int32_t)(L_101));
		goto IL_02f5;
	}

IL_02f0:
	{
		G_B46_0 = ((int32_t)1101);
	}

IL_02f5:
	{
		V_37 = (int32_t)G_B46_0;
		int32_t L_102 = V_36;
		if (L_102)
		{
			goto IL_0302;
		}
	}
	{
		V_36 = (int32_t)((int32_t)1000);
	}

IL_0302:
	{
		int32_t L_103 = V_21;
		if ((((int32_t)L_103) <= ((int32_t)((int32_t)100))))
		{
			goto IL_030f;
		}
	}
	{
		V_36 = (int32_t)((int32_t)1002);
	}

IL_030f:
	{
		int32_t L_104 = V_21;
		if ((((int32_t)L_104) >= ((int32_t)((int32_t)50))))
		{
			goto IL_031c;
		}
	}
	{
		V_36 = (int32_t)((int32_t)1000);
	}

IL_031c:
	{
		int32_t L_105 = V_36;
		if ((!(((uint32_t)L_105) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0337;
		}
	}
	{
		int32_t L_106 = V_37;
		if ((((int32_t)L_106) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_0337;
		}
	}
	{
		V_37 = (int32_t)((int32_t)1103);
		goto IL_036b;
	}

IL_0337:
	{
		int32_t L_107 = V_36;
		if ((!(((uint32_t)L_107) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0352;
		}
	}
	{
		int32_t L_108 = V_37;
		if ((!(((uint32_t)L_108) == ((uint32_t)((int32_t)1102)))))
		{
			goto IL_0352;
		}
	}
	{
		V_37 = (int32_t)((int32_t)1101);
		goto IL_036b;
	}

IL_0352:
	{
		int32_t L_109 = V_36;
		if ((!(((uint32_t)L_109) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_036b;
		}
	}
	{
		int32_t L_110 = V_37;
		if ((((int32_t)L_110) > ((int32_t)((int32_t)1104))))
		{
			goto IL_036b;
		}
	}
	{
		V_37 = (int32_t)((int32_t)1104);
	}

IL_036b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = ___3_data;
		int32_t L_112 = ___4_data_ptr;
		int32_t L_113 = V_36;
		int32_t L_114 = V_21;
		int32_t L_115 = V_37;
		int32_t L_116 = __this->___stream_channels;
		uint8_t L_117;
		L_117 = CodecHelpers_gen_toc_m36D3043E7AE9BA3F43D6025DB507D4AB1C072773(L_113, L_114, L_115, L_116, NULL);
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (uint8_t)L_117);
		V_3 = 1;
		int32_t L_118 = __this->___use_vbr;
		if (L_118)
		{
			goto IL_039e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = ___3_data;
		int32_t L_120 = ___4_data_ptr;
		int32_t L_121 = V_3;
		int32_t L_122 = V_25;
		int32_t L_123;
		L_123 = OpusRepacketizer_PadPacket_m73673282B4FEE94293683AA943B65F1DED670723(L_119, L_120, L_121, L_122, NULL);
		V_3 = L_123;
		int32_t L_124 = V_3;
		if (L_124)
		{
			goto IL_039e;
		}
	}
	{
		int32_t L_125 = V_25;
		V_3 = L_125;
	}

IL_039e:
	{
		int32_t L_126 = V_3;
		return L_126;
	}

IL_03a0:
	{
		int32_t L_127 = V_21;
		int32_t L_128 = V_25;
		V_22 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_127, L_128)), 8));
		int32_t L_129 = __this->___bitrate_bps;
		int32_t L_130 = __this->___channels;
		int32_t L_131 = __this->___Fs;
		int32_t L_132 = ___2_frame_size;
		V_19 = ((int32_t)il2cpp_codegen_subtract(L_129, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_130)), ((int32_t)20))), ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_131/L_132)), ((int32_t)50)))))));
		int32_t L_133 = __this->___signal_type;
		if ((!(((uint32_t)L_133) == ((uint32_t)((int32_t)3001)))))
		{
			goto IL_03dd;
		}
	}
	{
		V_18 = ((int32_t)127);
		goto IL_0439;
	}

IL_03dd:
	{
		int32_t L_134 = __this->___signal_type;
		if ((!(((uint32_t)L_134) == ((uint32_t)((int32_t)3002)))))
		{
			goto IL_03ef;
		}
	}
	{
		V_18 = 0;
		goto IL_0439;
	}

IL_03ef:
	{
		int32_t L_135 = __this->___voice_ratio;
		if ((((int32_t)L_135) < ((int32_t)0)))
		{
			goto IL_0422;
		}
	}
	{
		int32_t L_136 = __this->___voice_ratio;
		V_18 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_136, ((int32_t)327)))>>8));
		int32_t L_137 = __this->___application;
		if ((!(((uint32_t)L_137) == ((uint32_t)((int32_t)2049)))))
		{
			goto IL_0439;
		}
	}
	{
		int32_t L_138 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_139;
		L_139 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(L_138, ((int32_t)115), NULL);
		V_18 = L_139;
		goto IL_0439;
	}

IL_0422:
	{
		int32_t L_140 = __this->___application;
		if ((!(((uint32_t)L_140) == ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0435;
		}
	}
	{
		V_18 = ((int32_t)115);
		goto IL_0439;
	}

IL_0435:
	{
		V_18 = ((int32_t)48);
	}

IL_0439:
	{
		int32_t L_141 = __this->___force_channels;
		if ((((int32_t)L_141) == ((int32_t)((int32_t)-1000))))
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_142 = __this->___channels;
		if ((!(((uint32_t)L_142) == ((uint32_t)2))))
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_143 = __this->___force_channels;
		__this->___stream_channels = L_143;
		goto IL_04b5;
	}

IL_045d:
	{
		int32_t L_144 = __this->___channels;
		if ((!(((uint32_t)L_144) == ((uint32_t)2))))
		{
			goto IL_04a9;
		}
	}
	{
		int32_t L_145 = V_18;
		int32_t L_146 = V_18;
		V_38 = ((int32_t)il2cpp_codegen_add(((int32_t)30000), ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_145, L_146)), 0))>>((int32_t)14)))));
		int32_t L_147 = __this->___stream_channels;
		if ((!(((uint32_t)L_147) == ((uint32_t)2))))
		{
			goto IL_048d;
		}
	}
	{
		int32_t L_148 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_subtract(L_148, ((int32_t)1000)));
		goto IL_0497;
	}

IL_048d:
	{
		int32_t L_149 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_add(L_149, ((int32_t)1000)));
	}

IL_0497:
	{
		int32_t L_150 = V_19;
		int32_t L_151 = V_38;
		if ((((int32_t)L_150) > ((int32_t)L_151)))
		{
			G_B84_0 = __this;
			goto IL_04a1;
		}
		G_B83_0 = __this;
	}
	{
		G_B85_0 = 1;
		G_B85_1 = G_B83_0;
		goto IL_04a2;
	}

IL_04a1:
	{
		G_B85_0 = 2;
		G_B85_1 = G_B84_0;
	}

IL_04a2:
	{
		NullCheck(G_B85_1);
		G_B85_1->___stream_channels = G_B85_0;
		goto IL_04b5;
	}

IL_04a9:
	{
		int32_t L_152 = __this->___channels;
		__this->___stream_channels = L_152;
	}

IL_04b5:
	{
		int32_t L_153 = __this->___bitrate_bps;
		int32_t L_154 = __this->___stream_channels;
		int32_t L_155 = __this->___Fs;
		int32_t L_156 = ___2_frame_size;
		V_19 = ((int32_t)il2cpp_codegen_subtract(L_153, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_154)), ((int32_t)20))), ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_155/L_156)), ((int32_t)50)))))));
		int32_t L_157 = __this->___application;
		if ((!(((uint32_t)L_157) == ((uint32_t)((int32_t)2051)))))
		{
			goto IL_04f3;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1002);
		goto IL_061e;
	}

IL_04f3:
	{
		int32_t L_158 = __this->___user_forced_mode;
		if ((!(((uint32_t)L_158) == ((uint32_t)((int32_t)-1000)))))
		{
			goto IL_0612;
		}
	}
	{
		int32_t L_159 = V_27;
		il2cpp_codegen_runtime_class_init_inline(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_160 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mode_thresholds;
		NullCheck(L_160);
		int32_t L_161 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		NullCheck(L_162);
		int32_t L_163 = 0;
		int32_t L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_165;
		L_165 = Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)32767), L_159)), L_164, NULL);
		int32_t L_166 = V_27;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_167 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mode_thresholds;
		NullCheck(L_167);
		int32_t L_168 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		NullCheck(L_169);
		int32_t L_170 = 0;
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		int32_t L_172;
		L_172 = Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline(L_166, L_171, NULL);
		V_39 = ((int32_t)il2cpp_codegen_add(L_165, L_172));
		int32_t L_173 = V_27;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_174 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mode_thresholds;
		NullCheck(L_174);
		int32_t L_175 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_176);
		int32_t L_177 = 1;
		int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		int32_t L_179;
		L_179 = Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)32767), L_173)), L_178, NULL);
		int32_t L_180 = V_27;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_181 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mode_thresholds;
		NullCheck(L_181);
		int32_t L_182 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		NullCheck(L_183);
		int32_t L_184 = 1;
		int32_t L_185 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		int32_t L_186;
		L_186 = Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline(L_180, L_185, NULL);
		V_40 = ((int32_t)il2cpp_codegen_add(L_179, L_186));
		int32_t L_187 = V_40;
		int32_t L_188 = V_18;
		int32_t L_189 = V_18;
		int32_t L_190 = V_39;
		int32_t L_191 = V_40;
		V_41 = ((int32_t)il2cpp_codegen_add(L_187, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_188, L_189)), ((int32_t)il2cpp_codegen_subtract(L_190, L_191))))>>((int32_t)14)))));
		int32_t L_192 = __this->___application;
		if ((!(((uint32_t)L_192) == ((uint32_t)((int32_t)2048)))))
		{
			goto IL_057f;
		}
	}
	{
		int32_t L_193 = V_41;
		V_41 = ((int32_t)il2cpp_codegen_add(L_193, ((int32_t)8000)));
	}

IL_057f:
	{
		int32_t L_194 = __this->___prev_mode;
		if ((!(((uint32_t)L_194) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0598;
		}
	}
	{
		int32_t L_195 = V_41;
		V_41 = ((int32_t)il2cpp_codegen_subtract(L_195, ((int32_t)4000)));
		goto IL_05ab;
	}

IL_0598:
	{
		int32_t L_196 = __this->___prev_mode;
		if ((((int32_t)L_196) <= ((int32_t)0)))
		{
			goto IL_05ab;
		}
	}
	{
		int32_t L_197 = V_41;
		V_41 = ((int32_t)il2cpp_codegen_add(L_197, ((int32_t)4000)));
	}

IL_05ab:
	{
		int32_t L_198 = V_19;
		int32_t L_199 = V_41;
		if ((((int32_t)L_198) >= ((int32_t)L_199)))
		{
			G_B98_0 = __this;
			goto IL_05b9;
		}
		G_B97_0 = __this;
	}
	{
		G_B99_0 = ((int32_t)1000);
		G_B99_1 = G_B97_0;
		goto IL_05be;
	}

IL_05b9:
	{
		G_B99_0 = ((int32_t)1002);
		G_B99_1 = G_B98_0;
	}

IL_05be:
	{
		NullCheck(G_B99_1);
		G_B99_1->___mode = (int32_t)G_B99_0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_200 = __this->___silk_mode;
		NullCheck(L_200);
		int32_t L_201 = L_200->___useInBandFEC;
		if (!L_201)
		{
			goto IL_05f2;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_202 = __this->___silk_mode;
		NullCheck(L_202);
		int32_t L_203 = L_202->___packetLossPercentage;
		int32_t L_204 = V_18;
		if ((((int32_t)L_203) <= ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_204))>>4)))))
		{
			goto IL_05f2;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1000);
	}

IL_05f2:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_205 = __this->___silk_mode;
		NullCheck(L_205);
		int32_t L_206 = L_205->___useDTX;
		if (!L_206)
		{
			goto IL_061e;
		}
	}
	{
		int32_t L_207 = V_18;
		if ((((int32_t)L_207) <= ((int32_t)((int32_t)100))))
		{
			goto IL_061e;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1000);
		goto IL_061e;
	}

IL_0612:
	{
		int32_t L_208 = __this->___user_forced_mode;
		__this->___mode = L_208;
	}

IL_061e:
	{
		int32_t L_209 = __this->___mode;
		if ((((int32_t)L_209) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0642;
		}
	}
	{
		int32_t L_210 = ___2_frame_size;
		int32_t L_211 = __this->___Fs;
		if ((((int32_t)L_210) >= ((int32_t)((int32_t)(L_211/((int32_t)100))))))
		{
			goto IL_0642;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1002);
	}

IL_0642:
	{
		int32_t L_212 = __this->___lfe;
		if (!L_212)
		{
			goto IL_0655;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1002);
	}

IL_0655:
	{
		int32_t L_213 = V_25;
		int32_t L_214 = V_21;
		if ((((int32_t)L_214) > ((int32_t)((int32_t)50))))
		{
			G_B113_0 = L_213;
			goto IL_0664;
		}
		G_B112_0 = L_213;
	}
	{
		G_B114_0 = ((int32_t)8000);
		G_B114_1 = G_B112_0;
		goto IL_0669;
	}

IL_0664:
	{
		G_B114_0 = ((int32_t)12000);
		G_B114_1 = G_B113_0;
	}

IL_0669:
	{
		int32_t L_215 = ___2_frame_size;
		int32_t L_216 = __this->___Fs;
		if ((((int32_t)G_B114_1) >= ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(G_B114_0, L_215))/((int32_t)il2cpp_codegen_multiply(L_216, 8)))))))
		{
			goto IL_0681;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1002);
	}

IL_0681:
	{
		int32_t L_217 = __this->___stream_channels;
		if ((!(((uint32_t)L_217) == ((uint32_t)1))))
		{
			goto IL_06cf;
		}
	}
	{
		int32_t L_218 = __this->___prev_channels;
		if ((!(((uint32_t)L_218) == ((uint32_t)2))))
		{
			goto IL_06cf;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_219 = __this->___silk_mode;
		NullCheck(L_219);
		int32_t L_220 = L_219->___toMono;
		if (L_220)
		{
			goto IL_06cf;
		}
	}
	{
		int32_t L_221 = __this->___mode;
		if ((((int32_t)L_221) == ((int32_t)((int32_t)1002))))
		{
			goto IL_06cf;
		}
	}
	{
		int32_t L_222 = __this->___prev_mode;
		if ((((int32_t)L_222) == ((int32_t)((int32_t)1002))))
		{
			goto IL_06cf;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_223 = __this->___silk_mode;
		NullCheck(L_223);
		L_223->___toMono = 1;
		__this->___stream_channels = 2;
		goto IL_06db;
	}

IL_06cf:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_224 = __this->___silk_mode;
		NullCheck(L_224);
		L_224->___toMono = 0;
	}

IL_06db:
	{
		int32_t L_225 = __this->___prev_mode;
		if ((((int32_t)L_225) <= ((int32_t)0)))
		{
			goto IL_0752;
		}
	}
	{
		int32_t L_226 = __this->___mode;
		if ((((int32_t)L_226) == ((int32_t)((int32_t)1002))))
		{
			goto IL_06fe;
		}
	}
	{
		int32_t L_227 = __this->___prev_mode;
		if ((((int32_t)L_227) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0718;
		}
	}

IL_06fe:
	{
		int32_t L_228 = __this->___mode;
		if ((!(((uint32_t)L_228) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0752;
		}
	}
	{
		int32_t L_229 = __this->___prev_mode;
		if ((((int32_t)L_229) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0752;
		}
	}

IL_0718:
	{
		V_9 = 1;
		int32_t L_230 = __this->___mode;
		if ((!(((uint32_t)L_230) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_072b;
		}
	}
	{
		G_B131_0 = 0;
		goto IL_072c;
	}

IL_072b:
	{
		G_B131_0 = 1;
	}

IL_072c:
	{
		V_11 = G_B131_0;
		int32_t L_231 = V_11;
		if (L_231)
		{
			goto IL_0752;
		}
	}
	{
		int32_t L_232 = ___2_frame_size;
		int32_t L_233 = __this->___Fs;
		if ((((int32_t)L_232) < ((int32_t)((int32_t)(L_233/((int32_t)100))))))
		{
			goto IL_074f;
		}
	}
	{
		int32_t L_234 = __this->___prev_mode;
		__this->___mode = L_234;
		V_14 = 1;
		goto IL_0752;
	}

IL_074f:
	{
		V_9 = 0;
	}

IL_0752:
	{
		int32_t L_235 = __this->___silk_bw_switch;
		if (!L_235)
		{
			goto IL_076a;
		}
	}
	{
		V_9 = 1;
		V_11 = 1;
		__this->___silk_bw_switch = 0;
		V_7 = 1;
	}

IL_076a:
	{
		int32_t L_236 = V_9;
		if (!L_236)
		{
			goto IL_07b5;
		}
	}
	{
		int32_t L_237 = V_25;
		int32_t L_238 = __this->___Fs;
		int32_t L_239 = ___2_frame_size;
		int32_t L_240 = __this->___Fs;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_241;
		L_241 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)257), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_237, ((int32_t)(L_238/((int32_t)200)))))/((int32_t)il2cpp_codegen_add(L_239, ((int32_t)(L_240/((int32_t)200))))))), NULL);
		V_10 = L_241;
		int32_t L_242 = __this->___use_vbr;
		if (!L_242)
		{
			goto IL_07b5;
		}
	}
	{
		int32_t L_243 = V_10;
		int32_t L_244 = __this->___bitrate_bps;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_245;
		L_245 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(L_243, ((int32_t)(L_244/((int32_t)1600))), NULL);
		V_10 = L_245;
	}

IL_07b5:
	{
		int32_t L_246 = __this->___mode;
		if ((((int32_t)L_246) == ((int32_t)((int32_t)1002))))
		{
			goto IL_07e2;
		}
	}
	{
		int32_t L_247 = __this->___prev_mode;
		if ((!(((uint32_t)L_247) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_07e2;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_248 = (EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5*)il2cpp_codegen_object_new(EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5_il2cpp_TypeInfo_var);
		EncControlState__ctor_mFC294B69243BF8AA052700ADEBC545D52EF59E72(L_248, NULL);
		V_42 = L_248;
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_249 = V_0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_250 = V_42;
		int32_t L_251;
		L_251 = EncodeAPI_silk_InitEncoder_m4E684FC14340B80B00193C6B83650DB1FF548964(L_249, L_250, NULL);
		V_7 = 1;
	}

IL_07e2:
	{
		int32_t L_252 = __this->___mode;
		if ((((int32_t)L_252) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0807;
		}
	}
	{
		int32_t L_253 = __this->___first;
		if (L_253)
		{
			goto IL_0807;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_254 = __this->___silk_mode;
		NullCheck(L_254);
		int32_t L_255 = L_254->___allowBandwidthSwitch;
		if (!L_255)
		{
			goto IL_093e;
		}
	}

IL_0807:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		V_45 = L_256;
		V_46 = (int32_t)((int32_t)1105);
		int32_t L_257 = V_19;
		V_47 = L_257;
		int32_t L_258 = __this->___mode;
		if ((((int32_t)L_258) == ((int32_t)((int32_t)1002))))
		{
			goto IL_084f;
		}
	}
	{
		int32_t L_259 = V_47;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_260 = __this->___silk_mode;
		NullCheck(L_260);
		int32_t L_261 = L_260->___complexity;
		V_47 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_259, ((int32_t)il2cpp_codegen_add(((int32_t)45), L_261))))/((int32_t)50)));
		int32_t L_262 = __this->___use_vbr;
		if (L_262)
		{
			goto IL_084f;
		}
	}
	{
		int32_t L_263 = V_47;
		V_47 = ((int32_t)il2cpp_codegen_subtract(L_263, ((int32_t)1000)));
	}

IL_084f:
	{
		int32_t L_264 = __this->___channels;
		if ((!(((uint32_t)L_264) == ((uint32_t)2))))
		{
			goto IL_0871;
		}
	}
	{
		int32_t L_265 = __this->___force_channels;
		if ((((int32_t)L_265) == ((int32_t)1)))
		{
			goto IL_0871;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_266 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___stereo_voice_bandwidth_thresholds;
		V_43 = L_266;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___stereo_music_bandwidth_thresholds;
		V_44 = L_267;
		goto IL_087f;
	}

IL_0871:
	{
		il2cpp_codegen_runtime_class_init_inline(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mono_voice_bandwidth_thresholds;
		V_43 = L_268;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mono_music_bandwidth_thresholds;
		V_44 = L_269;
	}

IL_087f:
	{
		V_2 = 0;
		goto IL_08a2;
	}

IL_0883:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_270 = V_45;
		int32_t L_271 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = V_44;
		int32_t L_273 = V_2;
		NullCheck(L_272);
		int32_t L_274 = L_273;
		int32_t L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		int32_t L_276 = V_18;
		int32_t L_277 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_278 = V_43;
		int32_t L_279 = V_2;
		NullCheck(L_278);
		int32_t L_280 = L_279;
		int32_t L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_282 = V_44;
		int32_t L_283 = V_2;
		NullCheck(L_282);
		int32_t L_284 = L_283;
		int32_t L_285 = (L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		NullCheck(L_270);
		(L_270)->SetAt(static_cast<il2cpp_array_size_t>(L_271), (int32_t)((int32_t)il2cpp_codegen_add(L_275, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_276, L_277)), ((int32_t)il2cpp_codegen_subtract(L_281, L_285))))>>((int32_t)14))))));
		int32_t L_286 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_286, 1));
	}

IL_08a2:
	{
		int32_t L_287 = V_2;
		if ((((int32_t)L_287) < ((int32_t)8)))
		{
			goto IL_0883;
		}
	}

IL_08a6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = V_45;
		int32_t L_289 = V_46;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_289, ((int32_t)1102)))));
		int32_t L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		V_48 = L_291;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = V_45;
		int32_t L_293 = V_46;
		NullCheck(L_292);
		int32_t L_294 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_293, ((int32_t)1102))))), 1));
		int32_t L_295 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		V_49 = L_295;
		int32_t L_296 = __this->___first;
		if (L_296)
		{
			goto IL_08e8;
		}
	}
	{
		int32_t L_297 = __this->___bandwidth;
		int32_t L_298 = V_46;
		if ((((int32_t)L_297) < ((int32_t)L_298)))
		{
			goto IL_08e1;
		}
	}
	{
		int32_t L_299 = V_48;
		int32_t L_300 = V_49;
		V_48 = ((int32_t)il2cpp_codegen_subtract(L_299, L_300));
		goto IL_08e8;
	}

IL_08e1:
	{
		int32_t L_301 = V_48;
		int32_t L_302 = V_49;
		V_48 = ((int32_t)il2cpp_codegen_add(L_301, L_302));
	}

IL_08e8:
	{
		int32_t L_303 = V_47;
		int32_t L_304 = V_48;
		if ((((int32_t)L_303) >= ((int32_t)L_304)))
		{
			goto IL_08fc;
		}
	}
	{
		int32_t L_305 = V_46;
		int32_t L_306 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_305, 1));
		V_46 = (int32_t)L_306;
		if ((((int32_t)L_306) > ((int32_t)((int32_t)1101))))
		{
			goto IL_08a6;
		}
	}

IL_08fc:
	{
		int32_t L_307 = V_46;
		__this->___bandwidth = L_307;
		int32_t L_308 = __this->___first;
		if (L_308)
		{
			goto IL_093e;
		}
	}
	{
		int32_t L_309 = __this->___mode;
		if ((((int32_t)L_309) == ((int32_t)((int32_t)1002))))
		{
			goto IL_093e;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_310 = __this->___silk_mode;
		NullCheck(L_310);
		int32_t L_311 = L_310->___inWBmodeWithoutVariableLP;
		if (L_311)
		{
			goto IL_093e;
		}
	}
	{
		int32_t L_312 = __this->___bandwidth;
		if ((((int32_t)L_312) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_093e;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1103);
	}

IL_093e:
	{
		int32_t L_313 = __this->___bandwidth;
		int32_t L_314 = __this->___max_bandwidth;
		if ((((int32_t)L_313) <= ((int32_t)L_314)))
		{
			goto IL_0958;
		}
	}
	{
		int32_t L_315 = __this->___max_bandwidth;
		__this->___bandwidth = L_315;
	}

IL_0958:
	{
		int32_t L_316 = __this->___user_bandwidth;
		if ((((int32_t)L_316) == ((int32_t)((int32_t)-1000))))
		{
			goto IL_0971;
		}
	}
	{
		int32_t L_317 = __this->___user_bandwidth;
		__this->___bandwidth = L_317;
	}

IL_0971:
	{
		int32_t L_318 = __this->___mode;
		if ((((int32_t)L_318) == ((int32_t)((int32_t)1002))))
		{
			goto IL_099d;
		}
	}
	{
		int32_t L_319 = V_22;
		if ((((int32_t)L_319) >= ((int32_t)((int32_t)15000))))
		{
			goto IL_099d;
		}
	}
	{
		int32_t L_320 = __this->___bandwidth;
		int32_t L_321;
		L_321 = OpusBandwidthHelpers_MIN_m43E41E09D058376547611B89154E5FF74E1B93F0(L_320, (int32_t)((int32_t)1103), NULL);
		__this->___bandwidth = L_321;
	}

IL_099d:
	{
		int32_t L_322 = __this->___Fs;
		if ((((int32_t)L_322) > ((int32_t)((int32_t)24000))))
		{
			goto IL_09c2;
		}
	}
	{
		int32_t L_323 = __this->___bandwidth;
		if ((((int32_t)L_323) <= ((int32_t)((int32_t)1104))))
		{
			goto IL_09c2;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1104);
	}

IL_09c2:
	{
		int32_t L_324 = __this->___Fs;
		if ((((int32_t)L_324) > ((int32_t)((int32_t)16000))))
		{
			goto IL_09e7;
		}
	}
	{
		int32_t L_325 = __this->___bandwidth;
		if ((((int32_t)L_325) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_09e7;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1103);
	}

IL_09e7:
	{
		int32_t L_326 = __this->___Fs;
		if ((((int32_t)L_326) > ((int32_t)((int32_t)12000))))
		{
			goto IL_0a0c;
		}
	}
	{
		int32_t L_327 = __this->___bandwidth;
		if ((((int32_t)L_327) <= ((int32_t)((int32_t)1102))))
		{
			goto IL_0a0c;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1102);
	}

IL_0a0c:
	{
		int32_t L_328 = __this->___Fs;
		if ((((int32_t)L_328) > ((int32_t)((int32_t)8000))))
		{
			goto IL_0a31;
		}
	}
	{
		int32_t L_329 = __this->___bandwidth;
		if ((((int32_t)L_329) <= ((int32_t)((int32_t)1101))))
		{
			goto IL_0a31;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1101);
	}

IL_0a31:
	{
		int32_t L_330 = __this->___detected_bandwidth;
		if (!L_330)
		{
			goto IL_0afb;
		}
	}
	{
		int32_t L_331 = __this->___user_bandwidth;
		if ((!(((uint32_t)L_331) == ((uint32_t)((int32_t)-1000)))))
		{
			goto IL_0afb;
		}
	}
	{
		int32_t L_332 = V_19;
		int32_t L_333 = __this->___stream_channels;
		if ((((int32_t)L_332) > ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)18000), L_333)))))
		{
			goto IL_0a72;
		}
	}
	{
		int32_t L_334 = __this->___mode;
		if ((!(((uint32_t)L_334) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0a72;
		}
	}
	{
		V_50 = (int32_t)((int32_t)1101);
		goto IL_0ad1;
	}

IL_0a72:
	{
		int32_t L_335 = V_19;
		int32_t L_336 = __this->___stream_channels;
		if ((((int32_t)L_335) > ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)24000), L_336)))))
		{
			goto IL_0a98;
		}
	}
	{
		int32_t L_337 = __this->___mode;
		if ((!(((uint32_t)L_337) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0a98;
		}
	}
	{
		V_50 = (int32_t)((int32_t)1102);
		goto IL_0ad1;
	}

IL_0a98:
	{
		int32_t L_338 = V_19;
		int32_t L_339 = __this->___stream_channels;
		if ((((int32_t)L_338) > ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)30000), L_339)))))
		{
			goto IL_0ab1;
		}
	}
	{
		V_50 = (int32_t)((int32_t)1103);
		goto IL_0ad1;
	}

IL_0ab1:
	{
		int32_t L_340 = V_19;
		int32_t L_341 = __this->___stream_channels;
		if ((((int32_t)L_340) > ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)44000), L_341)))))
		{
			goto IL_0aca;
		}
	}
	{
		V_50 = (int32_t)((int32_t)1104);
		goto IL_0ad1;
	}

IL_0aca:
	{
		V_50 = (int32_t)((int32_t)1105);
	}

IL_0ad1:
	{
		int32_t L_342 = __this->___detected_bandwidth;
		int32_t L_343 = V_50;
		int32_t L_344;
		L_344 = OpusBandwidthHelpers_MAX_m9D4142AD1C219302EA647F0B58218227C9C0154D(L_342, L_343, NULL);
		__this->___detected_bandwidth = L_344;
		int32_t L_345 = __this->___bandwidth;
		int32_t L_346 = __this->___detected_bandwidth;
		int32_t L_347;
		L_347 = OpusBandwidthHelpers_MIN_m43E41E09D058376547611B89154E5FF74E1B93F0(L_345, L_346, NULL);
		__this->___bandwidth = L_347;
	}

IL_0afb:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_348 = V_1;
		int32_t L_349 = ___6_lsb_depth;
		NullCheck(L_348);
		CeltEncoder_SetLSBDepth_mF6D3829124F5D80DE20D3AB5E758010C5135C31B(L_348, L_349, NULL);
		int32_t L_350 = __this->___mode;
		if ((!(((uint32_t)L_350) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0b28;
		}
	}
	{
		int32_t L_351 = __this->___bandwidth;
		if ((!(((uint32_t)L_351) == ((uint32_t)((int32_t)1102)))))
		{
			goto IL_0b28;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1103);
	}

IL_0b28:
	{
		int32_t L_352 = __this->___lfe;
		if (!L_352)
		{
			goto IL_0b3b;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1101);
	}

IL_0b3b:
	{
		int32_t L_353 = ___2_frame_size;
		int32_t L_354 = __this->___Fs;
		if ((((int32_t)L_353) <= ((int32_t)((int32_t)(L_354/((int32_t)50))))))
		{
			goto IL_0d32;
		}
	}
	{
		int32_t L_355 = __this->___mode;
		if ((((int32_t)L_355) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0b67;
		}
	}
	{
		int32_t L_356 = __this->___bandwidth;
		if ((((int32_t)L_356) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_0d32;
		}
	}

IL_0b67:
	{
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_357 = __this->___analysis;
		NullCheck(L_357);
		bool L_358 = L_357->___enabled;
		if (!L_358)
		{
			goto IL_0b93;
		}
	}
	{
		int32_t L_359 = V_30;
		if ((((int32_t)L_359) == ((int32_t)(-1))))
		{
			goto IL_0b93;
		}
	}
	{
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_360 = __this->___analysis;
		int32_t L_361 = V_30;
		NullCheck(L_360);
		L_360->___read_pos = L_361;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_362 = __this->___analysis;
		int32_t L_363 = V_31;
		NullCheck(L_362);
		L_362->___read_subframe = L_363;
	}

IL_0b93:
	{
		int32_t L_364 = ___2_frame_size;
		int32_t L_365 = __this->___Fs;
		if ((((int32_t)L_364) > ((int32_t)((int32_t)(L_365/((int32_t)25))))))
		{
			goto IL_0ba2;
		}
	}
	{
		G_B214_0 = 2;
		goto IL_0ba3;
	}

IL_0ba2:
	{
		G_B214_0 = 3;
	}

IL_0ba3:
	{
		V_52 = G_B214_0;
		int32_t L_366 = ___5_out_data_bytes;
		int32_t L_367 = V_52;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_368;
		L_368 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)1276), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_366, 3))/L_367)), NULL);
		V_58 = L_368;
		int32_t L_369 = V_52;
		int32_t L_370 = V_58;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_371 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_369, L_370)));
		V_51 = L_371;
		OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* L_372 = (OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9*)il2cpp_codegen_object_new(OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9_il2cpp_TypeInfo_var);
		OpusRepacketizer__ctor_m0C07EA7248DAD51F4882B26E36B99B10873E9891(L_372, NULL);
		V_57 = L_372;
		int32_t L_373 = __this->___user_forced_mode;
		V_56 = L_373;
		int32_t L_374 = __this->___user_bandwidth;
		V_53 = L_374;
		int32_t L_375 = __this->___force_channels;
		V_54 = L_375;
		int32_t L_376 = __this->___mode;
		__this->___user_forced_mode = L_376;
		int32_t L_377 = __this->___bandwidth;
		__this->___user_bandwidth = L_377;
		int32_t L_378 = __this->___stream_channels;
		__this->___force_channels = L_378;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_379 = __this->___silk_mode;
		NullCheck(L_379);
		int32_t L_380 = L_379->___toMono;
		V_55 = L_380;
		int32_t L_381 = V_55;
		if (!L_381)
		{
			goto IL_0c21;
		}
	}
	{
		__this->___force_channels = 1;
		goto IL_0c2d;
	}

IL_0c21:
	{
		int32_t L_382 = __this->___stream_channels;
		__this->___prev_channels = L_382;
	}

IL_0c2d:
	{
		V_2 = 0;
		goto IL_0cb6;
	}

IL_0c34:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_383 = __this->___silk_mode;
		NullCheck(L_383);
		L_383->___toMono = 0;
		int32_t L_384 = V_14;
		if (!L_384)
		{
			goto IL_0c56;
		}
	}
	{
		int32_t L_385 = V_2;
		int32_t L_386 = V_52;
		if ((!(((uint32_t)L_385) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_386, 1))))))
		{
			goto IL_0c56;
		}
	}
	{
		__this->___user_forced_mode = (int32_t)((int32_t)1002);
	}

IL_0c56:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_387 = ___0_pcm;
		int32_t L_388 = ___1_pcm_ptr;
		int32_t L_389 = V_2;
		int32_t L_390 = __this->___channels;
		int32_t L_391 = __this->___Fs;
		int32_t L_392 = __this->___Fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_393 = V_51;
		int32_t L_394 = V_2;
		int32_t L_395 = V_58;
		int32_t L_396 = V_58;
		int32_t L_397 = ___6_lsb_depth;
		int32_t L_398 = ___10_c1;
		int32_t L_399 = ___11_c2;
		int32_t L_400 = ___12_analysis_channels;
		downmix_func_1_t522CFA64A86DB7AC1AA909474E4518D6D438701D* L_401 = ___13_downmix;
		int32_t L_402 = ___14_float_api;
		int32_t L_403;
		L_403 = OpusEncoder_opus_encode_native_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD9B3E8A05692DBC0F0457EB2EC48F0B9210F49FC(__this, L_387, ((int32_t)il2cpp_codegen_add(L_388, ((int32_t)il2cpp_codegen_multiply(L_389, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_390, L_391))/((int32_t)50))))))), ((int32_t)(L_392/((int32_t)50))), L_393, ((int32_t)il2cpp_codegen_multiply(L_394, L_395)), L_396, L_397, (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL, 0, 0, L_398, L_399, L_400, L_401, L_402, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_60 = L_403;
		int32_t L_404 = V_60;
		if ((((int32_t)L_404) >= ((int32_t)0)))
		{
			goto IL_0c9b;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_0c9b:
	{
		OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* L_405 = V_57;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_406 = V_51;
		int32_t L_407 = V_2;
		int32_t L_408 = V_58;
		int32_t L_409 = V_60;
		NullCheck(L_405);
		int32_t L_410;
		L_410 = OpusRepacketizer_AddPacket_m52B8369195511585403F6C1AF8033335BA77DC68(L_405, L_406, ((int32_t)il2cpp_codegen_multiply(L_407, L_408)), L_409, NULL);
		V_3 = L_410;
		int32_t L_411 = V_3;
		if ((((int32_t)L_411) >= ((int32_t)0)))
		{
			goto IL_0cb2;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_0cb2:
	{
		int32_t L_412 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_412, 1));
	}

IL_0cb6:
	{
		int32_t L_413 = V_2;
		int32_t L_414 = V_52;
		if ((((int32_t)L_413) < ((int32_t)L_414)))
		{
			goto IL_0c34;
		}
	}
	{
		int32_t L_415 = __this->___use_vbr;
		if (!L_415)
		{
			goto IL_0ccc;
		}
	}
	{
		int32_t L_416 = ___5_out_data_bytes;
		V_59 = L_416;
		goto IL_0ce6;
	}

IL_0ccc:
	{
		int32_t L_417 = __this->___bitrate_bps;
		int32_t L_418 = V_52;
		int32_t L_419 = ___5_out_data_bytes;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_420;
		L_420 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)(((int32_t)il2cpp_codegen_multiply(3, L_417))/((int32_t)(((int32_t)1200)/L_418)))), L_419, NULL);
		V_59 = L_420;
	}

IL_0ce6:
	{
		OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* L_421 = V_57;
		int32_t L_422 = V_52;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_423 = ___3_data;
		int32_t L_424 = ___4_data_ptr;
		int32_t L_425 = V_59;
		int32_t L_426 = __this->___use_vbr;
		if (!L_426)
		{
			G_B232_0 = 0;
			G_B232_1 = L_425;
			G_B232_2 = L_424;
			G_B232_3 = L_423;
			G_B232_4 = L_422;
			G_B232_5 = 0;
			G_B232_6 = L_421;
			goto IL_0cfd;
		}
		G_B231_0 = 0;
		G_B231_1 = L_425;
		G_B231_2 = L_424;
		G_B231_3 = L_423;
		G_B231_4 = L_422;
		G_B231_5 = 0;
		G_B231_6 = L_421;
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		G_B233_2 = G_B231_1;
		G_B233_3 = G_B231_2;
		G_B233_4 = G_B231_3;
		G_B233_5 = G_B231_4;
		G_B233_6 = G_B231_5;
		G_B233_7 = G_B231_6;
		goto IL_0cfe;
	}

IL_0cfd:
	{
		G_B233_0 = 1;
		G_B233_1 = G_B232_0;
		G_B233_2 = G_B232_1;
		G_B233_3 = G_B232_2;
		G_B233_4 = G_B232_3;
		G_B233_5 = G_B232_4;
		G_B233_6 = G_B232_5;
		G_B233_7 = G_B232_6;
	}

IL_0cfe:
	{
		NullCheck(G_B233_7);
		int32_t L_427;
		L_427 = OpusRepacketizer_opus_repacketizer_out_range_impl_m0E435E83E330DE8F1DC57BCED55BA32B274C362E(G_B233_7, G_B233_6, G_B233_5, G_B233_4, G_B233_3, G_B233_2, G_B233_1, G_B233_0, NULL);
		V_3 = L_427;
		int32_t L_428 = V_3;
		if ((((int32_t)L_428) >= ((int32_t)0)))
		{
			goto IL_0d0b;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_0d0b:
	{
		int32_t L_429 = V_56;
		__this->___user_forced_mode = L_429;
		int32_t L_430 = V_53;
		__this->___user_bandwidth = L_430;
		int32_t L_431 = V_54;
		__this->___force_channels = L_431;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_432 = __this->___silk_mode;
		int32_t L_433 = V_55;
		NullCheck(L_432);
		L_432->___toMono = L_433;
		int32_t L_434 = V_3;
		return L_434;
	}

IL_0d32:
	{
		int32_t L_435 = __this->___bandwidth;
		V_23 = L_435;
		int32_t L_436 = __this->___mode;
		if ((!(((uint32_t)L_436) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0d5b;
		}
	}
	{
		int32_t L_437 = V_23;
		if ((((int32_t)L_437) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_0d5b;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1001);
	}

IL_0d5b:
	{
		int32_t L_438 = __this->___mode;
		if ((!(((uint32_t)L_438) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_0d7c;
		}
	}
	{
		int32_t L_439 = V_23;
		if ((((int32_t)L_439) > ((int32_t)((int32_t)1103))))
		{
			goto IL_0d7c;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1000);
	}

IL_0d7c:
	{
		int32_t L_440 = V_25;
		int32_t L_441 = V_10;
		int32_t L_442 = __this->___bitrate_bps;
		int32_t L_443 = ___2_frame_size;
		int32_t L_444 = __this->___Fs;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_445;
		L_445 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)il2cpp_codegen_subtract(L_440, L_441)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_442, L_443))/((int32_t)il2cpp_codegen_multiply(L_444, 8)))), NULL);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_445, 1));
		int32_t L_446 = ___4_data_ptr;
		___4_data_ptr = ((int32_t)il2cpp_codegen_add(L_446, 1));
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_447 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_448 = ___3_data;
		int32_t L_449 = ___4_data_ptr;
		int32_t L_450 = V_25;
		NullCheck(L_447);
		EntropyCoder_enc_init_mF8EFBA613294599669ACAD9336D240DCD32FCE9B(L_447, L_448, L_449, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_450, 1)), NULL);
		int32_t L_451 = V_26;
		int32_t L_452 = ___2_frame_size;
		int32_t L_453 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_454 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_451, L_452)), L_453)));
		V_12 = L_454;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_455 = __this->___delay_buffer;
		int32_t L_456 = __this->___encoder_buffer;
		int32_t L_457 = V_26;
		int32_t L_458 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_459 = V_12;
		int32_t L_460 = V_26;
		int32_t L_461 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_455, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_456, L_457)), L_458)), (RuntimeArray*)L_459, 0, ((int32_t)il2cpp_codegen_multiply(L_460, L_461)), NULL);
		int32_t L_462 = __this->___mode;
		if ((!(((uint32_t)L_462) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0e07;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_463;
		L_463 = Inlines_silk_lin2log_m13CE80A79E86A855158F9AD128C300253AA54787_inline(((int32_t)60), NULL);
		int32_t L_464;
		L_464 = Inlines_silk_LSHIFT_mA37756351362D68182AD1C173A43FBDB753390D0_inline(L_463, 8, NULL);
		V_17 = L_464;
		goto IL_0e16;
	}

IL_0e07:
	{
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_465 = V_0;
		NullCheck(L_465);
		SilkChannelEncoderU5BU5D_t241B8ADEDA30B816D7957AE8B0615ACADD8DE0B3* L_466 = L_465->___state_Fxx;
		NullCheck(L_466);
		int32_t L_467 = 0;
		SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194* L_468 = (L_466)->GetAt(static_cast<il2cpp_array_size_t>(L_467));
		NullCheck(L_468);
		int32_t L_469 = L_468->___variable_HP_smth1_Q15;
		V_17 = L_469;
	}

IL_0e16:
	{
		int32_t L_470 = __this->___variable_HP_smth2_Q15;
		int32_t L_471 = V_17;
		int32_t L_472 = __this->___variable_HP_smth2_Q15;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_473;
		L_473 = Inlines_silk_SMLAWB_m848A6EC6C9D0BA25BB0D3D3035475AEF74EBA860_inline(L_470, ((int32_t)il2cpp_codegen_subtract(L_471, L_472)), ((int32_t)983), NULL);
		__this->___variable_HP_smth2_Q15 = L_473;
		int32_t L_474 = __this->___variable_HP_smth2_Q15;
		int32_t L_475;
		L_475 = Inlines_silk_RSHIFT_m91357BE2399E9EA7017E2F08E94110205620DFC1_inline(L_474, 8, NULL);
		int32_t L_476;
		L_476 = Inlines_silk_log2lin_mAA1230C7B095DFEC8345BB1D7C951470856E4738_inline(L_475, NULL);
		V_16 = L_476;
		int32_t L_477 = __this->___application;
		if ((!(((uint32_t)L_477) == ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0e7e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_478 = ___0_pcm;
		int32_t L_479 = ___1_pcm_ptr;
		int32_t L_480 = V_16;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_481 = V_12;
		int32_t L_482 = V_26;
		int32_t L_483 = __this->___channels;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = __this->___hp_mem;
		int32_t L_485 = ___2_frame_size;
		int32_t L_486 = __this->___channels;
		int32_t L_487 = __this->___Fs;
		CodecHelpers_hp_cutoff_mA1C0E41BEFC0BC5FFE38AA7FA13F5BA81F025104(L_478, L_479, L_480, L_481, ((int32_t)il2cpp_codegen_multiply(L_482, L_483)), L_484, L_485, L_486, L_487, NULL);
		goto IL_0ea4;
	}

IL_0e7e:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_488 = ___0_pcm;
		int32_t L_489 = ___1_pcm_ptr;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_490 = V_12;
		int32_t L_491 = V_26;
		int32_t L_492 = __this->___channels;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = __this->___hp_mem;
		int32_t L_494 = ___2_frame_size;
		int32_t L_495 = __this->___channels;
		int32_t L_496 = __this->___Fs;
		CodecHelpers_dc_reject_mFC4BCC9AC624D6FA5D8E467FFAA4980965D5E2B8(L_488, L_489, 3, L_490, ((int32_t)il2cpp_codegen_multiply(L_491, L_492)), L_493, L_494, L_495, L_496, NULL);
	}

IL_0ea4:
	{
		V_24 = ((int32_t)32767);
		int32_t L_497 = __this->___mode;
		if ((((int32_t)L_497) == ((int32_t)((int32_t)1002))))
		{
			goto IL_1520;
		}
	}
	{
		int32_t L_498 = __this->___channels;
		int32_t L_499 = ___2_frame_size;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_500 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_498, L_499)));
		V_63 = L_500;
		int32_t L_501 = V_6;
		int32_t L_502 = V_21;
		V_61 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(8, L_501)), L_502));
		int32_t L_503 = __this->___mode;
		if ((!(((uint32_t)L_503) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_0fef;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_504 = __this->___silk_mode;
		int32_t L_505 = __this->___stream_channels;
		int32_t L_506 = __this->___Fs;
		int32_t L_507 = ___2_frame_size;
		if ((((int32_t)L_506) == ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)100), L_507)))))
		{
			G_B252_0 = ((int32_t)5000);
			G_B252_1 = L_505;
			G_B252_2 = L_504;
			goto IL_0f03;
		}
		G_B251_0 = ((int32_t)5000);
		G_B251_1 = L_505;
		G_B251_2 = L_504;
	}
	{
		G_B253_0 = 0;
		G_B253_1 = G_B251_0;
		G_B253_2 = G_B251_1;
		G_B253_3 = G_B251_2;
		goto IL_0f08;
	}

IL_0f03:
	{
		G_B253_0 = ((int32_t)1000);
		G_B253_1 = G_B252_0;
		G_B253_2 = G_B252_1;
		G_B253_3 = G_B252_2;
	}

IL_0f08:
	{
		NullCheck(G_B253_3);
		G_B253_3->___bitRate = ((int32_t)il2cpp_codegen_multiply(G_B253_2, ((int32_t)il2cpp_codegen_add(G_B253_1, G_B253_0))));
		int32_t L_508 = V_23;
		if ((!(((uint32_t)L_508) == ((uint32_t)((int32_t)1104)))))
		{
			goto IL_0f3e;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_509 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_510 = L_509;
		NullCheck(L_510);
		int32_t L_511 = L_510->___bitRate;
		int32_t L_512 = V_61;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_513 = __this->___silk_mode;
		NullCheck(L_513);
		int32_t L_514 = L_513->___bitRate;
		NullCheck(L_510);
		L_510->___bitRate = ((int32_t)il2cpp_codegen_add(L_511, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_512, L_514)), 2))/3))));
		goto IL_0f62;
	}

IL_0f3e:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_515 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_516 = L_515;
		NullCheck(L_516);
		int32_t L_517 = L_516->___bitRate;
		int32_t L_518 = V_61;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_519 = __this->___silk_mode;
		NullCheck(L_519);
		int32_t L_520 = L_519->___bitRate;
		NullCheck(L_516);
		L_516->___bitRate = ((int32_t)il2cpp_codegen_add(L_517, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_518, L_520)), 3))/5))));
	}

IL_0f62:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_521 = __this->___silk_mode;
		NullCheck(L_521);
		int32_t L_522 = L_521->___bitRate;
		int32_t L_523 = V_61;
		if ((((int32_t)L_522) <= ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_523, 4))/5)))))
		{
			goto IL_0f86;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_524 = __this->___silk_mode;
		int32_t L_525 = V_61;
		NullCheck(L_524);
		L_524->___bitRate = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_525, 4))/5));
	}

IL_0f86:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_526 = __this->___energy_masking;
		if (L_526)
		{
			goto IL_0ffc;
		}
	}
	{
		int32_t L_527 = V_61;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_528 = __this->___silk_mode;
		NullCheck(L_528);
		int32_t L_529 = L_528->___bitRate;
		V_62 = ((int32_t)il2cpp_codegen_subtract(L_527, L_529));
		int32_t L_530 = V_23;
		if ((((int32_t)L_530) == ((int32_t)((int32_t)1104))))
		{
			goto IL_0fae;
		}
	}
	{
		G_B262_0 = ((int32_t)3600);
		goto IL_0fb3;
	}

IL_0fae:
	{
		G_B262_0 = ((int32_t)3000);
	}

IL_0fb3:
	{
		V_65 = G_B262_0;
		int32_t L_531 = V_62;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_532;
		L_532 = Inlines_SHL32_m75BFDFD5C80D2CB588BD2517779B5A73F5C0EF03_inline(L_531, ((int32_t)9), NULL);
		int32_t L_533 = V_62;
		int32_t L_534 = __this->___stream_channels;
		int32_t L_535 = V_65;
		int32_t L_536;
		L_536 = Inlines_SHR32_mD57FC2703588CAD4DF39825E0FEC2F158F622A29_inline(((int32_t)il2cpp_codegen_add(L_533, ((int32_t)il2cpp_codegen_multiply(L_534, L_535)))), 6, NULL);
		V_24 = ((int32_t)(L_532/L_536));
		int32_t L_537 = V_24;
		if ((((int32_t)L_537) < ((int32_t)((int32_t)28086))))
		{
			goto IL_0fe3;
		}
	}
	{
		G_B265_0 = ((int32_t)32767);
		goto IL_0feb;
	}

IL_0fe3:
	{
		int32_t L_538 = V_24;
		G_B265_0 = ((int32_t)il2cpp_codegen_add(L_538, ((int32_t)4681)));
	}

IL_0feb:
	{
		V_24 = G_B265_0;
		goto IL_0ffc;
	}

IL_0fef:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_539 = __this->___silk_mode;
		int32_t L_540 = V_61;
		NullCheck(L_539);
		L_539->___bitRate = L_540;
	}

IL_0ffc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = __this->___energy_masking;
		if (!L_541)
		{
			goto IL_1155;
		}
	}
	{
		int32_t L_542 = __this->___use_vbr;
		if (!L_542)
		{
			goto IL_1155;
		}
	}
	{
		int32_t L_543 = __this->___lfe;
		if (L_543)
		{
			goto IL_1155;
		}
	}
	{
		V_66 = 0;
		V_70 = ((int32_t)17);
		V_71 = (int16_t)((int32_t)16000);
		int32_t L_544 = __this->___bandwidth;
		if ((!(((uint32_t)L_544) == ((uint32_t)((int32_t)1101)))))
		{
			goto IL_1045;
		}
	}
	{
		V_70 = ((int32_t)13);
		V_71 = (int16_t)((int32_t)8000);
		goto IL_105d;
	}

IL_1045:
	{
		int32_t L_545 = __this->___bandwidth;
		if ((!(((uint32_t)L_545) == ((uint32_t)((int32_t)1102)))))
		{
			goto IL_105d;
		}
	}
	{
		V_70 = ((int32_t)15);
		V_71 = (int16_t)((int32_t)12000);
	}

IL_105d:
	{
		V_69 = 0;
		goto IL_10ae;
	}

IL_1062:
	{
		V_2 = 0;
		goto IL_10a3;
	}

IL_1066:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_546 = __this->___energy_masking;
		int32_t L_547 = V_69;
		int32_t L_548 = V_2;
		NullCheck(L_546);
		int32_t L_549 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)21), L_547)), L_548));
		int32_t L_550 = (L_546)->GetAt(static_cast<il2cpp_array_size_t>(L_549));
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_551;
		L_551 = Inlines_MIN16_m91DF88A9ABB47E6D010FC82CD4B9404DA512623E_inline(L_550, ((int32_t)512), NULL);
		int32_t L_552;
		L_552 = Inlines_MAX16_m664F24DFE9E917BEC0D4536CF6520277285EF0CB_inline(L_551, ((int32_t)-2048), NULL);
		V_72 = L_552;
		int32_t L_553 = V_72;
		if ((((int32_t)L_553) <= ((int32_t)0)))
		{
			goto IL_1098;
		}
	}
	{
		int32_t L_554 = V_72;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_555;
		L_555 = Inlines_HALF16_mA3D84B14909E6EF84F654D342E679A9EB1111DF2_inline(L_554, NULL);
		V_72 = L_555;
	}

IL_1098:
	{
		int32_t L_556 = V_66;
		int32_t L_557 = V_72;
		V_66 = ((int32_t)il2cpp_codegen_add(L_556, L_557));
		int32_t L_558 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_558, 1));
	}

IL_10a3:
	{
		int32_t L_559 = V_2;
		int32_t L_560 = V_70;
		if ((((int32_t)L_559) < ((int32_t)L_560)))
		{
			goto IL_1066;
		}
	}
	{
		int32_t L_561 = V_69;
		V_69 = ((int32_t)il2cpp_codegen_add(L_561, 1));
	}

IL_10ae:
	{
		int32_t L_562 = V_69;
		int32_t L_563 = __this->___channels;
		if ((((int32_t)L_562) < ((int32_t)L_563)))
		{
			goto IL_1062;
		}
	}
	{
		int32_t L_564 = V_66;
		int32_t L_565 = V_70;
		int32_t L_566 = __this->___channels;
		V_67 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_564/L_565)), L_566));
		int32_t L_567 = V_67;
		V_67 = ((int32_t)il2cpp_codegen_add(L_567, ((int32_t)205)));
		int16_t L_568 = V_71;
		int32_t L_569 = V_67;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_570;
		L_570 = Inlines_MULT16_16_m1284C34FE095820278CB6AEDD3575C2165F1FC1A_inline((int32_t)L_568, L_569, NULL);
		int32_t L_571;
		L_571 = Inlines_PSHR32_mFAD319902E74B0D0ED8DCB30992F78B21833ADA3_inline(L_570, ((int32_t)10), NULL);
		V_68 = L_571;
		int32_t L_572 = V_68;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_573 = __this->___silk_mode;
		NullCheck(L_573);
		int32_t L_574 = L_573->___bitRate;
		int32_t L_575;
		L_575 = Inlines_MAX32_m0EDA35029F6C04CDC5D3FBC144A35A8E6BDA9044_inline(L_572, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)-2), L_574))/3)), NULL);
		V_68 = L_575;
		int32_t L_576 = __this->___bandwidth;
		if ((((int32_t)L_576) == ((int32_t)((int32_t)1104))))
		{
			goto IL_1115;
		}
	}
	{
		int32_t L_577 = __this->___bandwidth;
		if ((!(((uint32_t)L_577) == ((uint32_t)((int32_t)1105)))))
		{
			goto IL_112f;
		}
	}

IL_1115:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_578 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_579 = L_578;
		NullCheck(L_579);
		int32_t L_580 = L_579->___bitRate;
		int32_t L_581 = V_68;
		NullCheck(L_579);
		L_579->___bitRate = ((int32_t)il2cpp_codegen_add(L_580, ((int32_t)(((int32_t)il2cpp_codegen_multiply(3, L_581))/5))));
		goto IL_1143;
	}

IL_112f:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_582 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_583 = L_582;
		NullCheck(L_583);
		int32_t L_584 = L_583->___bitRate;
		int32_t L_585 = V_68;
		NullCheck(L_583);
		L_583->___bitRate = ((int32_t)il2cpp_codegen_add(L_584, L_585));
	}

IL_1143:
	{
		int32_t L_586 = V_6;
		int32_t L_587 = V_68;
		int32_t L_588 = ___2_frame_size;
		int32_t L_589 = __this->___Fs;
		V_6 = ((int32_t)il2cpp_codegen_add(L_586, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_587, L_588))/((int32_t)il2cpp_codegen_multiply(8, L_589))))));
	}

IL_1155:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_590 = __this->___silk_mode;
		int32_t L_591 = ___2_frame_size;
		int32_t L_592 = __this->___Fs;
		NullCheck(L_590);
		L_590->___payloadSize_ms = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)1000), L_591))/L_592));
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_593 = __this->___silk_mode;
		int32_t L_594 = __this->___channels;
		NullCheck(L_593);
		L_593->___nChannelsAPI = L_594;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_595 = __this->___silk_mode;
		int32_t L_596 = __this->___stream_channels;
		NullCheck(L_595);
		L_595->___nChannelsInternal = L_596;
		int32_t L_597 = V_23;
		if ((!(((uint32_t)L_597) == ((uint32_t)((int32_t)1101)))))
		{
			goto IL_11ab;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_598 = __this->___silk_mode;
		NullCheck(L_598);
		L_598->___desiredInternalSampleRate = ((int32_t)8000);
		goto IL_11d6;
	}

IL_11ab:
	{
		int32_t L_599 = V_23;
		if ((!(((uint32_t)L_599) == ((uint32_t)((int32_t)1102)))))
		{
			goto IL_11c6;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_600 = __this->___silk_mode;
		NullCheck(L_600);
		L_600->___desiredInternalSampleRate = ((int32_t)12000);
		goto IL_11d6;
	}

IL_11c6:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_601 = __this->___silk_mode;
		NullCheck(L_601);
		L_601->___desiredInternalSampleRate = ((int32_t)16000);
	}

IL_11d6:
	{
		int32_t L_602 = __this->___mode;
		if ((!(((uint32_t)L_602) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_11f5;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_603 = __this->___silk_mode;
		NullCheck(L_603);
		L_603->___minInternalSampleRate = ((int32_t)16000);
		goto IL_1205;
	}

IL_11f5:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_604 = __this->___silk_mode;
		NullCheck(L_604);
		L_604->___minInternalSampleRate = ((int32_t)8000);
	}

IL_1205:
	{
		int32_t L_605 = __this->___mode;
		if ((!(((uint32_t)L_605) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_12ab;
		}
	}
	{
		int32_t L_606 = V_22;
		V_73 = L_606;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_607 = __this->___silk_mode;
		NullCheck(L_607);
		L_607->___maxInternalSampleRate = ((int32_t)16000);
		int32_t L_608 = V_21;
		if ((((int32_t)L_608) <= ((int32_t)((int32_t)50))))
		{
			goto IL_1237;
		}
	}
	{
		int32_t L_609 = V_73;
		V_73 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_609, 2))/3));
	}

IL_1237:
	{
		int32_t L_610 = V_73;
		if ((((int32_t)L_610) >= ((int32_t)((int32_t)13000))))
		{
			goto IL_1270;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_611 = __this->___silk_mode;
		NullCheck(L_611);
		L_611->___maxInternalSampleRate = ((int32_t)12000);
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_612 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_613 = __this->___silk_mode;
		NullCheck(L_613);
		int32_t L_614 = L_613->___desiredInternalSampleRate;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_615;
		L_615 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)12000), L_614, NULL);
		NullCheck(L_612);
		L_612->___desiredInternalSampleRate = L_615;
	}

IL_1270:
	{
		int32_t L_616 = V_73;
		if ((((int32_t)L_616) >= ((int32_t)((int32_t)9600))))
		{
			goto IL_12bb;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_617 = __this->___silk_mode;
		NullCheck(L_617);
		L_617->___maxInternalSampleRate = ((int32_t)8000);
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_618 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_619 = __this->___silk_mode;
		NullCheck(L_619);
		int32_t L_620 = L_619->___desiredInternalSampleRate;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_621;
		L_621 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)8000), L_620, NULL);
		NullCheck(L_618);
		L_618->___desiredInternalSampleRate = L_621;
		goto IL_12bb;
	}

IL_12ab:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_622 = __this->___silk_mode;
		NullCheck(L_622);
		L_622->___maxInternalSampleRate = ((int32_t)16000);
	}

IL_12bb:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_623 = __this->___silk_mode;
		int32_t L_624 = __this->___use_vbr;
		if (!L_624)
		{
			G_B305_0 = L_623;
			goto IL_12cc;
		}
		G_B304_0 = L_623;
	}
	{
		G_B306_0 = 0;
		G_B306_1 = G_B304_0;
		goto IL_12cd;
	}

IL_12cc:
	{
		G_B306_0 = 1;
		G_B306_1 = G_B305_0;
	}

IL_12cd:
	{
		NullCheck(G_B306_1);
		G_B306_1->___useCBR = G_B306_0;
		int32_t L_625 = V_25;
		int32_t L_626 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_627;
		L_627 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)1275), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_625, 1)), L_626)), NULL);
		V_4 = L_627;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_628 = __this->___silk_mode;
		int32_t L_629 = V_4;
		NullCheck(L_628);
		L_628->___maxBits = ((int32_t)il2cpp_codegen_multiply(L_629, 8));
		int32_t L_630 = __this->___mode;
		if ((!(((uint32_t)L_630) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_131d;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_631 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_632 = __this->___silk_mode;
		NullCheck(L_632);
		int32_t L_633 = L_632->___maxBits;
		NullCheck(L_631);
		L_631->___maxBits = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_633, ((int32_t)9)))/((int32_t)10)));
	}

IL_131d:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_634 = __this->___silk_mode;
		NullCheck(L_634);
		int32_t L_635 = L_634->___useCBR;
		if (!L_635)
		{
			goto IL_136f;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_636 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_637 = __this->___silk_mode;
		NullCheck(L_637);
		int32_t L_638 = L_637->___bitRate;
		int32_t L_639 = ___2_frame_size;
		int32_t L_640 = __this->___Fs;
		NullCheck(L_636);
		L_636->___maxBits = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_638, L_639))/((int32_t)il2cpp_codegen_multiply(L_640, 8)))), 8));
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_641 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_642 = __this->___silk_mode;
		NullCheck(L_642);
		int32_t L_643 = L_642->___bitRate;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_644;
		L_644 = Inlines_IMAX_mF826EDBD765651BC22E22C96C35C8DFB9F9176D2_inline(1, ((int32_t)il2cpp_codegen_subtract(L_643, ((int32_t)2000))), NULL);
		NullCheck(L_641);
		L_641->___bitRate = L_644;
	}

IL_136f:
	{
		int32_t L_645 = V_7;
		if (!L_645)
		{
			goto IL_141d;
		}
	}
	{
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_646 = (BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D*)il2cpp_codegen_object_new(BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D_il2cpp_TypeInfo_var);
		BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD(L_646, 0, BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD_RuntimeMethod_var);
		V_74 = L_646;
		int32_t L_647 = __this->___channels;
		int32_t L_648 = __this->___encoder_buffer;
		int32_t L_649 = __this->___delay_compensation;
		int32_t L_650 = __this->___Fs;
		V_75 = ((int32_t)il2cpp_codegen_multiply(L_647, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_648, L_649)), ((int32_t)(L_650/((int32_t)400)))))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_651 = __this->___delay_buffer;
		int32_t L_652 = V_75;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_653 = V_28;
		NullCheck(L_653);
		int32_t L_654 = L_653->___overlap;
		int32_t L_655 = __this->___Fs;
		int32_t L_656 = __this->___channels;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_657 = V_28;
		NullCheck(L_657);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_658 = L_657->___window;
		int32_t L_659 = __this->___Fs;
		CodecHelpers_gain_fade_m26704332D22E7F8E8EE5769198B4875ED7912E68(L_651, L_652, 0, ((int32_t)32767), L_654, ((int32_t)(L_655/((int32_t)400))), L_656, L_658, L_659, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_660 = __this->___delay_buffer;
		int32_t L_661 = V_75;
		Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7(L_660, (int16_t)0, L_661, Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7_RuntimeMethod_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_662 = __this->___delay_buffer;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_663 = V_63;
		int32_t L_664 = __this->___encoder_buffer;
		int32_t L_665 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_662, 0, (RuntimeArray*)L_663, 0, ((int32_t)il2cpp_codegen_multiply(L_664, L_665)), NULL);
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_666 = V_0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_667 = __this->___silk_mode;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_668 = V_63;
		int32_t L_669 = __this->___encoder_buffer;
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_670 = V_74;
		int32_t L_671;
		L_671 = EncodeAPI_silk_Encode_mAF5926287B296B28EA7C79AE8233F4AB92C1A1A3(L_666, L_667, L_668, L_669, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, L_670, 1, NULL);
	}

IL_141d:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_672 = V_12;
		int32_t L_673 = V_26;
		int32_t L_674 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_675 = V_63;
		int32_t L_676 = ___2_frame_size;
		int32_t L_677 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_672, ((int32_t)il2cpp_codegen_multiply(L_673, L_674)), (RuntimeArray*)L_675, 0, ((int32_t)il2cpp_codegen_multiply(L_676, L_677)), NULL);
		int32_t L_678 = V_4;
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_679 = (BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D*)il2cpp_codegen_object_new(BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D_il2cpp_TypeInfo_var);
		BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD(L_679, L_678, BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD_RuntimeMethod_var);
		V_64 = L_679;
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_680 = V_0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_681 = __this->___silk_mode;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_682 = V_63;
		int32_t L_683 = ___2_frame_size;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_684 = V_5;
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_685 = V_64;
		int32_t L_686;
		L_686 = EncodeAPI_silk_Encode_mAF5926287B296B28EA7C79AE8233F4AB92C1A1A3(L_680, L_681, L_682, L_683, L_684, L_685, 0, NULL);
		V_3 = L_686;
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_687 = V_64;
		NullCheck(L_687);
		int32_t L_688 = L_687->___Val;
		V_4 = L_688;
		int32_t L_689 = V_3;
		if (!L_689)
		{
			goto IL_1465;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1465:
	{
		int32_t L_690 = V_4;
		if (L_690)
		{
			goto IL_1494;
		}
	}
	{
		__this->___rangeFinal = (uint32_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_691 = ___3_data;
		int32_t L_692 = ___4_data_ptr;
		int32_t L_693 = __this->___mode;
		int32_t L_694 = __this->___Fs;
		int32_t L_695 = ___2_frame_size;
		int32_t L_696 = V_23;
		int32_t L_697 = __this->___stream_channels;
		uint8_t L_698;
		L_698 = CodecHelpers_gen_toc_m36D3043E7AE9BA3F43D6025DB507D4AB1C072773(L_693, ((int32_t)(L_694/L_695)), L_696, L_697, NULL);
		NullCheck(L_691);
		(L_691)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_692, 1))), (uint8_t)L_698);
		return 1;
	}

IL_1494:
	{
		int32_t L_699 = __this->___mode;
		if ((!(((uint32_t)L_699) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_14f0;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_700 = __this->___silk_mode;
		NullCheck(L_700);
		int32_t L_701 = L_700->___internalSampleRate;
		if ((!(((uint32_t)L_701) == ((uint32_t)((int32_t)8000)))))
		{
			goto IL_14bc;
		}
	}
	{
		V_23 = (int32_t)((int32_t)1101);
		goto IL_14f0;
	}

IL_14bc:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_702 = __this->___silk_mode;
		NullCheck(L_702);
		int32_t L_703 = L_702->___internalSampleRate;
		if ((!(((uint32_t)L_703) == ((uint32_t)((int32_t)12000)))))
		{
			goto IL_14d7;
		}
	}
	{
		V_23 = (int32_t)((int32_t)1102);
		goto IL_14f0;
	}

IL_14d7:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_704 = __this->___silk_mode;
		NullCheck(L_704);
		int32_t L_705 = L_704->___internalSampleRate;
		if ((!(((uint32_t)L_705) == ((uint32_t)((int32_t)16000)))))
		{
			goto IL_14f0;
		}
	}
	{
		V_23 = (int32_t)((int32_t)1103);
	}

IL_14f0:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_706 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_707 = __this->___silk_mode;
		NullCheck(L_707);
		int32_t L_708 = L_707->___switchReady;
		NullCheck(L_706);
		L_706->___opusCanSwitch = L_708;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_709 = __this->___silk_mode;
		NullCheck(L_709);
		int32_t L_710 = L_709->___opusCanSwitch;
		if (!L_710)
		{
			goto IL_1520;
		}
	}
	{
		V_9 = 1;
		V_11 = 0;
		__this->___silk_bw_switch = 1;
	}

IL_1520:
	{
		V_76 = ((int32_t)21);
		int32_t L_711 = V_23;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_711, ((int32_t)1101))))
		{
			case 0:
			{
				goto IL_1547;
			}
			case 1:
			{
				goto IL_154d;
			}
			case 2:
			{
				goto IL_154d;
			}
			case 3:
			{
				goto IL_1553;
			}
			case 4:
			{
				goto IL_1559;
			}
		}
	}
	{
		goto IL_155d;
	}

IL_1547:
	{
		V_76 = ((int32_t)13);
		goto IL_155d;
	}

IL_154d:
	{
		V_76 = ((int32_t)17);
		goto IL_155d;
	}

IL_1553:
	{
		V_76 = ((int32_t)19);
		goto IL_155d;
	}

IL_1559:
	{
		V_76 = ((int32_t)21);
	}

IL_155d:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_712 = V_1;
		int32_t L_713 = V_76;
		NullCheck(L_712);
		CeltEncoder_SetEndBand_m070330249160FAF5D757022B8F8189E21AEE46B4(L_712, L_713, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_714 = V_1;
		int32_t L_715 = __this->___stream_channels;
		NullCheck(L_714);
		CeltEncoder_SetChannels_m50CF4C9194D5F501CB240D886F08A0F00A7C4508(L_714, L_715, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_716 = V_1;
		NullCheck(L_716);
		CeltEncoder_SetBitrate_m2B60EDAC47731279F443E62BF5B58786005B1173(L_716, (-1), NULL);
		int32_t L_717 = __this->___mode;
		if ((((int32_t)L_717) == ((int32_t)((int32_t)1000))))
		{
			goto IL_16c3;
		}
	}
	{
		V_77 = 2;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_718 = V_1;
		NullCheck(L_718);
		CeltEncoder_SetVBR_m7C511506875FCE7374D16F807DCEB92E999370F3(L_718, (bool)0, NULL);
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_719 = __this->___silk_mode;
		NullCheck(L_719);
		int32_t L_720 = L_719->___reducedDependency;
		if (!L_720)
		{
			goto IL_15a2;
		}
	}
	{
		V_77 = 0;
	}

IL_15a2:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_721 = V_1;
		int32_t L_722 = V_77;
		NullCheck(L_721);
		CeltEncoder_SetPrediction_m10EF7A6247FF017B39312260122B5E110FA67AC0(L_721, L_722, NULL);
		int32_t L_723 = __this->___mode;
		if ((!(((uint32_t)L_723) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_161c;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_724 = V_5;
		NullCheck(L_724);
		int32_t L_725;
		L_725 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_724, NULL);
		V_78 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_725, 7))>>3));
		int32_t L_726 = V_9;
		if (!L_726)
		{
			goto IL_15de;
		}
	}
	{
		int32_t L_727 = V_78;
		int32_t L_728 = __this->___mode;
		if ((((int32_t)L_728) == ((int32_t)((int32_t)1001))))
		{
			G_B338_0 = L_727;
			goto IL_15da;
		}
		G_B337_0 = L_727;
	}
	{
		G_B339_0 = 1;
		G_B339_1 = G_B337_0;
		goto IL_15db;
	}

IL_15da:
	{
		G_B339_0 = 3;
		G_B339_1 = G_B338_0;
	}

IL_15db:
	{
		V_78 = ((int32_t)il2cpp_codegen_add(G_B339_1, G_B339_0));
	}

IL_15de:
	{
		int32_t L_729 = __this->___use_vbr;
		if (!L_729)
		{
			goto IL_1609;
		}
	}
	{
		int32_t L_730 = V_78;
		int32_t L_731 = V_6;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_732 = __this->___silk_mode;
		NullCheck(L_732);
		int32_t L_733 = L_732->___bitRate;
		int32_t L_734 = ___2_frame_size;
		int32_t L_735 = __this->___Fs;
		V_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_730, L_731)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_733, L_734))/((int32_t)il2cpp_codegen_multiply(8, L_735))))));
		goto IL_16c6;
	}

IL_1609:
	{
		int32_t L_736 = V_78;
		int32_t L_737 = V_6;
		if ((((int32_t)L_736) > ((int32_t)L_737)))
		{
			goto IL_1613;
		}
	}
	{
		int32_t L_738 = V_6;
		G_B345_0 = L_738;
		goto IL_1615;
	}

IL_1613:
	{
		int32_t L_739 = V_78;
		G_B345_0 = L_739;
	}

IL_1615:
	{
		V_13 = G_B345_0;
		goto IL_16c6;
	}

IL_161c:
	{
		int32_t L_740 = __this->___use_vbr;
		if (!L_740)
		{
			goto IL_16bd;
		}
	}
	{
		V_79 = 0;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_741 = __this->___analysis;
		NullCheck(L_741);
		bool L_742 = L_741->___enabled;
		if (!L_742)
		{
			goto IL_168d;
		}
	}
	{
		int32_t L_743 = __this->___variable_duration;
		if ((!(((uint32_t)L_743) == ((uint32_t)((int32_t)5010)))))
		{
			goto IL_168d;
		}
	}
	{
		int32_t L_744 = ___2_frame_size;
		int32_t L_745 = __this->___Fs;
		if ((((int32_t)L_744) == ((int32_t)((int32_t)(L_745/((int32_t)50))))))
		{
			goto IL_168d;
		}
	}
	{
		int32_t L_746 = __this->___stream_channels;
		int32_t L_747 = __this->___Fs;
		int32_t L_748 = ___2_frame_size;
		V_79 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)60), L_746)), ((int32_t)40))), ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_747/L_748)), ((int32_t)50)))));
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_749 = V_29;
		NullCheck(L_749);
		int32_t L_750 = L_749->___valid;
		if (!L_750)
		{
			goto IL_168d;
		}
	}
	{
		int32_t L_751 = V_79;
		float L_752 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_751,NULL));
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_753 = V_29;
		NullCheck(L_753);
		float L_754 = L_753->___tonality;
		int32_t L_755 = (il2cpp_codegen_conv<int32_t,float,float,false,false>(((float)il2cpp_codegen_multiply(L_752, ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply((0.5f), L_754)))))),NULL));
		V_79 = L_755;
	}

IL_168d:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_756 = V_1;
		NullCheck(L_756);
		CeltEncoder_SetVBR_m7C511506875FCE7374D16F807DCEB92E999370F3(L_756, (bool)1, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_757 = V_1;
		int32_t L_758 = __this->___vbr_constraint;
		NullCheck(L_757);
		CeltEncoder_SetVBRConstraint_m059C6FEBC2DBED0F70099E27CFCDFDEAEACD6671(L_757, (bool)((!(((uint32_t)L_758) <= ((uint32_t)0)))? 1 : 0), NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_759 = V_1;
		int32_t L_760 = __this->___bitrate_bps;
		int32_t L_761 = V_79;
		NullCheck(L_759);
		CeltEncoder_SetBitrate_m2B60EDAC47731279F443E62BF5B58786005B1173(L_759, ((int32_t)il2cpp_codegen_add(L_760, L_761)), NULL);
		int32_t L_762 = V_25;
		int32_t L_763 = V_10;
		V_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_762, 1)), L_763));
		goto IL_16c6;
	}

IL_16bd:
	{
		int32_t L_764 = V_6;
		V_13 = L_764;
		goto IL_16c6;
	}

IL_16c3:
	{
		V_13 = 0;
	}

IL_16c6:
	{
		int32_t L_765 = __this->___channels;
		int32_t L_766 = __this->___Fs;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_767 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_765, L_766))/((int32_t)400))));
		V_32 = L_767;
		int32_t L_768 = __this->___mode;
		if ((((int32_t)L_768) == ((int32_t)((int32_t)1000))))
		{
			goto IL_1742;
		}
	}
	{
		int32_t L_769 = __this->___mode;
		int32_t L_770 = __this->___prev_mode;
		if ((((int32_t)L_769) == ((int32_t)L_770)))
		{
			goto IL_1742;
		}
	}
	{
		int32_t L_771 = __this->___prev_mode;
		if ((((int32_t)L_771) <= ((int32_t)0)))
		{
			goto IL_1742;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_772 = __this->___delay_buffer;
		int32_t L_773 = __this->___encoder_buffer;
		int32_t L_774 = V_26;
		int32_t L_775 = __this->___Fs;
		int32_t L_776 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_777 = V_32;
		int32_t L_778 = __this->___channels;
		int32_t L_779 = __this->___Fs;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_772, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_773, L_774)), ((int32_t)(L_775/((int32_t)400))))), L_776)), (RuntimeArray*)L_777, 0, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_778, L_779))/((int32_t)400))), NULL);
	}

IL_1742:
	{
		int32_t L_780 = __this->___channels;
		int32_t L_781 = __this->___encoder_buffer;
		int32_t L_782 = ___2_frame_size;
		int32_t L_783 = V_26;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_780, ((int32_t)il2cpp_codegen_subtract(L_781, ((int32_t)il2cpp_codegen_add(L_782, L_783))))))) <= ((int32_t)0)))
		{
			goto IL_17aa;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_784 = __this->___delay_buffer;
		int32_t L_785 = __this->___channels;
		int32_t L_786 = ___2_frame_size;
		int32_t L_787 = __this->___channels;
		int32_t L_788 = __this->___encoder_buffer;
		int32_t L_789 = ___2_frame_size;
		int32_t L_790 = V_26;
		Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E(L_784, ((int32_t)il2cpp_codegen_multiply(L_785, L_786)), 0, ((int32_t)il2cpp_codegen_multiply(L_787, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_788, L_789)), L_790)))), Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E_RuntimeMethod_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_791 = V_12;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_792 = __this->___delay_buffer;
		int32_t L_793 = __this->___channels;
		int32_t L_794 = __this->___encoder_buffer;
		int32_t L_795 = ___2_frame_size;
		int32_t L_796 = V_26;
		int32_t L_797 = ___2_frame_size;
		int32_t L_798 = V_26;
		int32_t L_799 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_791, 0, (RuntimeArray*)L_792, ((int32_t)il2cpp_codegen_multiply(L_793, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_794, L_795)), L_796)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_797, L_798)), L_799)), NULL);
		goto IL_17d7;
	}

IL_17aa:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_800 = V_12;
		int32_t L_801 = ___2_frame_size;
		int32_t L_802 = V_26;
		int32_t L_803 = __this->___encoder_buffer;
		int32_t L_804 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_805 = __this->___delay_buffer;
		int32_t L_806 = __this->___encoder_buffer;
		int32_t L_807 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_800, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_801, L_802)), L_803)), L_804)), (RuntimeArray*)L_805, 0, ((int32_t)il2cpp_codegen_multiply(L_806, L_807)), NULL);
	}

IL_17d7:
	{
		int32_t L_808 = __this->___prev_HB_gain;
		if ((((int32_t)L_808) < ((int32_t)((int32_t)32767))))
		{
			goto IL_17ed;
		}
	}
	{
		int32_t L_809 = V_24;
		if ((((int32_t)L_809) >= ((int32_t)((int32_t)32767))))
		{
			goto IL_1818;
		}
	}

IL_17ed:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_810 = V_12;
		int32_t L_811 = __this->___prev_HB_gain;
		int32_t L_812 = V_24;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_813 = V_28;
		NullCheck(L_813);
		int32_t L_814 = L_813->___overlap;
		int32_t L_815 = ___2_frame_size;
		int32_t L_816 = __this->___channels;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_817 = V_28;
		NullCheck(L_817);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_818 = L_817->___window;
		int32_t L_819 = __this->___Fs;
		CodecHelpers_gain_fade_m26704332D22E7F8E8EE5769198B4875ED7912E68(L_810, 0, L_811, L_812, L_814, L_815, L_816, L_818, L_819, NULL);
	}

IL_1818:
	{
		int32_t L_820 = V_24;
		__this->___prev_HB_gain = L_820;
		int32_t L_821 = __this->___mode;
		if ((!(((uint32_t)L_821) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_1836;
		}
	}
	{
		int32_t L_822 = __this->___stream_channels;
		if ((!(((uint32_t)L_822) == ((uint32_t)1))))
		{
			goto IL_185b;
		}
	}

IL_1836:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_823 = __this->___silk_mode;
		int32_t L_824 = V_19;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_825;
		L_825 = Inlines_IMAX_mF826EDBD765651BC22E22C96C35C8DFB9F9176D2_inline(0, ((int32_t)il2cpp_codegen_subtract(L_824, ((int32_t)30000))), NULL);
		int32_t L_826;
		L_826 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)16384), ((int32_t)il2cpp_codegen_multiply(2, L_825)), NULL);
		NullCheck(L_823);
		L_823->___stereoWidth_Q14 = L_826;
	}

IL_185b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_827 = __this->___energy_masking;
		if (L_827)
		{
			goto IL_1915;
		}
	}
	{
		int32_t L_828 = __this->___channels;
		if ((!(((uint32_t)L_828) == ((uint32_t)2))))
		{
			goto IL_1915;
		}
	}
	{
		int16_t L_829 = __this->___hybrid_stereo_width_Q14;
		if ((((int32_t)L_829) < ((int32_t)((int32_t)16384))))
		{
			goto IL_1894;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_830 = __this->___silk_mode;
		NullCheck(L_830);
		int32_t L_831 = L_830->___stereoWidth_Q14;
		if ((((int32_t)L_831) >= ((int32_t)((int32_t)16384))))
		{
			goto IL_1915;
		}
	}

IL_1894:
	{
		int16_t L_832 = __this->___hybrid_stereo_width_Q14;
		V_80 = (int32_t)L_832;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_833 = __this->___silk_mode;
		NullCheck(L_833);
		int32_t L_834 = L_833->___stereoWidth_Q14;
		V_81 = L_834;
		int32_t L_835 = V_80;
		if ((((int32_t)L_835) == ((int32_t)((int32_t)16384))))
		{
			goto IL_18bc;
		}
	}
	{
		int32_t L_836 = V_80;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_837;
		L_837 = Inlines_SHL16_m768B89D36A8CC1CA8F33C9FCFB60981068D424F0_inline(L_836, 1, NULL);
		G_B375_0 = L_837;
		goto IL_18c1;
	}

IL_18bc:
	{
		G_B375_0 = ((int32_t)32767);
	}

IL_18c1:
	{
		V_80 = G_B375_0;
		int32_t L_838 = V_81;
		if ((((int32_t)L_838) == ((int32_t)((int32_t)16384))))
		{
			goto IL_18d6;
		}
	}
	{
		int32_t L_839 = V_81;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_840;
		L_840 = Inlines_SHL16_m768B89D36A8CC1CA8F33C9FCFB60981068D424F0_inline(L_839, 1, NULL);
		G_B378_0 = L_840;
		goto IL_18db;
	}

IL_18d6:
	{
		G_B378_0 = ((int32_t)32767);
	}

IL_18db:
	{
		V_81 = G_B378_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_841 = V_12;
		int32_t L_842 = V_80;
		int32_t L_843 = V_81;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_844 = V_28;
		NullCheck(L_844);
		int32_t L_845 = L_844->___overlap;
		int32_t L_846 = ___2_frame_size;
		int32_t L_847 = __this->___channels;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_848 = V_28;
		NullCheck(L_848);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_849 = L_848->___window;
		int32_t L_850 = __this->___Fs;
		CodecHelpers_stereo_fade_m62DCD7281AF01A177277B2D1B37486951913E63D(L_841, L_842, L_843, L_845, L_846, L_847, L_849, L_850, NULL);
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_851 = __this->___silk_mode;
		NullCheck(L_851);
		int32_t L_852 = L_851->___stereoWidth_Q14;
		int16_t L_853 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_852,NULL));
		__this->___hybrid_stereo_width_Q14 = L_853;
	}

IL_1915:
	{
		int32_t L_854 = __this->___mode;
		if ((((int32_t)L_854) == ((int32_t)((int32_t)1002))))
		{
			goto IL_19fb;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_855 = V_5;
		NullCheck(L_855);
		int32_t L_856;
		L_856 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_855, NULL);
		int32_t L_857 = __this->___mode;
		if ((((int32_t)L_857) == ((int32_t)((int32_t)1001))))
		{
			G_B382_0 = ((int32_t)20);
			G_B382_1 = ((int32_t)il2cpp_codegen_add(L_856, ((int32_t)17)));
			goto IL_1941;
		}
		G_B381_0 = ((int32_t)20);
		G_B381_1 = ((int32_t)il2cpp_codegen_add(L_856, ((int32_t)17)));
	}
	{
		G_B383_0 = 0;
		G_B383_1 = G_B381_0;
		G_B383_2 = G_B381_1;
		goto IL_1942;
	}

IL_1941:
	{
		G_B383_0 = 1;
		G_B383_1 = G_B382_0;
		G_B383_2 = G_B382_1;
	}

IL_1942:
	{
		int32_t L_858 = V_25;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(G_B383_2, ((int32_t)il2cpp_codegen_multiply(G_B383_1, G_B383_0))))) > ((int32_t)((int32_t)il2cpp_codegen_multiply(8, ((int32_t)il2cpp_codegen_subtract(L_858, 1)))))))
		{
			goto IL_19fb;
		}
	}
	{
		int32_t L_859 = __this->___mode;
		if ((!(((uint32_t)L_859) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_197b;
		}
	}
	{
		int32_t L_860 = V_9;
		if (L_860)
		{
			goto IL_1970;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_861 = V_5;
		NullCheck(L_861);
		int32_t L_862;
		L_862 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_861, NULL);
		int32_t L_863 = V_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_862, ((int32_t)37)))) > ((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_863)))))
		{
			goto IL_197b;
		}
	}

IL_1970:
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_864 = V_5;
		int32_t L_865 = V_9;
		NullCheck(L_864);
		EntropyCoder_enc_bit_logp_mA5A97FA79C53558E3D593C6055C553A5AE849771(L_864, L_865, (uint32_t)((int32_t)12), NULL);
	}

IL_197b:
	{
		int32_t L_866 = V_9;
		if (!L_866)
		{
			goto IL_19fe;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_867 = V_5;
		int32_t L_868 = V_11;
		NullCheck(L_867);
		EntropyCoder_enc_bit_logp_mA5A97FA79C53558E3D593C6055C553A5AE849771(L_867, L_868, (uint32_t)1, NULL);
		int32_t L_869 = __this->___mode;
		if ((!(((uint32_t)L_869) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_19a1;
		}
	}
	{
		int32_t L_870 = V_25;
		int32_t L_871 = V_13;
		V_82 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_870, 1)), L_871));
		goto IL_19b3;
	}

IL_19a1:
	{
		int32_t L_872 = V_25;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_873 = V_5;
		NullCheck(L_873);
		int32_t L_874;
		L_874 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_873, NULL);
		V_82 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_872, 1)), ((int32_t)(((int32_t)il2cpp_codegen_add(L_874, 7))>>3))));
	}

IL_19b3:
	{
		int32_t L_875 = V_82;
		int32_t L_876 = __this->___bitrate_bps;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_877;
		L_877 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(L_875, ((int32_t)(L_876/((int32_t)1600))), NULL);
		V_10 = L_877;
		int32_t L_878 = V_10;
		int32_t L_879;
		L_879 = Inlines_IMAX_mF826EDBD765651BC22E22C96C35C8DFB9F9176D2_inline(2, L_878, NULL);
		int32_t L_880;
		L_880 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)257), L_879, NULL);
		V_10 = L_880;
		int32_t L_881 = __this->___mode;
		if ((!(((uint32_t)L_881) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_19fe;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_882 = V_5;
		int32_t L_883 = V_10;
		NullCheck(L_882);
		EntropyCoder_enc_uint_mC2D55A26DDAFEE3BCD9D5BB4E963BC6830D7416F(L_882, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_883, 2)), (uint32_t)((int32_t)256), NULL);
		goto IL_19fe;
	}

IL_19fb:
	{
		V_9 = 0;
	}

IL_19fe:
	{
		int32_t L_884 = V_9;
		if (L_884)
		{
			goto IL_1a0c;
		}
	}
	{
		__this->___silk_bw_switch = 0;
		V_10 = 0;
	}

IL_1a0c:
	{
		int32_t L_885 = __this->___mode;
		if ((((int32_t)L_885) == ((int32_t)((int32_t)1002))))
		{
			goto IL_1a1d;
		}
	}
	{
		V_8 = ((int32_t)17);
	}

IL_1a1d:
	{
		int32_t L_886 = __this->___mode;
		if ((!(((uint32_t)L_886) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_1a42;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_887 = V_5;
		NullCheck(L_887);
		int32_t L_888;
		L_888 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_887, NULL);
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_888, 7))>>3));
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_889 = V_5;
		NullCheck(L_889);
		EntropyCoder_enc_done_mCD60036BB229EF7821D76F440AE65BA28B856B60(L_889, NULL);
		int32_t L_890 = V_3;
		V_13 = L_890;
		goto IL_1a5b;
	}

IL_1a42:
	{
		int32_t L_891 = V_25;
		int32_t L_892 = V_10;
		int32_t L_893 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_894;
		L_894 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_891, 1)), L_892)), L_893, NULL);
		V_13 = L_894;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_895 = V_5;
		int32_t L_896 = V_13;
		NullCheck(L_895);
		EntropyCoder_enc_shrink_m681ECDF029CD15A3BCC795140148DC5FFDDC327C(L_895, (uint32_t)L_896, NULL);
	}

IL_1a5b:
	{
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_897 = __this->___analysis;
		NullCheck(L_897);
		bool L_898 = L_897->___enabled;
		if (!L_898)
		{
			goto IL_1a6c;
		}
	}
	{
		int32_t L_899 = V_9;
		if (L_899)
		{
			goto IL_1a79;
		}
	}

IL_1a6c:
	{
		int32_t L_900 = __this->___mode;
		if ((((int32_t)L_900) == ((int32_t)((int32_t)1000))))
		{
			goto IL_1a93;
		}
	}

IL_1a79:
	{
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_901 = V_29;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_902 = __this->___analysis;
		NullCheck(L_902);
		bool L_903 = L_902->___enabled;
		NullCheck(L_901);
		L_901->___enabled = L_903;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_904 = V_1;
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_905 = V_29;
		NullCheck(L_904);
		CeltEncoder_SetAnalysis_mEB032D63E6F6E4AA45765EA3AF736D7554DA5411(L_904, L_905, NULL);
	}

IL_1a93:
	{
		int32_t L_906 = V_9;
		if (!L_906)
		{
			goto IL_1adc;
		}
	}
	{
		int32_t L_907 = V_11;
		if (!L_907)
		{
			goto IL_1adc;
		}
	}
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_908 = V_1;
		NullCheck(L_908);
		CeltEncoder_SetStartBand_m2E9281A33555F11C4CEE4832A2E85F56D9CADE1F(L_908, 0, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_909 = V_1;
		NullCheck(L_909);
		CeltEncoder_SetVBR_m7C511506875FCE7374D16F807DCEB92E999370F3(L_909, (bool)0, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_910 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_911 = V_12;
		int32_t L_912 = __this->___Fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_913 = ___3_data;
		int32_t L_914 = ___4_data_ptr;
		int32_t L_915 = V_13;
		int32_t L_916 = V_10;
		NullCheck(L_910);
		int32_t L_917;
		L_917 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_910, L_911, 0, ((int32_t)(L_912/((int32_t)200))), L_913, ((int32_t)il2cpp_codegen_add(L_914, L_915)), L_916, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, NULL);
		if ((((int32_t)L_917) >= ((int32_t)0)))
		{
			goto IL_1ace;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1ace:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_918 = V_1;
		NullCheck(L_918);
		uint32_t L_919;
		L_919 = CeltEncoder_GetFinalRange_m2092F8FCA30E8FAA7776C95301B7356C1C6A698A_inline(L_918, NULL);
		V_15 = L_919;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_920 = V_1;
		NullCheck(L_920);
		CeltEncoder_ResetState_mB75E57E79EFAD09094038C584BCF675F90EFA1E7(L_920, NULL);
	}

IL_1adc:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_921 = V_1;
		int32_t L_922 = V_8;
		NullCheck(L_921);
		CeltEncoder_SetStartBand_m2E9281A33555F11C4CEE4832A2E85F56D9CADE1F(L_921, L_922, NULL);
		int32_t L_923 = __this->___mode;
		if ((((int32_t)L_923) == ((int32_t)((int32_t)1000))))
		{
			goto IL_1b5d;
		}
	}
	{
		int32_t L_924 = __this->___mode;
		int32_t L_925 = __this->___prev_mode;
		if ((((int32_t)L_924) == ((int32_t)L_925)))
		{
			goto IL_1b38;
		}
	}
	{
		int32_t L_926 = __this->___prev_mode;
		if ((((int32_t)L_926) <= ((int32_t)0)))
		{
			goto IL_1b38;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_927 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_83 = L_927;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_928 = V_1;
		NullCheck(L_928);
		CeltEncoder_ResetState_mB75E57E79EFAD09094038C584BCF675F90EFA1E7(L_928, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_929 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_930 = V_32;
		int32_t L_931 = __this->___Fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_932 = V_83;
		NullCheck(L_929);
		int32_t L_933;
		L_933 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_929, L_930, 0, ((int32_t)(L_931/((int32_t)400))), L_932, 0, 2, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_934 = V_1;
		NullCheck(L_934);
		CeltEncoder_SetPrediction_m10EF7A6247FF017B39312260122B5E110FA67AC0(L_934, 0, NULL);
	}

IL_1b38:
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_935 = V_5;
		NullCheck(L_935);
		int32_t L_936;
		L_936 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_935, NULL);
		int32_t L_937 = V_13;
		if ((((int32_t)L_936) > ((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_937)))))
		{
			goto IL_1b5d;
		}
	}
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_938 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_939 = V_12;
		int32_t L_940 = ___2_frame_size;
		int32_t L_941 = V_13;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_942 = V_5;
		NullCheck(L_938);
		int32_t L_943;
		L_943 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_938, L_939, 0, L_940, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, L_941, L_942, NULL);
		V_3 = L_943;
		int32_t L_944 = V_3;
		if ((((int32_t)L_944) >= ((int32_t)0)))
		{
			goto IL_1b5d;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1b5d:
	{
		int32_t L_945 = V_9;
		if (!L_945)
		{
			goto IL_1bee;
		}
	}
	{
		int32_t L_946 = V_11;
		if (L_946)
		{
			goto IL_1bee;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_947 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_84 = L_947;
		int32_t L_948 = __this->___Fs;
		V_85 = ((int32_t)(L_948/((int32_t)200)));
		int32_t L_949 = __this->___Fs;
		V_86 = ((int32_t)(L_949/((int32_t)400)));
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_950 = V_1;
		NullCheck(L_950);
		CeltEncoder_ResetState_mB75E57E79EFAD09094038C584BCF675F90EFA1E7(L_950, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_951 = V_1;
		NullCheck(L_951);
		CeltEncoder_SetStartBand_m2E9281A33555F11C4CEE4832A2E85F56D9CADE1F(L_951, 0, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_952 = V_1;
		NullCheck(L_952);
		CeltEncoder_SetPrediction_m10EF7A6247FF017B39312260122B5E110FA67AC0(L_952, 0, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_953 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_954 = V_12;
		int32_t L_955 = __this->___channels;
		int32_t L_956 = ___2_frame_size;
		int32_t L_957 = V_85;
		int32_t L_958 = V_86;
		int32_t L_959 = V_86;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_960 = V_84;
		NullCheck(L_953);
		int32_t L_961;
		L_961 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_953, L_954, ((int32_t)il2cpp_codegen_multiply(L_955, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_956, L_957)), L_958)))), L_959, L_960, 0, 2, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_962 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_963 = V_12;
		int32_t L_964 = __this->___channels;
		int32_t L_965 = ___2_frame_size;
		int32_t L_966 = V_85;
		int32_t L_967 = V_85;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_968 = ___3_data;
		int32_t L_969 = ___4_data_ptr;
		int32_t L_970 = V_13;
		int32_t L_971 = V_10;
		NullCheck(L_962);
		int32_t L_972;
		L_972 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_962, L_963, ((int32_t)il2cpp_codegen_multiply(L_964, ((int32_t)il2cpp_codegen_subtract(L_965, L_966)))), L_967, L_968, ((int32_t)il2cpp_codegen_add(L_969, L_970)), L_971, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, NULL);
		if ((((int32_t)L_972) >= ((int32_t)0)))
		{
			goto IL_1be6;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1be6:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_973 = V_1;
		NullCheck(L_973);
		uint32_t L_974;
		L_974 = CeltEncoder_GetFinalRange_m2092F8FCA30E8FAA7776C95301B7356C1C6A698A_inline(L_973, NULL);
		V_15 = L_974;
	}

IL_1bee:
	{
		int32_t L_975 = ___4_data_ptr;
		___4_data_ptr = ((int32_t)il2cpp_codegen_subtract(L_975, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_976 = ___3_data;
		int32_t L_977 = ___4_data_ptr;
		int32_t L_978 = __this->___mode;
		int32_t L_979 = __this->___Fs;
		int32_t L_980 = ___2_frame_size;
		int32_t L_981 = V_23;
		int32_t L_982 = __this->___stream_channels;
		uint8_t L_983;
		L_983 = CodecHelpers_gen_toc_m36D3043E7AE9BA3F43D6025DB507D4AB1C072773(L_978, ((int32_t)(L_979/L_980)), L_981, L_982, NULL);
		NullCheck(L_976);
		(L_976)->SetAt(static_cast<il2cpp_array_size_t>(L_977), (uint8_t)L_983);
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_984 = V_5;
		NullCheck(L_984);
		uint32_t L_985 = L_984->___rng;
		uint32_t L_986 = V_15;
		__this->___rangeFinal = (uint32_t)((int32_t)((int32_t)L_985^(int32_t)L_986));
		int32_t L_987 = V_14;
		if (!L_987)
		{
			goto IL_1c35;
		}
	}
	{
		__this->___prev_mode = (int32_t)((int32_t)1002);
		goto IL_1c41;
	}

IL_1c35:
	{
		int32_t L_988 = __this->___mode;
		__this->___prev_mode = L_988;
	}

IL_1c41:
	{
		int32_t L_989 = __this->___stream_channels;
		__this->___prev_channels = L_989;
		int32_t L_990 = ___2_frame_size;
		__this->___prev_framesize = L_990;
		__this->___first = 0;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_991 = V_5;
		NullCheck(L_991);
		int32_t L_992;
		L_992 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_991, NULL);
		int32_t L_993 = V_25;
		if ((((int32_t)L_992) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_993, 1)), 8)))))
		{
			goto IL_1c85;
		}
	}
	{
		int32_t L_994 = V_25;
		if ((((int32_t)L_994) >= ((int32_t)2)))
		{
			goto IL_1c72;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_1c72:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_995 = ___3_data;
		int32_t L_996 = ___4_data_ptr;
		NullCheck(L_995);
		(L_995)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_996, 1))), (uint8_t)0);
		V_3 = 1;
		__this->___rangeFinal = (uint32_t)0;
		goto IL_1ca9;
	}

IL_1c85:
	{
		int32_t L_997 = __this->___mode;
		if ((!(((uint32_t)L_997) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_1ca9;
		}
	}
	{
		int32_t L_998 = V_9;
		if (L_998)
		{
			goto IL_1ca9;
		}
	}
	{
		goto IL_1c9c;
	}

IL_1c98:
	{
		int32_t L_999 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_999, 1));
	}

IL_1c9c:
	{
		int32_t L_1000 = V_3;
		if ((((int32_t)L_1000) <= ((int32_t)2)))
		{
			goto IL_1ca9;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1001 = ___3_data;
		int32_t L_1002 = ___4_data_ptr;
		int32_t L_1003 = V_3;
		NullCheck(L_1001);
		int32_t L_1004 = ((int32_t)il2cpp_codegen_add(L_1002, L_1003));
		uint8_t L_1005 = (L_1001)->GetAt(static_cast<il2cpp_array_size_t>(L_1004));
		if (!L_1005)
		{
			goto IL_1c98;
		}
	}

IL_1ca9:
	{
		int32_t L_1006 = V_3;
		int32_t L_1007 = V_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1006, ((int32_t)il2cpp_codegen_add(1, L_1007))));
		int32_t L_1008 = __this->___use_vbr;
		if (L_1008)
		{
			goto IL_1ccc;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1009 = ___3_data;
		int32_t L_1010 = ___4_data_ptr;
		int32_t L_1011 = V_3;
		int32_t L_1012 = V_25;
		int32_t L_1013;
		L_1013 = OpusRepacketizer_PadPacket_m73673282B4FEE94293683AA943B65F1DED670723(L_1009, L_1010, L_1011, L_1012, NULL);
		if (!L_1013)
		{
			goto IL_1cc9;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1cc9:
	{
		int32_t L_1014 = V_25;
		V_3 = L_1014;
	}

IL_1ccc:
	{
		int32_t L_1015 = V_3;
		return L_1015;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpusEncoder_opus_encode_native_TisIl2CppFullySharedGenericAny_mF06A99BC83A88345894B43E4C8C94A5D4F156F3A_gshared (OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_pcm, int32_t ___1_pcm_ptr, int32_t ___2_frame_size, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_data, int32_t ___4_data_ptr, int32_t ___5_out_data_bytes, int32_t ___6_lsb_depth, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___7_analysis_pcm, int32_t ___8_analysis_pcm_ptr, int32_t ___9_analysis_size, int32_t ___10_c1, int32_t ___11_c2, int32_t ___12_analysis_channels, downmix_func_1_t6BAA4EE8298FE6F3965456CDD78095618EE9C4D3* ___13_downmix, int32_t ___14_float_api, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* V_0 = NULL;
	CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* V_28 = NULL;
	AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* V_29 = NULL;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_32 = NULL;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* V_42 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_43 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_44 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_45 = NULL;
	int32_t V_46 = 0;
	int32_t V_47 = 0;
	int32_t V_48 = 0;
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_51 = NULL;
	int32_t V_52 = 0;
	int32_t V_53 = 0;
	int32_t V_54 = 0;
	int32_t V_55 = 0;
	int32_t V_56 = 0;
	OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* V_57 = NULL;
	int32_t V_58 = 0;
	int32_t V_59 = 0;
	int32_t V_60 = 0;
	int32_t V_61 = 0;
	int32_t V_62 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_63 = NULL;
	BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* V_64 = NULL;
	int32_t V_65 = 0;
	int32_t V_66 = 0;
	int32_t V_67 = 0;
	int32_t V_68 = 0;
	int32_t V_69 = 0;
	int32_t V_70 = 0;
	int16_t V_71 = 0;
	int32_t V_72 = 0;
	int32_t V_73 = 0;
	BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* V_74 = NULL;
	int32_t V_75 = 0;
	int32_t V_76 = 0;
	int32_t V_77 = 0;
	int32_t V_78 = 0;
	int32_t V_79 = 0;
	int32_t V_80 = 0;
	int32_t V_81 = 0;
	int32_t V_82 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_83 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_84 = NULL;
	int32_t V_85 = 0;
	int32_t V_86 = 0;
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* G_B18_0 = NULL;
	TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* G_B18_1 = NULL;
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* G_B17_0 = NULL;
	TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* G_B17_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B19_0 = NULL;
	CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* G_B19_1 = NULL;
	TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* G_B19_2 = NULL;
	int32_t G_B46_0 = 0;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B84_0 = NULL;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B83_0 = NULL;
	int32_t G_B85_0 = 0;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B85_1 = NULL;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B98_0 = NULL;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B97_0 = NULL;
	int32_t G_B99_0 = 0;
	OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E* G_B99_1 = NULL;
	int32_t G_B113_0 = 0;
	int32_t G_B112_0 = 0;
	int32_t G_B114_0 = 0;
	int32_t G_B114_1 = 0;
	int32_t G_B131_0 = 0;
	int32_t G_B214_0 = 0;
	int32_t G_B232_0 = 0;
	int32_t G_B232_1 = 0;
	int32_t G_B232_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B232_3 = NULL;
	int32_t G_B232_4 = 0;
	int32_t G_B232_5 = 0;
	OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* G_B232_6 = NULL;
	int32_t G_B231_0 = 0;
	int32_t G_B231_1 = 0;
	int32_t G_B231_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B231_3 = NULL;
	int32_t G_B231_4 = 0;
	int32_t G_B231_5 = 0;
	OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* G_B231_6 = NULL;
	int32_t G_B233_0 = 0;
	int32_t G_B233_1 = 0;
	int32_t G_B233_2 = 0;
	int32_t G_B233_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B233_4 = NULL;
	int32_t G_B233_5 = 0;
	int32_t G_B233_6 = 0;
	OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* G_B233_7 = NULL;
	int32_t G_B252_0 = 0;
	int32_t G_B252_1 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B252_2 = NULL;
	int32_t G_B251_0 = 0;
	int32_t G_B251_1 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B251_2 = NULL;
	int32_t G_B253_0 = 0;
	int32_t G_B253_1 = 0;
	int32_t G_B253_2 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B253_3 = NULL;
	int32_t G_B262_0 = 0;
	int32_t G_B265_0 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B305_0 = NULL;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B304_0 = NULL;
	int32_t G_B306_0 = 0;
	EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* G_B306_1 = NULL;
	int32_t G_B338_0 = 0;
	int32_t G_B337_0 = 0;
	int32_t G_B339_0 = 0;
	int32_t G_B339_1 = 0;
	int32_t G_B345_0 = 0;
	int32_t G_B375_0 = 0;
	int32_t G_B378_0 = 0;
	int32_t G_B382_0 = 0;
	int32_t G_B382_1 = 0;
	int32_t G_B381_0 = 0;
	int32_t G_B381_1 = 0;
	int32_t G_B383_0 = 0;
	int32_t G_B383_1 = 0;
	int32_t G_B383_2 = 0;
	{
		V_3 = 0;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_0 = (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)il2cpp_codegen_object_new(EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A_il2cpp_TypeInfo_var);
		EntropyCoder__ctor_m25C7C7999A3D8436E66648B462B3E45F004B297C(L_0, NULL);
		V_5 = L_0;
		V_7 = 0;
		V_8 = 0;
		V_9 = 0;
		V_10 = 0;
		V_11 = 0;
		V_14 = 0;
		V_15 = (uint32_t)0;
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_1 = (AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2*)il2cpp_codegen_object_new(AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2_il2cpp_TypeInfo_var);
		AnalysisInfo__ctor_mFE8D82FB07AE0D7CAD9DDD44727826313BAD34AB(L_1, NULL);
		V_29 = L_1;
		V_30 = (-1);
		V_31 = (-1);
		int32_t L_2 = ___5_out_data_bytes;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)1276), L_2, NULL);
		V_25 = L_3;
		__this->___rangeFinal = (uint32_t)0;
		int32_t L_4 = __this->___variable_duration;
		if (L_4)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_5 = ___2_frame_size;
		int32_t L_6 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)400), L_5))) == ((int32_t)L_6)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_7 = ___2_frame_size;
		int32_t L_8 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)200), L_7))) == ((int32_t)L_8)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_9 = ___2_frame_size;
		int32_t L_10 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)100), L_9))) == ((int32_t)L_10)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_11 = ___2_frame_size;
		int32_t L_12 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)50), L_11))) == ((int32_t)L_12)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_13 = ___2_frame_size;
		int32_t L_14 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)25), L_13))) == ((int32_t)L_14)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_15 = ___2_frame_size;
		int32_t L_16 = __this->___Fs;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)50), L_15))) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(3, L_16))))))
		{
			goto IL_00ac;
		}
	}

IL_0098:
	{
		int32_t L_17 = ___2_frame_size;
		int32_t L_18 = __this->___Fs;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)400), L_17))) < ((int32_t)L_18)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_19 = V_25;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}

IL_00ac:
	{
		return (-1);
	}

IL_00ae:
	{
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_20 = __this->___SilkEncoder;
		V_0 = L_20;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_21 = __this->___Celt_Encoder;
		V_1 = L_21;
		int32_t L_22 = __this->___application;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)2051)))))
		{
			goto IL_00ce;
		}
	}
	{
		V_20 = 0;
		goto IL_00d6;
	}

IL_00ce:
	{
		int32_t L_23 = __this->___delay_compensation;
		V_20 = L_23;
	}

IL_00d6:
	{
		int32_t L_24 = ___6_lsb_depth;
		int32_t L_25 = __this->___lsb_depth;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(L_24, L_25, NULL);
		___6_lsb_depth = L_26;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_27 = V_1;
		NullCheck(L_27);
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_28;
		L_28 = CeltEncoder_GetMode_m51A6C31A1CCF60B36D8EAEB3F95A5D0D918A01C4_inline(L_27, NULL);
		V_28 = L_28;
		__this->___voice_ratio = (-1);
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_29 = __this->___analysis;
		NullCheck(L_29);
		bool L_30 = L_29->___enabled;
		if (!L_30)
		{
			goto IL_0214;
		}
	}
	{
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_31 = V_29;
		NullCheck(L_31);
		L_31->___valid = 0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_32 = __this->___silk_mode;
		NullCheck(L_32);
		int32_t L_33 = L_32->___complexity;
		if ((((int32_t)L_33) < ((int32_t)7)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_34 = __this->___Fs;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)48000)))))
		{
			goto IL_016e;
		}
	}
	{
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_35 = __this->___analysis;
		NullCheck(L_35);
		int32_t L_36 = L_35->___read_pos;
		V_30 = L_36;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_37 = __this->___analysis;
		NullCheck(L_37);
		int32_t L_38 = L_37->___read_subframe;
		V_31 = L_38;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_39 = __this->___analysis;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_40 = V_28;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_41 = ___7_analysis_pcm;
		if (L_41)
		{
			G_B18_0 = L_40;
			G_B18_1 = L_39;
			goto IL_0150;
		}
		G_B17_0 = L_40;
		G_B17_1 = L_39;
	}
	{
		G_B19_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(NULL));
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_0152;
	}

IL_0150:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = ___7_analysis_pcm;
		G_B19_0 = L_42;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_0152:
	{
		int32_t L_43 = ___8_analysis_pcm_ptr;
		int32_t L_44 = ___9_analysis_size;
		int32_t L_45 = ___2_frame_size;
		int32_t L_46 = ___10_c1;
		int32_t L_47 = ___11_c2;
		int32_t L_48 = ___12_analysis_channels;
		int32_t L_49 = __this->___Fs;
		int32_t L_50 = ___6_lsb_depth;
		downmix_func_1_t6BAA4EE8298FE6F3965456CDD78095618EE9C4D3* L_51 = ___13_downmix;
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_52 = V_29;
		((  void (*) (TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447*, CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, downmix_func_1_t6BAA4EE8298FE6F3965456CDD78095618EE9C4D3*, AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(G_B19_2, G_B19_1, G_B19_0, L_43, L_44, L_45, L_46, L_47, L_48, L_49, L_50, L_51, L_52, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_016e:
	{
		__this->___detected_bandwidth = (int32_t)0;
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_53 = V_29;
		NullCheck(L_53);
		int32_t L_54 = L_53->___valid;
		if (!L_54)
		{
			goto IL_0214;
		}
	}
	{
		int32_t L_55 = __this->___signal_type;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)-1000)))))
		{
			goto IL_01b4;
		}
	}
	{
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_56 = V_29;
		NullCheck(L_56);
		float L_57 = L_56->___music_prob;
		double L_58 = (il2cpp_codegen_conv<double,float,float,false,false>(((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply((100.0f), ((float)il2cpp_codegen_subtract((1.0f), L_57)))))),NULL));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_59;
		L_59 = floor(L_58);
		int32_t L_60 = (il2cpp_codegen_conv<int32_t,double,double,false,false>(L_59,NULL));
		__this->___voice_ratio = L_60;
	}

IL_01b4:
	{
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_61 = V_29;
		NullCheck(L_61);
		int32_t L_62 = L_61->___bandwidth;
		V_33 = L_62;
		int32_t L_63 = V_33;
		if ((((int32_t)L_63) > ((int32_t)((int32_t)12))))
		{
			goto IL_01d0;
		}
	}
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1101);
		goto IL_0214;
	}

IL_01d0:
	{
		int32_t L_64 = V_33;
		if ((((int32_t)L_64) > ((int32_t)((int32_t)14))))
		{
			goto IL_01e3;
		}
	}
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1102);
		goto IL_0214;
	}

IL_01e3:
	{
		int32_t L_65 = V_33;
		if ((((int32_t)L_65) > ((int32_t)((int32_t)16))))
		{
			goto IL_01f6;
		}
	}
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1103);
		goto IL_0214;
	}

IL_01f6:
	{
		int32_t L_66 = V_33;
		if ((((int32_t)L_66) > ((int32_t)((int32_t)18))))
		{
			goto IL_0209;
		}
	}
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1104);
		goto IL_0214;
	}

IL_0209:
	{
		__this->___detected_bandwidth = (int32_t)((int32_t)1105);
	}

IL_0214:
	{
		int32_t L_67 = __this->___channels;
		if ((!(((uint32_t)L_67) == ((uint32_t)2))))
		{
			goto IL_023e;
		}
	}
	{
		int32_t L_68 = __this->___force_channels;
		if ((((int32_t)L_68) == ((int32_t)1)))
		{
			goto IL_023e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_69 = ___0_pcm;
		int32_t L_70 = ___1_pcm_ptr;
		int32_t L_71 = ___2_frame_size;
		int32_t L_72 = __this->___Fs;
		StereoWidthState_tF25794762BEB382FD8D450D2C8D2B96CCBE60FBB* L_73 = __this->___width_mem;
		int32_t L_74;
		L_74 = CodecHelpers_compute_stereo_width_m5C127400C31A1D98227D88461EE89484B2BBB003(L_69, L_70, L_71, L_72, L_73, NULL);
		V_27 = L_74;
		goto IL_0241;
	}

IL_023e:
	{
		V_27 = 0;
	}

IL_0241:
	{
		int32_t L_75 = V_20;
		V_26 = L_75;
		int32_t L_76 = ___2_frame_size;
		int32_t L_77 = V_25;
		int32_t L_78;
		L_78 = OpusEncoder_user_bitrate_to_bitrate_m49D5722068434C645F19C61C577B66506D95F317(__this, L_76, L_77, NULL);
		__this->___bitrate_bps = L_78;
		int32_t L_79 = __this->___Fs;
		int32_t L_80 = ___2_frame_size;
		V_21 = ((int32_t)(L_79/L_80));
		int32_t L_81 = __this->___use_vbr;
		if (L_81)
		{
			goto IL_02a0;
		}
	}
	{
		int32_t L_82 = __this->___Fs;
		int32_t L_83 = ___2_frame_size;
		V_35 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(3, L_82))/L_83));
		int32_t L_84 = __this->___bitrate_bps;
		int32_t L_85 = V_35;
		int32_t L_86 = V_35;
		int32_t L_87 = V_25;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_88;
		L_88 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(3, L_84))/8)), ((int32_t)(L_85/2))))/L_86)), L_87, NULL);
		V_34 = L_88;
		int32_t L_89 = V_34;
		int32_t L_90 = V_35;
		__this->___bitrate_bps = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_89, L_90)), 8))/3));
		int32_t L_91 = V_34;
		V_25 = L_91;
	}

IL_02a0:
	{
		int32_t L_92 = V_25;
		if ((((int32_t)L_92) < ((int32_t)3)))
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_93 = __this->___bitrate_bps;
		int32_t L_94 = V_21;
		if ((((int32_t)L_93) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, L_94)), 8)))))
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_95 = V_21;
		if ((((int32_t)L_95) >= ((int32_t)((int32_t)50))))
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_96 = V_25;
		int32_t L_97 = V_21;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_96, L_97))) < ((int32_t)((int32_t)300))))
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_98 = __this->___bitrate_bps;
		if ((((int32_t)L_98) >= ((int32_t)((int32_t)2400))))
		{
			goto IL_03a0;
		}
	}

IL_02d8:
	{
		int32_t L_99 = __this->___mode;
		V_36 = L_99;
		int32_t L_100 = __this->___bandwidth;
		if (!L_100)
		{
			goto IL_02f0;
		}
	}
	{
		int32_t L_101 = __this->___bandwidth;
		G_B46_0 = ((int32_t)(L_101));
		goto IL_02f5;
	}

IL_02f0:
	{
		G_B46_0 = ((int32_t)1101);
	}

IL_02f5:
	{
		V_37 = (int32_t)G_B46_0;
		int32_t L_102 = V_36;
		if (L_102)
		{
			goto IL_0302;
		}
	}
	{
		V_36 = (int32_t)((int32_t)1000);
	}

IL_0302:
	{
		int32_t L_103 = V_21;
		if ((((int32_t)L_103) <= ((int32_t)((int32_t)100))))
		{
			goto IL_030f;
		}
	}
	{
		V_36 = (int32_t)((int32_t)1002);
	}

IL_030f:
	{
		int32_t L_104 = V_21;
		if ((((int32_t)L_104) >= ((int32_t)((int32_t)50))))
		{
			goto IL_031c;
		}
	}
	{
		V_36 = (int32_t)((int32_t)1000);
	}

IL_031c:
	{
		int32_t L_105 = V_36;
		if ((!(((uint32_t)L_105) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0337;
		}
	}
	{
		int32_t L_106 = V_37;
		if ((((int32_t)L_106) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_0337;
		}
	}
	{
		V_37 = (int32_t)((int32_t)1103);
		goto IL_036b;
	}

IL_0337:
	{
		int32_t L_107 = V_36;
		if ((!(((uint32_t)L_107) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0352;
		}
	}
	{
		int32_t L_108 = V_37;
		if ((!(((uint32_t)L_108) == ((uint32_t)((int32_t)1102)))))
		{
			goto IL_0352;
		}
	}
	{
		V_37 = (int32_t)((int32_t)1101);
		goto IL_036b;
	}

IL_0352:
	{
		int32_t L_109 = V_36;
		if ((!(((uint32_t)L_109) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_036b;
		}
	}
	{
		int32_t L_110 = V_37;
		if ((((int32_t)L_110) > ((int32_t)((int32_t)1104))))
		{
			goto IL_036b;
		}
	}
	{
		V_37 = (int32_t)((int32_t)1104);
	}

IL_036b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = ___3_data;
		int32_t L_112 = ___4_data_ptr;
		int32_t L_113 = V_36;
		int32_t L_114 = V_21;
		int32_t L_115 = V_37;
		int32_t L_116 = __this->___stream_channels;
		uint8_t L_117;
		L_117 = CodecHelpers_gen_toc_m36D3043E7AE9BA3F43D6025DB507D4AB1C072773(L_113, L_114, L_115, L_116, NULL);
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (uint8_t)L_117);
		V_3 = 1;
		int32_t L_118 = __this->___use_vbr;
		if (L_118)
		{
			goto IL_039e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = ___3_data;
		int32_t L_120 = ___4_data_ptr;
		int32_t L_121 = V_3;
		int32_t L_122 = V_25;
		int32_t L_123;
		L_123 = OpusRepacketizer_PadPacket_m73673282B4FEE94293683AA943B65F1DED670723(L_119, L_120, L_121, L_122, NULL);
		V_3 = L_123;
		int32_t L_124 = V_3;
		if (L_124)
		{
			goto IL_039e;
		}
	}
	{
		int32_t L_125 = V_25;
		V_3 = L_125;
	}

IL_039e:
	{
		int32_t L_126 = V_3;
		return L_126;
	}

IL_03a0:
	{
		int32_t L_127 = V_21;
		int32_t L_128 = V_25;
		V_22 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_127, L_128)), 8));
		int32_t L_129 = __this->___bitrate_bps;
		int32_t L_130 = __this->___channels;
		int32_t L_131 = __this->___Fs;
		int32_t L_132 = ___2_frame_size;
		V_19 = ((int32_t)il2cpp_codegen_subtract(L_129, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_130)), ((int32_t)20))), ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_131/L_132)), ((int32_t)50)))))));
		int32_t L_133 = __this->___signal_type;
		if ((!(((uint32_t)L_133) == ((uint32_t)((int32_t)3001)))))
		{
			goto IL_03dd;
		}
	}
	{
		V_18 = ((int32_t)127);
		goto IL_0439;
	}

IL_03dd:
	{
		int32_t L_134 = __this->___signal_type;
		if ((!(((uint32_t)L_134) == ((uint32_t)((int32_t)3002)))))
		{
			goto IL_03ef;
		}
	}
	{
		V_18 = 0;
		goto IL_0439;
	}

IL_03ef:
	{
		int32_t L_135 = __this->___voice_ratio;
		if ((((int32_t)L_135) < ((int32_t)0)))
		{
			goto IL_0422;
		}
	}
	{
		int32_t L_136 = __this->___voice_ratio;
		V_18 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_136, ((int32_t)327)))>>8));
		int32_t L_137 = __this->___application;
		if ((!(((uint32_t)L_137) == ((uint32_t)((int32_t)2049)))))
		{
			goto IL_0439;
		}
	}
	{
		int32_t L_138 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_139;
		L_139 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(L_138, ((int32_t)115), NULL);
		V_18 = L_139;
		goto IL_0439;
	}

IL_0422:
	{
		int32_t L_140 = __this->___application;
		if ((!(((uint32_t)L_140) == ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0435;
		}
	}
	{
		V_18 = ((int32_t)115);
		goto IL_0439;
	}

IL_0435:
	{
		V_18 = ((int32_t)48);
	}

IL_0439:
	{
		int32_t L_141 = __this->___force_channels;
		if ((((int32_t)L_141) == ((int32_t)((int32_t)-1000))))
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_142 = __this->___channels;
		if ((!(((uint32_t)L_142) == ((uint32_t)2))))
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_143 = __this->___force_channels;
		__this->___stream_channels = L_143;
		goto IL_04b5;
	}

IL_045d:
	{
		int32_t L_144 = __this->___channels;
		if ((!(((uint32_t)L_144) == ((uint32_t)2))))
		{
			goto IL_04a9;
		}
	}
	{
		int32_t L_145 = V_18;
		int32_t L_146 = V_18;
		V_38 = ((int32_t)il2cpp_codegen_add(((int32_t)30000), ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_145, L_146)), 0))>>((int32_t)14)))));
		int32_t L_147 = __this->___stream_channels;
		if ((!(((uint32_t)L_147) == ((uint32_t)2))))
		{
			goto IL_048d;
		}
	}
	{
		int32_t L_148 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_subtract(L_148, ((int32_t)1000)));
		goto IL_0497;
	}

IL_048d:
	{
		int32_t L_149 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_add(L_149, ((int32_t)1000)));
	}

IL_0497:
	{
		int32_t L_150 = V_19;
		int32_t L_151 = V_38;
		if ((((int32_t)L_150) > ((int32_t)L_151)))
		{
			G_B84_0 = __this;
			goto IL_04a1;
		}
		G_B83_0 = __this;
	}
	{
		G_B85_0 = 1;
		G_B85_1 = G_B83_0;
		goto IL_04a2;
	}

IL_04a1:
	{
		G_B85_0 = 2;
		G_B85_1 = G_B84_0;
	}

IL_04a2:
	{
		NullCheck(G_B85_1);
		G_B85_1->___stream_channels = G_B85_0;
		goto IL_04b5;
	}

IL_04a9:
	{
		int32_t L_152 = __this->___channels;
		__this->___stream_channels = L_152;
	}

IL_04b5:
	{
		int32_t L_153 = __this->___bitrate_bps;
		int32_t L_154 = __this->___stream_channels;
		int32_t L_155 = __this->___Fs;
		int32_t L_156 = ___2_frame_size;
		V_19 = ((int32_t)il2cpp_codegen_subtract(L_153, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_154)), ((int32_t)20))), ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_155/L_156)), ((int32_t)50)))))));
		int32_t L_157 = __this->___application;
		if ((!(((uint32_t)L_157) == ((uint32_t)((int32_t)2051)))))
		{
			goto IL_04f3;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1002);
		goto IL_061e;
	}

IL_04f3:
	{
		int32_t L_158 = __this->___user_forced_mode;
		if ((!(((uint32_t)L_158) == ((uint32_t)((int32_t)-1000)))))
		{
			goto IL_0612;
		}
	}
	{
		int32_t L_159 = V_27;
		il2cpp_codegen_runtime_class_init_inline(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_160 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mode_thresholds;
		NullCheck(L_160);
		int32_t L_161 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		NullCheck(L_162);
		int32_t L_163 = 0;
		int32_t L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_165;
		L_165 = Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)32767), L_159)), L_164, NULL);
		int32_t L_166 = V_27;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_167 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mode_thresholds;
		NullCheck(L_167);
		int32_t L_168 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		NullCheck(L_169);
		int32_t L_170 = 0;
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		int32_t L_172;
		L_172 = Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline(L_166, L_171, NULL);
		V_39 = ((int32_t)il2cpp_codegen_add(L_165, L_172));
		int32_t L_173 = V_27;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_174 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mode_thresholds;
		NullCheck(L_174);
		int32_t L_175 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_176);
		int32_t L_177 = 1;
		int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		int32_t L_179;
		L_179 = Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)32767), L_173)), L_178, NULL);
		int32_t L_180 = V_27;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_181 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mode_thresholds;
		NullCheck(L_181);
		int32_t L_182 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		NullCheck(L_183);
		int32_t L_184 = 1;
		int32_t L_185 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		int32_t L_186;
		L_186 = Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline(L_180, L_185, NULL);
		V_40 = ((int32_t)il2cpp_codegen_add(L_179, L_186));
		int32_t L_187 = V_40;
		int32_t L_188 = V_18;
		int32_t L_189 = V_18;
		int32_t L_190 = V_39;
		int32_t L_191 = V_40;
		V_41 = ((int32_t)il2cpp_codegen_add(L_187, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_188, L_189)), ((int32_t)il2cpp_codegen_subtract(L_190, L_191))))>>((int32_t)14)))));
		int32_t L_192 = __this->___application;
		if ((!(((uint32_t)L_192) == ((uint32_t)((int32_t)2048)))))
		{
			goto IL_057f;
		}
	}
	{
		int32_t L_193 = V_41;
		V_41 = ((int32_t)il2cpp_codegen_add(L_193, ((int32_t)8000)));
	}

IL_057f:
	{
		int32_t L_194 = __this->___prev_mode;
		if ((!(((uint32_t)L_194) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0598;
		}
	}
	{
		int32_t L_195 = V_41;
		V_41 = ((int32_t)il2cpp_codegen_subtract(L_195, ((int32_t)4000)));
		goto IL_05ab;
	}

IL_0598:
	{
		int32_t L_196 = __this->___prev_mode;
		if ((((int32_t)L_196) <= ((int32_t)0)))
		{
			goto IL_05ab;
		}
	}
	{
		int32_t L_197 = V_41;
		V_41 = ((int32_t)il2cpp_codegen_add(L_197, ((int32_t)4000)));
	}

IL_05ab:
	{
		int32_t L_198 = V_19;
		int32_t L_199 = V_41;
		if ((((int32_t)L_198) >= ((int32_t)L_199)))
		{
			G_B98_0 = __this;
			goto IL_05b9;
		}
		G_B97_0 = __this;
	}
	{
		G_B99_0 = ((int32_t)1000);
		G_B99_1 = G_B97_0;
		goto IL_05be;
	}

IL_05b9:
	{
		G_B99_0 = ((int32_t)1002);
		G_B99_1 = G_B98_0;
	}

IL_05be:
	{
		NullCheck(G_B99_1);
		G_B99_1->___mode = (int32_t)G_B99_0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_200 = __this->___silk_mode;
		NullCheck(L_200);
		int32_t L_201 = L_200->___useInBandFEC;
		if (!L_201)
		{
			goto IL_05f2;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_202 = __this->___silk_mode;
		NullCheck(L_202);
		int32_t L_203 = L_202->___packetLossPercentage;
		int32_t L_204 = V_18;
		if ((((int32_t)L_203) <= ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_204))>>4)))))
		{
			goto IL_05f2;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1000);
	}

IL_05f2:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_205 = __this->___silk_mode;
		NullCheck(L_205);
		int32_t L_206 = L_205->___useDTX;
		if (!L_206)
		{
			goto IL_061e;
		}
	}
	{
		int32_t L_207 = V_18;
		if ((((int32_t)L_207) <= ((int32_t)((int32_t)100))))
		{
			goto IL_061e;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1000);
		goto IL_061e;
	}

IL_0612:
	{
		int32_t L_208 = __this->___user_forced_mode;
		__this->___mode = L_208;
	}

IL_061e:
	{
		int32_t L_209 = __this->___mode;
		if ((((int32_t)L_209) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0642;
		}
	}
	{
		int32_t L_210 = ___2_frame_size;
		int32_t L_211 = __this->___Fs;
		if ((((int32_t)L_210) >= ((int32_t)((int32_t)(L_211/((int32_t)100))))))
		{
			goto IL_0642;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1002);
	}

IL_0642:
	{
		int32_t L_212 = __this->___lfe;
		if (!L_212)
		{
			goto IL_0655;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1002);
	}

IL_0655:
	{
		int32_t L_213 = V_25;
		int32_t L_214 = V_21;
		if ((((int32_t)L_214) > ((int32_t)((int32_t)50))))
		{
			G_B113_0 = L_213;
			goto IL_0664;
		}
		G_B112_0 = L_213;
	}
	{
		G_B114_0 = ((int32_t)8000);
		G_B114_1 = G_B112_0;
		goto IL_0669;
	}

IL_0664:
	{
		G_B114_0 = ((int32_t)12000);
		G_B114_1 = G_B113_0;
	}

IL_0669:
	{
		int32_t L_215 = ___2_frame_size;
		int32_t L_216 = __this->___Fs;
		if ((((int32_t)G_B114_1) >= ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(G_B114_0, L_215))/((int32_t)il2cpp_codegen_multiply(L_216, 8)))))))
		{
			goto IL_0681;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1002);
	}

IL_0681:
	{
		int32_t L_217 = __this->___stream_channels;
		if ((!(((uint32_t)L_217) == ((uint32_t)1))))
		{
			goto IL_06cf;
		}
	}
	{
		int32_t L_218 = __this->___prev_channels;
		if ((!(((uint32_t)L_218) == ((uint32_t)2))))
		{
			goto IL_06cf;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_219 = __this->___silk_mode;
		NullCheck(L_219);
		int32_t L_220 = L_219->___toMono;
		if (L_220)
		{
			goto IL_06cf;
		}
	}
	{
		int32_t L_221 = __this->___mode;
		if ((((int32_t)L_221) == ((int32_t)((int32_t)1002))))
		{
			goto IL_06cf;
		}
	}
	{
		int32_t L_222 = __this->___prev_mode;
		if ((((int32_t)L_222) == ((int32_t)((int32_t)1002))))
		{
			goto IL_06cf;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_223 = __this->___silk_mode;
		NullCheck(L_223);
		L_223->___toMono = 1;
		__this->___stream_channels = 2;
		goto IL_06db;
	}

IL_06cf:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_224 = __this->___silk_mode;
		NullCheck(L_224);
		L_224->___toMono = 0;
	}

IL_06db:
	{
		int32_t L_225 = __this->___prev_mode;
		if ((((int32_t)L_225) <= ((int32_t)0)))
		{
			goto IL_0752;
		}
	}
	{
		int32_t L_226 = __this->___mode;
		if ((((int32_t)L_226) == ((int32_t)((int32_t)1002))))
		{
			goto IL_06fe;
		}
	}
	{
		int32_t L_227 = __this->___prev_mode;
		if ((((int32_t)L_227) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0718;
		}
	}

IL_06fe:
	{
		int32_t L_228 = __this->___mode;
		if ((!(((uint32_t)L_228) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0752;
		}
	}
	{
		int32_t L_229 = __this->___prev_mode;
		if ((((int32_t)L_229) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0752;
		}
	}

IL_0718:
	{
		V_9 = 1;
		int32_t L_230 = __this->___mode;
		if ((!(((uint32_t)L_230) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_072b;
		}
	}
	{
		G_B131_0 = 0;
		goto IL_072c;
	}

IL_072b:
	{
		G_B131_0 = 1;
	}

IL_072c:
	{
		V_11 = G_B131_0;
		int32_t L_231 = V_11;
		if (L_231)
		{
			goto IL_0752;
		}
	}
	{
		int32_t L_232 = ___2_frame_size;
		int32_t L_233 = __this->___Fs;
		if ((((int32_t)L_232) < ((int32_t)((int32_t)(L_233/((int32_t)100))))))
		{
			goto IL_074f;
		}
	}
	{
		int32_t L_234 = __this->___prev_mode;
		__this->___mode = L_234;
		V_14 = 1;
		goto IL_0752;
	}

IL_074f:
	{
		V_9 = 0;
	}

IL_0752:
	{
		int32_t L_235 = __this->___silk_bw_switch;
		if (!L_235)
		{
			goto IL_076a;
		}
	}
	{
		V_9 = 1;
		V_11 = 1;
		__this->___silk_bw_switch = 0;
		V_7 = 1;
	}

IL_076a:
	{
		int32_t L_236 = V_9;
		if (!L_236)
		{
			goto IL_07b5;
		}
	}
	{
		int32_t L_237 = V_25;
		int32_t L_238 = __this->___Fs;
		int32_t L_239 = ___2_frame_size;
		int32_t L_240 = __this->___Fs;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_241;
		L_241 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)257), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_237, ((int32_t)(L_238/((int32_t)200)))))/((int32_t)il2cpp_codegen_add(L_239, ((int32_t)(L_240/((int32_t)200))))))), NULL);
		V_10 = L_241;
		int32_t L_242 = __this->___use_vbr;
		if (!L_242)
		{
			goto IL_07b5;
		}
	}
	{
		int32_t L_243 = V_10;
		int32_t L_244 = __this->___bitrate_bps;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_245;
		L_245 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(L_243, ((int32_t)(L_244/((int32_t)1600))), NULL);
		V_10 = L_245;
	}

IL_07b5:
	{
		int32_t L_246 = __this->___mode;
		if ((((int32_t)L_246) == ((int32_t)((int32_t)1002))))
		{
			goto IL_07e2;
		}
	}
	{
		int32_t L_247 = __this->___prev_mode;
		if ((!(((uint32_t)L_247) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_07e2;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_248 = (EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5*)il2cpp_codegen_object_new(EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5_il2cpp_TypeInfo_var);
		EncControlState__ctor_mFC294B69243BF8AA052700ADEBC545D52EF59E72(L_248, NULL);
		V_42 = L_248;
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_249 = V_0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_250 = V_42;
		int32_t L_251;
		L_251 = EncodeAPI_silk_InitEncoder_m4E684FC14340B80B00193C6B83650DB1FF548964(L_249, L_250, NULL);
		V_7 = 1;
	}

IL_07e2:
	{
		int32_t L_252 = __this->___mode;
		if ((((int32_t)L_252) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0807;
		}
	}
	{
		int32_t L_253 = __this->___first;
		if (L_253)
		{
			goto IL_0807;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_254 = __this->___silk_mode;
		NullCheck(L_254);
		int32_t L_255 = L_254->___allowBandwidthSwitch;
		if (!L_255)
		{
			goto IL_093e;
		}
	}

IL_0807:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		V_45 = L_256;
		V_46 = (int32_t)((int32_t)1105);
		int32_t L_257 = V_19;
		V_47 = L_257;
		int32_t L_258 = __this->___mode;
		if ((((int32_t)L_258) == ((int32_t)((int32_t)1002))))
		{
			goto IL_084f;
		}
	}
	{
		int32_t L_259 = V_47;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_260 = __this->___silk_mode;
		NullCheck(L_260);
		int32_t L_261 = L_260->___complexity;
		V_47 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_259, ((int32_t)il2cpp_codegen_add(((int32_t)45), L_261))))/((int32_t)50)));
		int32_t L_262 = __this->___use_vbr;
		if (L_262)
		{
			goto IL_084f;
		}
	}
	{
		int32_t L_263 = V_47;
		V_47 = ((int32_t)il2cpp_codegen_subtract(L_263, ((int32_t)1000)));
	}

IL_084f:
	{
		int32_t L_264 = __this->___channels;
		if ((!(((uint32_t)L_264) == ((uint32_t)2))))
		{
			goto IL_0871;
		}
	}
	{
		int32_t L_265 = __this->___force_channels;
		if ((((int32_t)L_265) == ((int32_t)1)))
		{
			goto IL_0871;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_266 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___stereo_voice_bandwidth_thresholds;
		V_43 = L_266;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___stereo_music_bandwidth_thresholds;
		V_44 = L_267;
		goto IL_087f;
	}

IL_0871:
	{
		il2cpp_codegen_runtime_class_init_inline(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mono_voice_bandwidth_thresholds;
		V_43 = L_268;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = ((Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_StaticFields*)il2cpp_codegen_static_fields_for(Tables_tF67CEF206011C741D6FC36A23379D6659E460F29_il2cpp_TypeInfo_var))->___mono_music_bandwidth_thresholds;
		V_44 = L_269;
	}

IL_087f:
	{
		V_2 = 0;
		goto IL_08a2;
	}

IL_0883:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_270 = V_45;
		int32_t L_271 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = V_44;
		int32_t L_273 = V_2;
		NullCheck(L_272);
		int32_t L_274 = L_273;
		int32_t L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		int32_t L_276 = V_18;
		int32_t L_277 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_278 = V_43;
		int32_t L_279 = V_2;
		NullCheck(L_278);
		int32_t L_280 = L_279;
		int32_t L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_282 = V_44;
		int32_t L_283 = V_2;
		NullCheck(L_282);
		int32_t L_284 = L_283;
		int32_t L_285 = (L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		NullCheck(L_270);
		(L_270)->SetAt(static_cast<il2cpp_array_size_t>(L_271), (int32_t)((int32_t)il2cpp_codegen_add(L_275, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_276, L_277)), ((int32_t)il2cpp_codegen_subtract(L_281, L_285))))>>((int32_t)14))))));
		int32_t L_286 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_286, 1));
	}

IL_08a2:
	{
		int32_t L_287 = V_2;
		if ((((int32_t)L_287) < ((int32_t)8)))
		{
			goto IL_0883;
		}
	}

IL_08a6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = V_45;
		int32_t L_289 = V_46;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_289, ((int32_t)1102)))));
		int32_t L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		V_48 = L_291;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = V_45;
		int32_t L_293 = V_46;
		NullCheck(L_292);
		int32_t L_294 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_293, ((int32_t)1102))))), 1));
		int32_t L_295 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		V_49 = L_295;
		int32_t L_296 = __this->___first;
		if (L_296)
		{
			goto IL_08e8;
		}
	}
	{
		int32_t L_297 = __this->___bandwidth;
		int32_t L_298 = V_46;
		if ((((int32_t)L_297) < ((int32_t)L_298)))
		{
			goto IL_08e1;
		}
	}
	{
		int32_t L_299 = V_48;
		int32_t L_300 = V_49;
		V_48 = ((int32_t)il2cpp_codegen_subtract(L_299, L_300));
		goto IL_08e8;
	}

IL_08e1:
	{
		int32_t L_301 = V_48;
		int32_t L_302 = V_49;
		V_48 = ((int32_t)il2cpp_codegen_add(L_301, L_302));
	}

IL_08e8:
	{
		int32_t L_303 = V_47;
		int32_t L_304 = V_48;
		if ((((int32_t)L_303) >= ((int32_t)L_304)))
		{
			goto IL_08fc;
		}
	}
	{
		int32_t L_305 = V_46;
		int32_t L_306 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_305, 1));
		V_46 = (int32_t)L_306;
		if ((((int32_t)L_306) > ((int32_t)((int32_t)1101))))
		{
			goto IL_08a6;
		}
	}

IL_08fc:
	{
		int32_t L_307 = V_46;
		__this->___bandwidth = L_307;
		int32_t L_308 = __this->___first;
		if (L_308)
		{
			goto IL_093e;
		}
	}
	{
		int32_t L_309 = __this->___mode;
		if ((((int32_t)L_309) == ((int32_t)((int32_t)1002))))
		{
			goto IL_093e;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_310 = __this->___silk_mode;
		NullCheck(L_310);
		int32_t L_311 = L_310->___inWBmodeWithoutVariableLP;
		if (L_311)
		{
			goto IL_093e;
		}
	}
	{
		int32_t L_312 = __this->___bandwidth;
		if ((((int32_t)L_312) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_093e;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1103);
	}

IL_093e:
	{
		int32_t L_313 = __this->___bandwidth;
		int32_t L_314 = __this->___max_bandwidth;
		if ((((int32_t)L_313) <= ((int32_t)L_314)))
		{
			goto IL_0958;
		}
	}
	{
		int32_t L_315 = __this->___max_bandwidth;
		__this->___bandwidth = L_315;
	}

IL_0958:
	{
		int32_t L_316 = __this->___user_bandwidth;
		if ((((int32_t)L_316) == ((int32_t)((int32_t)-1000))))
		{
			goto IL_0971;
		}
	}
	{
		int32_t L_317 = __this->___user_bandwidth;
		__this->___bandwidth = L_317;
	}

IL_0971:
	{
		int32_t L_318 = __this->___mode;
		if ((((int32_t)L_318) == ((int32_t)((int32_t)1002))))
		{
			goto IL_099d;
		}
	}
	{
		int32_t L_319 = V_22;
		if ((((int32_t)L_319) >= ((int32_t)((int32_t)15000))))
		{
			goto IL_099d;
		}
	}
	{
		int32_t L_320 = __this->___bandwidth;
		int32_t L_321;
		L_321 = OpusBandwidthHelpers_MIN_m43E41E09D058376547611B89154E5FF74E1B93F0(L_320, (int32_t)((int32_t)1103), NULL);
		__this->___bandwidth = L_321;
	}

IL_099d:
	{
		int32_t L_322 = __this->___Fs;
		if ((((int32_t)L_322) > ((int32_t)((int32_t)24000))))
		{
			goto IL_09c2;
		}
	}
	{
		int32_t L_323 = __this->___bandwidth;
		if ((((int32_t)L_323) <= ((int32_t)((int32_t)1104))))
		{
			goto IL_09c2;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1104);
	}

IL_09c2:
	{
		int32_t L_324 = __this->___Fs;
		if ((((int32_t)L_324) > ((int32_t)((int32_t)16000))))
		{
			goto IL_09e7;
		}
	}
	{
		int32_t L_325 = __this->___bandwidth;
		if ((((int32_t)L_325) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_09e7;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1103);
	}

IL_09e7:
	{
		int32_t L_326 = __this->___Fs;
		if ((((int32_t)L_326) > ((int32_t)((int32_t)12000))))
		{
			goto IL_0a0c;
		}
	}
	{
		int32_t L_327 = __this->___bandwidth;
		if ((((int32_t)L_327) <= ((int32_t)((int32_t)1102))))
		{
			goto IL_0a0c;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1102);
	}

IL_0a0c:
	{
		int32_t L_328 = __this->___Fs;
		if ((((int32_t)L_328) > ((int32_t)((int32_t)8000))))
		{
			goto IL_0a31;
		}
	}
	{
		int32_t L_329 = __this->___bandwidth;
		if ((((int32_t)L_329) <= ((int32_t)((int32_t)1101))))
		{
			goto IL_0a31;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1101);
	}

IL_0a31:
	{
		int32_t L_330 = __this->___detected_bandwidth;
		if (!L_330)
		{
			goto IL_0afb;
		}
	}
	{
		int32_t L_331 = __this->___user_bandwidth;
		if ((!(((uint32_t)L_331) == ((uint32_t)((int32_t)-1000)))))
		{
			goto IL_0afb;
		}
	}
	{
		int32_t L_332 = V_19;
		int32_t L_333 = __this->___stream_channels;
		if ((((int32_t)L_332) > ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)18000), L_333)))))
		{
			goto IL_0a72;
		}
	}
	{
		int32_t L_334 = __this->___mode;
		if ((!(((uint32_t)L_334) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0a72;
		}
	}
	{
		V_50 = (int32_t)((int32_t)1101);
		goto IL_0ad1;
	}

IL_0a72:
	{
		int32_t L_335 = V_19;
		int32_t L_336 = __this->___stream_channels;
		if ((((int32_t)L_335) > ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)24000), L_336)))))
		{
			goto IL_0a98;
		}
	}
	{
		int32_t L_337 = __this->___mode;
		if ((!(((uint32_t)L_337) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0a98;
		}
	}
	{
		V_50 = (int32_t)((int32_t)1102);
		goto IL_0ad1;
	}

IL_0a98:
	{
		int32_t L_338 = V_19;
		int32_t L_339 = __this->___stream_channels;
		if ((((int32_t)L_338) > ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)30000), L_339)))))
		{
			goto IL_0ab1;
		}
	}
	{
		V_50 = (int32_t)((int32_t)1103);
		goto IL_0ad1;
	}

IL_0ab1:
	{
		int32_t L_340 = V_19;
		int32_t L_341 = __this->___stream_channels;
		if ((((int32_t)L_340) > ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)44000), L_341)))))
		{
			goto IL_0aca;
		}
	}
	{
		V_50 = (int32_t)((int32_t)1104);
		goto IL_0ad1;
	}

IL_0aca:
	{
		V_50 = (int32_t)((int32_t)1105);
	}

IL_0ad1:
	{
		int32_t L_342 = __this->___detected_bandwidth;
		int32_t L_343 = V_50;
		int32_t L_344;
		L_344 = OpusBandwidthHelpers_MAX_m9D4142AD1C219302EA647F0B58218227C9C0154D(L_342, L_343, NULL);
		__this->___detected_bandwidth = L_344;
		int32_t L_345 = __this->___bandwidth;
		int32_t L_346 = __this->___detected_bandwidth;
		int32_t L_347;
		L_347 = OpusBandwidthHelpers_MIN_m43E41E09D058376547611B89154E5FF74E1B93F0(L_345, L_346, NULL);
		__this->___bandwidth = L_347;
	}

IL_0afb:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_348 = V_1;
		int32_t L_349 = ___6_lsb_depth;
		NullCheck(L_348);
		CeltEncoder_SetLSBDepth_mF6D3829124F5D80DE20D3AB5E758010C5135C31B(L_348, L_349, NULL);
		int32_t L_350 = __this->___mode;
		if ((!(((uint32_t)L_350) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0b28;
		}
	}
	{
		int32_t L_351 = __this->___bandwidth;
		if ((!(((uint32_t)L_351) == ((uint32_t)((int32_t)1102)))))
		{
			goto IL_0b28;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1103);
	}

IL_0b28:
	{
		int32_t L_352 = __this->___lfe;
		if (!L_352)
		{
			goto IL_0b3b;
		}
	}
	{
		__this->___bandwidth = (int32_t)((int32_t)1101);
	}

IL_0b3b:
	{
		int32_t L_353 = ___2_frame_size;
		int32_t L_354 = __this->___Fs;
		if ((((int32_t)L_353) <= ((int32_t)((int32_t)(L_354/((int32_t)50))))))
		{
			goto IL_0d32;
		}
	}
	{
		int32_t L_355 = __this->___mode;
		if ((((int32_t)L_355) == ((int32_t)((int32_t)1002))))
		{
			goto IL_0b67;
		}
	}
	{
		int32_t L_356 = __this->___bandwidth;
		if ((((int32_t)L_356) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_0d32;
		}
	}

IL_0b67:
	{
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_357 = __this->___analysis;
		NullCheck(L_357);
		bool L_358 = L_357->___enabled;
		if (!L_358)
		{
			goto IL_0b93;
		}
	}
	{
		int32_t L_359 = V_30;
		if ((((int32_t)L_359) == ((int32_t)(-1))))
		{
			goto IL_0b93;
		}
	}
	{
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_360 = __this->___analysis;
		int32_t L_361 = V_30;
		NullCheck(L_360);
		L_360->___read_pos = L_361;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_362 = __this->___analysis;
		int32_t L_363 = V_31;
		NullCheck(L_362);
		L_362->___read_subframe = L_363;
	}

IL_0b93:
	{
		int32_t L_364 = ___2_frame_size;
		int32_t L_365 = __this->___Fs;
		if ((((int32_t)L_364) > ((int32_t)((int32_t)(L_365/((int32_t)25))))))
		{
			goto IL_0ba2;
		}
	}
	{
		G_B214_0 = 2;
		goto IL_0ba3;
	}

IL_0ba2:
	{
		G_B214_0 = 3;
	}

IL_0ba3:
	{
		V_52 = G_B214_0;
		int32_t L_366 = ___5_out_data_bytes;
		int32_t L_367 = V_52;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_368;
		L_368 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)1276), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_366, 3))/L_367)), NULL);
		V_58 = L_368;
		int32_t L_369 = V_52;
		int32_t L_370 = V_58;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_371 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_369, L_370)));
		V_51 = L_371;
		OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* L_372 = (OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9*)il2cpp_codegen_object_new(OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9_il2cpp_TypeInfo_var);
		OpusRepacketizer__ctor_m0C07EA7248DAD51F4882B26E36B99B10873E9891(L_372, NULL);
		V_57 = L_372;
		int32_t L_373 = __this->___user_forced_mode;
		V_56 = L_373;
		int32_t L_374 = __this->___user_bandwidth;
		V_53 = L_374;
		int32_t L_375 = __this->___force_channels;
		V_54 = L_375;
		int32_t L_376 = __this->___mode;
		__this->___user_forced_mode = L_376;
		int32_t L_377 = __this->___bandwidth;
		__this->___user_bandwidth = L_377;
		int32_t L_378 = __this->___stream_channels;
		__this->___force_channels = L_378;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_379 = __this->___silk_mode;
		NullCheck(L_379);
		int32_t L_380 = L_379->___toMono;
		V_55 = L_380;
		int32_t L_381 = V_55;
		if (!L_381)
		{
			goto IL_0c21;
		}
	}
	{
		__this->___force_channels = 1;
		goto IL_0c2d;
	}

IL_0c21:
	{
		int32_t L_382 = __this->___stream_channels;
		__this->___prev_channels = L_382;
	}

IL_0c2d:
	{
		V_2 = 0;
		goto IL_0cb6;
	}

IL_0c34:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_383 = __this->___silk_mode;
		NullCheck(L_383);
		L_383->___toMono = 0;
		int32_t L_384 = V_14;
		if (!L_384)
		{
			goto IL_0c56;
		}
	}
	{
		int32_t L_385 = V_2;
		int32_t L_386 = V_52;
		if ((!(((uint32_t)L_385) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_386, 1))))))
		{
			goto IL_0c56;
		}
	}
	{
		__this->___user_forced_mode = (int32_t)((int32_t)1002);
	}

IL_0c56:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_387 = ___0_pcm;
		int32_t L_388 = ___1_pcm_ptr;
		int32_t L_389 = V_2;
		int32_t L_390 = __this->___channels;
		int32_t L_391 = __this->___Fs;
		int32_t L_392 = __this->___Fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_393 = V_51;
		int32_t L_394 = V_2;
		int32_t L_395 = V_58;
		int32_t L_396 = V_58;
		int32_t L_397 = ___6_lsb_depth;
		int32_t L_398 = ___10_c1;
		int32_t L_399 = ___11_c2;
		int32_t L_400 = ___12_analysis_channels;
		downmix_func_1_t6BAA4EE8298FE6F3965456CDD78095618EE9C4D3* L_401 = ___13_downmix;
		int32_t L_402 = ___14_float_api;
		int32_t L_403;
		L_403 = ((  int32_t (*) (OpusEncoder_t81D2BC522435647FFDBEBB688D636B133FE01E9E*, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, int32_t, int32_t, downmix_func_1_t6BAA4EE8298FE6F3965456CDD78095618EE9C4D3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(__this, L_387, ((int32_t)il2cpp_codegen_add(L_388, ((int32_t)il2cpp_codegen_multiply(L_389, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_390, L_391))/((int32_t)50))))))), ((int32_t)(L_392/((int32_t)50))), L_393, ((int32_t)il2cpp_codegen_multiply(L_394, L_395)), L_396, L_397, (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL, 0, 0, L_398, L_399, L_400, L_401, L_402, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_60 = L_403;
		int32_t L_404 = V_60;
		if ((((int32_t)L_404) >= ((int32_t)0)))
		{
			goto IL_0c9b;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_0c9b:
	{
		OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* L_405 = V_57;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_406 = V_51;
		int32_t L_407 = V_2;
		int32_t L_408 = V_58;
		int32_t L_409 = V_60;
		NullCheck(L_405);
		int32_t L_410;
		L_410 = OpusRepacketizer_AddPacket_m52B8369195511585403F6C1AF8033335BA77DC68(L_405, L_406, ((int32_t)il2cpp_codegen_multiply(L_407, L_408)), L_409, NULL);
		V_3 = L_410;
		int32_t L_411 = V_3;
		if ((((int32_t)L_411) >= ((int32_t)0)))
		{
			goto IL_0cb2;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_0cb2:
	{
		int32_t L_412 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_412, 1));
	}

IL_0cb6:
	{
		int32_t L_413 = V_2;
		int32_t L_414 = V_52;
		if ((((int32_t)L_413) < ((int32_t)L_414)))
		{
			goto IL_0c34;
		}
	}
	{
		int32_t L_415 = __this->___use_vbr;
		if (!L_415)
		{
			goto IL_0ccc;
		}
	}
	{
		int32_t L_416 = ___5_out_data_bytes;
		V_59 = L_416;
		goto IL_0ce6;
	}

IL_0ccc:
	{
		int32_t L_417 = __this->___bitrate_bps;
		int32_t L_418 = V_52;
		int32_t L_419 = ___5_out_data_bytes;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_420;
		L_420 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)(((int32_t)il2cpp_codegen_multiply(3, L_417))/((int32_t)(((int32_t)1200)/L_418)))), L_419, NULL);
		V_59 = L_420;
	}

IL_0ce6:
	{
		OpusRepacketizer_t36C0F380137781AB076DE10A2B09D59E81063CB9* L_421 = V_57;
		int32_t L_422 = V_52;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_423 = ___3_data;
		int32_t L_424 = ___4_data_ptr;
		int32_t L_425 = V_59;
		int32_t L_426 = __this->___use_vbr;
		if (!L_426)
		{
			G_B232_0 = 0;
			G_B232_1 = L_425;
			G_B232_2 = L_424;
			G_B232_3 = L_423;
			G_B232_4 = L_422;
			G_B232_5 = 0;
			G_B232_6 = L_421;
			goto IL_0cfd;
		}
		G_B231_0 = 0;
		G_B231_1 = L_425;
		G_B231_2 = L_424;
		G_B231_3 = L_423;
		G_B231_4 = L_422;
		G_B231_5 = 0;
		G_B231_6 = L_421;
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		G_B233_2 = G_B231_1;
		G_B233_3 = G_B231_2;
		G_B233_4 = G_B231_3;
		G_B233_5 = G_B231_4;
		G_B233_6 = G_B231_5;
		G_B233_7 = G_B231_6;
		goto IL_0cfe;
	}

IL_0cfd:
	{
		G_B233_0 = 1;
		G_B233_1 = G_B232_0;
		G_B233_2 = G_B232_1;
		G_B233_3 = G_B232_2;
		G_B233_4 = G_B232_3;
		G_B233_5 = G_B232_4;
		G_B233_6 = G_B232_5;
		G_B233_7 = G_B232_6;
	}

IL_0cfe:
	{
		NullCheck(G_B233_7);
		int32_t L_427;
		L_427 = OpusRepacketizer_opus_repacketizer_out_range_impl_m0E435E83E330DE8F1DC57BCED55BA32B274C362E(G_B233_7, G_B233_6, G_B233_5, G_B233_4, G_B233_3, G_B233_2, G_B233_1, G_B233_0, NULL);
		V_3 = L_427;
		int32_t L_428 = V_3;
		if ((((int32_t)L_428) >= ((int32_t)0)))
		{
			goto IL_0d0b;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_0d0b:
	{
		int32_t L_429 = V_56;
		__this->___user_forced_mode = L_429;
		int32_t L_430 = V_53;
		__this->___user_bandwidth = L_430;
		int32_t L_431 = V_54;
		__this->___force_channels = L_431;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_432 = __this->___silk_mode;
		int32_t L_433 = V_55;
		NullCheck(L_432);
		L_432->___toMono = L_433;
		int32_t L_434 = V_3;
		return L_434;
	}

IL_0d32:
	{
		int32_t L_435 = __this->___bandwidth;
		V_23 = L_435;
		int32_t L_436 = __this->___mode;
		if ((!(((uint32_t)L_436) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0d5b;
		}
	}
	{
		int32_t L_437 = V_23;
		if ((((int32_t)L_437) <= ((int32_t)((int32_t)1103))))
		{
			goto IL_0d5b;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1001);
	}

IL_0d5b:
	{
		int32_t L_438 = __this->___mode;
		if ((!(((uint32_t)L_438) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_0d7c;
		}
	}
	{
		int32_t L_439 = V_23;
		if ((((int32_t)L_439) > ((int32_t)((int32_t)1103))))
		{
			goto IL_0d7c;
		}
	}
	{
		__this->___mode = (int32_t)((int32_t)1000);
	}

IL_0d7c:
	{
		int32_t L_440 = V_25;
		int32_t L_441 = V_10;
		int32_t L_442 = __this->___bitrate_bps;
		int32_t L_443 = ___2_frame_size;
		int32_t L_444 = __this->___Fs;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_445;
		L_445 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)il2cpp_codegen_subtract(L_440, L_441)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_442, L_443))/((int32_t)il2cpp_codegen_multiply(L_444, 8)))), NULL);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_445, 1));
		int32_t L_446 = ___4_data_ptr;
		___4_data_ptr = ((int32_t)il2cpp_codegen_add(L_446, 1));
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_447 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_448 = ___3_data;
		int32_t L_449 = ___4_data_ptr;
		int32_t L_450 = V_25;
		NullCheck(L_447);
		EntropyCoder_enc_init_mF8EFBA613294599669ACAD9336D240DCD32FCE9B(L_447, L_448, L_449, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_450, 1)), NULL);
		int32_t L_451 = V_26;
		int32_t L_452 = ___2_frame_size;
		int32_t L_453 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_454 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_451, L_452)), L_453)));
		V_12 = L_454;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_455 = __this->___delay_buffer;
		int32_t L_456 = __this->___encoder_buffer;
		int32_t L_457 = V_26;
		int32_t L_458 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_459 = V_12;
		int32_t L_460 = V_26;
		int32_t L_461 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_455, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_456, L_457)), L_458)), (RuntimeArray*)L_459, 0, ((int32_t)il2cpp_codegen_multiply(L_460, L_461)), NULL);
		int32_t L_462 = __this->___mode;
		if ((!(((uint32_t)L_462) == ((uint32_t)((int32_t)1002)))))
		{
			goto IL_0e07;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_463;
		L_463 = Inlines_silk_lin2log_m13CE80A79E86A855158F9AD128C300253AA54787_inline(((int32_t)60), NULL);
		int32_t L_464;
		L_464 = Inlines_silk_LSHIFT_mA37756351362D68182AD1C173A43FBDB753390D0_inline(L_463, 8, NULL);
		V_17 = L_464;
		goto IL_0e16;
	}

IL_0e07:
	{
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_465 = V_0;
		NullCheck(L_465);
		SilkChannelEncoderU5BU5D_t241B8ADEDA30B816D7957AE8B0615ACADD8DE0B3* L_466 = L_465->___state_Fxx;
		NullCheck(L_466);
		int32_t L_467 = 0;
		SilkChannelEncoder_tADA1084F4316F176E3767D5B9E6008135592F194* L_468 = (L_466)->GetAt(static_cast<il2cpp_array_size_t>(L_467));
		NullCheck(L_468);
		int32_t L_469 = L_468->___variable_HP_smth1_Q15;
		V_17 = L_469;
	}

IL_0e16:
	{
		int32_t L_470 = __this->___variable_HP_smth2_Q15;
		int32_t L_471 = V_17;
		int32_t L_472 = __this->___variable_HP_smth2_Q15;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_473;
		L_473 = Inlines_silk_SMLAWB_m848A6EC6C9D0BA25BB0D3D3035475AEF74EBA860_inline(L_470, ((int32_t)il2cpp_codegen_subtract(L_471, L_472)), ((int32_t)983), NULL);
		__this->___variable_HP_smth2_Q15 = L_473;
		int32_t L_474 = __this->___variable_HP_smth2_Q15;
		int32_t L_475;
		L_475 = Inlines_silk_RSHIFT_m91357BE2399E9EA7017E2F08E94110205620DFC1_inline(L_474, 8, NULL);
		int32_t L_476;
		L_476 = Inlines_silk_log2lin_mAA1230C7B095DFEC8345BB1D7C951470856E4738_inline(L_475, NULL);
		V_16 = L_476;
		int32_t L_477 = __this->___application;
		if ((!(((uint32_t)L_477) == ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0e7e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_478 = ___0_pcm;
		int32_t L_479 = ___1_pcm_ptr;
		int32_t L_480 = V_16;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_481 = V_12;
		int32_t L_482 = V_26;
		int32_t L_483 = __this->___channels;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = __this->___hp_mem;
		int32_t L_485 = ___2_frame_size;
		int32_t L_486 = __this->___channels;
		int32_t L_487 = __this->___Fs;
		CodecHelpers_hp_cutoff_mA1C0E41BEFC0BC5FFE38AA7FA13F5BA81F025104(L_478, L_479, L_480, L_481, ((int32_t)il2cpp_codegen_multiply(L_482, L_483)), L_484, L_485, L_486, L_487, NULL);
		goto IL_0ea4;
	}

IL_0e7e:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_488 = ___0_pcm;
		int32_t L_489 = ___1_pcm_ptr;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_490 = V_12;
		int32_t L_491 = V_26;
		int32_t L_492 = __this->___channels;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = __this->___hp_mem;
		int32_t L_494 = ___2_frame_size;
		int32_t L_495 = __this->___channels;
		int32_t L_496 = __this->___Fs;
		CodecHelpers_dc_reject_mFC4BCC9AC624D6FA5D8E467FFAA4980965D5E2B8(L_488, L_489, 3, L_490, ((int32_t)il2cpp_codegen_multiply(L_491, L_492)), L_493, L_494, L_495, L_496, NULL);
	}

IL_0ea4:
	{
		V_24 = ((int32_t)32767);
		int32_t L_497 = __this->___mode;
		if ((((int32_t)L_497) == ((int32_t)((int32_t)1002))))
		{
			goto IL_1520;
		}
	}
	{
		int32_t L_498 = __this->___channels;
		int32_t L_499 = ___2_frame_size;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_500 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_498, L_499)));
		V_63 = L_500;
		int32_t L_501 = V_6;
		int32_t L_502 = V_21;
		V_61 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(8, L_501)), L_502));
		int32_t L_503 = __this->___mode;
		if ((!(((uint32_t)L_503) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_0fef;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_504 = __this->___silk_mode;
		int32_t L_505 = __this->___stream_channels;
		int32_t L_506 = __this->___Fs;
		int32_t L_507 = ___2_frame_size;
		if ((((int32_t)L_506) == ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)100), L_507)))))
		{
			G_B252_0 = ((int32_t)5000);
			G_B252_1 = L_505;
			G_B252_2 = L_504;
			goto IL_0f03;
		}
		G_B251_0 = ((int32_t)5000);
		G_B251_1 = L_505;
		G_B251_2 = L_504;
	}
	{
		G_B253_0 = 0;
		G_B253_1 = G_B251_0;
		G_B253_2 = G_B251_1;
		G_B253_3 = G_B251_2;
		goto IL_0f08;
	}

IL_0f03:
	{
		G_B253_0 = ((int32_t)1000);
		G_B253_1 = G_B252_0;
		G_B253_2 = G_B252_1;
		G_B253_3 = G_B252_2;
	}

IL_0f08:
	{
		NullCheck(G_B253_3);
		G_B253_3->___bitRate = ((int32_t)il2cpp_codegen_multiply(G_B253_2, ((int32_t)il2cpp_codegen_add(G_B253_1, G_B253_0))));
		int32_t L_508 = V_23;
		if ((!(((uint32_t)L_508) == ((uint32_t)((int32_t)1104)))))
		{
			goto IL_0f3e;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_509 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_510 = L_509;
		NullCheck(L_510);
		int32_t L_511 = L_510->___bitRate;
		int32_t L_512 = V_61;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_513 = __this->___silk_mode;
		NullCheck(L_513);
		int32_t L_514 = L_513->___bitRate;
		NullCheck(L_510);
		L_510->___bitRate = ((int32_t)il2cpp_codegen_add(L_511, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_512, L_514)), 2))/3))));
		goto IL_0f62;
	}

IL_0f3e:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_515 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_516 = L_515;
		NullCheck(L_516);
		int32_t L_517 = L_516->___bitRate;
		int32_t L_518 = V_61;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_519 = __this->___silk_mode;
		NullCheck(L_519);
		int32_t L_520 = L_519->___bitRate;
		NullCheck(L_516);
		L_516->___bitRate = ((int32_t)il2cpp_codegen_add(L_517, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_518, L_520)), 3))/5))));
	}

IL_0f62:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_521 = __this->___silk_mode;
		NullCheck(L_521);
		int32_t L_522 = L_521->___bitRate;
		int32_t L_523 = V_61;
		if ((((int32_t)L_522) <= ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_523, 4))/5)))))
		{
			goto IL_0f86;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_524 = __this->___silk_mode;
		int32_t L_525 = V_61;
		NullCheck(L_524);
		L_524->___bitRate = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_525, 4))/5));
	}

IL_0f86:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_526 = __this->___energy_masking;
		if (L_526)
		{
			goto IL_0ffc;
		}
	}
	{
		int32_t L_527 = V_61;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_528 = __this->___silk_mode;
		NullCheck(L_528);
		int32_t L_529 = L_528->___bitRate;
		V_62 = ((int32_t)il2cpp_codegen_subtract(L_527, L_529));
		int32_t L_530 = V_23;
		if ((((int32_t)L_530) == ((int32_t)((int32_t)1104))))
		{
			goto IL_0fae;
		}
	}
	{
		G_B262_0 = ((int32_t)3600);
		goto IL_0fb3;
	}

IL_0fae:
	{
		G_B262_0 = ((int32_t)3000);
	}

IL_0fb3:
	{
		V_65 = G_B262_0;
		int32_t L_531 = V_62;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_532;
		L_532 = Inlines_SHL32_m75BFDFD5C80D2CB588BD2517779B5A73F5C0EF03_inline(L_531, ((int32_t)9), NULL);
		int32_t L_533 = V_62;
		int32_t L_534 = __this->___stream_channels;
		int32_t L_535 = V_65;
		int32_t L_536;
		L_536 = Inlines_SHR32_mD57FC2703588CAD4DF39825E0FEC2F158F622A29_inline(((int32_t)il2cpp_codegen_add(L_533, ((int32_t)il2cpp_codegen_multiply(L_534, L_535)))), 6, NULL);
		V_24 = ((int32_t)(L_532/L_536));
		int32_t L_537 = V_24;
		if ((((int32_t)L_537) < ((int32_t)((int32_t)28086))))
		{
			goto IL_0fe3;
		}
	}
	{
		G_B265_0 = ((int32_t)32767);
		goto IL_0feb;
	}

IL_0fe3:
	{
		int32_t L_538 = V_24;
		G_B265_0 = ((int32_t)il2cpp_codegen_add(L_538, ((int32_t)4681)));
	}

IL_0feb:
	{
		V_24 = G_B265_0;
		goto IL_0ffc;
	}

IL_0fef:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_539 = __this->___silk_mode;
		int32_t L_540 = V_61;
		NullCheck(L_539);
		L_539->___bitRate = L_540;
	}

IL_0ffc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = __this->___energy_masking;
		if (!L_541)
		{
			goto IL_1155;
		}
	}
	{
		int32_t L_542 = __this->___use_vbr;
		if (!L_542)
		{
			goto IL_1155;
		}
	}
	{
		int32_t L_543 = __this->___lfe;
		if (L_543)
		{
			goto IL_1155;
		}
	}
	{
		V_66 = 0;
		V_70 = ((int32_t)17);
		V_71 = (int16_t)((int32_t)16000);
		int32_t L_544 = __this->___bandwidth;
		if ((!(((uint32_t)L_544) == ((uint32_t)((int32_t)1101)))))
		{
			goto IL_1045;
		}
	}
	{
		V_70 = ((int32_t)13);
		V_71 = (int16_t)((int32_t)8000);
		goto IL_105d;
	}

IL_1045:
	{
		int32_t L_545 = __this->___bandwidth;
		if ((!(((uint32_t)L_545) == ((uint32_t)((int32_t)1102)))))
		{
			goto IL_105d;
		}
	}
	{
		V_70 = ((int32_t)15);
		V_71 = (int16_t)((int32_t)12000);
	}

IL_105d:
	{
		V_69 = 0;
		goto IL_10ae;
	}

IL_1062:
	{
		V_2 = 0;
		goto IL_10a3;
	}

IL_1066:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_546 = __this->___energy_masking;
		int32_t L_547 = V_69;
		int32_t L_548 = V_2;
		NullCheck(L_546);
		int32_t L_549 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)21), L_547)), L_548));
		int32_t L_550 = (L_546)->GetAt(static_cast<il2cpp_array_size_t>(L_549));
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_551;
		L_551 = Inlines_MIN16_m91DF88A9ABB47E6D010FC82CD4B9404DA512623E_inline(L_550, ((int32_t)512), NULL);
		int32_t L_552;
		L_552 = Inlines_MAX16_m664F24DFE9E917BEC0D4536CF6520277285EF0CB_inline(L_551, ((int32_t)-2048), NULL);
		V_72 = L_552;
		int32_t L_553 = V_72;
		if ((((int32_t)L_553) <= ((int32_t)0)))
		{
			goto IL_1098;
		}
	}
	{
		int32_t L_554 = V_72;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_555;
		L_555 = Inlines_HALF16_mA3D84B14909E6EF84F654D342E679A9EB1111DF2_inline(L_554, NULL);
		V_72 = L_555;
	}

IL_1098:
	{
		int32_t L_556 = V_66;
		int32_t L_557 = V_72;
		V_66 = ((int32_t)il2cpp_codegen_add(L_556, L_557));
		int32_t L_558 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_558, 1));
	}

IL_10a3:
	{
		int32_t L_559 = V_2;
		int32_t L_560 = V_70;
		if ((((int32_t)L_559) < ((int32_t)L_560)))
		{
			goto IL_1066;
		}
	}
	{
		int32_t L_561 = V_69;
		V_69 = ((int32_t)il2cpp_codegen_add(L_561, 1));
	}

IL_10ae:
	{
		int32_t L_562 = V_69;
		int32_t L_563 = __this->___channels;
		if ((((int32_t)L_562) < ((int32_t)L_563)))
		{
			goto IL_1062;
		}
	}
	{
		int32_t L_564 = V_66;
		int32_t L_565 = V_70;
		int32_t L_566 = __this->___channels;
		V_67 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_564/L_565)), L_566));
		int32_t L_567 = V_67;
		V_67 = ((int32_t)il2cpp_codegen_add(L_567, ((int32_t)205)));
		int16_t L_568 = V_71;
		int32_t L_569 = V_67;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_570;
		L_570 = Inlines_MULT16_16_m1284C34FE095820278CB6AEDD3575C2165F1FC1A_inline((int32_t)L_568, L_569, NULL);
		int32_t L_571;
		L_571 = Inlines_PSHR32_mFAD319902E74B0D0ED8DCB30992F78B21833ADA3_inline(L_570, ((int32_t)10), NULL);
		V_68 = L_571;
		int32_t L_572 = V_68;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_573 = __this->___silk_mode;
		NullCheck(L_573);
		int32_t L_574 = L_573->___bitRate;
		int32_t L_575;
		L_575 = Inlines_MAX32_m0EDA35029F6C04CDC5D3FBC144A35A8E6BDA9044_inline(L_572, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)-2), L_574))/3)), NULL);
		V_68 = L_575;
		int32_t L_576 = __this->___bandwidth;
		if ((((int32_t)L_576) == ((int32_t)((int32_t)1104))))
		{
			goto IL_1115;
		}
	}
	{
		int32_t L_577 = __this->___bandwidth;
		if ((!(((uint32_t)L_577) == ((uint32_t)((int32_t)1105)))))
		{
			goto IL_112f;
		}
	}

IL_1115:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_578 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_579 = L_578;
		NullCheck(L_579);
		int32_t L_580 = L_579->___bitRate;
		int32_t L_581 = V_68;
		NullCheck(L_579);
		L_579->___bitRate = ((int32_t)il2cpp_codegen_add(L_580, ((int32_t)(((int32_t)il2cpp_codegen_multiply(3, L_581))/5))));
		goto IL_1143;
	}

IL_112f:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_582 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_583 = L_582;
		NullCheck(L_583);
		int32_t L_584 = L_583->___bitRate;
		int32_t L_585 = V_68;
		NullCheck(L_583);
		L_583->___bitRate = ((int32_t)il2cpp_codegen_add(L_584, L_585));
	}

IL_1143:
	{
		int32_t L_586 = V_6;
		int32_t L_587 = V_68;
		int32_t L_588 = ___2_frame_size;
		int32_t L_589 = __this->___Fs;
		V_6 = ((int32_t)il2cpp_codegen_add(L_586, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_587, L_588))/((int32_t)il2cpp_codegen_multiply(8, L_589))))));
	}

IL_1155:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_590 = __this->___silk_mode;
		int32_t L_591 = ___2_frame_size;
		int32_t L_592 = __this->___Fs;
		NullCheck(L_590);
		L_590->___payloadSize_ms = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)1000), L_591))/L_592));
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_593 = __this->___silk_mode;
		int32_t L_594 = __this->___channels;
		NullCheck(L_593);
		L_593->___nChannelsAPI = L_594;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_595 = __this->___silk_mode;
		int32_t L_596 = __this->___stream_channels;
		NullCheck(L_595);
		L_595->___nChannelsInternal = L_596;
		int32_t L_597 = V_23;
		if ((!(((uint32_t)L_597) == ((uint32_t)((int32_t)1101)))))
		{
			goto IL_11ab;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_598 = __this->___silk_mode;
		NullCheck(L_598);
		L_598->___desiredInternalSampleRate = ((int32_t)8000);
		goto IL_11d6;
	}

IL_11ab:
	{
		int32_t L_599 = V_23;
		if ((!(((uint32_t)L_599) == ((uint32_t)((int32_t)1102)))))
		{
			goto IL_11c6;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_600 = __this->___silk_mode;
		NullCheck(L_600);
		L_600->___desiredInternalSampleRate = ((int32_t)12000);
		goto IL_11d6;
	}

IL_11c6:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_601 = __this->___silk_mode;
		NullCheck(L_601);
		L_601->___desiredInternalSampleRate = ((int32_t)16000);
	}

IL_11d6:
	{
		int32_t L_602 = __this->___mode;
		if ((!(((uint32_t)L_602) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_11f5;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_603 = __this->___silk_mode;
		NullCheck(L_603);
		L_603->___minInternalSampleRate = ((int32_t)16000);
		goto IL_1205;
	}

IL_11f5:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_604 = __this->___silk_mode;
		NullCheck(L_604);
		L_604->___minInternalSampleRate = ((int32_t)8000);
	}

IL_1205:
	{
		int32_t L_605 = __this->___mode;
		if ((!(((uint32_t)L_605) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_12ab;
		}
	}
	{
		int32_t L_606 = V_22;
		V_73 = L_606;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_607 = __this->___silk_mode;
		NullCheck(L_607);
		L_607->___maxInternalSampleRate = ((int32_t)16000);
		int32_t L_608 = V_21;
		if ((((int32_t)L_608) <= ((int32_t)((int32_t)50))))
		{
			goto IL_1237;
		}
	}
	{
		int32_t L_609 = V_73;
		V_73 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_609, 2))/3));
	}

IL_1237:
	{
		int32_t L_610 = V_73;
		if ((((int32_t)L_610) >= ((int32_t)((int32_t)13000))))
		{
			goto IL_1270;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_611 = __this->___silk_mode;
		NullCheck(L_611);
		L_611->___maxInternalSampleRate = ((int32_t)12000);
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_612 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_613 = __this->___silk_mode;
		NullCheck(L_613);
		int32_t L_614 = L_613->___desiredInternalSampleRate;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_615;
		L_615 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)12000), L_614, NULL);
		NullCheck(L_612);
		L_612->___desiredInternalSampleRate = L_615;
	}

IL_1270:
	{
		int32_t L_616 = V_73;
		if ((((int32_t)L_616) >= ((int32_t)((int32_t)9600))))
		{
			goto IL_12bb;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_617 = __this->___silk_mode;
		NullCheck(L_617);
		L_617->___maxInternalSampleRate = ((int32_t)8000);
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_618 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_619 = __this->___silk_mode;
		NullCheck(L_619);
		int32_t L_620 = L_619->___desiredInternalSampleRate;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_621;
		L_621 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)8000), L_620, NULL);
		NullCheck(L_618);
		L_618->___desiredInternalSampleRate = L_621;
		goto IL_12bb;
	}

IL_12ab:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_622 = __this->___silk_mode;
		NullCheck(L_622);
		L_622->___maxInternalSampleRate = ((int32_t)16000);
	}

IL_12bb:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_623 = __this->___silk_mode;
		int32_t L_624 = __this->___use_vbr;
		if (!L_624)
		{
			G_B305_0 = L_623;
			goto IL_12cc;
		}
		G_B304_0 = L_623;
	}
	{
		G_B306_0 = 0;
		G_B306_1 = G_B304_0;
		goto IL_12cd;
	}

IL_12cc:
	{
		G_B306_0 = 1;
		G_B306_1 = G_B305_0;
	}

IL_12cd:
	{
		NullCheck(G_B306_1);
		G_B306_1->___useCBR = G_B306_0;
		int32_t L_625 = V_25;
		int32_t L_626 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_627;
		L_627 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)1275), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_625, 1)), L_626)), NULL);
		V_4 = L_627;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_628 = __this->___silk_mode;
		int32_t L_629 = V_4;
		NullCheck(L_628);
		L_628->___maxBits = ((int32_t)il2cpp_codegen_multiply(L_629, 8));
		int32_t L_630 = __this->___mode;
		if ((!(((uint32_t)L_630) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_131d;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_631 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_632 = __this->___silk_mode;
		NullCheck(L_632);
		int32_t L_633 = L_632->___maxBits;
		NullCheck(L_631);
		L_631->___maxBits = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_633, ((int32_t)9)))/((int32_t)10)));
	}

IL_131d:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_634 = __this->___silk_mode;
		NullCheck(L_634);
		int32_t L_635 = L_634->___useCBR;
		if (!L_635)
		{
			goto IL_136f;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_636 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_637 = __this->___silk_mode;
		NullCheck(L_637);
		int32_t L_638 = L_637->___bitRate;
		int32_t L_639 = ___2_frame_size;
		int32_t L_640 = __this->___Fs;
		NullCheck(L_636);
		L_636->___maxBits = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_638, L_639))/((int32_t)il2cpp_codegen_multiply(L_640, 8)))), 8));
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_641 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_642 = __this->___silk_mode;
		NullCheck(L_642);
		int32_t L_643 = L_642->___bitRate;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_644;
		L_644 = Inlines_IMAX_mF826EDBD765651BC22E22C96C35C8DFB9F9176D2_inline(1, ((int32_t)il2cpp_codegen_subtract(L_643, ((int32_t)2000))), NULL);
		NullCheck(L_641);
		L_641->___bitRate = L_644;
	}

IL_136f:
	{
		int32_t L_645 = V_7;
		if (!L_645)
		{
			goto IL_141d;
		}
	}
	{
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_646 = (BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D*)il2cpp_codegen_object_new(BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D_il2cpp_TypeInfo_var);
		BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD(L_646, 0, BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD_RuntimeMethod_var);
		V_74 = L_646;
		int32_t L_647 = __this->___channels;
		int32_t L_648 = __this->___encoder_buffer;
		int32_t L_649 = __this->___delay_compensation;
		int32_t L_650 = __this->___Fs;
		V_75 = ((int32_t)il2cpp_codegen_multiply(L_647, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_648, L_649)), ((int32_t)(L_650/((int32_t)400)))))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_651 = __this->___delay_buffer;
		int32_t L_652 = V_75;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_653 = V_28;
		NullCheck(L_653);
		int32_t L_654 = L_653->___overlap;
		int32_t L_655 = __this->___Fs;
		int32_t L_656 = __this->___channels;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_657 = V_28;
		NullCheck(L_657);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_658 = L_657->___window;
		int32_t L_659 = __this->___Fs;
		CodecHelpers_gain_fade_m26704332D22E7F8E8EE5769198B4875ED7912E68(L_651, L_652, 0, ((int32_t)32767), L_654, ((int32_t)(L_655/((int32_t)400))), L_656, L_658, L_659, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_660 = __this->___delay_buffer;
		int32_t L_661 = V_75;
		Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7(L_660, (int16_t)0, L_661, Arrays_MemSet_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE60BD199ECF056A33EE6957426DD1B6375CF64E7_RuntimeMethod_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_662 = __this->___delay_buffer;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_663 = V_63;
		int32_t L_664 = __this->___encoder_buffer;
		int32_t L_665 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_662, 0, (RuntimeArray*)L_663, 0, ((int32_t)il2cpp_codegen_multiply(L_664, L_665)), NULL);
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_666 = V_0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_667 = __this->___silk_mode;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_668 = V_63;
		int32_t L_669 = __this->___encoder_buffer;
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_670 = V_74;
		int32_t L_671;
		L_671 = EncodeAPI_silk_Encode_mAF5926287B296B28EA7C79AE8233F4AB92C1A1A3(L_666, L_667, L_668, L_669, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, L_670, 1, NULL);
	}

IL_141d:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_672 = V_12;
		int32_t L_673 = V_26;
		int32_t L_674 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_675 = V_63;
		int32_t L_676 = ___2_frame_size;
		int32_t L_677 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_672, ((int32_t)il2cpp_codegen_multiply(L_673, L_674)), (RuntimeArray*)L_675, 0, ((int32_t)il2cpp_codegen_multiply(L_676, L_677)), NULL);
		int32_t L_678 = V_4;
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_679 = (BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D*)il2cpp_codegen_object_new(BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D_il2cpp_TypeInfo_var);
		BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD(L_679, L_678, BoxedValue_1__ctor_m696925A8F02B7BC9E15D4B0BDC40F6E65424E9DD_RuntimeMethod_var);
		V_64 = L_679;
		SilkEncoder_t842506B6D1C85806C167B0EA7477D65D71B0D507* L_680 = V_0;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_681 = __this->___silk_mode;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_682 = V_63;
		int32_t L_683 = ___2_frame_size;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_684 = V_5;
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_685 = V_64;
		int32_t L_686;
		L_686 = EncodeAPI_silk_Encode_mAF5926287B296B28EA7C79AE8233F4AB92C1A1A3(L_680, L_681, L_682, L_683, L_684, L_685, 0, NULL);
		V_3 = L_686;
		BoxedValue_1_t0EC07B8220DA0D804CD630BFD34D10980012262D* L_687 = V_64;
		NullCheck(L_687);
		int32_t L_688 = L_687->___Val;
		V_4 = L_688;
		int32_t L_689 = V_3;
		if (!L_689)
		{
			goto IL_1465;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1465:
	{
		int32_t L_690 = V_4;
		if (L_690)
		{
			goto IL_1494;
		}
	}
	{
		__this->___rangeFinal = (uint32_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_691 = ___3_data;
		int32_t L_692 = ___4_data_ptr;
		int32_t L_693 = __this->___mode;
		int32_t L_694 = __this->___Fs;
		int32_t L_695 = ___2_frame_size;
		int32_t L_696 = V_23;
		int32_t L_697 = __this->___stream_channels;
		uint8_t L_698;
		L_698 = CodecHelpers_gen_toc_m36D3043E7AE9BA3F43D6025DB507D4AB1C072773(L_693, ((int32_t)(L_694/L_695)), L_696, L_697, NULL);
		NullCheck(L_691);
		(L_691)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_692, 1))), (uint8_t)L_698);
		return 1;
	}

IL_1494:
	{
		int32_t L_699 = __this->___mode;
		if ((!(((uint32_t)L_699) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_14f0;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_700 = __this->___silk_mode;
		NullCheck(L_700);
		int32_t L_701 = L_700->___internalSampleRate;
		if ((!(((uint32_t)L_701) == ((uint32_t)((int32_t)8000)))))
		{
			goto IL_14bc;
		}
	}
	{
		V_23 = (int32_t)((int32_t)1101);
		goto IL_14f0;
	}

IL_14bc:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_702 = __this->___silk_mode;
		NullCheck(L_702);
		int32_t L_703 = L_702->___internalSampleRate;
		if ((!(((uint32_t)L_703) == ((uint32_t)((int32_t)12000)))))
		{
			goto IL_14d7;
		}
	}
	{
		V_23 = (int32_t)((int32_t)1102);
		goto IL_14f0;
	}

IL_14d7:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_704 = __this->___silk_mode;
		NullCheck(L_704);
		int32_t L_705 = L_704->___internalSampleRate;
		if ((!(((uint32_t)L_705) == ((uint32_t)((int32_t)16000)))))
		{
			goto IL_14f0;
		}
	}
	{
		V_23 = (int32_t)((int32_t)1103);
	}

IL_14f0:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_706 = __this->___silk_mode;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_707 = __this->___silk_mode;
		NullCheck(L_707);
		int32_t L_708 = L_707->___switchReady;
		NullCheck(L_706);
		L_706->___opusCanSwitch = L_708;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_709 = __this->___silk_mode;
		NullCheck(L_709);
		int32_t L_710 = L_709->___opusCanSwitch;
		if (!L_710)
		{
			goto IL_1520;
		}
	}
	{
		V_9 = 1;
		V_11 = 0;
		__this->___silk_bw_switch = 1;
	}

IL_1520:
	{
		V_76 = ((int32_t)21);
		int32_t L_711 = V_23;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_711, ((int32_t)1101))))
		{
			case 0:
			{
				goto IL_1547;
			}
			case 1:
			{
				goto IL_154d;
			}
			case 2:
			{
				goto IL_154d;
			}
			case 3:
			{
				goto IL_1553;
			}
			case 4:
			{
				goto IL_1559;
			}
		}
	}
	{
		goto IL_155d;
	}

IL_1547:
	{
		V_76 = ((int32_t)13);
		goto IL_155d;
	}

IL_154d:
	{
		V_76 = ((int32_t)17);
		goto IL_155d;
	}

IL_1553:
	{
		V_76 = ((int32_t)19);
		goto IL_155d;
	}

IL_1559:
	{
		V_76 = ((int32_t)21);
	}

IL_155d:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_712 = V_1;
		int32_t L_713 = V_76;
		NullCheck(L_712);
		CeltEncoder_SetEndBand_m070330249160FAF5D757022B8F8189E21AEE46B4(L_712, L_713, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_714 = V_1;
		int32_t L_715 = __this->___stream_channels;
		NullCheck(L_714);
		CeltEncoder_SetChannels_m50CF4C9194D5F501CB240D886F08A0F00A7C4508(L_714, L_715, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_716 = V_1;
		NullCheck(L_716);
		CeltEncoder_SetBitrate_m2B60EDAC47731279F443E62BF5B58786005B1173(L_716, (-1), NULL);
		int32_t L_717 = __this->___mode;
		if ((((int32_t)L_717) == ((int32_t)((int32_t)1000))))
		{
			goto IL_16c3;
		}
	}
	{
		V_77 = 2;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_718 = V_1;
		NullCheck(L_718);
		CeltEncoder_SetVBR_m7C511506875FCE7374D16F807DCEB92E999370F3(L_718, (bool)0, NULL);
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_719 = __this->___silk_mode;
		NullCheck(L_719);
		int32_t L_720 = L_719->___reducedDependency;
		if (!L_720)
		{
			goto IL_15a2;
		}
	}
	{
		V_77 = 0;
	}

IL_15a2:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_721 = V_1;
		int32_t L_722 = V_77;
		NullCheck(L_721);
		CeltEncoder_SetPrediction_m10EF7A6247FF017B39312260122B5E110FA67AC0(L_721, L_722, NULL);
		int32_t L_723 = __this->___mode;
		if ((!(((uint32_t)L_723) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_161c;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_724 = V_5;
		NullCheck(L_724);
		int32_t L_725;
		L_725 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_724, NULL);
		V_78 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_725, 7))>>3));
		int32_t L_726 = V_9;
		if (!L_726)
		{
			goto IL_15de;
		}
	}
	{
		int32_t L_727 = V_78;
		int32_t L_728 = __this->___mode;
		if ((((int32_t)L_728) == ((int32_t)((int32_t)1001))))
		{
			G_B338_0 = L_727;
			goto IL_15da;
		}
		G_B337_0 = L_727;
	}
	{
		G_B339_0 = 1;
		G_B339_1 = G_B337_0;
		goto IL_15db;
	}

IL_15da:
	{
		G_B339_0 = 3;
		G_B339_1 = G_B338_0;
	}

IL_15db:
	{
		V_78 = ((int32_t)il2cpp_codegen_add(G_B339_1, G_B339_0));
	}

IL_15de:
	{
		int32_t L_729 = __this->___use_vbr;
		if (!L_729)
		{
			goto IL_1609;
		}
	}
	{
		int32_t L_730 = V_78;
		int32_t L_731 = V_6;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_732 = __this->___silk_mode;
		NullCheck(L_732);
		int32_t L_733 = L_732->___bitRate;
		int32_t L_734 = ___2_frame_size;
		int32_t L_735 = __this->___Fs;
		V_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_730, L_731)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_733, L_734))/((int32_t)il2cpp_codegen_multiply(8, L_735))))));
		goto IL_16c6;
	}

IL_1609:
	{
		int32_t L_736 = V_78;
		int32_t L_737 = V_6;
		if ((((int32_t)L_736) > ((int32_t)L_737)))
		{
			goto IL_1613;
		}
	}
	{
		int32_t L_738 = V_6;
		G_B345_0 = L_738;
		goto IL_1615;
	}

IL_1613:
	{
		int32_t L_739 = V_78;
		G_B345_0 = L_739;
	}

IL_1615:
	{
		V_13 = G_B345_0;
		goto IL_16c6;
	}

IL_161c:
	{
		int32_t L_740 = __this->___use_vbr;
		if (!L_740)
		{
			goto IL_16bd;
		}
	}
	{
		V_79 = 0;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_741 = __this->___analysis;
		NullCheck(L_741);
		bool L_742 = L_741->___enabled;
		if (!L_742)
		{
			goto IL_168d;
		}
	}
	{
		int32_t L_743 = __this->___variable_duration;
		if ((!(((uint32_t)L_743) == ((uint32_t)((int32_t)5010)))))
		{
			goto IL_168d;
		}
	}
	{
		int32_t L_744 = ___2_frame_size;
		int32_t L_745 = __this->___Fs;
		if ((((int32_t)L_744) == ((int32_t)((int32_t)(L_745/((int32_t)50))))))
		{
			goto IL_168d;
		}
	}
	{
		int32_t L_746 = __this->___stream_channels;
		int32_t L_747 = __this->___Fs;
		int32_t L_748 = ___2_frame_size;
		V_79 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)60), L_746)), ((int32_t)40))), ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_747/L_748)), ((int32_t)50)))));
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_749 = V_29;
		NullCheck(L_749);
		int32_t L_750 = L_749->___valid;
		if (!L_750)
		{
			goto IL_168d;
		}
	}
	{
		int32_t L_751 = V_79;
		float L_752 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_751,NULL));
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_753 = V_29;
		NullCheck(L_753);
		float L_754 = L_753->___tonality;
		int32_t L_755 = (il2cpp_codegen_conv<int32_t,float,float,false,false>(((float)il2cpp_codegen_multiply(L_752, ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply((0.5f), L_754)))))),NULL));
		V_79 = L_755;
	}

IL_168d:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_756 = V_1;
		NullCheck(L_756);
		CeltEncoder_SetVBR_m7C511506875FCE7374D16F807DCEB92E999370F3(L_756, (bool)1, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_757 = V_1;
		int32_t L_758 = __this->___vbr_constraint;
		NullCheck(L_757);
		CeltEncoder_SetVBRConstraint_m059C6FEBC2DBED0F70099E27CFCDFDEAEACD6671(L_757, (bool)((!(((uint32_t)L_758) <= ((uint32_t)0)))? 1 : 0), NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_759 = V_1;
		int32_t L_760 = __this->___bitrate_bps;
		int32_t L_761 = V_79;
		NullCheck(L_759);
		CeltEncoder_SetBitrate_m2B60EDAC47731279F443E62BF5B58786005B1173(L_759, ((int32_t)il2cpp_codegen_add(L_760, L_761)), NULL);
		int32_t L_762 = V_25;
		int32_t L_763 = V_10;
		V_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_762, 1)), L_763));
		goto IL_16c6;
	}

IL_16bd:
	{
		int32_t L_764 = V_6;
		V_13 = L_764;
		goto IL_16c6;
	}

IL_16c3:
	{
		V_13 = 0;
	}

IL_16c6:
	{
		int32_t L_765 = __this->___channels;
		int32_t L_766 = __this->___Fs;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_767 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_765, L_766))/((int32_t)400))));
		V_32 = L_767;
		int32_t L_768 = __this->___mode;
		if ((((int32_t)L_768) == ((int32_t)((int32_t)1000))))
		{
			goto IL_1742;
		}
	}
	{
		int32_t L_769 = __this->___mode;
		int32_t L_770 = __this->___prev_mode;
		if ((((int32_t)L_769) == ((int32_t)L_770)))
		{
			goto IL_1742;
		}
	}
	{
		int32_t L_771 = __this->___prev_mode;
		if ((((int32_t)L_771) <= ((int32_t)0)))
		{
			goto IL_1742;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_772 = __this->___delay_buffer;
		int32_t L_773 = __this->___encoder_buffer;
		int32_t L_774 = V_26;
		int32_t L_775 = __this->___Fs;
		int32_t L_776 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_777 = V_32;
		int32_t L_778 = __this->___channels;
		int32_t L_779 = __this->___Fs;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_772, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_773, L_774)), ((int32_t)(L_775/((int32_t)400))))), L_776)), (RuntimeArray*)L_777, 0, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_778, L_779))/((int32_t)400))), NULL);
	}

IL_1742:
	{
		int32_t L_780 = __this->___channels;
		int32_t L_781 = __this->___encoder_buffer;
		int32_t L_782 = ___2_frame_size;
		int32_t L_783 = V_26;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_780, ((int32_t)il2cpp_codegen_subtract(L_781, ((int32_t)il2cpp_codegen_add(L_782, L_783))))))) <= ((int32_t)0)))
		{
			goto IL_17aa;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_784 = __this->___delay_buffer;
		int32_t L_785 = __this->___channels;
		int32_t L_786 = ___2_frame_size;
		int32_t L_787 = __this->___channels;
		int32_t L_788 = __this->___encoder_buffer;
		int32_t L_789 = ___2_frame_size;
		int32_t L_790 = V_26;
		Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E(L_784, ((int32_t)il2cpp_codegen_multiply(L_785, L_786)), 0, ((int32_t)il2cpp_codegen_multiply(L_787, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_788, L_789)), L_790)))), Arrays_MemMove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F490017F150730B3C73C5C43A1A2E707985B67E_RuntimeMethod_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_791 = V_12;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_792 = __this->___delay_buffer;
		int32_t L_793 = __this->___channels;
		int32_t L_794 = __this->___encoder_buffer;
		int32_t L_795 = ___2_frame_size;
		int32_t L_796 = V_26;
		int32_t L_797 = ___2_frame_size;
		int32_t L_798 = V_26;
		int32_t L_799 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_791, 0, (RuntimeArray*)L_792, ((int32_t)il2cpp_codegen_multiply(L_793, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_794, L_795)), L_796)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_797, L_798)), L_799)), NULL);
		goto IL_17d7;
	}

IL_17aa:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_800 = V_12;
		int32_t L_801 = ___2_frame_size;
		int32_t L_802 = V_26;
		int32_t L_803 = __this->___encoder_buffer;
		int32_t L_804 = __this->___channels;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_805 = __this->___delay_buffer;
		int32_t L_806 = __this->___encoder_buffer;
		int32_t L_807 = __this->___channels;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_800, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_801, L_802)), L_803)), L_804)), (RuntimeArray*)L_805, 0, ((int32_t)il2cpp_codegen_multiply(L_806, L_807)), NULL);
	}

IL_17d7:
	{
		int32_t L_808 = __this->___prev_HB_gain;
		if ((((int32_t)L_808) < ((int32_t)((int32_t)32767))))
		{
			goto IL_17ed;
		}
	}
	{
		int32_t L_809 = V_24;
		if ((((int32_t)L_809) >= ((int32_t)((int32_t)32767))))
		{
			goto IL_1818;
		}
	}

IL_17ed:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_810 = V_12;
		int32_t L_811 = __this->___prev_HB_gain;
		int32_t L_812 = V_24;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_813 = V_28;
		NullCheck(L_813);
		int32_t L_814 = L_813->___overlap;
		int32_t L_815 = ___2_frame_size;
		int32_t L_816 = __this->___channels;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_817 = V_28;
		NullCheck(L_817);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_818 = L_817->___window;
		int32_t L_819 = __this->___Fs;
		CodecHelpers_gain_fade_m26704332D22E7F8E8EE5769198B4875ED7912E68(L_810, 0, L_811, L_812, L_814, L_815, L_816, L_818, L_819, NULL);
	}

IL_1818:
	{
		int32_t L_820 = V_24;
		__this->___prev_HB_gain = L_820;
		int32_t L_821 = __this->___mode;
		if ((!(((uint32_t)L_821) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_1836;
		}
	}
	{
		int32_t L_822 = __this->___stream_channels;
		if ((!(((uint32_t)L_822) == ((uint32_t)1))))
		{
			goto IL_185b;
		}
	}

IL_1836:
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_823 = __this->___silk_mode;
		int32_t L_824 = V_19;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_825;
		L_825 = Inlines_IMAX_mF826EDBD765651BC22E22C96C35C8DFB9F9176D2_inline(0, ((int32_t)il2cpp_codegen_subtract(L_824, ((int32_t)30000))), NULL);
		int32_t L_826;
		L_826 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)16384), ((int32_t)il2cpp_codegen_multiply(2, L_825)), NULL);
		NullCheck(L_823);
		L_823->___stereoWidth_Q14 = L_826;
	}

IL_185b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_827 = __this->___energy_masking;
		if (L_827)
		{
			goto IL_1915;
		}
	}
	{
		int32_t L_828 = __this->___channels;
		if ((!(((uint32_t)L_828) == ((uint32_t)2))))
		{
			goto IL_1915;
		}
	}
	{
		int16_t L_829 = __this->___hybrid_stereo_width_Q14;
		if ((((int32_t)L_829) < ((int32_t)((int32_t)16384))))
		{
			goto IL_1894;
		}
	}
	{
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_830 = __this->___silk_mode;
		NullCheck(L_830);
		int32_t L_831 = L_830->___stereoWidth_Q14;
		if ((((int32_t)L_831) >= ((int32_t)((int32_t)16384))))
		{
			goto IL_1915;
		}
	}

IL_1894:
	{
		int16_t L_832 = __this->___hybrid_stereo_width_Q14;
		V_80 = (int32_t)L_832;
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_833 = __this->___silk_mode;
		NullCheck(L_833);
		int32_t L_834 = L_833->___stereoWidth_Q14;
		V_81 = L_834;
		int32_t L_835 = V_80;
		if ((((int32_t)L_835) == ((int32_t)((int32_t)16384))))
		{
			goto IL_18bc;
		}
	}
	{
		int32_t L_836 = V_80;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_837;
		L_837 = Inlines_SHL16_m768B89D36A8CC1CA8F33C9FCFB60981068D424F0_inline(L_836, 1, NULL);
		G_B375_0 = L_837;
		goto IL_18c1;
	}

IL_18bc:
	{
		G_B375_0 = ((int32_t)32767);
	}

IL_18c1:
	{
		V_80 = G_B375_0;
		int32_t L_838 = V_81;
		if ((((int32_t)L_838) == ((int32_t)((int32_t)16384))))
		{
			goto IL_18d6;
		}
	}
	{
		int32_t L_839 = V_81;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_840;
		L_840 = Inlines_SHL16_m768B89D36A8CC1CA8F33C9FCFB60981068D424F0_inline(L_839, 1, NULL);
		G_B378_0 = L_840;
		goto IL_18db;
	}

IL_18d6:
	{
		G_B378_0 = ((int32_t)32767);
	}

IL_18db:
	{
		V_81 = G_B378_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_841 = V_12;
		int32_t L_842 = V_80;
		int32_t L_843 = V_81;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_844 = V_28;
		NullCheck(L_844);
		int32_t L_845 = L_844->___overlap;
		int32_t L_846 = ___2_frame_size;
		int32_t L_847 = __this->___channels;
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_848 = V_28;
		NullCheck(L_848);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_849 = L_848->___window;
		int32_t L_850 = __this->___Fs;
		CodecHelpers_stereo_fade_m62DCD7281AF01A177277B2D1B37486951913E63D(L_841, L_842, L_843, L_845, L_846, L_847, L_849, L_850, NULL);
		EncControlState_t3D756F889985F459D6363D77B1B3971AD860BBF5* L_851 = __this->___silk_mode;
		NullCheck(L_851);
		int32_t L_852 = L_851->___stereoWidth_Q14;
		int16_t L_853 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_852,NULL));
		__this->___hybrid_stereo_width_Q14 = L_853;
	}

IL_1915:
	{
		int32_t L_854 = __this->___mode;
		if ((((int32_t)L_854) == ((int32_t)((int32_t)1002))))
		{
			goto IL_19fb;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_855 = V_5;
		NullCheck(L_855);
		int32_t L_856;
		L_856 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_855, NULL);
		int32_t L_857 = __this->___mode;
		if ((((int32_t)L_857) == ((int32_t)((int32_t)1001))))
		{
			G_B382_0 = ((int32_t)20);
			G_B382_1 = ((int32_t)il2cpp_codegen_add(L_856, ((int32_t)17)));
			goto IL_1941;
		}
		G_B381_0 = ((int32_t)20);
		G_B381_1 = ((int32_t)il2cpp_codegen_add(L_856, ((int32_t)17)));
	}
	{
		G_B383_0 = 0;
		G_B383_1 = G_B381_0;
		G_B383_2 = G_B381_1;
		goto IL_1942;
	}

IL_1941:
	{
		G_B383_0 = 1;
		G_B383_1 = G_B382_0;
		G_B383_2 = G_B382_1;
	}

IL_1942:
	{
		int32_t L_858 = V_25;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(G_B383_2, ((int32_t)il2cpp_codegen_multiply(G_B383_1, G_B383_0))))) > ((int32_t)((int32_t)il2cpp_codegen_multiply(8, ((int32_t)il2cpp_codegen_subtract(L_858, 1)))))))
		{
			goto IL_19fb;
		}
	}
	{
		int32_t L_859 = __this->___mode;
		if ((!(((uint32_t)L_859) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_197b;
		}
	}
	{
		int32_t L_860 = V_9;
		if (L_860)
		{
			goto IL_1970;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_861 = V_5;
		NullCheck(L_861);
		int32_t L_862;
		L_862 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_861, NULL);
		int32_t L_863 = V_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_862, ((int32_t)37)))) > ((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_863)))))
		{
			goto IL_197b;
		}
	}

IL_1970:
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_864 = V_5;
		int32_t L_865 = V_9;
		NullCheck(L_864);
		EntropyCoder_enc_bit_logp_mA5A97FA79C53558E3D593C6055C553A5AE849771(L_864, L_865, (uint32_t)((int32_t)12), NULL);
	}

IL_197b:
	{
		int32_t L_866 = V_9;
		if (!L_866)
		{
			goto IL_19fe;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_867 = V_5;
		int32_t L_868 = V_11;
		NullCheck(L_867);
		EntropyCoder_enc_bit_logp_mA5A97FA79C53558E3D593C6055C553A5AE849771(L_867, L_868, (uint32_t)1, NULL);
		int32_t L_869 = __this->___mode;
		if ((!(((uint32_t)L_869) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_19a1;
		}
	}
	{
		int32_t L_870 = V_25;
		int32_t L_871 = V_13;
		V_82 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_870, 1)), L_871));
		goto IL_19b3;
	}

IL_19a1:
	{
		int32_t L_872 = V_25;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_873 = V_5;
		NullCheck(L_873);
		int32_t L_874;
		L_874 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_873, NULL);
		V_82 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_872, 1)), ((int32_t)(((int32_t)il2cpp_codegen_add(L_874, 7))>>3))));
	}

IL_19b3:
	{
		int32_t L_875 = V_82;
		int32_t L_876 = __this->___bitrate_bps;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_877;
		L_877 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(L_875, ((int32_t)(L_876/((int32_t)1600))), NULL);
		V_10 = L_877;
		int32_t L_878 = V_10;
		int32_t L_879;
		L_879 = Inlines_IMAX_mF826EDBD765651BC22E22C96C35C8DFB9F9176D2_inline(2, L_878, NULL);
		int32_t L_880;
		L_880 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)257), L_879, NULL);
		V_10 = L_880;
		int32_t L_881 = __this->___mode;
		if ((!(((uint32_t)L_881) == ((uint32_t)((int32_t)1001)))))
		{
			goto IL_19fe;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_882 = V_5;
		int32_t L_883 = V_10;
		NullCheck(L_882);
		EntropyCoder_enc_uint_mC2D55A26DDAFEE3BCD9D5BB4E963BC6830D7416F(L_882, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_883, 2)), (uint32_t)((int32_t)256), NULL);
		goto IL_19fe;
	}

IL_19fb:
	{
		V_9 = 0;
	}

IL_19fe:
	{
		int32_t L_884 = V_9;
		if (L_884)
		{
			goto IL_1a0c;
		}
	}
	{
		__this->___silk_bw_switch = 0;
		V_10 = 0;
	}

IL_1a0c:
	{
		int32_t L_885 = __this->___mode;
		if ((((int32_t)L_885) == ((int32_t)((int32_t)1002))))
		{
			goto IL_1a1d;
		}
	}
	{
		V_8 = ((int32_t)17);
	}

IL_1a1d:
	{
		int32_t L_886 = __this->___mode;
		if ((!(((uint32_t)L_886) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_1a42;
		}
	}
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_887 = V_5;
		NullCheck(L_887);
		int32_t L_888;
		L_888 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_887, NULL);
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_888, 7))>>3));
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_889 = V_5;
		NullCheck(L_889);
		EntropyCoder_enc_done_mCD60036BB229EF7821D76F440AE65BA28B856B60(L_889, NULL);
		int32_t L_890 = V_3;
		V_13 = L_890;
		goto IL_1a5b;
	}

IL_1a42:
	{
		int32_t L_891 = V_25;
		int32_t L_892 = V_10;
		int32_t L_893 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_894;
		L_894 = Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_891, 1)), L_892)), L_893, NULL);
		V_13 = L_894;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_895 = V_5;
		int32_t L_896 = V_13;
		NullCheck(L_895);
		EntropyCoder_enc_shrink_m681ECDF029CD15A3BCC795140148DC5FFDDC327C(L_895, (uint32_t)L_896, NULL);
	}

IL_1a5b:
	{
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_897 = __this->___analysis;
		NullCheck(L_897);
		bool L_898 = L_897->___enabled;
		if (!L_898)
		{
			goto IL_1a6c;
		}
	}
	{
		int32_t L_899 = V_9;
		if (L_899)
		{
			goto IL_1a79;
		}
	}

IL_1a6c:
	{
		int32_t L_900 = __this->___mode;
		if ((((int32_t)L_900) == ((int32_t)((int32_t)1000))))
		{
			goto IL_1a93;
		}
	}

IL_1a79:
	{
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_901 = V_29;
		TonalityAnalysisState_t258FA878AEB589F58CC5DD3C6144282258512447* L_902 = __this->___analysis;
		NullCheck(L_902);
		bool L_903 = L_902->___enabled;
		NullCheck(L_901);
		L_901->___enabled = L_903;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_904 = V_1;
		AnalysisInfo_t3CC2A9D48128A28D17CA6137C3F40441714BE6D2* L_905 = V_29;
		NullCheck(L_904);
		CeltEncoder_SetAnalysis_mEB032D63E6F6E4AA45765EA3AF736D7554DA5411(L_904, L_905, NULL);
	}

IL_1a93:
	{
		int32_t L_906 = V_9;
		if (!L_906)
		{
			goto IL_1adc;
		}
	}
	{
		int32_t L_907 = V_11;
		if (!L_907)
		{
			goto IL_1adc;
		}
	}
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_908 = V_1;
		NullCheck(L_908);
		CeltEncoder_SetStartBand_m2E9281A33555F11C4CEE4832A2E85F56D9CADE1F(L_908, 0, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_909 = V_1;
		NullCheck(L_909);
		CeltEncoder_SetVBR_m7C511506875FCE7374D16F807DCEB92E999370F3(L_909, (bool)0, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_910 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_911 = V_12;
		int32_t L_912 = __this->___Fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_913 = ___3_data;
		int32_t L_914 = ___4_data_ptr;
		int32_t L_915 = V_13;
		int32_t L_916 = V_10;
		NullCheck(L_910);
		int32_t L_917;
		L_917 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_910, L_911, 0, ((int32_t)(L_912/((int32_t)200))), L_913, ((int32_t)il2cpp_codegen_add(L_914, L_915)), L_916, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, NULL);
		if ((((int32_t)L_917) >= ((int32_t)0)))
		{
			goto IL_1ace;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1ace:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_918 = V_1;
		NullCheck(L_918);
		uint32_t L_919;
		L_919 = CeltEncoder_GetFinalRange_m2092F8FCA30E8FAA7776C95301B7356C1C6A698A_inline(L_918, NULL);
		V_15 = L_919;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_920 = V_1;
		NullCheck(L_920);
		CeltEncoder_ResetState_mB75E57E79EFAD09094038C584BCF675F90EFA1E7(L_920, NULL);
	}

IL_1adc:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_921 = V_1;
		int32_t L_922 = V_8;
		NullCheck(L_921);
		CeltEncoder_SetStartBand_m2E9281A33555F11C4CEE4832A2E85F56D9CADE1F(L_921, L_922, NULL);
		int32_t L_923 = __this->___mode;
		if ((((int32_t)L_923) == ((int32_t)((int32_t)1000))))
		{
			goto IL_1b5d;
		}
	}
	{
		int32_t L_924 = __this->___mode;
		int32_t L_925 = __this->___prev_mode;
		if ((((int32_t)L_924) == ((int32_t)L_925)))
		{
			goto IL_1b38;
		}
	}
	{
		int32_t L_926 = __this->___prev_mode;
		if ((((int32_t)L_926) <= ((int32_t)0)))
		{
			goto IL_1b38;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_927 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_83 = L_927;
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_928 = V_1;
		NullCheck(L_928);
		CeltEncoder_ResetState_mB75E57E79EFAD09094038C584BCF675F90EFA1E7(L_928, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_929 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_930 = V_32;
		int32_t L_931 = __this->___Fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_932 = V_83;
		NullCheck(L_929);
		int32_t L_933;
		L_933 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_929, L_930, 0, ((int32_t)(L_931/((int32_t)400))), L_932, 0, 2, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_934 = V_1;
		NullCheck(L_934);
		CeltEncoder_SetPrediction_m10EF7A6247FF017B39312260122B5E110FA67AC0(L_934, 0, NULL);
	}

IL_1b38:
	{
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_935 = V_5;
		NullCheck(L_935);
		int32_t L_936;
		L_936 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_935, NULL);
		int32_t L_937 = V_13;
		if ((((int32_t)L_936) > ((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_937)))))
		{
			goto IL_1b5d;
		}
	}
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_938 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_939 = V_12;
		int32_t L_940 = ___2_frame_size;
		int32_t L_941 = V_13;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_942 = V_5;
		NullCheck(L_938);
		int32_t L_943;
		L_943 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_938, L_939, 0, L_940, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, L_941, L_942, NULL);
		V_3 = L_943;
		int32_t L_944 = V_3;
		if ((((int32_t)L_944) >= ((int32_t)0)))
		{
			goto IL_1b5d;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1b5d:
	{
		int32_t L_945 = V_9;
		if (!L_945)
		{
			goto IL_1bee;
		}
	}
	{
		int32_t L_946 = V_11;
		if (L_946)
		{
			goto IL_1bee;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_947 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_84 = L_947;
		int32_t L_948 = __this->___Fs;
		V_85 = ((int32_t)(L_948/((int32_t)200)));
		int32_t L_949 = __this->___Fs;
		V_86 = ((int32_t)(L_949/((int32_t)400)));
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_950 = V_1;
		NullCheck(L_950);
		CeltEncoder_ResetState_mB75E57E79EFAD09094038C584BCF675F90EFA1E7(L_950, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_951 = V_1;
		NullCheck(L_951);
		CeltEncoder_SetStartBand_m2E9281A33555F11C4CEE4832A2E85F56D9CADE1F(L_951, 0, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_952 = V_1;
		NullCheck(L_952);
		CeltEncoder_SetPrediction_m10EF7A6247FF017B39312260122B5E110FA67AC0(L_952, 0, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_953 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_954 = V_12;
		int32_t L_955 = __this->___channels;
		int32_t L_956 = ___2_frame_size;
		int32_t L_957 = V_85;
		int32_t L_958 = V_86;
		int32_t L_959 = V_86;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_960 = V_84;
		NullCheck(L_953);
		int32_t L_961;
		L_961 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_953, L_954, ((int32_t)il2cpp_codegen_multiply(L_955, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_956, L_957)), L_958)))), L_959, L_960, 0, 2, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, NULL);
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_962 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_963 = V_12;
		int32_t L_964 = __this->___channels;
		int32_t L_965 = ___2_frame_size;
		int32_t L_966 = V_85;
		int32_t L_967 = V_85;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_968 = ___3_data;
		int32_t L_969 = ___4_data_ptr;
		int32_t L_970 = V_13;
		int32_t L_971 = V_10;
		NullCheck(L_962);
		int32_t L_972;
		L_972 = CeltEncoder_celt_encode_with_ec_m0F0FB5CE568865F19B35E8D34FC4CEF09A68A8D4(L_962, L_963, ((int32_t)il2cpp_codegen_multiply(L_964, ((int32_t)il2cpp_codegen_subtract(L_965, L_966)))), L_967, L_968, ((int32_t)il2cpp_codegen_add(L_969, L_970)), L_971, (EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A*)NULL, NULL);
		if ((((int32_t)L_972) >= ((int32_t)0)))
		{
			goto IL_1be6;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1be6:
	{
		CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* L_973 = V_1;
		NullCheck(L_973);
		uint32_t L_974;
		L_974 = CeltEncoder_GetFinalRange_m2092F8FCA30E8FAA7776C95301B7356C1C6A698A_inline(L_973, NULL);
		V_15 = L_974;
	}

IL_1bee:
	{
		int32_t L_975 = ___4_data_ptr;
		___4_data_ptr = ((int32_t)il2cpp_codegen_subtract(L_975, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_976 = ___3_data;
		int32_t L_977 = ___4_data_ptr;
		int32_t L_978 = __this->___mode;
		int32_t L_979 = __this->___Fs;
		int32_t L_980 = ___2_frame_size;
		int32_t L_981 = V_23;
		int32_t L_982 = __this->___stream_channels;
		uint8_t L_983;
		L_983 = CodecHelpers_gen_toc_m36D3043E7AE9BA3F43D6025DB507D4AB1C072773(L_978, ((int32_t)(L_979/L_980)), L_981, L_982, NULL);
		NullCheck(L_976);
		(L_976)->SetAt(static_cast<il2cpp_array_size_t>(L_977), (uint8_t)L_983);
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_984 = V_5;
		NullCheck(L_984);
		uint32_t L_985 = L_984->___rng;
		uint32_t L_986 = V_15;
		__this->___rangeFinal = (uint32_t)((int32_t)((int32_t)L_985^(int32_t)L_986));
		int32_t L_987 = V_14;
		if (!L_987)
		{
			goto IL_1c35;
		}
	}
	{
		__this->___prev_mode = (int32_t)((int32_t)1002);
		goto IL_1c41;
	}

IL_1c35:
	{
		int32_t L_988 = __this->___mode;
		__this->___prev_mode = L_988;
	}

IL_1c41:
	{
		int32_t L_989 = __this->___stream_channels;
		__this->___prev_channels = L_989;
		int32_t L_990 = ___2_frame_size;
		__this->___prev_framesize = L_990;
		__this->___first = 0;
		EntropyCoder_t292C721FC323C88DE86C46796FCEE2CF6395B88A* L_991 = V_5;
		NullCheck(L_991);
		int32_t L_992;
		L_992 = EntropyCoder_tell_m2B0E4AB1BD6C49CFE71128C8F8B9D63A75506AA9(L_991, NULL);
		int32_t L_993 = V_25;
		if ((((int32_t)L_992) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_993, 1)), 8)))))
		{
			goto IL_1c85;
		}
	}
	{
		int32_t L_994 = V_25;
		if ((((int32_t)L_994) >= ((int32_t)2)))
		{
			goto IL_1c72;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_1c72:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_995 = ___3_data;
		int32_t L_996 = ___4_data_ptr;
		NullCheck(L_995);
		(L_995)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_996, 1))), (uint8_t)0);
		V_3 = 1;
		__this->___rangeFinal = (uint32_t)0;
		goto IL_1ca9;
	}

IL_1c85:
	{
		int32_t L_997 = __this->___mode;
		if ((!(((uint32_t)L_997) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_1ca9;
		}
	}
	{
		int32_t L_998 = V_9;
		if (L_998)
		{
			goto IL_1ca9;
		}
	}
	{
		goto IL_1c9c;
	}

IL_1c98:
	{
		int32_t L_999 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_999, 1));
	}

IL_1c9c:
	{
		int32_t L_1000 = V_3;
		if ((((int32_t)L_1000) <= ((int32_t)2)))
		{
			goto IL_1ca9;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1001 = ___3_data;
		int32_t L_1002 = ___4_data_ptr;
		int32_t L_1003 = V_3;
		NullCheck(L_1001);
		int32_t L_1004 = ((int32_t)il2cpp_codegen_add(L_1002, L_1003));
		uint8_t L_1005 = (L_1001)->GetAt(static_cast<il2cpp_array_size_t>(L_1004));
		if (!L_1005)
		{
			goto IL_1c98;
		}
	}

IL_1ca9:
	{
		int32_t L_1006 = V_3;
		int32_t L_1007 = V_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1006, ((int32_t)il2cpp_codegen_add(1, L_1007))));
		int32_t L_1008 = __this->___use_vbr;
		if (L_1008)
		{
			goto IL_1ccc;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1009 = ___3_data;
		int32_t L_1010 = ___4_data_ptr;
		int32_t L_1011 = V_3;
		int32_t L_1012 = V_25;
		int32_t L_1013;
		L_1013 = OpusRepacketizer_PadPacket_m73673282B4FEE94293683AA943B65F1DED670723(L_1009, L_1010, L_1011, L_1012, NULL);
		if (!L_1013)
		{
			goto IL_1cc9;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_1cc9:
	{
		int32_t L_1014 = V_25;
		V_3 = L_1014;
	}

IL_1ccc:
	{
		int32_t L_1015 = V_3;
		return L_1015;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PerformanceOptimizer_GetCachedSize_TisIl2CppFullySharedGenericAny_mCF41330AAA7BB9E3695FF6D7A25CB6FAE60C6875_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_collection, String_t* ___1_cacheKey, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_collection;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceOptimizer_GetPooledObject_TisIl2CppFullySharedGenericAny_mE2587103FE9A91754738A3935ED80BC78B8977C0_gshared (String_t* ___0_typeName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m0A9791A878A24FD213FBF19D37BB974525CD23B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB83471E6DB330FD9D458123C6584717A4BF8F763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tB46153E304721D079CED215273BE22C4FAFE59C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tB46153E304721D079CED215273BE22C4FAFE59C1);
	const Il2CppFullySharedGenericAny L_13 = L_11;
	{
		il2cpp_codegen_runtime_class_init_inline(PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_il2cpp_TypeInfo_var);
		Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110* L_0 = ((PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_StaticFields*)il2cpp_codegen_static_fields_for(PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_il2cpp_TypeInfo_var))->___objectPools;
		String_t* L_1 = ___0_typeName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m0A9791A878A24FD213FBF19D37BB974525CD23B3(L_0, L_1, Dictionary_2_ContainsKey_m0A9791A878A24FD213FBF19D37BB974525CD23B3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_il2cpp_TypeInfo_var);
		Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110* L_3 = ((PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_StaticFields*)il2cpp_codegen_static_fields_for(PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_il2cpp_TypeInfo_var))->___objectPools;
		String_t* L_4 = ___0_typeName;
		NullCheck(L_3);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5;
		L_5 = Dictionary_2_get_Item_mB83471E6DB330FD9D458123C6584717A4BF8F763(L_3, L_4, Dictionary_2_get_Item_mB83471E6DB330FD9D458123C6584717A4BF8F763_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_inline(L_5, Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_il2cpp_TypeInfo_var);
		Dictionary_2_t380D3DBD7A29851BDF194B7439EEB7F208964110* L_7 = ((PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_StaticFields*)il2cpp_codegen_static_fields_for(PerformanceOptimizer_t4F3DCC38AA26AAA5B9818B296943A02B344CD76D_il2cpp_TypeInfo_var))->___objectPools;
		String_t* L_8 = ___0_typeName;
		NullCheck(L_7);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9;
		L_9 = Dictionary_2_get_Item_mB83471E6DB330FD9D458123C6584717A4BF8F763(L_7, L_8, Dictionary_2_get_Item_mB83471E6DB330FD9D458123C6584717A4BF8F763_RuntimeMethod_var);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84(L_9, Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(method->rgctx_data, 0), L_11);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)), SizeOf_T_tB46153E304721D079CED215273BE22C4FAFE59C1);
		return;
	}

IL_0036:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_T_tB46153E304721D079CED215273BE22C4FAFE59C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4>(__this);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4>(__this);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4>(__this);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4>(__this);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4>(__this);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4>(__this);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4>(__this);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4>(__this);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4>(__this);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalProcessRenderRequests_TisIl2CppSharedGenericObject_mF9BCD7D64842DB2984FC928350167166DFED0A05_gshared (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, Il2CppSharedGenericObject* ___2_renderRequest, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), (RuntimeObject*)__this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_2 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_3 = ___0_context;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___1_camera;
		Il2CppSharedGenericObject* L_5 = ___2_renderRequest;
		GenericVirtualActionInvoker3< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Il2CppSharedGenericObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_3, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalProcessRenderRequests_TisIl2CppFullySharedGenericAny_m1B5F349620E1AF2FD25B80C942788B44527A5ECB_gshared (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, Il2CppFullySharedGenericAny ___2_renderRequest, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_RequestData_tFFF859BCA58727F08590F65886AC454D579DFF08 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_RequestData_tFFF859BCA58727F08590F65886AC454D579DFF08);
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), (RuntimeObject*)__this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_2 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_3 = ___0_context;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___1_camera;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_renderRequest : &___2_renderRequest), SizeOf_RequestData_tFFF859BCA58727F08590F65886AC454D579DFF08);
		GenericVirtualActionInvoker3Invoker< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_3, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_ProcessRenderRequests_TisIl2CppSharedGenericObject_mD11A44A0B8DCF985B31F2F5A20C4315CFED08E48_gshared (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, Il2CppSharedGenericObject* ___2_renderRequest, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_ProcessRenderRequests_TisIl2CppFullySharedGenericAny_mE7D37ECCF34E4A3D01A44EF6DDAD7919497594F3_gshared (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, Il2CppFullySharedGenericAny ___2_renderRequest, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipelineGlobalSettings_GetSettingsImplementingInterface_TisIl2CppSharedGenericObject_m15AEF16039E22243F9434CF868C1406E517B107A_gshared (RenderPipelineGlobalSettings_t3F883EA6174C636143F71211A146A0B1D9E76000* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E** ___0_settings, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E** L_0 = ___0_settings;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_1 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_0, (RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_2;
		L_2 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_0015:
	{
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_3;
		L_3 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD(L_3, L_4, List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD_RuntimeMethod_var);
		V_1 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppSharedGenericObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E** L_7 = ___0_settings;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_8 = il2cpp_codegen_ldind<List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*>(L_7);
		Il2CppSharedGenericObject* L_9 = V_1;
		NullCheck(L_8);
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_12;
		L_12 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_inline(L_12, List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0015;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E** L_14 = ___0_settings;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_15 = il2cpp_codegen_ldind<List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*>(L_14);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_15, il2cpp_rgctx_method(method->rgctx_data, 5));
		return (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipelineGlobalSettings_TryGetFirstSettingsImplementingInterface_TisIl2CppSharedGenericObject_m5DB4B2F1501562E08C66AAB54DF02939319F9DB7_gshared (RenderPipelineGlobalSettings_t3F883EA6174C636143F71211A146A0B1D9E76000* __this, Il2CppSharedGenericObject** ___0_settings, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Il2CppSharedGenericObject** L_0 = ___0_settings;
		il2cpp_codegen_initobj(L_0, sizeof(Il2CppSharedGenericObject*));
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_1;
		L_1 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0015:
	{
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_2;
		L_2 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD(L_2, L_3, List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD_RuntimeMethod_var);
		V_1 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppSharedGenericObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		Il2CppSharedGenericObject** L_6 = ___0_settings;
		Il2CppSharedGenericObject* L_7 = V_1;
		*(Il2CppSharedGenericObject**)L_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_6, (void*)L_7);
		return (bool)1;
	}

IL_003d:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0041:
	{
		int32_t L_9 = V_0;
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_10;
		L_10 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_inline(L_10, List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_0 = ___0_rawObjects;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)NULL;
	}

IL_0005:
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_1 = ___0_rawObjects;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), (uint32_t)L_2);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0025;
	}

IL_0012:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		int32_t L_5 = V_1;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_6 = ___0_rawObjects;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppSharedGenericObject*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0025:
	{
		int32_t L_11 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0012;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_FindObjectsOfTypeAll_TisIl2CppSharedGenericObject_m7EC7BBE589A945E1EC23527D09B350EC60660D7F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Resources_FindObjectsOfTypeAll_mECAB6322D6A605B60AF0598F6D81F169ACE74C00(L_1, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3;
		L_3 = Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Resources_GetBuiltinResource_TisIl2CppSharedGenericObject_m3AC9AA02C1DF38F65CA96D162DFE72EE288061F9_gshared (String_t* ___0_path, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___0_path;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_GetBuiltinResource_mD67A5C47BA93B04E0A9398611A735EA1803CAE5B(L_1, L_2, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Resources_Load_TisIl2CppSharedGenericObject_m15A7702F800FD0DA993507C33D68862214337C37_gshared (String_t* ___0_path, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_path;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(L_0, L_2, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_LoadAll_TisIl2CppSharedGenericObject_mC1C68D09F86209B6A2E98869CD4493139E238569_gshared (String_t* ___0_path, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_path;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3;
		L_3 = Resources_LoadAll_m7A2507FF57FF618BC37FDF8E9AB3ACCE18592C51(L_0, L_2, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4;
		L_4 = Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIl2CppFullySharedGenericAny_m36C68BC159395DAE262FAD5EEFC56958D5BCD40C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_2, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_3;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_GetterAdapterFrame_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF0611EDC41DA8F4F03BD135DCF20E262EA42D3E3_gshared (Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2);
	const uint32_t SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0);
	{
		Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* L_0 = ___0_getter;
		RuntimeObject* L_1 = ___1_obj;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		NullCheck(L_0);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))), (Il2CppFullySharedGenericAny*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_StaticGetterAdapterFrame_TisIl2CppFullySharedGenericAny_mE4B36707DB7E08FCD6D3A3799C958AB637E8AE64_gshared (StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF);
	{
		StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* L_0 = ___0_getter;
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInOrder_TisIl2CppSharedGenericObject_mF05D52DCAD9A55C4E5FBC43DED63667D38B13B0B_gshared (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, RuntimeObject* ___0_assemblies, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* G_B2_0 = NULL;
	Type_t* G_B2_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Type_t* G_B1_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B1_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2 = ___0_assemblies;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0016;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		RuntimeObject* L_4;
		L_4 = ScopeTransitionHelper_get_AllAssemblies_m3D52FB986E172746F435A46F24CAA4ED7795AADA_inline(__this, NULL);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0016:
	{
		NullCheck(G_B2_2);
		ScopeTransitionHelper_ExecuteMethodsInOrder_mE0926AEB4A09521C95A0209F5D06BF5CC33D4E99(G_B2_2, G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInOrder_TisIl2CppFullySharedGenericAny_mD5B4C9DB685FCD7B6E5722208FA8312A8A995D5E_gshared (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, RuntimeObject* ___0_assemblies, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* G_B2_0 = NULL;
	Type_t* G_B2_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Type_t* G_B1_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B1_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2 = ___0_assemblies;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0016;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		RuntimeObject* L_4;
		L_4 = ScopeTransitionHelper_get_AllAssemblies_m3D52FB986E172746F435A46F24CAA4ED7795AADA_inline(__this, NULL);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0016:
	{
		NullCheck(G_B2_2);
		ScopeTransitionHelper_ExecuteMethodsInOrder_mE0926AEB4A09521C95A0209F5D06BF5CC33D4E99(G_B2_2, G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInReverseOrder_TisIl2CppSharedGenericObject_mD19EB5D8849F9D0D86DE26B6E7AE26A0872C6C01_gshared (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, RuntimeObject* ___0_assemblies, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* G_B2_0 = NULL;
	Type_t* G_B2_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Type_t* G_B1_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B1_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2 = ___0_assemblies;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0016;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		RuntimeObject* L_4;
		L_4 = ScopeTransitionHelper_get_AllAssemblies_m3D52FB986E172746F435A46F24CAA4ED7795AADA_inline(__this, NULL);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0016:
	{
		NullCheck(G_B2_2);
		ScopeTransitionHelper_ExecuteMethodsInReverseOrder_mE98773AD3E2B6C72D02888DFE1960902C8161542(G_B2_2, G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInReverseOrder_TisIl2CppFullySharedGenericAny_m695A5409D1A5458BFDFE29606F39137E26AB0B9A_gshared (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, RuntimeObject* ___0_assemblies, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* G_B2_0 = NULL;
	Type_t* G_B2_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Type_t* G_B1_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B1_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeObject* L_2 = ___0_assemblies;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0016;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		RuntimeObject* L_4;
		L_4 = ScopeTransitionHelper_get_AllAssemblies_m3D52FB986E172746F435A46F24CAA4ED7795AADA_inline(__this, NULL);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0016:
	{
		NullCheck(G_B2_2);
		ScopeTransitionHelper_ExecuteMethodsInReverseOrder_mE98773AD3E2B6C72D02888DFE1960902C8161542(G_B2_2, G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetClass_TisIl2CppSharedGenericObject_mFE8076EA47515D544528A167A4FD0D0D3DA30BB7_gshared (Il2CppSharedGenericObject** ___0_currentValue, Il2CppSharedGenericObject* ___1_newValue, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_currentValue;
		Il2CppSharedGenericObject* L_1 = (*(Il2CppSharedGenericObject**)L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Il2CppSharedGenericObject* L_2 = ___1_newValue;
		if (!L_2)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		Il2CppSharedGenericObject** L_3 = ___0_currentValue;
		Il2CppSharedGenericObject* L_4 = (*(Il2CppSharedGenericObject**)L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Il2CppSharedGenericObject** L_5 = ___0_currentValue;
		Il2CppSharedGenericObject* L_6 = ___1_newValue;
		NullCheck((RuntimeObject*)(*L_5));
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)(*L_5), (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return (bool)0;
	}

IL_0038:
	{
		Il2CppSharedGenericObject** L_8 = ___0_currentValue;
		Il2CppSharedGenericObject* L_9 = ___1_newValue;
		*(Il2CppSharedGenericObject**)L_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_8, (void*)L_9);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8D96C8077BB7384F3CE2D22D7F7432CD43DDDC77_gshared (bool* ___0_currentValue, bool ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0;
		L_0 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		bool* L_1 = ___0_currentValue;
		bool L_2 = (*(bool*)L_1);
		bool L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		bool* L_5 = ___0_currentValue;
		bool L_6 = ___1_newValue;
		*(bool*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18A822ED66C0EDFFF967DD2EE9848945B34E87B5_gshared (Il2CppChar* ___0_currentValue, Il2CppChar ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0;
		L_0 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppChar* L_1 = ___0_currentValue;
		Il2CppChar L_2 = (*(Il2CppChar*)L_1);
		Il2CppChar L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		Il2CppChar* L_5 = ___0_currentValue;
		Il2CppChar L_6 = ___1_newValue;
		*(Il2CppChar*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_m9C058D0B8344122080B4EA792AD0A489EB927099_gshared (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* ___0_currentValue, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_0;
		L_0 = EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* L_1 = ___0_currentValue;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_2 = (*(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11*)L_1);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* L_5 = ___0_currentValue;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_6 = ___1_newValue;
		*(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2ED6D8023FCEE74764642E262219A183C576362A_gshared (int32_t* ___0_currentValue, int32_t ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0;
		L_0 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t* L_1 = ___0_currentValue;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		int32_t* L_5 = ___0_currentValue;
		int32_t L_6 = ___1_newValue;
		*(int32_t*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisNavigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_m3647C557CFFC5721FAAC342AC4C9613B69F15F6B_gshared (Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C* ___0_currentValue, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_0;
		L_0 = EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C* L_1 = ___0_currentValue;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_2 = (*(Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_1);
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C* L_5 = ___0_currentValue;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_6 = ___1_newValue;
		*(Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5)->___m_SelectOnUp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5)->___m_SelectOnDown), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5)->___m_SelectOnLeft), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5)->___m_SelectOnRight), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEF97FFCC58933AFC108E72BFF17641AA1305A628_gshared (float* ___0_currentValue, float ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0;
		L_0 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		float* L_1 = ___0_currentValue;
		float L_2 = (*(float*)L_1);
		float L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		float* L_5 = ___0_currentValue;
		float L_6 = ___1_newValue;
		*(float*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_mE16632C284B9E24D8747A1D0A25CE4C3D5B102EC_gshared (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* ___0_currentValue, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_0;
		L_0 = EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* L_1 = ___0_currentValue;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_2 = (*(SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_1);
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* L_5 = ___0_currentValue;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_6 = ___1_newValue;
		*(SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5)->___m_HighlightedSprite), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5)->___m_PressedSprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5)->___m_SelectedSprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5)->___m_DisabledSprite), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisIl2CppFullySharedGenericStruct_m53D5867BC66A8AE3BF6ED2A7515C83C8EA8DB375_gshared (Il2CppFullySharedGenericStruct* ___0_currentValue, Il2CppFullySharedGenericStruct ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
	const Il2CppFullySharedGenericStruct L_6 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppFullySharedGenericStruct* L_1 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		il2cpp_codegen_memcpy(L_3, ___1_newValue, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		Il2CppFullySharedGenericStruct* L_5 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_6, ___1_newValue, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_5, L_6, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericStruct*)L_5, (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEB449BF5F95607412935A8490187993A3A942331_gshared (int32_t* ___0_currentValue, int32_t ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0;
		L_0 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t* L_1 = ___0_currentValue;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		int32_t* L_5 = ___0_currentValue;
		int32_t L_6 = ___1_newValue;
		*(int32_t*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* SkeletonRenderer_AddSpineComponent_TisIl2CppSharedGenericObject_mD9CF25035F3C95B6542E8CDC327C4FFF14CE8B7C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___1_skeletonDataAsset, bool ___2_quiet, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_1;
		L_1 = GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_2 = ___1_skeletonDataAsset;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		Il2CppSharedGenericObject* L_4 = V_0;
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_5 = ___1_skeletonDataAsset;
		NullCheck(L_4);
		((SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A*)L_4)->___skeletonDataAsset = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A*)L_4)->___skeletonDataAsset), (void*)L_5);
		Il2CppSharedGenericObject* L_6 = V_0;
		bool L_7 = ___2_quiet;
		NullCheck((SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A*)L_6);
		VirtualActionInvoker2< bool, bool >::Invoke(9, (SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A*)L_6, (bool)0, L_7);
	}

IL_0029:
	{
		Il2CppSharedGenericObject* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* SkeletonRenderer_NewSpineGameObject_TisIl2CppSharedGenericObject_mFD86C45060E1A290B0E13F656E9C36E454207E5A_gshared (SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___0_skeletonDataAsset, bool ___1_quiet, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DC354ED76FAFB0A34CA2332E99474E27A28C69F);
		il2cpp_rgctx_method_init(method);
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral5DC354ED76FAFB0A34CA2332E99474E27A28C69F, NULL);
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_1 = ___0_skeletonDataAsset;
		bool L_2 = ___1_quiet;
		il2cpp_codegen_runtime_class_init_inline(SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_il2cpp_TypeInfo_var);
		Il2CppSharedGenericObject* L_3;
		L_3 = SkeletonRenderer_AddSpineComponent_TisIl2CppSharedGenericObject_mD9CF25035F3C95B6542E8CDC327C4FFF14CE8B7C(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3E381D71F4CF4AB91BFFD85724D3F55A84E706E5_gshared (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		uint8_t* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_2, L_3, sizeof(uint8_t));
		uint8_t L_5 = (*(uint8_t*)L_4);
		bool L_6;
		L_6 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_5, NULL);
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_7, L_9, sizeof(uint8_t));
		uint8_t L_11 = (*(uint8_t*)L_10);
		bool L_12;
		L_12 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_11, NULL);
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_13, L_15, sizeof(uint8_t));
		uint8_t L_17 = (*(uint8_t*)L_16);
		bool L_18;
		L_18 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_17, NULL);
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_19, L_21, sizeof(uint8_t));
		uint8_t L_23 = (*(uint8_t*)L_22);
		bool L_24;
		L_24 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_23, NULL);
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		uint8_t* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_25, L_27, sizeof(uint8_t));
		uint8_t L_29 = (*(uint8_t*)L_28);
		bool L_30;
		L_30 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_29, NULL);
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		uint8_t* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		uint8_t* L_34;
		L_34 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_31, L_33, sizeof(uint8_t));
		uint8_t L_35 = (*(uint8_t*)L_34);
		bool L_36;
		L_36 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_35, NULL);
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		uint8_t* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		uint8_t* L_40;
		L_40 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_37, L_39, sizeof(uint8_t));
		uint8_t L_41 = (*(uint8_t*)L_40);
		bool L_42;
		L_42 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_41, NULL);
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		uint8_t* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_43, L_45, sizeof(uint8_t));
		uint8_t L_47 = (*(uint8_t*)L_46);
		bool L_48;
		L_48 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_47, NULL);
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		uint8_t* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		uint8_t* L_56;
		L_56 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_54, L_55, sizeof(uint8_t));
		uint8_t L_57 = (*(uint8_t*)L_56);
		bool L_58;
		L_58 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_57, NULL);
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		uint8_t* L_62;
		L_62 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_59, L_61, sizeof(uint8_t));
		uint8_t L_63 = (*(uint8_t*)L_62);
		bool L_64;
		L_64 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_63, NULL);
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_65, L_67, sizeof(uint8_t));
		uint8_t L_69 = (*(uint8_t*)L_68);
		bool L_70;
		L_70 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_69, NULL);
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		uint8_t* L_74;
		L_74 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_71, L_73, sizeof(uint8_t));
		uint8_t L_75 = (*(uint8_t*)L_74);
		bool L_76;
		L_76 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_75, NULL);
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		uint8_t* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		uint8_t* L_81;
		L_81 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_79, L_80, sizeof(uint8_t));
		uint8_t L_82 = (*(uint8_t*)L_81);
		bool L_83;
		L_83 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_82, NULL);
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_89,NULL));
		return L_90;
	}

IL_020a:
	{
		intptr_t L_91 = V_0;
		intptr_t L_92;
		L_92 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_91, 1, NULL);
		void* L_93;
		L_93 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_92, NULL);
		int32_t L_94 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_93,NULL));
		return L_94;
	}

IL_0218:
	{
		intptr_t L_95 = V_0;
		intptr_t L_96;
		L_96 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_95, 2, NULL);
		void* L_97;
		L_97 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_96, NULL);
		int32_t L_98 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_97,NULL));
		return L_98;
	}

IL_0226:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 3, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		int32_t L_102 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_101,NULL));
		return L_102;
	}

IL_0234:
	{
		intptr_t L_103 = V_0;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_103, 4, NULL);
		void* L_105;
		L_105 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_104, NULL);
		int32_t L_106 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_105,NULL));
		return L_106;
	}

IL_0242:
	{
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 5, NULL);
		void* L_109;
		L_109 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_108, NULL);
		int32_t L_110 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_109,NULL));
		return L_110;
	}

IL_0250:
	{
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 6, NULL);
		void* L_113;
		L_113 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_112, NULL);
		int32_t L_114 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_113,NULL));
		return L_114;
	}

IL_025e:
	{
		intptr_t L_115 = V_0;
		intptr_t L_116;
		L_116 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_115, 7, NULL);
		void* L_117;
		L_117 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_116, NULL);
		int32_t L_118 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_117,NULL));
		return L_118;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppChar* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_2, L_3, sizeof(Il2CppChar));
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_6;
		L_6 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_5, NULL);
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_7, L_9, sizeof(Il2CppChar));
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_11, NULL);
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15, sizeof(Il2CppChar));
		Il2CppChar L_17 = (*(Il2CppChar*)L_16);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_18;
		L_18 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_17, NULL);
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		Il2CppChar* L_22;
		L_22 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_19, L_21, sizeof(Il2CppChar));
		Il2CppChar L_23 = (*(Il2CppChar*)L_22);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_24;
		L_24 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_23, NULL);
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppChar* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_25, L_27, sizeof(Il2CppChar));
		Il2CppChar L_29 = (*(Il2CppChar*)L_28);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_30;
		L_30 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_29, NULL);
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppChar* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		Il2CppChar* L_34;
		L_34 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_31, L_33, sizeof(Il2CppChar));
		Il2CppChar L_35 = (*(Il2CppChar*)L_34);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_36;
		L_36 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_35, NULL);
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppChar* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39, sizeof(Il2CppChar));
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_41, NULL);
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45, sizeof(Il2CppChar));
		Il2CppChar L_47 = (*(Il2CppChar*)L_46);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_48;
		L_48 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_47, NULL);
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		Il2CppChar* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_54, L_55, sizeof(Il2CppChar));
		Il2CppChar L_57 = (*(Il2CppChar*)L_56);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_58;
		L_58 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_57, NULL);
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		Il2CppChar* L_62;
		L_62 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_59, L_61, sizeof(Il2CppChar));
		Il2CppChar L_63 = (*(Il2CppChar*)L_62);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_64;
		L_64 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_63, NULL);
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_65, L_67, sizeof(Il2CppChar));
		Il2CppChar L_69 = (*(Il2CppChar*)L_68);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_70;
		L_70 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_69, NULL);
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		Il2CppChar* L_74;
		L_74 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_71, L_73, sizeof(Il2CppChar));
		Il2CppChar L_75 = (*(Il2CppChar*)L_74);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_76;
		L_76 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_75, NULL);
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppChar* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		Il2CppChar* L_81;
		L_81 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_79, L_80, sizeof(Il2CppChar));
		Il2CppChar L_82 = (*(Il2CppChar*)L_81);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_83;
		L_83 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_82, NULL);
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_89,NULL));
		return L_90;
	}

IL_020a:
	{
		intptr_t L_91 = V_0;
		intptr_t L_92;
		L_92 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_91, 1, NULL);
		void* L_93;
		L_93 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_92, NULL);
		int32_t L_94 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_93,NULL));
		return L_94;
	}

IL_0218:
	{
		intptr_t L_95 = V_0;
		intptr_t L_96;
		L_96 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_95, 2, NULL);
		void* L_97;
		L_97 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_96, NULL);
		int32_t L_98 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_97,NULL));
		return L_98;
	}

IL_0226:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 3, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		int32_t L_102 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_101,NULL));
		return L_102;
	}

IL_0234:
	{
		intptr_t L_103 = V_0;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_103, 4, NULL);
		void* L_105;
		L_105 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_104, NULL);
		int32_t L_106 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_105,NULL));
		return L_106;
	}

IL_0242:
	{
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 5, NULL);
		void* L_109;
		L_109 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_108, NULL);
		int32_t L_110 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_109,NULL));
		return L_110;
	}

IL_0250:
	{
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 6, NULL);
		void* L_113;
		L_113 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_112, NULL);
		int32_t L_114 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_113,NULL));
		return L_114;
	}

IL_025e:
	{
		intptr_t L_115 = V_0;
		intptr_t L_116;
		L_116 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_115, 7, NULL);
		void* L_117;
		L_117 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_116, NULL);
		int32_t L_118 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_117,NULL));
		return L_118;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m28DDF4475C9EA0E0C80C0C9A0E6D96CCC3609FB4_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_33 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_42 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_51 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_60 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_69 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_82 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_91 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_100 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_109 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	void* L_119 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
	const Il2CppFullySharedGenericAny L_14 = L_5;
	const Il2CppFullySharedGenericAny L_23 = L_5;
	const Il2CppFullySharedGenericAny L_32 = L_5;
	const Il2CppFullySharedGenericAny L_41 = L_5;
	const Il2CppFullySharedGenericAny L_50 = L_5;
	const Il2CppFullySharedGenericAny L_59 = L_5;
	const Il2CppFullySharedGenericAny L_68 = L_5;
	const Il2CppFullySharedGenericAny L_81 = L_5;
	const Il2CppFullySharedGenericAny L_90 = L_5;
	const Il2CppFullySharedGenericAny L_99 = L_5;
	const Il2CppFullySharedGenericAny L_108 = L_5;
	const Il2CppFullySharedGenericAny L_118 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppFullySharedGenericAny* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_2, L_3, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_7;
		Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_7, L_6);
		bool L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_8, L_7.method,L_7.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		if (L_9)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_10 = ___0_searchSpace;
		intptr_t L_11 = V_0;
		intptr_t L_12;
		L_12 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_11, 1, NULL);
		Il2CppFullySharedGenericAny* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_10, L_12, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_14, L_13, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_16, L_15);
		bool L_18 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_17, L_16.method,L_16.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_14: *(void**)L_14));
		if (L_18)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 2, NULL);
		Il2CppFullySharedGenericAny* L_22;
		L_22 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_19, L_21, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_23, L_22, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_25;
		Il2CppMethodPointer L_26 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_25, L_24);
		bool L_27 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_26, L_25.method,L_25.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_23: *(void**)L_23));
		if (L_27)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_28 = ___0_searchSpace;
		intptr_t L_29 = V_0;
		intptr_t L_30;
		L_30 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_29, 3, NULL);
		Il2CppFullySharedGenericAny* L_31;
		L_31 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_28, L_30, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_32, L_31, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_34;
		Il2CppMethodPointer L_35 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_34, L_33);
		bool L_36 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_35, L_34.method,L_34.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_32: *(void**)L_32));
		if (L_36)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 4, NULL);
		Il2CppFullySharedGenericAny* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_37, L_39, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_41, L_40, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_43;
		Il2CppMethodPointer L_44 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_43, L_42);
		bool L_45 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_44, L_43.method,L_43.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_41: *(void**)L_41));
		if (L_45)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_46 = ___0_searchSpace;
		intptr_t L_47 = V_0;
		intptr_t L_48;
		L_48 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_47, 5, NULL);
		Il2CppFullySharedGenericAny* L_49;
		L_49 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_46, L_48, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_50, L_49, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_52;
		Il2CppMethodPointer L_53 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_52, L_51);
		bool L_54 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_53, L_52.method,L_52.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_50: *(void**)L_50));
		if (L_54)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_55 = ___0_searchSpace;
		intptr_t L_56 = V_0;
		intptr_t L_57;
		L_57 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_56, 6, NULL);
		Il2CppFullySharedGenericAny* L_58;
		L_58 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_55, L_57, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_59, L_58, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_61;
		Il2CppMethodPointer L_62 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_61, L_60);
		bool L_63 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_62, L_61.method,L_61.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_59: *(void**)L_59));
		if (L_63)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_64 = ___0_searchSpace;
		intptr_t L_65 = V_0;
		intptr_t L_66;
		L_66 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_65, 7, NULL);
		Il2CppFullySharedGenericAny* L_67;
		L_67 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_64, L_66, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_68, L_67, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_70;
		Il2CppMethodPointer L_71 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_70, L_69);
		bool L_72 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_71, L_70.method,L_70.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_68: *(void**)L_68));
		if (L_72)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_73 = V_0;
		intptr_t L_74;
		L_74 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_73, 8, NULL);
		V_0 = L_74;
	}

IL_0133:
	{
		int32_t L_75 = ___2_length;
		if ((((int32_t)L_75) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_76 = ___2_length;
		if ((((int32_t)L_76) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_77 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_77, 4));
		Il2CppFullySharedGenericAny* L_78 = ___0_searchSpace;
		intptr_t L_79 = V_0;
		Il2CppFullySharedGenericAny* L_80;
		L_80 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_78, L_79, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_81, L_80, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_83;
		Il2CppMethodPointer L_84 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_83, L_82);
		bool L_85 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_84, L_83.method,L_83.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_81: *(void**)L_81));
		if (L_85)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_86 = ___0_searchSpace;
		intptr_t L_87 = V_0;
		intptr_t L_88;
		L_88 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_87, 1, NULL);
		Il2CppFullySharedGenericAny* L_89;
		L_89 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_86, L_88, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_90, L_89, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_92;
		Il2CppMethodPointer L_93 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_92, L_91);
		bool L_94 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_93, L_92.method,L_92.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_90: *(void**)L_90));
		if (L_94)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_95 = ___0_searchSpace;
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 2, NULL);
		Il2CppFullySharedGenericAny* L_98;
		L_98 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_95, L_97, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_99, L_98, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_101;
		Il2CppMethodPointer L_102 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_101, L_100);
		bool L_103 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_102, L_101.method,L_101.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_99: *(void**)L_99));
		if (L_103)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_104 = ___0_searchSpace;
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 3, NULL);
		Il2CppFullySharedGenericAny* L_107;
		L_107 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_104, L_106, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_108, L_107, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_110;
		Il2CppMethodPointer L_111 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_110, L_109);
		bool L_112 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_111, L_110.method,L_110.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_108: *(void**)L_108));
		if (L_112)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_113 = V_0;
		intptr_t L_114;
		L_114 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_113, 4, NULL);
		V_0 = L_114;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppFullySharedGenericAny* L_115 = ___0_searchSpace;
		intptr_t L_116 = V_0;
		Il2CppFullySharedGenericAny* L_117;
		L_117 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_115, L_116, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_118, L_117, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_120;
		Il2CppMethodPointer L_121 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_120, L_119);
		bool L_122 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_121, L_120.method,L_120.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_118: *(void**)L_118));
		if (L_122)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_123 = V_0;
		intptr_t L_124;
		L_124 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_123, 1, NULL);
		V_0 = L_124;
		int32_t L_125 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_125, 1));
	}

IL_01fc:
	{
		int32_t L_126 = ___2_length;
		if ((((int32_t)L_126) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_127 = V_0;
		void* L_128;
		L_128 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_127, NULL);
		int32_t L_129 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_128,NULL));
		return L_129;
	}

IL_020a:
	{
		intptr_t L_130 = V_0;
		intptr_t L_131;
		L_131 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_130, 1, NULL);
		void* L_132;
		L_132 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_131, NULL);
		int32_t L_133 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_132,NULL));
		return L_133;
	}

IL_0218:
	{
		intptr_t L_134 = V_0;
		intptr_t L_135;
		L_135 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_134, 2, NULL);
		void* L_136;
		L_136 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_135, NULL);
		int32_t L_137 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_136,NULL));
		return L_137;
	}

IL_0226:
	{
		intptr_t L_138 = V_0;
		intptr_t L_139;
		L_139 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_138, 3, NULL);
		void* L_140;
		L_140 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_139, NULL);
		int32_t L_141 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_140,NULL));
		return L_141;
	}

IL_0234:
	{
		intptr_t L_142 = V_0;
		intptr_t L_143;
		L_143 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_142, 4, NULL);
		void* L_144;
		L_144 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_143, NULL);
		int32_t L_145 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_144,NULL));
		return L_145;
	}

IL_0242:
	{
		intptr_t L_146 = V_0;
		intptr_t L_147;
		L_147 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_146, 5, NULL);
		void* L_148;
		L_148 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_147, NULL);
		int32_t L_149 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_148,NULL));
		return L_149;
	}

IL_0250:
	{
		intptr_t L_150 = V_0;
		intptr_t L_151;
		L_151 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_150, 6, NULL);
		void* L_152;
		L_152 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_151, NULL);
		int32_t L_153 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_152,NULL));
		return L_153;
	}

IL_025e:
	{
		intptr_t L_154 = V_0;
		intptr_t L_155;
		L_155 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_154, 7, NULL);
		void* L_156;
		L_156 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_155, NULL);
		int32_t L_157 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_156,NULL));
		return L_157;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE91AC8BE418302368593EA77BD73B558D376B524_gshared (Il2CppChar* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppChar* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	Il2CppChar* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Il2CppChar* L_1 = ___2_value;
		Il2CppChar L_2 = (*(Il2CppChar*)L_1);
		V_0 = L_2;
		Il2CppChar* L_3 = ___2_value;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, 1, sizeof(Il2CppChar));
		V_1 = L_4;
		int32_t L_5 = ___3_valueLength;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_3 = 0;
	}

IL_001a:
	{
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), L_8));
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar* L_10 = ___0_searchSpace;
		int32_t L_11 = V_3;
		Il2CppChar* L_12;
		L_12 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_10, L_11, sizeof(Il2CppChar));
		Il2CppChar L_13 = V_0;
		int32_t L_14 = V_4;
		int32_t L_15;
		L_15 = SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48(L_12, L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_5 = L_15;
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		Il2CppChar* L_19 = ___0_searchSpace;
		int32_t L_20 = V_3;
		Il2CppChar* L_21;
		L_21 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), sizeof(Il2CppChar));
		Il2CppChar* L_22 = V_1;
		int32_t L_23 = V_2;
		bool L_24;
		L_24 = SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774(L_21, L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_24)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0055:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_001a;
	}

IL_005b:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m5FFE5B1FF0D0FC94463D7A6E105B900EACA57DAB_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppFullySharedGenericAny* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F);
	const Il2CppFullySharedGenericAny L_13 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F);
	memset(V_0, 0, SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F);
	Il2CppFullySharedGenericAny* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Il2CppFullySharedGenericAny* L_1 = ___2_value;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F);
		Il2CppFullySharedGenericAny* L_3 = ___2_value;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, 1, SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F);
		V_1 = L_4;
		int32_t L_5 = ___3_valueLength;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_3 = 0;
	}

IL_001a:
	{
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), L_8));
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_10 = ___0_searchSpace;
		int32_t L_11 = V_3;
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_10, L_11, SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F);
		int32_t L_14 = V_4;
		int32_t L_15;
		L_15 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_13: *(void**)L_13), L_14);
		V_5 = L_15;
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		Il2CppFullySharedGenericAny* L_19 = ___0_searchSpace;
		int32_t L_20 = V_3;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), SizeOf_T_t529DCFB1E681E958560307B004B4A764B9AD083F);
		Il2CppFullySharedGenericAny* L_22 = V_1;
		int32_t L_23 = V_2;
		bool L_24;
		L_24 = ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_24)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0055:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_001a;
	}

IL_005b:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAC220AF349A8CB4EABE16DCB88473DFB87553E71_gshared (Il2CppChar* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppChar* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		Il2CppChar* L_1 = ___0_searchSpace;
		Il2CppChar* L_2 = ___2_value;
		int32_t L_3 = V_1;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_2, L_3, sizeof(Il2CppChar));
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7;
		L_7 = SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48(L_1, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___1_searchSpaceLength = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___3_valueLength;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_mD777B4B83B2CBE31F541334C63B38FCAD99CBF5B_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppFullySharedGenericAny* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_searchSpace;
		Il2CppFullySharedGenericAny* L_2 = ___2_value;
		int32_t L_3 = V_1;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_2, L_3, SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B);
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B);
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7;
		L_7 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___1_searchSpaceLength = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___3_valueLength;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFD8AD32B5F2EBF9489593A1FA99B57E7764E6735_gshared (uint8_t* ___0_first, uint8_t* ___1_second, int32_t ___2_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint8_t* L_0 = ___0_first;
		uint8_t* L_1 = ___1_second;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		uint8_t* L_5 = ___0_first;
		intptr_t L_6 = V_0;
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_5, L_6, sizeof(uint8_t));
		uint8_t* L_8 = ___1_second;
		intptr_t L_9 = V_0;
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_8, L_9, sizeof(uint8_t));
		uint8_t L_11 = (*(uint8_t*)L_10);
		bool L_12;
		L_12 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_7, L_11, NULL);
		if (!L_12)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_13 = ___0_first;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 1, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_13, L_15, sizeof(uint8_t));
		uint8_t* L_17 = ___1_second;
		intptr_t L_18 = V_0;
		intptr_t L_19;
		L_19 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_18, 1, NULL);
		uint8_t* L_20;
		L_20 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_17, L_19, sizeof(uint8_t));
		uint8_t L_21 = (*(uint8_t*)L_20);
		bool L_22;
		L_22 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_16, L_21, NULL);
		if (!L_22)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_23 = ___0_first;
		intptr_t L_24 = V_0;
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_24, 2, NULL);
		uint8_t* L_26;
		L_26 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_23, L_25, sizeof(uint8_t));
		uint8_t* L_27 = ___1_second;
		intptr_t L_28 = V_0;
		intptr_t L_29;
		L_29 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_28, 2, NULL);
		uint8_t* L_30;
		L_30 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_27, L_29, sizeof(uint8_t));
		uint8_t L_31 = (*(uint8_t*)L_30);
		bool L_32;
		L_32 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_26, L_31, NULL);
		if (!L_32)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_33 = ___0_first;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_34, 3, NULL);
		uint8_t* L_36;
		L_36 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_33, L_35, sizeof(uint8_t));
		uint8_t* L_37 = ___1_second;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 3, NULL);
		uint8_t* L_40;
		L_40 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_37, L_39, sizeof(uint8_t));
		uint8_t L_41 = (*(uint8_t*)L_40);
		bool L_42;
		L_42 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_36, L_41, NULL);
		if (!L_42)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_43 = ___0_first;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 4, NULL);
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_43, L_45, sizeof(uint8_t));
		uint8_t* L_47 = ___1_second;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_48, 4, NULL);
		uint8_t* L_50;
		L_50 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_47, L_49, sizeof(uint8_t));
		uint8_t L_51 = (*(uint8_t*)L_50);
		bool L_52;
		L_52 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_46, L_51, NULL);
		if (!L_52)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_53 = ___0_first;
		intptr_t L_54 = V_0;
		intptr_t L_55;
		L_55 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_54, 5, NULL);
		uint8_t* L_56;
		L_56 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_53, L_55, sizeof(uint8_t));
		uint8_t* L_57 = ___1_second;
		intptr_t L_58 = V_0;
		intptr_t L_59;
		L_59 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_58, 5, NULL);
		uint8_t* L_60;
		L_60 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_57, L_59, sizeof(uint8_t));
		uint8_t L_61 = (*(uint8_t*)L_60);
		bool L_62;
		L_62 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_56, L_61, NULL);
		if (!L_62)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_63 = ___0_first;
		intptr_t L_64 = V_0;
		intptr_t L_65;
		L_65 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_64, 6, NULL);
		uint8_t* L_66;
		L_66 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_63, L_65, sizeof(uint8_t));
		uint8_t* L_67 = ___1_second;
		intptr_t L_68 = V_0;
		intptr_t L_69;
		L_69 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_68, 6, NULL);
		uint8_t* L_70;
		L_70 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_67, L_69, sizeof(uint8_t));
		uint8_t L_71 = (*(uint8_t*)L_70);
		bool L_72;
		L_72 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_66, L_71, NULL);
		if (!L_72)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_73 = ___0_first;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_74, 7, NULL);
		uint8_t* L_76;
		L_76 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_73, L_75, sizeof(uint8_t));
		uint8_t* L_77 = ___1_second;
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_78, 7, NULL);
		uint8_t* L_80;
		L_80 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_77, L_79, sizeof(uint8_t));
		uint8_t L_81 = (*(uint8_t*)L_80);
		bool L_82;
		L_82 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_76, L_81, NULL);
		if (!L_82)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_83, 8, NULL);
		V_0 = L_84;
	}

IL_0191:
	{
		int32_t L_85 = ___2_length;
		if ((((int32_t)L_85) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_86 = ___2_length;
		if ((((int32_t)L_86) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_87 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_87, 4));
		uint8_t* L_88 = ___0_first;
		intptr_t L_89 = V_0;
		uint8_t* L_90;
		L_90 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_88, L_89, sizeof(uint8_t));
		uint8_t* L_91 = ___1_second;
		intptr_t L_92 = V_0;
		uint8_t* L_93;
		L_93 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_91, L_92, sizeof(uint8_t));
		uint8_t L_94 = (*(uint8_t*)L_93);
		bool L_95;
		L_95 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_90, L_94, NULL);
		if (!L_95)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_96 = ___0_first;
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_97, 1, NULL);
		uint8_t* L_99;
		L_99 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_96, L_98, sizeof(uint8_t));
		uint8_t* L_100 = ___1_second;
		intptr_t L_101 = V_0;
		intptr_t L_102;
		L_102 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_101, 1, NULL);
		uint8_t* L_103;
		L_103 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_100, L_102, sizeof(uint8_t));
		uint8_t L_104 = (*(uint8_t*)L_103);
		bool L_105;
		L_105 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_99, L_104, NULL);
		if (!L_105)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_106 = ___0_first;
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 2, NULL);
		uint8_t* L_109;
		L_109 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_106, L_108, sizeof(uint8_t));
		uint8_t* L_110 = ___1_second;
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 2, NULL);
		uint8_t* L_113;
		L_113 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_110, L_112, sizeof(uint8_t));
		uint8_t L_114 = (*(uint8_t*)L_113);
		bool L_115;
		L_115 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_109, L_114, NULL);
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_116 = ___0_first;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_117, 3, NULL);
		uint8_t* L_119;
		L_119 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_116, L_118, sizeof(uint8_t));
		uint8_t* L_120 = ___1_second;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 3, NULL);
		uint8_t* L_123;
		L_123 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_120, L_122, sizeof(uint8_t));
		uint8_t L_124 = (*(uint8_t*)L_123);
		bool L_125;
		L_125 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_119, L_124, NULL);
		if (!L_125)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_126 = V_0;
		intptr_t L_127;
		L_127 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_126, 4, NULL);
		V_0 = L_127;
		goto IL_0285;
	}

IL_0258:
	{
		uint8_t* L_128 = ___0_first;
		intptr_t L_129 = V_0;
		uint8_t* L_130;
		L_130 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_128, L_129, sizeof(uint8_t));
		uint8_t* L_131 = ___1_second;
		intptr_t L_132 = V_0;
		uint8_t* L_133;
		L_133 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_131, L_132, sizeof(uint8_t));
		uint8_t L_134 = (*(uint8_t*)L_133);
		bool L_135;
		L_135 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_130, L_134, NULL);
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_136 = V_0;
		intptr_t L_137;
		L_137 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_136, 1, NULL);
		V_0 = L_137;
		int32_t L_138 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_0285:
	{
		int32_t L_139 = ___2_length;
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774_gshared (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar* L_0 = ___0_first;
		Il2CppChar* L_1 = ___1_second;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppChar* L_5 = ___0_first;
		intptr_t L_6 = V_0;
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_5, L_6, sizeof(Il2CppChar));
		Il2CppChar* L_8 = ___1_second;
		intptr_t L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_8, L_9, sizeof(Il2CppChar));
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_7, L_11, NULL);
		if (!L_12)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_13 = ___0_first;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 1, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15, sizeof(Il2CppChar));
		Il2CppChar* L_17 = ___1_second;
		intptr_t L_18 = V_0;
		intptr_t L_19;
		L_19 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_18, 1, NULL);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_17, L_19, sizeof(Il2CppChar));
		Il2CppChar L_21 = (*(Il2CppChar*)L_20);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_22;
		L_22 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_16, L_21, NULL);
		if (!L_22)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_23 = ___0_first;
		intptr_t L_24 = V_0;
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_24, 2, NULL);
		Il2CppChar* L_26;
		L_26 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_23, L_25, sizeof(Il2CppChar));
		Il2CppChar* L_27 = ___1_second;
		intptr_t L_28 = V_0;
		intptr_t L_29;
		L_29 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_28, 2, NULL);
		Il2CppChar* L_30;
		L_30 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_27, L_29, sizeof(Il2CppChar));
		Il2CppChar L_31 = (*(Il2CppChar*)L_30);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_32;
		L_32 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_26, L_31, NULL);
		if (!L_32)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_33 = ___0_first;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_34, 3, NULL);
		Il2CppChar* L_36;
		L_36 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_33, L_35, sizeof(Il2CppChar));
		Il2CppChar* L_37 = ___1_second;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 3, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39, sizeof(Il2CppChar));
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_36, L_41, NULL);
		if (!L_42)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_43 = ___0_first;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 4, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45, sizeof(Il2CppChar));
		Il2CppChar* L_47 = ___1_second;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_48, 4, NULL);
		Il2CppChar* L_50;
		L_50 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_47, L_49, sizeof(Il2CppChar));
		Il2CppChar L_51 = (*(Il2CppChar*)L_50);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_52;
		L_52 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_46, L_51, NULL);
		if (!L_52)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_53 = ___0_first;
		intptr_t L_54 = V_0;
		intptr_t L_55;
		L_55 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_54, 5, NULL);
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_53, L_55, sizeof(Il2CppChar));
		Il2CppChar* L_57 = ___1_second;
		intptr_t L_58 = V_0;
		intptr_t L_59;
		L_59 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_58, 5, NULL);
		Il2CppChar* L_60;
		L_60 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_57, L_59, sizeof(Il2CppChar));
		Il2CppChar L_61 = (*(Il2CppChar*)L_60);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_62;
		L_62 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_56, L_61, NULL);
		if (!L_62)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_63 = ___0_first;
		intptr_t L_64 = V_0;
		intptr_t L_65;
		L_65 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_64, 6, NULL);
		Il2CppChar* L_66;
		L_66 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_63, L_65, sizeof(Il2CppChar));
		Il2CppChar* L_67 = ___1_second;
		intptr_t L_68 = V_0;
		intptr_t L_69;
		L_69 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_68, 6, NULL);
		Il2CppChar* L_70;
		L_70 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_67, L_69, sizeof(Il2CppChar));
		Il2CppChar L_71 = (*(Il2CppChar*)L_70);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_72;
		L_72 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_66, L_71, NULL);
		if (!L_72)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_73 = ___0_first;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_74, 7, NULL);
		Il2CppChar* L_76;
		L_76 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_73, L_75, sizeof(Il2CppChar));
		Il2CppChar* L_77 = ___1_second;
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_78, 7, NULL);
		Il2CppChar* L_80;
		L_80 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_77, L_79, sizeof(Il2CppChar));
		Il2CppChar L_81 = (*(Il2CppChar*)L_80);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_82;
		L_82 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_76, L_81, NULL);
		if (!L_82)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_83, 8, NULL);
		V_0 = L_84;
	}

IL_0191:
	{
		int32_t L_85 = ___2_length;
		if ((((int32_t)L_85) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_86 = ___2_length;
		if ((((int32_t)L_86) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_87 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_87, 4));
		Il2CppChar* L_88 = ___0_first;
		intptr_t L_89 = V_0;
		Il2CppChar* L_90;
		L_90 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_88, L_89, sizeof(Il2CppChar));
		Il2CppChar* L_91 = ___1_second;
		intptr_t L_92 = V_0;
		Il2CppChar* L_93;
		L_93 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_91, L_92, sizeof(Il2CppChar));
		Il2CppChar L_94 = (*(Il2CppChar*)L_93);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_95;
		L_95 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_90, L_94, NULL);
		if (!L_95)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_96 = ___0_first;
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_97, 1, NULL);
		Il2CppChar* L_99;
		L_99 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_96, L_98, sizeof(Il2CppChar));
		Il2CppChar* L_100 = ___1_second;
		intptr_t L_101 = V_0;
		intptr_t L_102;
		L_102 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_101, 1, NULL);
		Il2CppChar* L_103;
		L_103 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_100, L_102, sizeof(Il2CppChar));
		Il2CppChar L_104 = (*(Il2CppChar*)L_103);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_105;
		L_105 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_99, L_104, NULL);
		if (!L_105)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_106 = ___0_first;
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 2, NULL);
		Il2CppChar* L_109;
		L_109 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_106, L_108, sizeof(Il2CppChar));
		Il2CppChar* L_110 = ___1_second;
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 2, NULL);
		Il2CppChar* L_113;
		L_113 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_110, L_112, sizeof(Il2CppChar));
		Il2CppChar L_114 = (*(Il2CppChar*)L_113);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_115;
		L_115 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_109, L_114, NULL);
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_116 = ___0_first;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_117, 3, NULL);
		Il2CppChar* L_119;
		L_119 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_116, L_118, sizeof(Il2CppChar));
		Il2CppChar* L_120 = ___1_second;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 3, NULL);
		Il2CppChar* L_123;
		L_123 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_120, L_122, sizeof(Il2CppChar));
		Il2CppChar L_124 = (*(Il2CppChar*)L_123);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_125;
		L_125 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_119, L_124, NULL);
		if (!L_125)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_126 = V_0;
		intptr_t L_127;
		L_127 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_126, 4, NULL);
		V_0 = L_127;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppChar* L_128 = ___0_first;
		intptr_t L_129 = V_0;
		Il2CppChar* L_130;
		L_130 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_128, L_129, sizeof(Il2CppChar));
		Il2CppChar* L_131 = ___1_second;
		intptr_t L_132 = V_0;
		Il2CppChar* L_133;
		L_133 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_131, L_132, sizeof(Il2CppChar));
		Il2CppChar L_134 = (*(Il2CppChar*)L_133);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_135;
		L_135 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_130, L_134, NULL);
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_136 = V_0;
		intptr_t L_137;
		L_137 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_136, 1, NULL);
		V_0 = L_137;
		int32_t L_138 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_0285:
	{
		int32_t L_139 = ___2_length;
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424_gshared (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_38 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_51 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_64 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_77 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_90 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_103 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_119 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_132 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_145 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_158 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	void* L_171 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
	const Il2CppFullySharedGenericAny L_24 = L_11;
	const Il2CppFullySharedGenericAny L_37 = L_11;
	const Il2CppFullySharedGenericAny L_50 = L_11;
	const Il2CppFullySharedGenericAny L_63 = L_11;
	const Il2CppFullySharedGenericAny L_76 = L_11;
	const Il2CppFullySharedGenericAny L_89 = L_11;
	const Il2CppFullySharedGenericAny L_102 = L_11;
	const Il2CppFullySharedGenericAny L_118 = L_11;
	const Il2CppFullySharedGenericAny L_131 = L_11;
	const Il2CppFullySharedGenericAny L_144 = L_11;
	const Il2CppFullySharedGenericAny L_157 = L_11;
	const Il2CppFullySharedGenericAny L_170 = L_11;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_first;
		Il2CppFullySharedGenericAny* L_1 = ___1_second;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppFullySharedGenericAny* L_5 = ___0_first;
		intptr_t L_6 = V_0;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_5, L_6, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_8 = ___1_second;
		intptr_t L_9 = V_0;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_8, L_9, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_13;
		Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_7, &L_13, L_12);
		bool L_15 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_14, L_13.method,L_13.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_11: *(void**)L_11));
		if (!L_15)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_16 = ___0_first;
		intptr_t L_17 = V_0;
		intptr_t L_18;
		L_18 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_17, 1, NULL);
		Il2CppFullySharedGenericAny* L_19;
		L_19 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_16, L_18, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_20 = ___1_second;
		intptr_t L_21 = V_0;
		intptr_t L_22;
		L_22 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_21, 1, NULL);
		Il2CppFullySharedGenericAny* L_23;
		L_23 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_20, L_22, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_24, L_23, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_19, &L_26, L_25);
		bool L_28 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_27, L_26.method,L_26.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_24: *(void**)L_24));
		if (!L_28)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_29 = ___0_first;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_30, 2, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_29, L_31, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_33 = ___1_second;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_34, 2, NULL);
		Il2CppFullySharedGenericAny* L_36;
		L_36 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_33, L_35, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_37, L_36, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_39;
		Il2CppMethodPointer L_40 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_32, &L_39, L_38);
		bool L_41 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_40, L_39.method,L_39.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_37: *(void**)L_37));
		if (!L_41)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_42 = ___0_first;
		intptr_t L_43 = V_0;
		intptr_t L_44;
		L_44 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_43, 3, NULL);
		Il2CppFullySharedGenericAny* L_45;
		L_45 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_42, L_44, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_46 = ___1_second;
		intptr_t L_47 = V_0;
		intptr_t L_48;
		L_48 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_47, 3, NULL);
		Il2CppFullySharedGenericAny* L_49;
		L_49 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_46, L_48, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_50, L_49, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_52;
		Il2CppMethodPointer L_53 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_45, &L_52, L_51);
		bool L_54 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_53, L_52.method,L_52.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_50: *(void**)L_50));
		if (!L_54)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_55 = ___0_first;
		intptr_t L_56 = V_0;
		intptr_t L_57;
		L_57 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_56, 4, NULL);
		Il2CppFullySharedGenericAny* L_58;
		L_58 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_55, L_57, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_59 = ___1_second;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 4, NULL);
		Il2CppFullySharedGenericAny* L_62;
		L_62 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_59, L_61, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_63, L_62, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_65;
		Il2CppMethodPointer L_66 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_58, &L_65, L_64);
		bool L_67 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_66, L_65.method,L_65.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_63: *(void**)L_63));
		if (!L_67)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_68 = ___0_first;
		intptr_t L_69 = V_0;
		intptr_t L_70;
		L_70 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_69, 5, NULL);
		Il2CppFullySharedGenericAny* L_71;
		L_71 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_68, L_70, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_72 = ___1_second;
		intptr_t L_73 = V_0;
		intptr_t L_74;
		L_74 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_73, 5, NULL);
		Il2CppFullySharedGenericAny* L_75;
		L_75 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_72, L_74, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_76, L_75, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_78;
		Il2CppMethodPointer L_79 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_71, &L_78, L_77);
		bool L_80 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_79, L_78.method,L_78.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_76: *(void**)L_76));
		if (!L_80)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_81 = ___0_first;
		intptr_t L_82 = V_0;
		intptr_t L_83;
		L_83 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_82, 6, NULL);
		Il2CppFullySharedGenericAny* L_84;
		L_84 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_81, L_83, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_85 = ___1_second;
		intptr_t L_86 = V_0;
		intptr_t L_87;
		L_87 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_86, 6, NULL);
		Il2CppFullySharedGenericAny* L_88;
		L_88 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_85, L_87, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_91;
		Il2CppMethodPointer L_92 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_84, &L_91, L_90);
		bool L_93 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_92, L_91.method,L_91.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_89: *(void**)L_89));
		if (!L_93)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_94 = ___0_first;
		intptr_t L_95 = V_0;
		intptr_t L_96;
		L_96 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_95, 7, NULL);
		Il2CppFullySharedGenericAny* L_97;
		L_97 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_94, L_96, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_98 = ___1_second;
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 7, NULL);
		Il2CppFullySharedGenericAny* L_101;
		L_101 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_98, L_100, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_102, L_101, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_104;
		Il2CppMethodPointer L_105 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_97, &L_104, L_103);
		bool L_106 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_105, L_104.method,L_104.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_102: *(void**)L_102));
		if (!L_106)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 8, NULL);
		V_0 = L_108;
	}

IL_0191:
	{
		int32_t L_109 = ___2_length;
		if ((((int32_t)L_109) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_110 = ___2_length;
		if ((((int32_t)L_110) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_111 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_111, 4));
		Il2CppFullySharedGenericAny* L_112 = ___0_first;
		intptr_t L_113 = V_0;
		Il2CppFullySharedGenericAny* L_114;
		L_114 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_112, L_113, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_115 = ___1_second;
		intptr_t L_116 = V_0;
		Il2CppFullySharedGenericAny* L_117;
		L_117 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_115, L_116, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_118, L_117, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_120;
		Il2CppMethodPointer L_121 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_114, &L_120, L_119);
		bool L_122 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_121, L_120.method,L_120.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_118: *(void**)L_118));
		if (!L_122)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_123 = ___0_first;
		intptr_t L_124 = V_0;
		intptr_t L_125;
		L_125 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_124, 1, NULL);
		Il2CppFullySharedGenericAny* L_126;
		L_126 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_123, L_125, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_127 = ___1_second;
		intptr_t L_128 = V_0;
		intptr_t L_129;
		L_129 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_128, 1, NULL);
		Il2CppFullySharedGenericAny* L_130;
		L_130 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_127, L_129, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_131, L_130, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_133;
		Il2CppMethodPointer L_134 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_126, &L_133, L_132);
		bool L_135 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_134, L_133.method,L_133.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_131: *(void**)L_131));
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_136 = ___0_first;
		intptr_t L_137 = V_0;
		intptr_t L_138;
		L_138 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_137, 2, NULL);
		Il2CppFullySharedGenericAny* L_139;
		L_139 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_136, L_138, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_140 = ___1_second;
		intptr_t L_141 = V_0;
		intptr_t L_142;
		L_142 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_141, 2, NULL);
		Il2CppFullySharedGenericAny* L_143;
		L_143 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_140, L_142, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_144, L_143, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_146;
		Il2CppMethodPointer L_147 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_139, &L_146, L_145);
		bool L_148 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_147, L_146.method,L_146.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_144: *(void**)L_144));
		if (!L_148)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_149 = ___0_first;
		intptr_t L_150 = V_0;
		intptr_t L_151;
		L_151 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_150, 3, NULL);
		Il2CppFullySharedGenericAny* L_152;
		L_152 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_149, L_151, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_153 = ___1_second;
		intptr_t L_154 = V_0;
		intptr_t L_155;
		L_155 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_154, 3, NULL);
		Il2CppFullySharedGenericAny* L_156;
		L_156 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_153, L_155, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_157, L_156, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_159;
		Il2CppMethodPointer L_160 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_152, &L_159, L_158);
		bool L_161 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_160, L_159.method,L_159.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_157: *(void**)L_157));
		if (!L_161)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_162 = V_0;
		intptr_t L_163;
		L_163 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_162, 4, NULL);
		V_0 = L_163;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppFullySharedGenericAny* L_164 = ___0_first;
		intptr_t L_165 = V_0;
		Il2CppFullySharedGenericAny* L_166;
		L_166 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_164, L_165, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_167 = ___1_second;
		intptr_t L_168 = V_0;
		Il2CppFullySharedGenericAny* L_169;
		L_169 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_167, L_168, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_170, L_169, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_172;
		Il2CppMethodPointer L_173 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_166, &L_172, L_171);
		bool L_174 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_173, L_172.method,L_172.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_170: *(void**)L_170));
		if (!L_174)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_175 = V_0;
		intptr_t L_176;
		L_176 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_175, 1, NULL);
		V_0 = L_176;
		int32_t L_177 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_177, 1));
	}

IL_0285:
	{
		int32_t L_178 = ___2_length;
		if ((((int32_t)L_178) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mC616C20F98C18ADE02810AB4A6005DB6F19B2231_gshared (int32_t ___0_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ___0_channel;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0060;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_0098;
			}
			case 5:
			{
				goto IL_0098;
			}
			case 6:
			{
				goto IL_0098;
			}
			case 7:
			{
				goto IL_0098;
			}
			case 8:
			{
				goto IL_0098;
			}
			case 9:
			{
				goto IL_0098;
			}
			case 10:
			{
				goto IL_0098;
			}
			case 11:
			{
				goto IL_0098;
			}
			case 12:
			{
				goto IL_00b4;
			}
		}
	}
	{
		goto IL_00d0;
	}

IL_0041:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_0060:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_007c:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_0098:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_00b4:
	{
		V_0 = true;
		goto IL_00e6;
	}

IL_00d0:
	{
		int32_t L_1 = ___0_channel;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC)), L_3, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_00e6:
	{
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_7 = ___0_channel;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck((MemberInfo_t*)L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC)), L_9, (RuntimeObject*)L_12, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_010e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018_gshared (int32_t ___0_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ___0_channel;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0060;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_0098;
			}
			case 5:
			{
				goto IL_0098;
			}
			case 6:
			{
				goto IL_0098;
			}
			case 7:
			{
				goto IL_0098;
			}
			case 8:
			{
				goto IL_0098;
			}
			case 9:
			{
				goto IL_0098;
			}
			case 10:
			{
				goto IL_0098;
			}
			case 11:
			{
				goto IL_0098;
			}
			case 12:
			{
				goto IL_00b4;
			}
		}
	}
	{
		goto IL_00d0;
	}

IL_0041:
	{
		V_0 = true;
		goto IL_00e6;
	}

IL_0060:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_007c:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_0098:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_00b4:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_00d0:
	{
		int32_t L_1 = ___0_channel;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC)), L_3, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_00e6:
	{
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_7 = ___0_channel;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck((MemberInfo_t*)L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC)), L_9, (RuntimeObject*)L_12, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_010e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893_gshared (int32_t ___0_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ___0_channel;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0060;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_0098;
			}
			case 5:
			{
				goto IL_0098;
			}
			case 6:
			{
				goto IL_0098;
			}
			case 7:
			{
				goto IL_0098;
			}
			case 8:
			{
				goto IL_0098;
			}
			case 9:
			{
				goto IL_0098;
			}
			case 10:
			{
				goto IL_0098;
			}
			case 11:
			{
				goto IL_0098;
			}
			case 12:
			{
				goto IL_00b4;
			}
		}
	}
	{
		goto IL_00d0;
	}

IL_0041:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_0060:
	{
		V_0 = true;
		goto IL_00e6;
	}

IL_007c:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_0098:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_00b4:
	{
		V_0 = false;
		goto IL_00e6;
	}

IL_00d0:
	{
		int32_t L_1 = ___0_channel;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC)), L_3, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_00e6:
	{
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_7 = ___0_channel;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck((MemberInfo_t*)L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC)), L_9, (RuntimeObject*)L_12, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_010e:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_IMIN_m033AF9617A352C33A0D7828A876AF88533D777FC_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* CeltEncoder_GetMode_m51A6C31A1CCF60B36D8EAEB3F95A5D0D918A01C4_inline (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, const RuntimeMethod* method) 
{
	{
		CeltMode_t5461657E895096EF8CEE32B22EC91860309A0A03* L_0 = __this->___mode;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MULT16_32_Q15_m9ACDCD56470E021CBBED37E65CE2F68DB892A030_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		int32_t L_2 = ___0_a;
		int32_t L_3 = ___1_b;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)(L_1>>((int32_t)16)))))<<1)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)(L_3&((int32_t)65535)))))>>((int32_t)15)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_lin2log_m13CE80A79E86A855158F9AD128C300253AA54787_inline (int32_t ___0_inLin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_inLin;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		Inlines_silk_CLZ_FRAC_mD066D7CE4E23D7C82C309DB5E6E19A377D916AAC_inline(L_0, (&V_0), (&V_1), NULL);
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = Inlines_silk_LSHIFT_mA37756351362D68182AD1C173A43FBDB753390D0_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)31), L_1)), 7, NULL);
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = Inlines_silk_MUL_m4A3ED7EC9DC0041A3B36F753375D9C7FBB6B5ECD_inline(L_4, ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_5)), NULL);
		int32_t L_7;
		L_7 = Inlines_silk_SMLAWB_m848A6EC6C9D0BA25BB0D3D3035475AEF74EBA860_inline(L_3, L_6, ((int32_t)179), NULL);
		return ((int32_t)il2cpp_codegen_add(L_2, L_7));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_LSHIFT_mA37756351362D68182AD1C173A43FBDB753390D0_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_shift;
		return ((int32_t)(L_0<<((int32_t)(L_1&((int32_t)31)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_SMLAWB_m848A6EC6C9D0BA25BB0D3D3035475AEF74EBA860_inline (int32_t ___0_a32, int32_t ___1_b32, int32_t ___2_c32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_a32;
		int32_t L_1 = ___1_b32;
		int32_t L_2 = ___2_c32;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Inlines_silk_SMULWB_mFA9CAB5599FB77045FEC1524E60236EE09DCB545_inline(L_1, L_2, NULL);
		return ((int32_t)il2cpp_codegen_add(L_0, L_3));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_RSHIFT_m91357BE2399E9EA7017E2F08E94110205620DFC1_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_shift;
		return ((int32_t)(L_0>>((int32_t)(L_1&((int32_t)31)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_log2lin_mAA1230C7B095DFEC8345BB1D7C951470856E4738_inline (int32_t ___0_inLog_Q7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_inLog_Q7;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_1 = ___0_inLog_Q7;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)3967))))
		{
			goto IL_0014;
		}
	}
	{
		return ((int32_t)2147483647LL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_inLog_Q7;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Inlines_silk_RSHIFT_m91357BE2399E9EA7017E2F08E94110205620DFC1_inline(L_2, 7, NULL);
		int32_t L_4;
		L_4 = Inlines_silk_LSHIFT_mA37756351362D68182AD1C173A43FBDB753390D0_inline(1, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = ___0_inLog_Q7;
		V_1 = ((int32_t)(L_5&((int32_t)127)));
		int32_t L_6 = ___0_inLog_Q7;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)2048))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Inlines_silk_SMULBB_mE06C6FFCE0F1AD81838ACF9261859C8DA62857E8_inline(L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_11)), NULL);
		int32_t L_13;
		L_13 = Inlines_silk_SMLAWB_m848A6EC6C9D0BA25BB0D3D3035475AEF74EBA860_inline(L_9, L_12, ((int32_t)-174), NULL);
		int32_t L_14;
		L_14 = Inlines_silk_MUL_m4A3ED7EC9DC0041A3B36F753375D9C7FBB6B5ECD_inline(L_8, L_13, NULL);
		int32_t L_15;
		L_15 = Inlines_silk_ADD_RSHIFT32_m1AF65D0A324776CAD8055D505579BC05437473C9_inline(L_7, L_14, 7, NULL);
		V_0 = L_15;
		goto IL_007d;
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Inlines_silk_RSHIFT_m91357BE2399E9EA7017E2F08E94110205620DFC1_inline(L_17, 7, NULL);
		int32_t L_19 = V_1;
		int32_t L_20 = V_1;
		int32_t L_21 = V_1;
		int32_t L_22;
		L_22 = Inlines_silk_SMULBB_mE06C6FFCE0F1AD81838ACF9261859C8DA62857E8_inline(L_20, ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_21)), NULL);
		int32_t L_23;
		L_23 = Inlines_silk_SMLAWB_m848A6EC6C9D0BA25BB0D3D3035475AEF74EBA860_inline(L_19, L_22, ((int32_t)-174), NULL);
		int32_t L_24;
		L_24 = Inlines_silk_MLA_mD6080DA54B0CBDDB190C18A791300A8B8CEE4087_inline(L_16, L_18, L_23, NULL);
		V_0 = L_24;
	}

IL_007d:
	{
		int32_t L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_SHL32_m75BFDFD5C80D2CB588BD2517779B5A73F5C0EF03_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_shift;
		return ((int32_t)(L_0<<((int32_t)(L_1&((int32_t)31)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_SHR32_mD57FC2703588CAD4DF39825E0FEC2F158F622A29_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_shift;
		return ((int32_t)(L_0>>((int32_t)(L_1&((int32_t)31)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MIN16_m91DF88A9ABB47E6D010FC82CD4B9404DA512623E_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MAX16_m664F24DFE9E917BEC0D4536CF6520277285EF0CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_HALF16_mA3D84B14909E6EF84F654D342E679A9EB1111DF2_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Inlines_SHR32_mD57FC2703588CAD4DF39825E0FEC2F158F622A29_inline(L_0, 1, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MULT16_16_m1284C34FE095820278CB6AEDD3575C2165F1FC1A_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		return ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_PSHR32_mFAD319902E74B0D0ED8DCB30992F78B21833ADA3_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Inlines_EXTEND32_mEF007582BF2038B94335FD0D3749B9B4287D2B57_inline(1, NULL);
		int32_t L_2 = ___1_shift;
		int32_t L_3 = ___1_shift;
		int32_t L_4;
		L_4 = Inlines_SHR32_mD57FC2703588CAD4DF39825E0FEC2F158F622A29_inline(((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)(L_1<<((int32_t)(L_2&((int32_t)31)))))>>1)))), L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_MAX32_m0EDA35029F6C04CDC5D3FBC144A35A8E6BDA9044_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_IMAX_mF826EDBD765651BC22E22C96C35C8DFB9F9176D2_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_SHL16_m768B89D36A8CC1CA8F33C9FCFB60981068D424F0_inline (int32_t ___0_a, int32_t ___1_shift, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_shift;
		return ((int32_t)(L_0<<((int32_t)(L_1&((int32_t)31)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t CeltEncoder_GetFinalRange_m2092F8FCA30E8FAA7776C95301B7356C1C6A698A_inline (CeltEncoder_t9A2B33E403223D1287097E9D34D9F538F6C2C322* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___rng;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScopeTransitionHelper_get_AllAssemblies_m3D52FB986E172746F435A46F24CAA4ED7795AADA_inline (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, const RuntimeMethod* method) 
{
	{
		StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97* L_0 = __this->____assemblyList;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_6 = (*(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_gshared_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_6 = ___2_value;
		*(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333_gshared_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_12;
		L_12 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_11);
		int32_t L_13 = ___1_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_14;
		L_14 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_12, L_13, sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int32_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<int32_t>(L_11);
		int32_t L_13 = ___1_start;
		int32_t* L_14;
		L_14 = il2cpp_unsafe_add<int32_t,int32_t>(L_12, L_13, sizeof(int32_t));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA3840C7226D793D4B75979B13B1A6B0B25342950_gshared_inline (ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_12;
		L_12 = il2cpp_unsafe_as_ref<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207>(L_11);
		int32_t L_13 = ___1_start;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_14;
		L_14 = il2cpp_unsafe_add<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207,int32_t>(L_12, L_13, sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207));
		ByReference_1_tCD6518F15D44935EFDC820F5ACCB8F718BDF1CCC L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5_gshared_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12;
		L_12 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_11);
		int32_t L_13 = ___1_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14;
		L_14 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_12, L_13, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414_gshared_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_12;
		L_12 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_11);
		int32_t L_13 = ___1_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_14;
		L_14 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_12, L_13, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_12, L_13, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** UnsafeUtility_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7E01BE5B3130A632C43D1F86A8781C30A93D3DCF_gshared_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (Il2CppSharedGenericObject**)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m02DF2B39305B32F97D425178F5054CE9830BFB10_gshared_inline (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_0 = NULL;
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0 = ((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* V_0 = NULL;
	{
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_0 = ((EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEC9E7D42057D720BD5C432BEBEAF047B1E459907(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* V_0 = NULL;
	{
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_0 = ((EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB6F7C63A873735C1C9DCC17393C8844B9F014DC1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* V_0 = NULL;
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* V_0 = NULL;
	{
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_0 = ((EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m779CEAAA847760E44B83AED6B8E7A854F40754FF(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* V_0 = NULL;
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0 = ((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Inlines_silk_CLZ_FRAC_mD066D7CE4E23D7C82C309DB5E6E19A377D916AAC_inline (int32_t ___0_input, int32_t* ___1_lz, int32_t* ___2_frac_Q7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Inlines_silk_CLZ32_m1139CDC6B22F27D33E9405011AAF76B517147B28_inline(L_0, NULL);
		V_0 = L_1;
		int32_t* L_2 = ___1_lz;
		int32_t L_3 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)L_3);
		int32_t* L_4 = ___2_frac_Q7;
		int32_t L_5 = ___0_input;
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Inlines_silk_ROR32_m3D0A69FBA3F37AAF60A38DA6087B52A1E2D1690C_inline(L_5, ((int32_t)il2cpp_codegen_subtract(((int32_t)24), L_6)), NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_4, (int32_t)((int32_t)(L_7&((int32_t)127))));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_MUL_m4A3ED7EC9DC0041A3B36F753375D9C7FBB6B5ECD_inline (int32_t ___0_a32, int32_t ___1_b32, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a32;
		int32_t L_1 = ___1_b32;
		return ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_SMULWB_mFA9CAB5599FB77045FEC1524E60236EE09DCB545_inline (int32_t ___0_a32, int32_t ___1_b32, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a32;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_0,NULL));
		int32_t L_2 = ___1_b32;
		int16_t L_3 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_2,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int16_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_1, L_4))>>((int32_t)16))),NULL));
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_SMULBB_mE06C6FFCE0F1AD81838ACF9261859C8DA62857E8_inline (int32_t ___0_a32, int32_t ___1_b32, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a32;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_0,NULL));
		int32_t L_2 = ___1_b32;
		int16_t L_3 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_2,NULL));
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_ADD_RSHIFT32_m1AF65D0A324776CAD8055D505579BC05437473C9_inline (int32_t ___0_a, int32_t ___1_b, int32_t ___2_shift, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		int32_t L_2 = ___2_shift;
		return ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_1>>((int32_t)(L_2&((int32_t)31)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_MLA_mD6080DA54B0CBDDB190C18A791300A8B8CEE4087_inline (int32_t ___0_a32, int32_t ___1_b32, int32_t ___2_c32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_a32;
		int32_t L_1 = ___1_b32;
		int32_t L_2 = ___2_c32;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Inlines_silk_ADD32_m9235346EAA49AA507DBC4FCB84FCD7A0A38BD8C8_inline(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_EXTEND32_mEF007582BF2038B94335FD0D3749B9B4287D2B57_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_CLZ32_m1139CDC6B22F27D33E9405011AAF76B517147B28_inline (int32_t ___0_in32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_in32;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_in32;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Inlines_EC_ILOG_m248C732E16636411540FAB4F8F06B2D7EFA4B89F_inline(L_1, NULL);
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_2));
	}

IL_000d:
	{
		return ((int32_t)32);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_ROR32_m3D0A69FBA3F37AAF60A38DA6087B52A1E2D1690C_inline (int32_t ___0_a32, int32_t ___1_rot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_a32;
		int32_t L_1 = ___1_rot;
		il2cpp_codegen_runtime_class_init_inline(Inlines_t23C9C2403D08FB04A29465D1BE3B31E6617D9B19_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = Inlines_silk_ROR32_mC801C8B76107C1CFB9083D76714494B56AE1C6CB_inline(L_0, L_1, NULL);
		return (int32_t)L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_silk_ADD32_m9235346EAA49AA507DBC4FCB84FCD7A0A38BD8C8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Inlines_EC_ILOG_m248C732E16636411540FAB4F8F06B2D7EFA4B89F_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_x;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		uint32_t L_1 = ___0_x;
		uint32_t L_2 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_1|((int32_t)((uint32_t)L_2>>1))));
		uint32_t L_3 = ___0_x;
		uint32_t L_4 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_3|((int32_t)((uint32_t)L_4>>2))));
		uint32_t L_5 = ___0_x;
		uint32_t L_6 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_5|((int32_t)((uint32_t)L_6>>4))));
		uint32_t L_7 = ___0_x;
		uint32_t L_8 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_7|((int32_t)((uint32_t)L_8>>8))));
		uint32_t L_9 = ___0_x;
		uint32_t L_10 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_9|((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		uint32_t L_11 = ___0_x;
		uint32_t L_12 = ___0_x;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, ((int32_t)(((int32_t)((uint32_t)L_12>>1))&((int32_t)1431655765)))));
		uint32_t L_13 = V_0;
		uint32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_13>>2))&((int32_t)858993459))), ((int32_t)((int32_t)L_14&((int32_t)858993459)))));
		uint32_t L_15 = V_0;
		uint32_t L_16 = V_0;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_15>>4)), (int32_t)L_16))&((int32_t)252645135)));
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, ((int32_t)((uint32_t)L_18>>8))));
		uint32_t L_19 = V_0;
		uint32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, ((int32_t)((uint32_t)L_20>>((int32_t)16)))));
		uint32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21&((int32_t)63)));
		uint32_t L_22 = V_0;
		return (int32_t)L_22;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Inlines_silk_ROR32_mC801C8B76107C1CFB9083D76714494B56AE1C6CB_inline (uint32_t ___0_a32, int32_t ___1_rot, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_rot;
		V_0 = ((int32_t)il2cpp_codegen_subtract(0, L_0));
		int32_t L_1 = ___1_rot;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		uint32_t L_2 = ___0_a32;
		return L_2;
	}

IL_0009:
	{
		int32_t L_3 = ___1_rot;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		uint32_t L_4 = ___0_a32;
		int32_t L_5 = V_0;
		uint32_t L_6 = ___0_a32;
		int32_t L_7 = V_0;
		return ((int32_t)(((int32_t)((int32_t)L_4<<((int32_t)(L_5&((int32_t)31)))))|((int32_t)((uint32_t)L_6>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_7))&((int32_t)31)))))));
	}

IL_001e:
	{
		uint32_t L_8 = ___0_a32;
		int32_t L_9 = ___1_rot;
		uint32_t L_10 = ___0_a32;
		int32_t L_11 = ___1_rot;
		return ((int32_t)(((int32_t)((int32_t)L_8<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_9))&((int32_t)31)))))|((int32_t)((uint32_t)L_10>>((int32_t)(L_11&((int32_t)31)))))));
	}
}
