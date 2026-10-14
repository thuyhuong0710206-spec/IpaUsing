#include "pch-cpp.hpp"





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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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

struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0;
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C;
struct Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03;
struct Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E;
struct Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2;
struct EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505;
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31;
struct EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5;
struct EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF;
struct IDictionary_2_t6AB11C74F2773DC929B07E491DBFF8B25BD2510F;
struct IDictionary_2_tA7C64E0E0D78C574FF3CE43046AB02336D49C929;
struct IDictionary_2_tC7696F0233BA625BE4BB0DFF2DD69FF8FC5EAA14;
struct IDictionary_2_tCD091DAC44559704C61E3BE5EEB468102E6500EC;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IDictionary_2_tEA7080C92C590A70414AACBA8083D8DCA6C201A3;
struct IDictionary_2_tDCE53865DF962E81422C14360743BD413630F5CF;
struct IEnumerator_1_t4C7C48A2C47D3FA12DD605CBC54389C142074241;
struct IEnumerator_1_tDFDA733A40523681099DF822E97AA4397205F8E5;
struct IEnumerator_1_t2F9223BE11C11B5607AA702CDBEAE387A36463BC;
struct IEnumerator_1_tAC67E37FF9CA37C80DA411197AC1717A30C02044;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_tF109701A72A2D73D7D848A79E64B2BA3C724EC24;
struct IEnumerator_1_tDBBEE7B772029FD75C2CB664C0A9CB11ACD726AA;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t0AA8806844FF87D08ADF9663E986BA328D0D3C7D;
struct KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4;
struct KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1;
struct KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049;
struct KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82;
struct KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017;
struct ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5;
struct ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9;
struct ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70;
struct ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7;
struct ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7;
struct EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204;
struct EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E;
struct EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74;
struct EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059;
struct EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2;
struct KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B;
struct KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838;
struct KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204;
struct EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E;
struct EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74;
struct EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059;
struct EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2;
struct KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B;
struct KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838;
struct KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4* ____keys;
	ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1* ____keys;
	ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049* ____keys;
	ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3* ____keys;
	ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82* ____keys;
	ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017* ____keys;
	ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505  : public RuntimeObject
{
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31  : public RuntimeObject
{
};
struct EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5  : public RuntimeObject
{
};
struct EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF  : public RuntimeObject
{
};
struct KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4  : public RuntimeObject
{
	Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* ____dictionary;
};
struct KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1  : public RuntimeObject
{
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ____dictionary;
};
struct KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049  : public RuntimeObject
{
	Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* ____dictionary;
};
struct KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3  : public RuntimeObject
{
	Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* ____dictionary;
};
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82  : public RuntimeObject
{
	Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* ____dictionary;
};
struct KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017  : public RuntimeObject
{
	Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* ____dictionary;
};
struct ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5  : public RuntimeObject
{
	Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* ____dictionary;
};
struct ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9  : public RuntimeObject
{
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ____dictionary;
};
struct ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70  : public RuntimeObject
{
	Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* ____dictionary;
};
struct ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C  : public RuntimeObject
{
	Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7  : public RuntimeObject
{
	Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* ____dictionary;
};
struct ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7  : public RuntimeObject
{
	Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
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
struct AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 
{
	Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___a1;
	Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___a2;
};
struct AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727_marshaled_pinvoke
{
	Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___a1;
	Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___a2;
};
struct AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727_marshaled_com
{
	Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___a1;
	Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___a2;
};
struct BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 
{
	bool ___flipX;
	bool ___flipY;
};
struct BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5_marshaled_pinvoke
{
	int32_t ___flipX;
	int32_t ___flipY;
};
struct BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5_marshaled_com
{
	int32_t ___flipX;
	int32_t ___flipY;
};
struct BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D 
{
	bool ___flipX;
	bool ___flipY;
};
struct BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D_marshaled_pinvoke
{
	int32_t ___flipX;
	int32_t ___flipY;
};
struct BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D_marshaled_com
{
	int32_t ___flipX;
	int32_t ___flipY;
};
struct Entry_tBCB2426D89579F1E315F5C79440576665BBE166A 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value;
};
struct Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___value;
};
struct Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___value;
};
struct Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497 
{
	int32_t ___hashCode;
	int32_t ___next;
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___key;
	float ___value;
};
struct Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C 
{
	int32_t ___hashCode;
	int32_t ___next;
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD 
{
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ____current;
	int32_t ____getEnumeratorRetType;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 
{
	Il2CppSharedGenericObject* ___key;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value;
};
struct KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 
{
	Il2CppSharedGenericObject* ___key;
	BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___value;
};
struct KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 
{
	Il2CppSharedGenericObject* ___key;
	BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___value;
};
struct KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 
{
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___key;
	float ___value;
};
struct KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE 
{
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___key;
	Il2CppSharedGenericObject* ___value;
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70 
{
	Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C 
{
	Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA 
{
	Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95 
{
	Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C 
{
	Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE ____current;
	int32_t ____getEnumeratorRetType;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields
{
	EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* ___defaultComparer;
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31_StaticFields
{
	EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* ___defaultComparer;
};
struct EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5_StaticFields
{
	EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* ___defaultComparer;
};
struct EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF_StaticFields
{
	EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tBCB2426D89579F1E315F5C79440576665BBE166A m_Items[1];

	inline Entry_tBCB2426D89579F1E315F5C79440576665BBE166A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tBCB2426D89579F1E315F5C79440576665BBE166A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
	inline Entry_tBCB2426D89579F1E315F5C79440576665BBE166A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tBCB2426D89579F1E315F5C79440576665BBE166A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
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
struct KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 m_Items[1];

	inline KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 m_Items[1];

	inline Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 m_Items[1];

	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454 m_Items[1];

	inline Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 m_Items[1];

	inline KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2 m_Items[1];

	inline Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 m_Items[1];

	inline KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
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
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
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
struct EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497 m_Items[1];

	inline Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a2), (void*)NULL);
		#endif
	}
	inline Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a2), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 m_Items[1];

	inline KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a2), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a2), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C m_Items[1];

	inline Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE m_Items[1];

	inline KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___a2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m01987A7FAA2D4282F85A820E3511C16851B2A7A1_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD52511C940E9E7E706CFFAEBF758C7AB86292C1D_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m06AA12A53F023126835E13C0A57E9A87B99936C3_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7F1CCDA8EF1CBA108AEB3ABE946D2A8D52F040A6_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_gshared_inline (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 KeyValuePair_2_get_Value_mD5208C429B44260B9708A5C3D6C5875BBACC3E58_gshared_inline (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m663705F9C6DE6DD9EBEC42D87C2C0AB03B1B791A_gshared (KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4* __this, Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mB80226231BF47F52300C1EAF6A01D205EC089F75_gshared (ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5* __this, Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m42DB30D765486B08A5B0EB768480AEA814A68E0C_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m2D451F790A9E7218F35852D5217BF0642922E2DE_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7C34BA9E731EE76B9463BC4EDD919FF62A3971E1_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m26A1D1AEE000BE602E9ED88292E05120DDE31F57_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m18517B6786A4849C4A5674A4096B65ADDBCC4FEA_gshared (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC1DF5EA89DEFEA35EE9DB5D3D8CCED870ADE60F1_gshared (Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70* __this, Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3A3E133FCA8A6431DA771BFC1E8F661CB8807D5E_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m89A4D68C2634C0129E2AE1E7F4390A5EBB91CF69_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3BA0ED0B1E8DF266353993E58B1E4A534DB7A427_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA212CFFFF13E4C65BB02C31812269DE204CA3593_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE6AE1CD04760EE6EE5D5384755B1C8C57162D955_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDE9CD6DB1836475602D3DC058A6FD79F7324D21A_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF885C7DA0F0A9A615A09DF8AF73EC9D7BFB630C2_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m48712EBFF4B8C179C7A6BB41F56CE5EFB95AFF29_gshared (KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1* __this, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m457973597020CEAD75DCE03485F7B83BA187A0FE_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mA7648FED8740ED347100540F907E67CA7E9B0D72_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m79BC440CD4B1417967967CCBE1E70606BEEC9456_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m884D981DD9288E9F10D52CCF4F97D62691C58B00_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED_gshared (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m06045B6447B24219AA9B9CD3F6DFE611C5BA2CDF_gshared (Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD* __this, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m433B28CC864C833604737F6870CA23F75E9DD90A_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m46E847DCF36B7A51C0624C20F3D1B668EC910ACD_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF8146CB4E586FDFEDD72E84F6C851161271B8757_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m970F39957AA13F57797915183F66166CF35746AD_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFAC2FDE1040A734DA2C0B7BE78D9DBFE83FDB0F2_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA2651012CFB312A45D271A12D5C1080AE9D9EBDB_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCD7AEAE24E8EDFE3D9BB6F23E7B65DC4CAA1C66D_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA4B8AD6C1120287063DC20D9DBEBC7E36537C6A_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_gshared_inline (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 KeyValuePair_2_get_Value_m0BC4A3261F4BB68DCF9CA3904493670DA6F654B4_gshared_inline (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m0EA3C70703F456DA98CBB5CDD0101DC8FB65E563_gshared (KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049* __this, Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m69EE3BCE72DC4A1263AC6034FC71D135F8ACB5A2_gshared (ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70* __this, Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m78AE9A2EA804B928E8A0807803303E60FD89629E_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA8D954972EE880C2862E7ACD2998F6A9FD70DC84_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* EqualityComparer_1_get_Default_m4FC95DF57BE97850AC59AA42A75D5DC92D7D1ADD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m67097E35229A53945DA1105D6EEE213CF6F14B0B_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD760316682BC3E20BDD7151BCEC7A37488FC2710_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mDD84375E7E49E23AAD066AD90D843E96381968B9_gshared (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m337E18368717BA04EB4DDDED764A7BC8C7CD38F3_gshared (Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C* __this, Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m82E2AC9AD3F7F68756373934BA3CE60CBEC81D61_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m498762A08F3ED896F640CA2CE7B1B12EE264E69F_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3DB9BF639A3E8CB2DFCBA86E6425130AB997E7F8_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5_m415216260C5A1B093DCFDFE7D5F3AE0165D2764C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C99839EB7A8A34F7AC6B7EAB141E6311D9AC46E_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m50B60193621703427D9BA11E52064B9BC483AB24_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m57CE7B19FC96B7B0EB408B9D6938674A44853398_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCEA8CEA0E477EC1B8D31078D83A38395C8BF96AD_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBC6D9DBA66C645613DE22030989268C54289BB59_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_gshared_inline (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D KeyValuePair_2_get_Value_m61F501C5D190CEC570C7D43736A202F772BF5874_gshared_inline (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mE769FD700F7EC5CD61E08D19E23D62BFCB67A1ED_gshared (KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3* __this, Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m2A26CD84A742B964A0422CA280A4B7353800272E_gshared (ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C* __this, Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m3C38E5F44E8E6114AA800AA5563DD72AD3841EDC_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mEA6C0416314DFBC7F2FA2E3685CA328060504286_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* EqualityComparer_1_get_Default_m06369B755187B1B3FD0C2B0853925A113199B68B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA7BAA95EEC509C5C9901AC00F5C4E7DB0AAC6C21_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA11ED6C3105A4613CB98A8B7955ECD8971057712_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m40FED18A81796956773FF9DBB7585F3396F4CF9B_gshared (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE7A49C607E36E0BE23132EA970288F58C60BFEA9_gshared (Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA* __this, Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1E8A15B162E5923C97676A5867DBF07926826476_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF5B87320B6255623273413181A6D35DE7F6288E8_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC2F62C5FFA7022D024DD59C8415542066B421A9E_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D_m0E2758E43745E5E9379A8648BAE5973B464178AB_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6FC062BFDC7DBE179E23A5DB34E046DB58B172CE_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2B275ED19E00308C60BB7E0CCD26A62FB4626543_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9A17FA1785567CD8E901969DE8EBB7A5911B4448_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF8A097858F51D0ED34EDDB4F537E07DB244BD6A0_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDB304FBDBB5A8DDF40C199811405B214322028FF_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_gshared_inline (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float KeyValuePair_2_get_Value_mB8BEFFB924C70CA6BC7FBD067819E52DAB00C82B_gshared_inline (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m61557D45B081486A0F6379AF8D72984D93169271_gshared (KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82* __this, Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mEA4B048171F0F499D26F6C5D4ABE6CB0DF884E54_gshared (ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7* __this, Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4F333B8C0F244320229A71DC6E5153F5A013CDA1_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m31A500491689FF984DA61568748CFE8273C085E9_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2FC405CA79F68E0FF79E511FB9096485EEBD17A3_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD0308072E4983A352B0A0FA2674FCDF503D7A98D_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mAD90D28A4BD7945B468982DD538DE5E824509117_gshared (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m83CC0F6440C696C3A69E085DF2796D3691DD1FE1_gshared (Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95* __this, Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m64C7E22DA2C3545EC7710A100F97014C53FA5289_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBFD4D03838E076F417CA2F03F6ABD3C41C2C05A6_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1D341EA3707CC879A5728CB054BE70F63BB594E4_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m40A060114DD0D5E3F7675FA592ABA27557C198CF_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m69594AE682A763E96793BC65F73DEB1EF630E6EB_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7001888F85D1E50316383982273666E94D54D6A3_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA2B3A25F33CD0B89D767B0D91B7CBA4F73AB4D8B_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCAC9AB405BD2A6E49A6B3A615531B2B08DE23163_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m770D5D66A5AA3A8CB8273146970A5262EF21E71B_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_gshared_inline (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m78CE97D4C2B40652CF4F4918CB2E1DD3DCA4F124_gshared_inline (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mE1A266B2F74AAD4E082FADBC641778D8EA1E0B15_gshared (KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017* __this, Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m7BE5C072DBF1A541BB09E8B08EA48E19121D9B06_gshared (ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7* __this, Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m43326D2EB053E963ED92D8C6D399EBE07F40D3AB_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mB750361F76BEE947B6FA98DBA5FAD93C8F8158C3_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2CB80734B5E1AEA45006684CB6120D1ECE72BECB_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0D68D906B99741108251B115B731FA87AFEE1D0F_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mBC6F660255DD7D57537E098DD71D7A85C5B3E5CD_gshared (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m52B696EEF21CB736E0B69B01D7FAC76141B5F2C9_gshared (Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C* __this, Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3D8F429BA29513488C41855E1659D2D2437CA4F1_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5D7273AA2CFA4347EC465FC7356C1EAC8D356C4E_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m068C5291193DA02184C462177ED62DD2495E04AA_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mFF5C0D752009A003E7BCC84B3487D14270633798_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* EqualityComparer_1_CreateComparer_m4FD1F125CE1BDA84D7912A087FFB323A35365830_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* EqualityComparer_1_CreateComparer_mE834B113416D4F8165FE20ABC8D3BF276F5AC62D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* EqualityComparer_1_CreateComparer_mAE770D27EEFD0758D138BA7D18C27B82C8AD540F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_m01987A7FAA2D4282F85A820E3511C16851B2A7A1 (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m01987A7FAA2D4282F85A820E3511C16851B2A7A1_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_mD52511C940E9E7E706CFFAEBF758C7AB86292C1D (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mD52511C940E9E7E706CFFAEBF758C7AB86292C1D_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m06AA12A53F023126835E13C0A57E9A87B99936C3 (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m06AA12A53F023126835E13C0A57E9A87B99936C3_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m7F1CCDA8EF1CBA108AEB3ABE946D2A8D52F040A6 (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, Il2CppSharedGenericObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, const RuntimeMethod*))Dictionary_2_Add_m7F1CCDA8EF1CBA108AEB3ABE946D2A8D52F040A6_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_inline (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349*, const RuntimeMethod*))KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_gshared_inline)(__this, method);
}
inline ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 KeyValuePair_2_get_Value_mD5208C429B44260B9708A5C3D6C5875BBACC3E58_inline (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* __this, const RuntimeMethod* method)
{
	return ((  ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 (*) (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD5208C429B44260B9708A5C3D6C5875BBACC3E58_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_m663705F9C6DE6DD9EBEC42D87C2C0AB03B1B791A (KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4* __this, Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4*, Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, const RuntimeMethod*))KeyCollection__ctor_m663705F9C6DE6DD9EBEC42D87C2C0AB03B1B791A_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mB80226231BF47F52300C1EAF6A01D205EC089F75 (ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5* __this, Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5*, Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, const RuntimeMethod*))ValueCollection__ctor_mB80226231BF47F52300C1EAF6A01D205EC089F75_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m42DB30D765486B08A5B0EB768480AEA814A68E0C (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m42DB30D765486B08A5B0EB768480AEA814A68E0C_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m2D451F790A9E7218F35852D5217BF0642922E2DE (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, Il2CppSharedGenericObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m2D451F790A9E7218F35852D5217BF0642922E2DE_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m7C34BA9E731EE76B9463BC4EDD919FF62A3971E1 (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Remove_m7C34BA9E731EE76B9463BC4EDD919FF62A3971E1_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_m26A1D1AEE000BE602E9ED88292E05120DDE31F57 (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, const RuntimeMethod*))Dictionary_2_get_Count_m26A1D1AEE000BE602E9ED88292E05120DDE31F57_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m18517B6786A4849C4A5674A4096B65ADDBCC4FEA (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349*, Il2CppSharedGenericObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, const RuntimeMethod*))KeyValuePair_2__ctor_m18517B6786A4849C4A5674A4096B65ADDBCC4FEA_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mC1DF5EA89DEFEA35EE9DB5D3D8CCED870ADE60F1 (Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70* __this, Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70*, Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, int32_t, const RuntimeMethod*))Enumerator__ctor_mC1DF5EA89DEFEA35EE9DB5D3D8CCED870ADE60F1_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m3A3E133FCA8A6431DA771BFC1E8F661CB8807D5E (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m3A3E133FCA8A6431DA771BFC1E8F661CB8807D5E_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m89A4D68C2634C0129E2AE1E7F4390A5EBB91CF69 (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, const RuntimeMethod*))Dictionary_2_Resize_m89A4D68C2634C0129E2AE1E7F4390A5EBB91CF69_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m3BA0ED0B1E8DF266353993E58B1E4A534DB7A427 (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m3BA0ED0B1E8DF266353993E58B1E4A534DB7A427_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mA212CFFFF13E4C65BB02C31812269DE204CA3593 (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*, Il2CppSharedGenericObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, const RuntimeMethod*))Dictionary_2_set_Item_mA212CFFFF13E4C65BB02C31812269DE204CA3593_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mE6AE1CD04760EE6EE5D5384755B1C8C57162D955 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE6AE1CD04760EE6EE5D5384755B1C8C57162D955_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mDE9CD6DB1836475602D3DC058A6FD79F7324D21A (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mDE9CD6DB1836475602D3DC058A6FD79F7324D21A_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_mF885C7DA0F0A9A615A09DF8AF73EC9D7BFB630C2 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF885C7DA0F0A9A615A09DF8AF73EC9D7BFB630C2_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m48712EBFF4B8C179C7A6BB41F56CE5EFB95AFF29 (KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1* __this, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1*, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, const RuntimeMethod*))KeyCollection__ctor_m48712EBFF4B8C179C7A6BB41F56CE5EFB95AFF29_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m457973597020CEAD75DCE03485F7B83BA187A0FE (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9*, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, const RuntimeMethod*))ValueCollection__ctor_m457973597020CEAD75DCE03485F7B83BA187A0FE_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mA7648FED8740ED347100540F907E67CA7E9B0D72 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_FindEntry_mA7648FED8740ED347100540F907E67CA7E9B0D72_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m79BC440CD4B1417967967CCBE1E70606BEEC9456 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m79BC440CD4B1417967967CCBE1E70606BEEC9456_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m884D981DD9288E9F10D52CCF4F97D62691C58B00 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Remove_m884D981DD9288E9F10D52CCF4F97D62691C58B00_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, const RuntimeMethod*))Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m06045B6447B24219AA9B9CD3F6DFE611C5BA2CDF (Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD* __this, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD*, Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, int32_t, const RuntimeMethod*))Enumerator__ctor_m06045B6447B24219AA9B9CD3F6DFE611C5BA2CDF_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m433B28CC864C833604737F6870CA23F75E9DD90A (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m433B28CC864C833604737F6870CA23F75E9DD90A_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m46E847DCF36B7A51C0624C20F3D1B668EC910ACD (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, const RuntimeMethod*))Dictionary_2_Resize_m46E847DCF36B7A51C0624C20F3D1B668EC910ACD_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mF8146CB4E586FDFEDD72E84F6C851161271B8757 (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mF8146CB4E586FDFEDD72E84F6C851161271B8757_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m970F39957AA13F57797915183F66166CF35746AD (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_m970F39957AA13F57797915183F66166CF35746AD_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_mFAC2FDE1040A734DA2C0B7BE78D9DBFE83FDB0F2 (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mFAC2FDE1040A734DA2C0B7BE78D9DBFE83FDB0F2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mA2651012CFB312A45D271A12D5C1080AE9D9EBDB (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mA2651012CFB312A45D271A12D5C1080AE9D9EBDB_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_mCD7AEAE24E8EDFE3D9BB6F23E7B65DC4CAA1C66D (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mCD7AEAE24E8EDFE3D9BB6F23E7B65DC4CAA1C66D_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mEA4B8AD6C1120287063DC20D9DBEBC7E36537C6A (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, Il2CppSharedGenericObject*, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5, const RuntimeMethod*))Dictionary_2_Add_mEA4B8AD6C1120287063DC20D9DBEBC7E36537C6A_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_inline (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422*, const RuntimeMethod*))KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_gshared_inline)(__this, method);
}
inline BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 KeyValuePair_2_get_Value_m0BC4A3261F4BB68DCF9CA3904493670DA6F654B4_inline (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* __this, const RuntimeMethod* method)
{
	return ((  BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 (*) (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422*, const RuntimeMethod*))KeyValuePair_2_get_Value_m0BC4A3261F4BB68DCF9CA3904493670DA6F654B4_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m0EA3C70703F456DA98CBB5CDD0101DC8FB65E563 (KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049* __this, Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049*, Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, const RuntimeMethod*))KeyCollection__ctor_m0EA3C70703F456DA98CBB5CDD0101DC8FB65E563_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m69EE3BCE72DC4A1263AC6034FC71D135F8ACB5A2 (ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70* __this, Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70*, Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, const RuntimeMethod*))ValueCollection__ctor_m69EE3BCE72DC4A1263AC6034FC71D135F8ACB5A2_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m78AE9A2EA804B928E8A0807803303E60FD89629E (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m78AE9A2EA804B928E8A0807803303E60FD89629E_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mA8D954972EE880C2862E7ACD2998F6A9FD70DC84 (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, Il2CppSharedGenericObject*, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mA8D954972EE880C2862E7ACD2998F6A9FD70DC84_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* EqualityComparer_1_get_Default_m4FC95DF57BE97850AC59AA42A75D5DC92D7D1ADD_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m4FC95DF57BE97850AC59AA42A75D5DC92D7D1ADD_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m67097E35229A53945DA1105D6EEE213CF6F14B0B (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Remove_m67097E35229A53945DA1105D6EEE213CF6F14B0B_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mD760316682BC3E20BDD7151BCEC7A37488FC2710 (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, const RuntimeMethod*))Dictionary_2_get_Count_mD760316682BC3E20BDD7151BCEC7A37488FC2710_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mDD84375E7E49E23AAD066AD90D843E96381968B9 (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422*, Il2CppSharedGenericObject*, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5, const RuntimeMethod*))KeyValuePair_2__ctor_mDD84375E7E49E23AAD066AD90D843E96381968B9_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m337E18368717BA04EB4DDDED764A7BC8C7CD38F3 (Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C* __this, Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C*, Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, int32_t, const RuntimeMethod*))Enumerator__ctor_m337E18368717BA04EB4DDDED764A7BC8C7CD38F3_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m82E2AC9AD3F7F68756373934BA3CE60CBEC81D61 (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m82E2AC9AD3F7F68756373934BA3CE60CBEC81D61_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m498762A08F3ED896F640CA2CE7B1B12EE264E69F (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, const RuntimeMethod*))Dictionary_2_Resize_m498762A08F3ED896F640CA2CE7B1B12EE264E69F_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m3DB9BF639A3E8CB2DFCBA86E6425130AB997E7F8 (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m3DB9BF639A3E8CB2DFCBA86E6425130AB997E7F8_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5_m415216260C5A1B093DCFDFE7D5F3AE0165D2764C (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5_m415216260C5A1B093DCFDFE7D5F3AE0165D2764C_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m5C99839EB7A8A34F7AC6B7EAB141E6311D9AC46E (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*, Il2CppSharedGenericObject*, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5, const RuntimeMethod*))Dictionary_2_set_Item_m5C99839EB7A8A34F7AC6B7EAB141E6311D9AC46E_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m50B60193621703427D9BA11E52064B9BC483AB24 (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m50B60193621703427D9BA11E52064B9BC483AB24_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m57CE7B19FC96B7B0EB408B9D6938674A44853398 (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m57CE7B19FC96B7B0EB408B9D6938674A44853398_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_mCEA8CEA0E477EC1B8D31078D83A38395C8BF96AD (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mCEA8CEA0E477EC1B8D31078D83A38395C8BF96AD_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mBC6D9DBA66C645613DE22030989268C54289BB59 (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, Il2CppSharedGenericObject*, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D, const RuntimeMethod*))Dictionary_2_Add_mBC6D9DBA66C645613DE22030989268C54289BB59_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_inline (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_gshared_inline)(__this, method);
}
inline BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D KeyValuePair_2_get_Value_m61F501C5D190CEC570C7D43736A202F772BF5874_inline (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* __this, const RuntimeMethod* method)
{
	return ((  BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D (*) (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_m61F501C5D190CEC570C7D43736A202F772BF5874_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mE769FD700F7EC5CD61E08D19E23D62BFCB67A1ED (KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3* __this, Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3*, Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, const RuntimeMethod*))KeyCollection__ctor_mE769FD700F7EC5CD61E08D19E23D62BFCB67A1ED_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m2A26CD84A742B964A0422CA280A4B7353800272E (ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C* __this, Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C*, Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, const RuntimeMethod*))ValueCollection__ctor_m2A26CD84A742B964A0422CA280A4B7353800272E_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m3C38E5F44E8E6114AA800AA5563DD72AD3841EDC (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m3C38E5F44E8E6114AA800AA5563DD72AD3841EDC_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mEA6C0416314DFBC7F2FA2E3685CA328060504286 (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, Il2CppSharedGenericObject*, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mEA6C0416314DFBC7F2FA2E3685CA328060504286_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* EqualityComparer_1_get_Default_m06369B755187B1B3FD0C2B0853925A113199B68B_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m06369B755187B1B3FD0C2B0853925A113199B68B_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mA7BAA95EEC509C5C9901AC00F5C4E7DB0AAC6C21 (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Remove_mA7BAA95EEC509C5C9901AC00F5C4E7DB0AAC6C21_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mA11ED6C3105A4613CB98A8B7955ECD8971057712 (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, const RuntimeMethod*))Dictionary_2_get_Count_mA11ED6C3105A4613CB98A8B7955ECD8971057712_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m40FED18A81796956773FF9DBB7585F3396F4CF9B (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9*, Il2CppSharedGenericObject*, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D, const RuntimeMethod*))KeyValuePair_2__ctor_m40FED18A81796956773FF9DBB7585F3396F4CF9B_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mE7A49C607E36E0BE23132EA970288F58C60BFEA9 (Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA* __this, Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA*, Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, int32_t, const RuntimeMethod*))Enumerator__ctor_mE7A49C607E36E0BE23132EA970288F58C60BFEA9_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m1E8A15B162E5923C97676A5867DBF07926826476 (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m1E8A15B162E5923C97676A5867DBF07926826476_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mF5B87320B6255623273413181A6D35DE7F6288E8 (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, const RuntimeMethod*))Dictionary_2_Resize_mF5B87320B6255623273413181A6D35DE7F6288E8_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mC2F62C5FFA7022D024DD59C8415542066B421A9E (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mC2F62C5FFA7022D024DD59C8415542066B421A9E_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D_m0E2758E43745E5E9379A8648BAE5973B464178AB (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D_m0E2758E43745E5E9379A8648BAE5973B464178AB_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m6FC062BFDC7DBE179E23A5DB34E046DB58B172CE (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*, Il2CppSharedGenericObject*, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D, const RuntimeMethod*))Dictionary_2_set_Item_m6FC062BFDC7DBE179E23A5DB34E046DB58B172CE_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1 (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2__ctor_m2B275ED19E00308C60BB7E0CCD26A62FB4626543 (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m2B275ED19E00308C60BB7E0CCD26A62FB4626543_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m9A17FA1785567CD8E901969DE8EBB7A5911B4448 (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m9A17FA1785567CD8E901969DE8EBB7A5911B4448_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mF8A097858F51D0ED34EDDB4F537E07DB244BD6A0 (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF8A097858F51D0ED34EDDB4F537E07DB244BD6A0_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mDB304FBDBB5A8DDF40C199811405B214322028FF (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, float, const RuntimeMethod*))Dictionary_2_Add_mDB304FBDBB5A8DDF40C199811405B214322028FF_gshared)(__this, ___0_key, ___1_value, method);
}
inline AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_inline (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* __this, const RuntimeMethod* method)
{
	return ((  AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 (*) (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_gshared_inline)(__this, method);
}
inline float KeyValuePair_2_get_Value_mB8BEFFB924C70CA6BC7FBD067819E52DAB00C82B_inline (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* __this, const RuntimeMethod* method)
{
	return ((  float (*) (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB8BEFFB924C70CA6BC7FBD067819E52DAB00C82B_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m61557D45B081486A0F6379AF8D72984D93169271 (KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82* __this, Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82*, Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, const RuntimeMethod*))KeyCollection__ctor_m61557D45B081486A0F6379AF8D72984D93169271_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mEA4B048171F0F499D26F6C5D4ABE6CB0DF884E54 (ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7* __this, Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7*, Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, const RuntimeMethod*))ValueCollection__ctor_mEA4B048171F0F499D26F6C5D4ABE6CB0DF884E54_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m4F333B8C0F244320229A71DC6E5153F5A013CDA1 (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, const RuntimeMethod*))Dictionary_2_FindEntry_m4F333B8C0F244320229A71DC6E5153F5A013CDA1_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m31A500491689FF984DA61568748CFE8273C085E9 (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, float, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m31A500491689FF984DA61568748CFE8273C085E9_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m2FC405CA79F68E0FF79E511FB9096485EEBD17A3 (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, const RuntimeMethod*))Dictionary_2_Remove_m2FC405CA79F68E0FF79E511FB9096485EEBD17A3_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mD0308072E4983A352B0A0FA2674FCDF503D7A98D (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, const RuntimeMethod*))Dictionary_2_get_Count_mD0308072E4983A352B0A0FA2674FCDF503D7A98D_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mAD90D28A4BD7945B468982DD538DE5E824509117 (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, float, const RuntimeMethod*))KeyValuePair_2__ctor_mAD90D28A4BD7945B468982DD538DE5E824509117_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m83CC0F6440C696C3A69E085DF2796D3691DD1FE1 (Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95* __this, Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95*, Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m83CC0F6440C696C3A69E085DF2796D3691DD1FE1_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m64C7E22DA2C3545EC7710A100F97014C53FA5289 (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m64C7E22DA2C3545EC7710A100F97014C53FA5289_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mBFD4D03838E076F417CA2F03F6ABD3C41C2C05A6 (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, const RuntimeMethod*))Dictionary_2_Resize_mBFD4D03838E076F417CA2F03F6ABD3C41C2C05A6_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m1D341EA3707CC879A5728CB054BE70F63BB594E4 (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m1D341EA3707CC879A5728CB054BE70F63BB594E4_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m40A060114DD0D5E3F7675FA592ABA27557C198CF (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m40A060114DD0D5E3F7675FA592ABA27557C198CF_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m69594AE682A763E96793BC65F73DEB1EF630E6EB (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, float, const RuntimeMethod*))Dictionary_2_set_Item_m69594AE682A763E96793BC65F73DEB1EF630E6EB_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m7001888F85D1E50316383982273666E94D54D6A3 (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7001888F85D1E50316383982273666E94D54D6A3_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mA2B3A25F33CD0B89D767B0D91B7CBA4F73AB4D8B (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mA2B3A25F33CD0B89D767B0D91B7CBA4F73AB4D8B_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_mCAC9AB405BD2A6E49A6B3A615531B2B08DE23163 (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mCAC9AB405BD2A6E49A6B3A615531B2B08DE23163_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m770D5D66A5AA3A8CB8273146970A5262EF21E71B (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m770D5D66A5AA3A8CB8273146970A5262EF21E71B_gshared)(__this, ___0_key, ___1_value, method);
}
inline AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_inline (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* __this, const RuntimeMethod* method)
{
	return ((  AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 (*) (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE*, const RuntimeMethod*))KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m78CE97D4C2B40652CF4F4918CB2E1DD3DCA4F124_inline (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m78CE97D4C2B40652CF4F4918CB2E1DD3DCA4F124_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mE1A266B2F74AAD4E082FADBC641778D8EA1E0B15 (KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017* __this, Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017*, Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, const RuntimeMethod*))KeyCollection__ctor_mE1A266B2F74AAD4E082FADBC641778D8EA1E0B15_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7BE5C072DBF1A541BB09E8B08EA48E19121D9B06 (ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7* __this, Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7*, Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, const RuntimeMethod*))ValueCollection__ctor_m7BE5C072DBF1A541BB09E8B08EA48E19121D9B06_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m43326D2EB053E963ED92D8C6D399EBE07F40D3AB (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, const RuntimeMethod*))Dictionary_2_FindEntry_m43326D2EB053E963ED92D8C6D399EBE07F40D3AB_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mB750361F76BEE947B6FA98DBA5FAD93C8F8158C3 (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mB750361F76BEE947B6FA98DBA5FAD93C8F8158C3_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m2CB80734B5E1AEA45006684CB6120D1ECE72BECB (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, const RuntimeMethod*))Dictionary_2_Remove_m2CB80734B5E1AEA45006684CB6120D1ECE72BECB_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m0D68D906B99741108251B115B731FA87AFEE1D0F (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, const RuntimeMethod*))Dictionary_2_get_Count_m0D68D906B99741108251B115B731FA87AFEE1D0F_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mBC6F660255DD7D57537E098DD71D7A85C5B3E5CD (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mBC6F660255DD7D57537E098DD71D7A85C5B3E5CD_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m52B696EEF21CB736E0B69B01D7FAC76141B5F2C9 (Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C* __this, Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C*, Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, int32_t, const RuntimeMethod*))Enumerator__ctor_m52B696EEF21CB736E0B69B01D7FAC76141B5F2C9_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m3D8F429BA29513488C41855E1659D2D2437CA4F1 (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m3D8F429BA29513488C41855E1659D2D2437CA4F1_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m5D7273AA2CFA4347EC465FC7356C1EAC8D356C4E (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, const RuntimeMethod*))Dictionary_2_Resize_m5D7273AA2CFA4347EC465FC7356C1EAC8D356C4E_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m068C5291193DA02184C462177ED62DD2495E04AA (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m068C5291193DA02184C462177ED62DD2495E04AA_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_set_Item_mFF5C0D752009A003E7BCC84B3487D14270633798 (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_mFF5C0D752009A003E7BCC84B3487D14270633798_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
inline EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882_gshared)(method);
}
inline EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* EqualityComparer_1_CreateComparer_m4FD1F125CE1BDA84D7912A087FFB323A35365830 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4FD1F125CE1BDA84D7912A087FFB323A35365830_gshared)(method);
}
inline EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* EqualityComparer_1_CreateComparer_mE834B113416D4F8165FE20ABC8D3BF276F5AC62D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE834B113416D4F8165FE20ABC8D3BF276F5AC62D_gshared)(method);
}
inline EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* EqualityComparer_1_CreateComparer_mAE770D27EEFD0758D138BA7D18C27B82C8AD540F (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mAE770D27EEFD0758D138BA7D18C27B82C8AD540F_gshared)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE0D8DA12CF23A551AB8FFAF270B28CEE478AC96_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m01987A7FAA2D4282F85A820E3511C16851B2A7A1(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2CE67BFE2DCB0A7A892A488D82B56F7F5B910386_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m01987A7FAA2D4282F85A820E3511C16851B2A7A1(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE2D0B9733582CA5ADCA79A486C758416B6515A55_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m01987A7FAA2D4282F85A820E3511C16851B2A7A1(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m01987A7FAA2D4282F85A820E3511C16851B2A7A1_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD52511C940E9E7E706CFFAEBF758C7AB86292C1D(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE703318D424382BEB4DC5837707C5D9E38C9EB26_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m06AA12A53F023126835E13C0A57E9A87B99936C3(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m06AA12A53F023126835E13C0A57E9A87B99936C3_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* G_B2_0 = NULL;
	Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m01987A7FAA2D4282F85A820E3511C16851B2A7A1(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* L_9 = ((Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m7F1CCDA8EF1CBA108AEB3ABE946D2A8D52F040A6(__this, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_28);
				V_4 = L_29;
				Il2CppSharedGenericObject* L_30;
				L_30 = KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_31;
				L_31 = KeyValuePair_2_get_Value_mD5208C429B44260B9708A5C3D6C5875BBACC3E58_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m7F1CCDA8EF1CBA108AEB3ABE946D2A8D52F040A6(__this, L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC876F6F8388C818F26327D3D53E04C52E9A648EF_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m26A1D1AEE000BE602E9ED88292E05120DDE31F57_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4* Dictionary_2_get_Keys_mF395F08358F9A5FEB91AE42E136687FD553C2E23_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4* L_1 = (KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m663705F9C6DE6DD9EBEC42D87C2C0AB03B1B791A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tF75213D2930CA2743476D1EB4F37074E47402CD4* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5* Dictionary_2_get_Values_m553009D05401470CCEF32506A45F14AAD9386E80_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5* L_1 = (ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
		ValueCollection__ctor_mB80226231BF47F52300C1EAF6A01D205EC089F75(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t94CCC6CEAF63779214B26B297E785453074D18A5* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 Dictionary_2_get_Item_m97ED00260D84EC0914C23360FCF22A9F4F54FD33_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m42DB30D765486B08A5B0EB768480AEA814A68E0C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7((RuntimeObject*)L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA212CFFFF13E4C65BB02C31812269DE204CA3593_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m2D451F790A9E7218F35852D5217BF0642922E2DE(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7F1CCDA8EF1CBA108AEB3ABE946D2A8D52F040A6_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m2D451F790A9E7218F35852D5217BF0642922E2DE(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m94E4C7962DA5068854067C2F7401C6116AE3F193_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1;
		L_1 = KeyValuePair_2_get_Value_mD5208C429B44260B9708A5C3D6C5875BBACC3E58_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m7F1CCDA8EF1CBA108AEB3ABE946D2A8D52F040A6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mC23898B6956DA717D4F877F1D84439EBC7599778_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m42DB30D765486B08A5B0EB768480AEA814A68E0C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_3;
		L_3 = EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7;
		L_7 = KeyValuePair_2_get_Value_mD5208C429B44260B9708A5C3D6C5875BBACC3E58_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3DEE8E16EF92333B43CAC1DDF1074A2658B42EB2_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m42DB30D765486B08A5B0EB768480AEA814A68E0C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_3;
		L_3 = EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7;
		L_7 = KeyValuePair_2_get_Value_mD5208C429B44260B9708A5C3D6C5875BBACC3E58_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppSharedGenericObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m7C34BA9E731EE76B9463BC4EDD919FF62A3971E1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mC12D7623BC7FB78A8278BD8EE94FD7909ABBBC1A_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0041:
	{
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m48A1217A4CF2289B3BFC536786BA719E56E942D7_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m42DB30D765486B08A5B0EB768480AEA814A68E0C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m28C25637EC348B2701D8317B1A522FD547F9C8B0_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* V_0 = NULL;
	int32_t V_1 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_6;
		L_6 = EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3A3E133FCA8A6431DA771BFC1E8F661CB8807D5E_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m26A1D1AEE000BE602E9ED88292E05120DDE31F57(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m18517B6786A4849C4A5674A4096B65ADDBCC4FEA((&L_22), L_18, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70 Dictionary_2_GetEnumerator_mE3BD778688BA4B62987606BE6DAB68AA08BFC94A_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC1DF5EA89DEFEA35EE9DB5D3D8CCED870ADE60F1((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mD96664485D8199EB407CEF14560DA150BCBF54C3_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC1DF5EA89DEFEA35EE9DB5D3D8CCED870ADE60F1((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m2946716E003318D15B9D9D2889C4201CCB5D205F_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m26A1D1AEE000BE602E9ED88292E05120DDE31F57(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_15 = (KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9*)(KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_16 = V_0;
		Dictionary_2_CopyTo_m3A3E133FCA8A6431DA771BFC1E8F661CB8807D5E(__this, L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m42DB30D765486B08A5B0EB768480AEA814A68E0C_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_6;
		if (!L_13)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Il2CppSharedGenericObject* L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_34;
		L_34 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		if ((!(((uint32_t)L_35) < ((uint32_t)L_37))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_38 = V_2;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___hashCode;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_42 = V_7;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Il2CppSharedGenericObject* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___key;
		Il2CppSharedGenericObject* L_46 = ___0_key;
		NullCheck(L_42);
		bool L_47;
		L_47 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_42, L_45, L_46);
		if (L_47)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_0 = L_50;
		int32_t L_51 = V_3;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_55 = V_4;
		Il2CppSharedGenericObject* L_56 = ___0_key;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_55, L_56);
		V_8 = ((int32_t)(L_57&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		NullCheck(L_58);
		int32_t L_62 = ((int32_t)(L_59%L_61));
		int32_t L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_012b:
	{
		int32_t L_64 = V_0;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_65)->max_length),NULL));
		if ((!(((uint32_t)L_64) < ((uint32_t)L_66))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_67 = V_2;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___hashCode;
		int32_t L_70 = V_8;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_71 = V_4;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		Il2CppSharedGenericObject* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___key;
		Il2CppSharedGenericObject* L_75 = ___0_key;
		NullCheck(L_71);
		bool L_76;
		L_76 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_71, L_74, L_75);
		if (L_76)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_77 = V_2;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___next;
		V_0 = L_79;
		int32_t L_80 = V_3;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_84 = V_0;
		return L_84;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD52511C940E9E7E706CFFAEBF758C7AB86292C1D_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_5 = (EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204*)(EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m2D451F790A9E7218F35852D5217BF0642922E2DE_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* V_10 = NULL;
	Il2CppSharedGenericObject* V_11 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD52511C940E9E7E706CFFAEBF758C7AB86292C1D(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppSharedGenericObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_18 = V_11;
		if (!L_18)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_26;
		L_26 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Il2CppSharedGenericObject* L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value))->____value), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppSharedGenericObject* L_37 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_45;
		L_45 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		if ((!(((uint32_t)L_46) < ((uint32_t)L_48))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___hashCode;
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_53 = V_12;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Il2CppSharedGenericObject* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___key;
		Il2CppSharedGenericObject* L_57 = ___0_key;
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_53, L_56, L_57);
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_62 = ___1_value;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value = L_62;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value))->____value), (void*)NULL);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Il2CppSharedGenericObject* L_64 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((!(((uint32_t)L_72) < ((uint32_t)L_74))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_75 = V_0;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___hashCode;
		int32_t L_78 = V_2;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_79 = V_1;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppSharedGenericObject* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___key;
		Il2CppSharedGenericObject* L_83 = ___0_key;
		NullCheck(L_79);
		bool L_84;
		L_84 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_79, L_82, L_83);
		if (!L_84)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_85 = ___2_behavior;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_86 = V_0;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_88 = ___1_value;
		((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value = L_88;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value))->____value), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_89 = ___2_behavior;
		if ((!(((uint32_t)L_89) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppSharedGenericObject* L_90 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_95)->max_length),NULL));
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = __this->____freeCount;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = __this->____freeList;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = __this->____count;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_104))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m89A4D68C2634C0129E2AE1E7F4390A5EBB91CF69(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_105 = V_13;
		V_8 = L_105;
		int32_t L_106 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_106, 1));
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_107 = __this->____entries;
		V_0 = L_107;
	}

IL_0250:
	{
		bool L_108 = V_6;
		if (L_108)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_109 = V_4;
		G_B51_0 = L_109;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		int32_t L_111 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____buckets;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		NullCheck(L_110);
		G_B51_0 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_111%L_113)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_114 = V_0;
		int32_t L_115 = V_8;
		NullCheck(L_114);
		V_10 = ((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_115)));
		bool L_116 = V_7;
		if (!L_116)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_117 = V_10;
		int32_t L_118 = L_117->___next;
		__this->____freeList = L_118;
	}

IL_028a:
	{
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_119 = V_10;
		int32_t L_120 = V_2;
		L_119->___hashCode = L_120;
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_121 = V_10;
		int32_t* L_122 = V_9;
		int32_t L_123 = il2cpp_codegen_ldind<int32_t, int32_t>(L_122);
		L_121->___next = ((int32_t)il2cpp_codegen_subtract(L_123, 1));
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_124 = V_10;
		Il2CppSharedGenericObject* L_125 = ___0_key;
		L_124->___key = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___key), (void*)L_125);
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_126 = V_10;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_127 = ___1_value;
		L_126->___value = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_126->___value))->____value), (void*)NULL);
		int32_t* L_128 = V_9;
		int32_t L_129 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_128, (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mAF9962D367860A6164AE7501F4CB9C5F6C808364_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mD52511C940E9E7E706CFFAEBF758C7AB86292C1D(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_27;
		L_27 = KeyValuePair_2_get_Value_mD5208C429B44260B9708A5C3D6C5875BBACC3E58_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m7F1CCDA8EF1CBA108AEB3ABE946D2A8D52F040A6(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m89A4D68C2634C0129E2AE1E7F4390A5EBB91CF69_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m3BA0ED0B1E8DF266353993E58B1E4A534DB7A427(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3BA0ED0B1E8DF266353993E58B1E4A534DB7A427_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_3 = (EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204*)(EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_5 = __this->____entries;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(Il2CppSharedGenericObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppSharedGenericObject** L_17 = (Il2CppSharedGenericObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((RuntimeObject*)(*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7C34BA9E731EE76B9463BC4EDD919FF62A3971E1_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_00ff:
	{
	}
	{
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_44 = V_4;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_45 = (ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_0142:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5DF11556B4A00EE5A7634EB37254739C009AE1DB_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_39 = ___1_value;
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_40 = V_4;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_41 = L_40->___value;
		*(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)&(((ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)L_39)->____value), (void*)NULL);
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_010c:
	{
	}
	{
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_47 = V_4;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_48 = (ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)(&L_47->___value);
		il2cpp_codegen_initobj(L_48, sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}

IL_0120:
	{
		int32_t L_49 = V_3;
		__this->____freeList = L_49;
		int32_t L_50 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_51, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_52 = V_3;
		V_2 = L_52;
		Entry_tBCB2426D89579F1E315F5C79440576665BBE166A* L_53 = V_4;
		int32_t L_54 = L_53->___next;
		V_3 = L_54;
	}

IL_014f:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_56 = ___1_value;
		il2cpp_codegen_initobj(L_56, sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m34FC36BF0EFBAE968D349A894E8A3BF4171D1400_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m42DB30D765486B08A5B0EB768480AEA814A68E0C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_3 = ___1_value;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)L_3)->____value), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6B0A11B47CBECD23B7567CC2937E9DDBEB209CD2_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, Il2CppSharedGenericObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m2D451F790A9E7218F35852D5217BF0642922E2DE(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mEDF99DB8A029542F2D21635BDE01AF91954DC03C_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mFA6D1A63DD4738A0C56E22F14A5FA424769CBCB4_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m3A3E133FCA8A6431DA771BFC1E8F661CB8807D5E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m0F6DC61DD537897D072B2531B4B8E7AA2747F674_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m26A1D1AEE000BE602E9ED88292E05120DDE31F57(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2D0B81A97A266E62F13D3ED60C5D9971439A18E9* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m3A3E133FCA8A6431DA771BFC1E8F661CB8807D5E(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), (RuntimeObject*)L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Il2CppSharedGenericObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m18517B6786A4849C4A5674A4096B65ADDBCC4FEA((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m94C0D9BD8C5E8D6960EB71073D76D6FE6BCCC408_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC1DF5EA89DEFEA35EE9DB5D3D8CCED870ADE60F1((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m4C38468056D49F2F53EC8455639AE71AA17D94C7_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tE8CCA50BDFC7027BCBDE12CD03DB851AE2175204* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mD52511C940E9E7E706CFFAEBF758C7AB86292C1D(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m3BA0ED0B1E8DF266353993E58B1E4A534DB7A427(__this, L_12, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m81A46126E0D667AE882AEA9C2F5B076D048FF2F3_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m5EC9B768CEC1BBF5112093FB67F2A531FB13466C_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mA212CFFFF13E4C65BB02C31812269DE204CA3593(__this, L_3, ((*(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15)))), il2cpp_rgctx_method(method->klass->rgctx_data, 57));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 58)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 59)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2D72CA0514E05D8B59157A26B409C647F920F442_gshared (Dictionary_2_tB3580A03503773271E2B82A850BD0E897FAAF6F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC1DF5EA89DEFEA35EE9DB5D3D8CCED870ADE60F1((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tFA37A4F1E2560C7C96D24EF56F6E11BFC6249B70 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mE6AE1CD04760EE6EE5D5384755B1C8C57162D955(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A6870E6A25154D2B0F1B5B6CEFBC33BDBC98DED_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mE6AE1CD04760EE6EE5D5384755B1C8C57162D955(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m842509F88C0EEF49ACBE61C1C9D84D1348CA27F8_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mE6AE1CD04760EE6EE5D5384755B1C8C57162D955(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE6AE1CD04760EE6EE5D5384755B1C8C57162D955_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDE9CD6DB1836475602D3DC058A6FD79F7324D21A(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD28B551D45DDF8C90C5595A1F111E2F2AA231FEE_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mF885C7DA0F0A9A615A09DF8AF73EC9D7BFB630C2(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF885C7DA0F0A9A615A09DF8AF73EC9D7BFB630C2_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* G_B2_0 = NULL;
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mE6AE1CD04760EE6EE5D5384755B1C8C57162D955(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* L_9 = ((Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1(__this, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_28);
				V_4 = L_29;
				Il2CppSharedGenericObject* L_30;
				L_30 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1(__this, L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDFA6B4E344AB3F39A4BC41A6C95A2E85374340E9_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1* Dictionary_2_get_Keys_m4C59000CBF981B0244D3FF4E0795B14815E9D1EC_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1* L_1 = (KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m48712EBFF4B8C179C7A6BB41F56CE5EFB95AFF29(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t01E910B589B2FCCEE43E8ACE96FCB486754C1EB1* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* Dictionary_2_get_Values_m8E3BE68654ED4904A823A5EC8071AAABB4FAFEF9_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* L_1 = (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m457973597020CEAD75DCE03485F7B83BA187A0FE(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_mD259039B129098644F0E324CADD1070CB7638E1E_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mA7648FED8740ED347100540F907E67CA7E9B0D72(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7((RuntimeObject*)L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m970F39957AA13F57797915183F66166CF35746AD_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m79BC440CD4B1417967967CCBE1E70606BEEC9456(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m79BC440CD4B1417967967CCBE1E70606BEEC9456(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m086098C1BCAA7CB9A5BA79A49850211ED058B20A_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD8439211D73751FB397850FAC77244CAA58F8FC7_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mA7648FED8740ED347100540F907E67CA7E9B0D72(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA30240CDC20F7A31D3B01ED0CABC19A93B169FEF_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mA7648FED8740ED347100540F907E67CA7E9B0D72(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppSharedGenericObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m884D981DD9288E9F10D52CCF4F97D62691C58B00(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mB13E694DE8AE664769BCCCF6E07B565574A9BB95_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0041:
	{
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2719AC789D5D25B4A08674C479D2F2FA27319C77_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mA7648FED8740ED347100540F907E67CA7E9B0D72(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mA82F8C1809053012A56706E5F07BB1163DA96315_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m433B28CC864C833604737F6870CA23F75E9DD90A_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED((&L_22), L_18, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD Dictionary_2_GetEnumerator_m6936E0CC980D654F028D72ECA7D9E3021E7B2DD9_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06045B6447B24219AA9B9CD3F6DFE611C5BA2CDF((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4D3E8E9AEED28ED776D7EFF300D93B0333A2B39B_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06045B6447B24219AA9B9CD3F6DFE611C5BA2CDF((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mB20B69E7DEA01AE8310474C2D0E28054306BF6C2_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_15 = (KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)(KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_16 = V_0;
		Dictionary_2_CopyTo_m433B28CC864C833604737F6870CA23F75E9DD90A(__this, L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mA7648FED8740ED347100540F907E67CA7E9B0D72_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_6;
		if (!L_13)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Il2CppSharedGenericObject* L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_34;
		L_34 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		if ((!(((uint32_t)L_35) < ((uint32_t)L_37))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_38 = V_2;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___hashCode;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_42 = V_7;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Il2CppSharedGenericObject* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___key;
		Il2CppSharedGenericObject* L_46 = ___0_key;
		NullCheck(L_42);
		bool L_47;
		L_47 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_42, L_45, L_46);
		if (L_47)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_0 = L_50;
		int32_t L_51 = V_3;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_55 = V_4;
		Il2CppSharedGenericObject* L_56 = ___0_key;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_55, L_56);
		V_8 = ((int32_t)(L_57&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		NullCheck(L_58);
		int32_t L_62 = ((int32_t)(L_59%L_61));
		int32_t L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_012b:
	{
		int32_t L_64 = V_0;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_65)->max_length),NULL));
		if ((!(((uint32_t)L_64) < ((uint32_t)L_66))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_67 = V_2;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___hashCode;
		int32_t L_70 = V_8;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_71 = V_4;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		Il2CppSharedGenericObject* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___key;
		Il2CppSharedGenericObject* L_75 = ___0_key;
		NullCheck(L_71);
		bool L_76;
		L_76 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_71, L_74, L_75);
		if (L_76)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_77 = V_2;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___next;
		V_0 = L_79;
		int32_t L_80 = V_3;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_84 = V_0;
		return L_84;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDE9CD6DB1836475602D3DC058A6FD79F7324D21A_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_5 = (EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E*)(EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m79BC440CD4B1417967967CCBE1E70606BEEC9456_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* V_10 = NULL;
	Il2CppSharedGenericObject* V_11 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDE9CD6DB1836475602D3DC058A6FD79F7324D21A(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppSharedGenericObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_18 = V_11;
		if (!L_18)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_26;
		L_26 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Il2CppSharedGenericObject* L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppSharedGenericObject* L_37 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_45;
		L_45 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		if ((!(((uint32_t)L_46) < ((uint32_t)L_48))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___hashCode;
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_53 = V_12;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Il2CppSharedGenericObject* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___key;
		Il2CppSharedGenericObject* L_57 = ___0_key;
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_53, L_56, L_57);
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		Il2CppSharedGenericObject* L_62 = ___1_value;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value), (void*)L_62);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Il2CppSharedGenericObject* L_64 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((!(((uint32_t)L_72) < ((uint32_t)L_74))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_75 = V_0;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___hashCode;
		int32_t L_78 = V_2;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_79 = V_1;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppSharedGenericObject* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___key;
		Il2CppSharedGenericObject* L_83 = ___0_key;
		NullCheck(L_79);
		bool L_84;
		L_84 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_79, L_82, L_83);
		if (!L_84)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_85 = ___2_behavior;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_86 = V_0;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		Il2CppSharedGenericObject* L_88 = ___1_value;
		((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value), (void*)L_88);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_89 = ___2_behavior;
		if ((!(((uint32_t)L_89) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppSharedGenericObject* L_90 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_95)->max_length),NULL));
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = __this->____freeCount;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = __this->____freeList;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = __this->____count;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_104))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m46E847DCF36B7A51C0624C20F3D1B668EC910ACD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_105 = V_13;
		V_8 = L_105;
		int32_t L_106 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_106, 1));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_107 = __this->____entries;
		V_0 = L_107;
	}

IL_0250:
	{
		bool L_108 = V_6;
		if (L_108)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_109 = V_4;
		G_B51_0 = L_109;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		int32_t L_111 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____buckets;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		NullCheck(L_110);
		G_B51_0 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_111%L_113)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_114 = V_0;
		int32_t L_115 = V_8;
		NullCheck(L_114);
		V_10 = ((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_115)));
		bool L_116 = V_7;
		if (!L_116)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_117 = V_10;
		int32_t L_118 = L_117->___next;
		__this->____freeList = L_118;
	}

IL_028a:
	{
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_119 = V_10;
		int32_t L_120 = V_2;
		L_119->___hashCode = L_120;
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_121 = V_10;
		int32_t* L_122 = V_9;
		int32_t L_123 = il2cpp_codegen_ldind<int32_t, int32_t>(L_122);
		L_121->___next = ((int32_t)il2cpp_codegen_subtract(L_123, 1));
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_124 = V_10;
		Il2CppSharedGenericObject* L_125 = ___0_key;
		L_124->___key = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___key), (void*)L_125);
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_126 = V_10;
		Il2CppSharedGenericObject* L_127 = ___1_value;
		L_126->___value = L_127;
		Il2CppCodeGenWriteBarrier((void**)(&L_126->___value), (void*)L_127);
		int32_t* L_128 = V_9;
		int32_t L_129 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_128, (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m5DD6B32647150F313BCE78C0F520521C0BE15DA3_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mDE9CD6DB1836475602D3DC058A6FD79F7324D21A(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m46E847DCF36B7A51C0624C20F3D1B668EC910ACD_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mF8146CB4E586FDFEDD72E84F6C851161271B8757(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF8146CB4E586FDFEDD72E84F6C851161271B8757_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_3 = (EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E*)(EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_5 = __this->____entries;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(Il2CppSharedGenericObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppSharedGenericObject** L_17 = (Il2CppSharedGenericObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((RuntimeObject*)(*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m884D981DD9288E9F10D52CCF4F97D62691C58B00_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_00ff:
	{
	}
	{
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_44 = V_4;
		Il2CppSharedGenericObject** L_45 = (Il2CppSharedGenericObject**)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_0142:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m80B104082C186213183914E776232757CD91D34C_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_010c:
	{
	}
	{
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_47 = V_4;
		Il2CppSharedGenericObject** L_48 = (Il2CppSharedGenericObject**)(&L_47->___value);
		il2cpp_codegen_initobj(L_48, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_49 = V_3;
		__this->____freeList = L_49;
		int32_t L_50 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_51, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_52 = V_3;
		V_2 = L_52;
		Entry_t643316D9FBC27B27A76D248A2815E973EA3B1204* L_53 = V_4;
		int32_t L_54 = L_53->___next;
		V_3 = L_54;
	}

IL_014f:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_56 = ___1_value;
		il2cpp_codegen_initobj(L_56, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mEB1F53213D9DBB5055E1D48D152CB9B8A5A10437_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mA7648FED8740ED347100540F907E67CA7E9B0D72(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF2DBAFE424DAB54F93DCAE722E5BB109F4973D47_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m79BC440CD4B1417967967CCBE1E70606BEEC9456(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9A582FFC97E5AA10AA9FF9EAD9447C3E141FCF9B_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mC87E983144E11CBBCED57313FADB799CCEA938DC_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m433B28CC864C833604737F6870CA23F75E9DD90A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m99C32C9E7B366D36F11BFCDD566DF57E3DF8F30C_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m79ACFAF5B53C243E73EA2274B53B11CFA149C876(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m433B28CC864C833604737F6870CA23F75E9DD90A(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		Il2CppSharedGenericObject* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_31;
		memset((&L_31), 0, sizeof(L_31));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_31), (RuntimeObject*)L_27, (RuntimeObject*)L_30, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_31);
	}

IL_00b5:
	{
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b9:
	{
		int32_t L_33 = V_3;
		int32_t L_34 = __this->____count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_35 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_35, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = V_4;
		if (L_36)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_37 = __this->____count;
			V_5 = L_37;
			EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_38 = __this->____entries;
			V_6 = L_38;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_39 = V_6;
			int32_t L_40 = V_7;
			NullCheck(L_39);
			int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___hashCode;
			if ((((int32_t)L_41) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_4;
			int32_t L_43 = ___1_index;
			int32_t L_44 = L_43;
			___1_index = ((int32_t)il2cpp_codegen_add(L_44, 1));
			EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_45 = V_6;
			int32_t L_46 = V_7;
			NullCheck(L_45);
			Il2CppSharedGenericObject* L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___key;
			EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_48 = V_6;
			int32_t L_49 = V_7;
			NullCheck(L_48);
			Il2CppSharedGenericObject* L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value;
			KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_51;
			memset((&L_51), 0, sizeof(L_51));
			KeyValuePair_2__ctor_mB2C82D7A225B9949D85AD00F49A2506C80C3EFED((&L_51), L_47, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_52 = L_51;
			RuntimeObject* L_53 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_52);
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_53);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (RuntimeObject*)L_53);
		}

IL_012a_1:
		{
			int32_t L_54 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		}

IL_0130_1:
		{
			int32_t L_55 = V_7;
			int32_t L_56 = V_5;
			if ((((int32_t)L_55) < ((int32_t)L_56)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_57 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m546867FA67214FC472182BC5286888047D7989F0_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06045B6447B24219AA9B9CD3F6DFE611C5BA2CDF((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mAC7CE504004E1FF7169ADAEC510CF1EE30470368_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t6FB35BEE9735474391139F6B5FAE8F37E389DC7E* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mDE9CD6DB1836475602D3DC058A6FD79F7324D21A(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_mF8146CB4E586FDFEDD72E84F6C851161271B8757(__this, L_12, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8DF9314EFD5861B8245D387EFD6C5E5C3CD8A4E2_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m941A6AD4E655B8C56BDB8EFFAFD4AC343C34889C_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m970F39957AA13F57797915183F66166CF35746AD(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 57));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 58)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 59)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF1BA14DE04EC883A32C76D8EECCD7D0E03321A4C_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06045B6447B24219AA9B9CD3F6DFE611C5BA2CDF((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4F560DCFE72AA089536786806E3273B6BCB935F6_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mFAC2FDE1040A734DA2C0B7BE78D9DBFE83FDB0F2(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m39FBEBDF18781E02808FFFB09F6641979B1CF7F6_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mFAC2FDE1040A734DA2C0B7BE78D9DBFE83FDB0F2(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m966783615AD5C3F514FDF5AF6B742ABC0DE33BD1_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mFAC2FDE1040A734DA2C0B7BE78D9DBFE83FDB0F2(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFAC2FDE1040A734DA2C0B7BE78D9DBFE83FDB0F2_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA2651012CFB312A45D271A12D5C1080AE9D9EBDB(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mACCF976680F3D6B973B21E63B0B8683403B8821C_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mCD7AEAE24E8EDFE3D9BB6F23E7B65DC4CAA1C66D(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCD7AEAE24E8EDFE3D9BB6F23E7B65DC4CAA1C66D_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* G_B2_0 = NULL;
	Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mFAC2FDE1040A734DA2C0B7BE78D9DBFE83FDB0F2(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* L_9 = ((Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_mEA4B8AD6C1120287063DC20D9DBEBC7E36537C6A(__this, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_28);
				V_4 = L_29;
				Il2CppSharedGenericObject* L_30;
				L_30 = KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_31;
				L_31 = KeyValuePair_2_get_Value_m0BC4A3261F4BB68DCF9CA3904493670DA6F654B4_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mEA4B8AD6C1120287063DC20D9DBEBC7E36537C6A(__this, L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8ED452B563FCC6C3593521067BD3B31ABD903718_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD760316682BC3E20BDD7151BCEC7A37488FC2710_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049* Dictionary_2_get_Keys_mB168A81CE810BCB13E9D36B1FD58C71B9FBEA5F3_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049* L_1 = (KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m0EA3C70703F456DA98CBB5CDD0101DC8FB65E563(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tC2DB6874AB793FBD5A2607955B7CA87785C62049* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70* Dictionary_2_get_Values_mA48F139B9D66D35D05F96965250A7109756842B8_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70* L_1 = (ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m69EE3BCE72DC4A1263AC6034FC71D135F8ACB5A2(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF1C81A752E459A1A44314724C9016951FD526C70* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 Dictionary_2_get_Item_m497CB96A1B583F8BCFA2CF588BE0C07D37DA658F_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m78AE9A2EA804B928E8A0807803303E60FD89629E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7((RuntimeObject*)L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5));
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C99839EB7A8A34F7AC6B7EAB141E6311D9AC46E_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA8D954972EE880C2862E7ACD2998F6A9FD70DC84(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA4B8AD6C1120287063DC20D9DBEBC7E36537C6A_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA8D954972EE880C2862E7ACD2998F6A9FD70DC84(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m497169CB0673D6A168E481DEA4ACE8F8A2650CA1_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_1;
		L_1 = KeyValuePair_2_get_Value_m0BC4A3261F4BB68DCF9CA3904493670DA6F654B4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mEA4B8AD6C1120287063DC20D9DBEBC7E36537C6A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m5E7632022B19665D67F6E0EAF49ED11227F36B07_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m78AE9A2EA804B928E8A0807803303E60FD89629E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* L_3;
		L_3 = EqualityComparer_1_get_Default_m4FC95DF57BE97850AC59AA42A75D5DC92D7D1ADD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_7;
		L_7 = KeyValuePair_2_get_Value_m0BC4A3261F4BB68DCF9CA3904493670DA6F654B4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10A4D5F41646DC3BE56293450CF400F2DACD81FE_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m78AE9A2EA804B928E8A0807803303E60FD89629E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* L_3;
		L_3 = EqualityComparer_1_get_Default_m4FC95DF57BE97850AC59AA42A75D5DC92D7D1ADD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_7;
		L_7 = KeyValuePair_2_get_Value_m0BC4A3261F4BB68DCF9CA3904493670DA6F654B4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppSharedGenericObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m67097E35229A53945DA1105D6EEE213CF6F14B0B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m612A8CE14119CC87BE6E7FC5F2E64A0CAE0AB25B_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0041:
	{
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m05E1F67950A70D22882CC68C6E2B429A989DF236_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m78AE9A2EA804B928E8A0807803303E60FD89629E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mE5D9F47C2366BDA0C9FF9317F4D9C9D5B9D6ED52_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* V_0 = NULL;
	int32_t V_1 = 0;
	BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* L_6;
		L_6 = EqualityComparer_1_get_Default_m4FC95DF57BE97850AC59AA42A75D5DC92D7D1ADD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m82E2AC9AD3F7F68756373934BA3CE60CBEC81D61_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mD760316682BC3E20BDD7151BCEC7A37488FC2710(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mDD84375E7E49E23AAD066AD90D843E96381968B9((&L_22), L_18, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C Dictionary_2_GetEnumerator_mCB10F3D082A2755B4C34836737EB503B1AD38BD4_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m337E18368717BA04EB4DDDED764A7BC8C7CD38F3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m907B486EE16FC31EAEA79BC6BAD3784724C4A33B_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m337E18368717BA04EB4DDDED764A7BC8C7CD38F3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m9F67C7F96E4F74C7FB2347D1195D2ECB74C3B9DD_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mD760316682BC3E20BDD7151BCEC7A37488FC2710(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_15 = (KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B*)(KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_16 = V_0;
		Dictionary_2_CopyTo_m82E2AC9AD3F7F68756373934BA3CE60CBEC81D61(__this, L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m78AE9A2EA804B928E8A0807803303E60FD89629E_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_6;
		if (!L_13)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Il2CppSharedGenericObject* L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_34;
		L_34 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		if ((!(((uint32_t)L_35) < ((uint32_t)L_37))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_38 = V_2;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___hashCode;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_42 = V_7;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Il2CppSharedGenericObject* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___key;
		Il2CppSharedGenericObject* L_46 = ___0_key;
		NullCheck(L_42);
		bool L_47;
		L_47 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_42, L_45, L_46);
		if (L_47)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_0 = L_50;
		int32_t L_51 = V_3;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_55 = V_4;
		Il2CppSharedGenericObject* L_56 = ___0_key;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_55, L_56);
		V_8 = ((int32_t)(L_57&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		NullCheck(L_58);
		int32_t L_62 = ((int32_t)(L_59%L_61));
		int32_t L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_012b:
	{
		int32_t L_64 = V_0;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_65)->max_length),NULL));
		if ((!(((uint32_t)L_64) < ((uint32_t)L_66))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_67 = V_2;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___hashCode;
		int32_t L_70 = V_8;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_71 = V_4;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		Il2CppSharedGenericObject* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___key;
		Il2CppSharedGenericObject* L_75 = ___0_key;
		NullCheck(L_71);
		bool L_76;
		L_76 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_71, L_74, L_75);
		if (L_76)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_77 = V_2;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___next;
		V_0 = L_79;
		int32_t L_80 = V_3;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_84 = V_0;
		return L_84;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA2651012CFB312A45D271A12D5C1080AE9D9EBDB_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_5 = (EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74*)(EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA8D954972EE880C2862E7ACD2998F6A9FD70DC84_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* V_10 = NULL;
	Il2CppSharedGenericObject* V_11 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA2651012CFB312A45D271A12D5C1080AE9D9EBDB(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppSharedGenericObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_18 = V_11;
		if (!L_18)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_26;
		L_26 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Il2CppSharedGenericObject* L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppSharedGenericObject* L_37 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_45;
		L_45 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		if ((!(((uint32_t)L_46) < ((uint32_t)L_48))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___hashCode;
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_53 = V_12;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Il2CppSharedGenericObject* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___key;
		Il2CppSharedGenericObject* L_57 = ___0_key;
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_53, L_56, L_57);
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_62 = ___1_value;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value = L_62;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Il2CppSharedGenericObject* L_64 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((!(((uint32_t)L_72) < ((uint32_t)L_74))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_75 = V_0;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___hashCode;
		int32_t L_78 = V_2;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_79 = V_1;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppSharedGenericObject* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___key;
		Il2CppSharedGenericObject* L_83 = ___0_key;
		NullCheck(L_79);
		bool L_84;
		L_84 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_79, L_82, L_83);
		if (!L_84)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_85 = ___2_behavior;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_86 = V_0;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_88 = ___1_value;
		((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value = L_88;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_89 = ___2_behavior;
		if ((!(((uint32_t)L_89) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppSharedGenericObject* L_90 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_95)->max_length),NULL));
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = __this->____freeCount;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = __this->____freeList;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = __this->____count;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_104))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m498762A08F3ED896F640CA2CE7B1B12EE264E69F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_105 = V_13;
		V_8 = L_105;
		int32_t L_106 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_106, 1));
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_107 = __this->____entries;
		V_0 = L_107;
	}

IL_0250:
	{
		bool L_108 = V_6;
		if (L_108)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_109 = V_4;
		G_B51_0 = L_109;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		int32_t L_111 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____buckets;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		NullCheck(L_110);
		G_B51_0 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_111%L_113)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_114 = V_0;
		int32_t L_115 = V_8;
		NullCheck(L_114);
		V_10 = ((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_115)));
		bool L_116 = V_7;
		if (!L_116)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_117 = V_10;
		int32_t L_118 = L_117->___next;
		__this->____freeList = L_118;
	}

IL_028a:
	{
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_119 = V_10;
		int32_t L_120 = V_2;
		L_119->___hashCode = L_120;
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_121 = V_10;
		int32_t* L_122 = V_9;
		int32_t L_123 = il2cpp_codegen_ldind<int32_t, int32_t>(L_122);
		L_121->___next = ((int32_t)il2cpp_codegen_subtract(L_123, 1));
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_124 = V_10;
		Il2CppSharedGenericObject* L_125 = ___0_key;
		L_124->___key = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___key), (void*)L_125);
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_126 = V_10;
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_127 = ___1_value;
		L_126->___value = L_127;
		int32_t* L_128 = V_9;
		int32_t L_129 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_128, (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m7F9490DEB101C39FAB8911F0FA647B8AA850F78E_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mA2651012CFB312A45D271A12D5C1080AE9D9EBDB(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_27;
		L_27 = KeyValuePair_2_get_Value_m0BC4A3261F4BB68DCF9CA3904493670DA6F654B4_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mEA4B8AD6C1120287063DC20D9DBEBC7E36537C6A(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m498762A08F3ED896F640CA2CE7B1B12EE264E69F_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m3DB9BF639A3E8CB2DFCBA86E6425130AB997E7F8(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3DB9BF639A3E8CB2DFCBA86E6425130AB997E7F8_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_3 = (EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74*)(EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_5 = __this->____entries;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(Il2CppSharedGenericObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppSharedGenericObject** L_17 = (Il2CppSharedGenericObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((RuntimeObject*)(*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m67097E35229A53945DA1105D6EEE213CF6F14B0B_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m93B1F46A57E4A122630D1B529143D761CA7A3C94_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5* L_39 = ___1_value;
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_40 = V_4;
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_41 = L_40->___value;
		*(BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5*)L_39 = L_41;
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tBBABC1D40D5892B91E8B86013E44BF5831C02454* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5* L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB50C2D9F3337A68AB78DA63129788B0BC8A771E8_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m78AE9A2EA804B928E8A0807803303E60FD89629E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5* L_3 = ___1_value;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m0DDE12731191371015C4CC0D4BC6A951F5B16B60_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA8D954972EE880C2862E7ACD2998F6A9FD70DC84(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9A8F0D0F150AFDBF13F492E5C693F41C6EAAF14D_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mDFBF84C9C41BFBF5935281AE04728125875AB42B_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m82E2AC9AD3F7F68756373934BA3CE60CBEC81D61(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mF583372A4499CA9943A6A30305F672A5F9D520B1_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mD760316682BC3E20BDD7151BCEC7A37488FC2710(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9AC303266EE232FD329D9E1405AB5AB587D0FD4B* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m82E2AC9AD3F7F68756373934BA3CE60CBEC81D61(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), (RuntimeObject*)L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Il2CppSharedGenericObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mDD84375E7E49E23AAD066AD90D843E96381968B9((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mA59718BA9189BC42A4944DD0DAC97AF48A147FC8_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m337E18368717BA04EB4DDDED764A7BC8C7CD38F3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m1BF1E3D69F73A06154C60DFD8AAC4CC2D695528B_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tCF9F082E7DFDBE0B9F05A7C049C271F3FAF26F74* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mA2651012CFB312A45D271A12D5C1080AE9D9EBDB(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m3DB9BF639A3E8CB2DFCBA86E6425130AB997E7F8(__this, L_12, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9AA0364808F27788CA25FC0A29D1AB6C2763CAB4_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m08DA7BF6C461C4B047DA82BD15E2B9978C6FBD62_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5_m415216260C5A1B093DCFDFE7D5F3AE0165D2764C(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m5C99839EB7A8A34F7AC6B7EAB141E6311D9AC46E(__this, L_3, ((*(BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15)))), il2cpp_rgctx_method(method->klass->rgctx_data, 57));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 58)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 59)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22EACFE8E7007E33D9DED2B9E58129E5058ACC30_gshared (Dictionary_2_t086901111890A76F09A12EB1B94316E1ED85AB03* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m337E18368717BA04EB4DDDED764A7BC8C7CD38F3((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t4114773D2D281CCAE5CDE88564A7595DD59D653C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m885EF87A023E378A72A332AB9CFDA1C1E5E97CB5_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m50B60193621703427D9BA11E52064B9BC483AB24(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m769E8107E1BCDE5FC59477FDCD8FCF935AF3301B_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m50B60193621703427D9BA11E52064B9BC483AB24(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m028DA5B406DA09645BDE158F0AC97E7987BA4FB5_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m50B60193621703427D9BA11E52064B9BC483AB24(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m50B60193621703427D9BA11E52064B9BC483AB24_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m57CE7B19FC96B7B0EB408B9D6938674A44853398(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7B1B172C04F64A2998866EC486C8B47C425CB7BF_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mCEA8CEA0E477EC1B8D31078D83A38395C8BF96AD(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCEA8CEA0E477EC1B8D31078D83A38395C8BF96AD_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* G_B2_0 = NULL;
	Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m50B60193621703427D9BA11E52064B9BC483AB24(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* L_9 = ((Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_mBC6D9DBA66C645613DE22030989268C54289BB59(__this, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_28);
				V_4 = L_29;
				Il2CppSharedGenericObject* L_30;
				L_30 = KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_31;
				L_31 = KeyValuePair_2_get_Value_m61F501C5D190CEC570C7D43736A202F772BF5874_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mBC6D9DBA66C645613DE22030989268C54289BB59(__this, L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB11F6B7B7048215185E2EE8C73ED187704705B38_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA11ED6C3105A4613CB98A8B7955ECD8971057712_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3* Dictionary_2_get_Keys_m9913F27E14431ED13C2238CDCCF278F92D46E856_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3* L_1 = (KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mE769FD700F7EC5CD61E08D19E23D62BFCB67A1ED(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tC8FC5FAA40C1A420581650F43F7847FC1A5B93B3* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C* Dictionary_2_get_Values_m40DA582E18B117BFF3984BF24F5839114F136B4D_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C* L_1 = (ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m2A26CD84A742B964A0422CA280A4B7353800272E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tA9F61FAF296D7A9B563D84366AB9BC4841AB996C* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D Dictionary_2_get_Item_m7EFC402F82207B87F3B2E4B4EB00BE53A8844C73_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3C38E5F44E8E6114AA800AA5563DD72AD3841EDC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7((RuntimeObject*)L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D));
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6FC062BFDC7DBE179E23A5DB34E046DB58B172CE_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mEA6C0416314DFBC7F2FA2E3685CA328060504286(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBC6D9DBA66C645613DE22030989268C54289BB59_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mEA6C0416314DFBC7F2FA2E3685CA328060504286(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1D70FC97953FFEABB3AF049426FA23DD5B0F34F2_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_1;
		L_1 = KeyValuePair_2_get_Value_m61F501C5D190CEC570C7D43736A202F772BF5874_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mBC6D9DBA66C645613DE22030989268C54289BB59(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mE76A4471CBFBBF5313832B038F4BA1AEEC5CE5C8_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3C38E5F44E8E6114AA800AA5563DD72AD3841EDC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* L_3;
		L_3 = EqualityComparer_1_get_Default_m06369B755187B1B3FD0C2B0853925A113199B68B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_7;
		L_7 = KeyValuePair_2_get_Value_m61F501C5D190CEC570C7D43736A202F772BF5874_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m303C7163EA4152A9A25C5BA7C397563D058B1185_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3C38E5F44E8E6114AA800AA5563DD72AD3841EDC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* L_3;
		L_3 = EqualityComparer_1_get_Default_m06369B755187B1B3FD0C2B0853925A113199B68B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_7;
		L_7 = KeyValuePair_2_get_Value_m61F501C5D190CEC570C7D43736A202F772BF5874_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppSharedGenericObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mA7BAA95EEC509C5C9901AC00F5C4E7DB0AAC6C21(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mA86D0480156755E1022BA1850B1AFDA3A2E68465_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0041:
	{
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5E7F253C0E6F16F9672362AD78F05C8DB4EBB144_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3C38E5F44E8E6114AA800AA5563DD72AD3841EDC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m3DD738BFE92C6987BAB4A8E0C5FDF39DA1B4A080_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* V_0 = NULL;
	int32_t V_1 = 0;
	BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* L_6;
		L_6 = EqualityComparer_1_get_Default_m06369B755187B1B3FD0C2B0853925A113199B68B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1E8A15B162E5923C97676A5867DBF07926826476_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mA11ED6C3105A4613CB98A8B7955ECD8971057712(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m40FED18A81796956773FF9DBB7585F3396F4CF9B((&L_22), L_18, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA Dictionary_2_GetEnumerator_mAF4CD9A8D67B0CBFB0EB0FDC3C4823D86733AE77_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE7A49C607E36E0BE23132EA970288F58C60BFEA9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEA55329DAEB04ACF6769CE8B12B19B015A452C5B_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE7A49C607E36E0BE23132EA970288F58C60BFEA9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m0E8278989F0F0FC21301A898EAA3944CF404D415_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mA11ED6C3105A4613CB98A8B7955ECD8971057712(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_15 = (KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B*)(KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_16 = V_0;
		Dictionary_2_CopyTo_m1E8A15B162E5923C97676A5867DBF07926826476(__this, L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m3C38E5F44E8E6114AA800AA5563DD72AD3841EDC_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_6;
		if (!L_13)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Il2CppSharedGenericObject* L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_34;
		L_34 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		if ((!(((uint32_t)L_35) < ((uint32_t)L_37))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_38 = V_2;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___hashCode;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_42 = V_7;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Il2CppSharedGenericObject* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___key;
		Il2CppSharedGenericObject* L_46 = ___0_key;
		NullCheck(L_42);
		bool L_47;
		L_47 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_42, L_45, L_46);
		if (L_47)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_0 = L_50;
		int32_t L_51 = V_3;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_55 = V_4;
		Il2CppSharedGenericObject* L_56 = ___0_key;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_55, L_56);
		V_8 = ((int32_t)(L_57&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		NullCheck(L_58);
		int32_t L_62 = ((int32_t)(L_59%L_61));
		int32_t L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_012b:
	{
		int32_t L_64 = V_0;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_65)->max_length),NULL));
		if ((!(((uint32_t)L_64) < ((uint32_t)L_66))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_67 = V_2;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___hashCode;
		int32_t L_70 = V_8;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_71 = V_4;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		Il2CppSharedGenericObject* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___key;
		Il2CppSharedGenericObject* L_75 = ___0_key;
		NullCheck(L_71);
		bool L_76;
		L_76 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_71, L_74, L_75);
		if (L_76)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_77 = V_2;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___next;
		V_0 = L_79;
		int32_t L_80 = V_3;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_84 = V_0;
		return L_84;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m57CE7B19FC96B7B0EB408B9D6938674A44853398_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_5 = (EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F*)(EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mEA6C0416314DFBC7F2FA2E3685CA328060504286_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* V_10 = NULL;
	Il2CppSharedGenericObject* V_11 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m57CE7B19FC96B7B0EB408B9D6938674A44853398(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppSharedGenericObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_18 = V_11;
		if (!L_18)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_26;
		L_26 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Il2CppSharedGenericObject* L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppSharedGenericObject* L_37 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_45;
		L_45 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		if ((!(((uint32_t)L_46) < ((uint32_t)L_48))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___hashCode;
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_53 = V_12;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Il2CppSharedGenericObject* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___key;
		Il2CppSharedGenericObject* L_57 = ___0_key;
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_53, L_56, L_57);
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_62 = ___1_value;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value = L_62;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Il2CppSharedGenericObject* L_64 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((!(((uint32_t)L_72) < ((uint32_t)L_74))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_75 = V_0;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___hashCode;
		int32_t L_78 = V_2;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_79 = V_1;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppSharedGenericObject* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___key;
		Il2CppSharedGenericObject* L_83 = ___0_key;
		NullCheck(L_79);
		bool L_84;
		L_84 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_79, L_82, L_83);
		if (!L_84)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_85 = ___2_behavior;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_86 = V_0;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_88 = ___1_value;
		((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value = L_88;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_89 = ___2_behavior;
		if ((!(((uint32_t)L_89) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppSharedGenericObject* L_90 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_95)->max_length),NULL));
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = __this->____freeCount;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = __this->____freeList;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = __this->____count;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_104))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mF5B87320B6255623273413181A6D35DE7F6288E8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_105 = V_13;
		V_8 = L_105;
		int32_t L_106 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_106, 1));
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_107 = __this->____entries;
		V_0 = L_107;
	}

IL_0250:
	{
		bool L_108 = V_6;
		if (L_108)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_109 = V_4;
		G_B51_0 = L_109;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		int32_t L_111 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____buckets;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		NullCheck(L_110);
		G_B51_0 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_111%L_113)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_114 = V_0;
		int32_t L_115 = V_8;
		NullCheck(L_114);
		V_10 = ((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_115)));
		bool L_116 = V_7;
		if (!L_116)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_117 = V_10;
		int32_t L_118 = L_117->___next;
		__this->____freeList = L_118;
	}

IL_028a:
	{
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_119 = V_10;
		int32_t L_120 = V_2;
		L_119->___hashCode = L_120;
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_121 = V_10;
		int32_t* L_122 = V_9;
		int32_t L_123 = il2cpp_codegen_ldind<int32_t, int32_t>(L_122);
		L_121->___next = ((int32_t)il2cpp_codegen_subtract(L_123, 1));
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_124 = V_10;
		Il2CppSharedGenericObject* L_125 = ___0_key;
		L_124->___key = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___key), (void*)L_125);
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_126 = V_10;
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_127 = ___1_value;
		L_126->___value = L_127;
		int32_t* L_128 = V_9;
		int32_t L_129 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_128, (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m6ACB69E54B8F44ECE98A7F2FD8824B14F5168F75_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m57CE7B19FC96B7B0EB408B9D6938674A44853398(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_27;
		L_27 = KeyValuePair_2_get_Value_m61F501C5D190CEC570C7D43736A202F772BF5874_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mBC6D9DBA66C645613DE22030989268C54289BB59(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF5B87320B6255623273413181A6D35DE7F6288E8_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mC2F62C5FFA7022D024DD59C8415542066B421A9E(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC2F62C5FFA7022D024DD59C8415542066B421A9E_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_3 = (EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F*)(EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_5 = __this->____entries;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(Il2CppSharedGenericObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppSharedGenericObject** L_17 = (Il2CppSharedGenericObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((RuntimeObject*)(*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA7BAA95EEC509C5C9901AC00F5C4E7DB0AAC6C21_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m708FF9D3BC8C2B314B4B5EC1549DA983DDA45180_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D* L_39 = ___1_value;
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_40 = V_4;
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_41 = L_40->___value;
		*(BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D*)L_39 = L_41;
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tDD9F997D22A14E8A6AF4FE190C777CD8FAEC33F2* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D* L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBA0F864CC5C1AD7C85C3DB71D9D8AF7BE727B55A_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3C38E5F44E8E6114AA800AA5563DD72AD3841EDC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D* L_3 = ___1_value;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m4D344376991B8A692C8AB0CC6CB23E0AE730807E_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, Il2CppSharedGenericObject* ___0_key, BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mEA6C0416314DFBC7F2FA2E3685CA328060504286(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mEA215B1B32137D9CAA64C60F40D1A06E42024D52_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7244785825CDF06BBAA51CB2E0065731C3E35938_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m1E8A15B162E5923C97676A5867DBF07926826476(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3F594FD9F64AA3E259675292DF1172845FFA6DF1_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mA11ED6C3105A4613CB98A8B7955ECD8971057712(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0B31AC6969A25671FFE2DAFAA9F5726438DD459B* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m1E8A15B162E5923C97676A5867DBF07926826476(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), (RuntimeObject*)L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Il2CppSharedGenericObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m40FED18A81796956773FF9DBB7585F3396F4CF9B((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3E3140BDC151F6C33CCF268CD2B130DC79D4098A_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE7A49C607E36E0BE23132EA970288F58C60BFEA9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mF851D1DB7B22C7278138B8DE7446C8A1611B8321_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tE2F0914C1DE90623E09A3A61C94B99FD5624BF7F* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m57CE7B19FC96B7B0EB408B9D6938674A44853398(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_mC2F62C5FFA7022D024DD59C8415542066B421A9E(__this, L_12, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m392CAEECD0B337F7F7982404CA520AEE6EC55325_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mFAA922EA2B0D5CA35A41C613303F82A0DBE16F17_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D_m0E2758E43745E5E9379A8648BAE5973B464178AB(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m6FC062BFDC7DBE179E23A5DB34E046DB58B172CE(__this, L_3, ((*(BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15)))), il2cpp_rgctx_method(method->klass->rgctx_data, 57));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 58)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 59)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3A602A7F76D9FDC2358A0F2A7E9C056C6EBC7834_gshared (Dictionary_2_t7D079CF9831045FE3B8184D8D48FDC8C9FF75E21* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE7A49C607E36E0BE23132EA970288F58C60BFEA9((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tB4363F0AB6BD7479E172E09C57D1C98DBA52FEDA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CE78C81B3C997FF9C14675CFBBAD014EF68FE30_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ACB9814B7776CA335920BD99E9C6149B361D703_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_30 = L_17;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_31 = L_20;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_29 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_4 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	memset(V_4, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B2_0 = NULL;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_9 = ((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_20: *(void**)L_20));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_28, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_29);
				il2cpp_codegen_memcpy(V_4, L_29, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_30);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_31);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_31: *(void**)L_31));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA25D4973BD5467E89BE578B96BE246DE27E51638_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_1, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_6);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4548F09815541C77E85AB57B86142B7D29C0A2F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A8F4B72BD2ED0C4171B69CDDB4F9201FAD62FB5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m47F4CC635C14FD742D41145FEAECD47FF3EC7910_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_9);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_9: *(void**)L_9));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0041:
	{
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_21 = L_1;
	const Il2CppFullySharedGenericAny L_34 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_35 = L_22;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_2, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_3 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_0 = __this->____entries;
		V_0 = L_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_1);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_8);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->____count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_13);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_18;
		L_18 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_18);
		bool L_23;
		L_23 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_22: *(void**)L_22));
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008b:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = __this->____count;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_4 = L_27;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_31 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_31);
		bool L_36;
		L_36 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_35: *(void**)L_35));
		if (!L_36)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d1:
	{
		int32_t L_38 = V_5;
		int32_t L_39 = __this->____count;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_24 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		memset(L_24, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? il2cpp_codegen_memcpy(L_22, L_18, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_23, L_21, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_21), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_13);
		il2cpp_codegen_memcpy((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_24, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), (void**)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_24);
	}

IL_0071:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0075:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEB946BF1ED512ADDA66E4AC30F34573170773B8E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3683CF1DF17605C3CBFEB3DEC2D3C7D619DB1C06_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_16 = V_0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_18 = L_0;
	const Il2CppFullySharedGenericAny L_30 = L_0;
	const Il2CppFullySharedGenericAny L_51 = L_0;
	const Il2CppFullySharedGenericAny L_62 = L_0;
	const Il2CppFullySharedGenericAny L_80 = L_0;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_81 = L_31;
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_6, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		V_1 = L_2;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		V_2 = L_3;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer;
		V_4 = L_5;
		RuntimeObject* L_6 = V_4;
		if (L_6)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 45), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), &L_8, L_7);
		typedef int32_t ( *func_L_10)(void*,const RuntimeMethod*);
		int32_t L_11 = ((func_L_10)L_9)(L_8.thisPtr,L_8.method);
		V_5 = ((int32_t)(L_11&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		NullCheck(L_12);
		int32_t L_16 = ((int32_t)(L_13%L_15));
		int32_t L_17 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_18, V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_18);
		if (!L_19)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_20 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((!(((uint32_t)L_20) < ((uint32_t)L_22))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_31: *(void**)L_31));
		if (L_32)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_33 = V_2;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_0 = L_35;
		int32_t L_36 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_40;
		L_40 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_40;
	}

IL_00c0:
	{
		int32_t L_41 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((!(((uint32_t)L_41) < ((uint32_t)L_43))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_47 = V_5;
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_48 = V_7;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_2;
		int32_t L_50 = V_0;
		NullCheck(L_49);
		il2cpp_codegen_memcpy(L_51, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_52, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_48);
		bool L_53;
		L_53 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_51: *(void**)L_51), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_52: *(void**)L_52));
		if (L_53)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_2;
		int32_t L_55 = V_0;
		NullCheck(L_54);
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_0 = L_56;
		int32_t L_57 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_58 = V_2;
		NullCheck(L_58);
		int32_t L_59 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_58)->max_length),NULL));
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_61 = V_4;
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_61);
		int32_t L_63;
		L_63 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_62: *(void**)L_62));
		V_8 = ((int32_t)(L_63&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_1;
		int32_t L_65 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_1;
		NullCheck(L_66);
		int32_t L_67 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_66)->max_length),NULL));
		NullCheck(L_64);
		int32_t L_68 = ((int32_t)(L_65%L_67));
		int32_t L_69 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_69, 1));
	}

IL_012b:
	{
		int32_t L_70 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_71 = V_2;
		NullCheck(L_71);
		int32_t L_72 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_71)->max_length),NULL));
		if ((!(((uint32_t)L_70) < ((uint32_t)L_72))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_2;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_76 = V_8;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_77 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_78 = V_2;
		int32_t L_79 = V_0;
		NullCheck(L_78);
		il2cpp_codegen_memcpy(L_80, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_81, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_77, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_80: *(void**)L_80), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_81: *(void**)L_81));
		if (L_82)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_83 = V_2;
		int32_t L_84 = V_0;
		NullCheck(L_83);
		int32_t L_85 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_0 = L_85;
		int32_t L_86 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_87 = V_2;
		NullCheck(L_87);
		int32_t L_88 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_87)->max_length),NULL));
		if ((((int32_t)L_86) < ((int32_t)L_88)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_89 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_90 = V_0;
		return L_90;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_23 = L_0;
	const Il2CppFullySharedGenericAny L_35 = L_0;
	const Il2CppFullySharedGenericAny L_43 = L_0;
	const Il2CppFullySharedGenericAny L_63 = L_0;
	const Il2CppFullySharedGenericAny L_71 = L_0;
	const Il2CppFullySharedGenericAny L_90 = L_0;
	const Il2CppFullySharedGenericAny L_98 = L_0;
	const Il2CppFullySharedGenericAny L_134 = L_0;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_64 = L_36;
	const Il2CppFullySharedGenericAny L_91 = L_36;
	const Il2CppFullySharedGenericAny L_41 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_69 = L_41;
	const Il2CppFullySharedGenericAny L_96 = L_41;
	const Il2CppFullySharedGenericAny L_136 = L_41;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_11, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		V_0 = L_5;
		RuntimeObject* L_6 = __this->____comparer;
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_9: *(void**)L_9));
		G_B7_0 = L_10;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 45), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), &L_12, L_11);
		typedef int32_t ( *func_L_14)(void*,const RuntimeMethod*);
		int32_t L_15 = ((func_L_14)L_13)(L_12.thisPtr,L_12.method);
		G_B7_0 = L_15;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____buckets;
		int32_t L_17 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->____buckets;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		NullCheck(L_16);
		V_4 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_17%L_19)))));
		int32_t* L_20 = V_4;
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(L_20);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		RuntimeObject* L_22 = V_1;
		if (L_22)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_23, V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_23);
		if (!L_24)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_25 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_26)->max_length),NULL));
		if ((!(((uint32_t)L_25) < ((uint32_t)L_27))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_31 = V_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_32;
		L_32 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_32);
		bool L_37;
		L_37 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_35: *(void**)L_35), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_36: *(void**)L_36));
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_38 = ___2_behavior;
		if ((!(((uint32_t)L_38) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_41, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_42 = ___2_behavior;
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		il2cpp_codegen_memcpy(L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_43);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_44, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_5 = L_47;
		int32_t L_48 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_49)->max_length),NULL));
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_52;
		L_52 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_52;
	}

IL_0111:
	{
		int32_t L_53 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_54)->max_length),NULL));
		if ((!(((uint32_t)L_53) < ((uint32_t)L_55))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		int32_t L_58 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_59 = V_2;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_60 = V_12;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		il2cpp_codegen_memcpy(L_63, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_60);
		bool L_65;
		L_65 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_60, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_63: *(void**)L_63), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_64: *(void**)L_64));
		if (!L_65)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_66 = ___2_behavior;
		if ((!(((uint32_t)L_66) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_67 = V_0;
		int32_t L_68 = V_5;
		NullCheck(L_67);
		il2cpp_codegen_memcpy(L_69, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_69, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_70 = ___2_behavior;
		if ((!(((uint32_t)L_70) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		il2cpp_codegen_memcpy(L_71, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_72 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_71);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_72, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_5 = L_75;
		int32_t L_76 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_77)->max_length),NULL));
		if ((((int32_t)L_76) < ((int32_t)L_78)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_79 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_80 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((!(((uint32_t)L_80) < ((uint32_t)L_82))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_83 = V_0;
		int32_t L_84 = V_5;
		NullCheck(L_83);
		int32_t L_85 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_86 = V_2;
		if ((!(((uint32_t)L_85) == ((uint32_t)L_86))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_87 = V_1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_88 = V_0;
		int32_t L_89 = V_5;
		NullCheck(L_88);
		il2cpp_codegen_memcpy(L_90, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_91, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_87);
		bool L_92;
		L_92 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_87, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_90: *(void**)L_90), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_91: *(void**)L_91));
		if (!L_92)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_93 = ___2_behavior;
		if ((!(((uint32_t)L_93) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_94 = V_0;
		int32_t L_95 = V_5;
		NullCheck(L_94);
		il2cpp_codegen_memcpy(L_96, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_95))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_96, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_97 = ___2_behavior;
		if ((!(((uint32_t)L_97) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		il2cpp_codegen_memcpy(L_98, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_98);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_99, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_100 = V_0;
		int32_t L_101 = V_5;
		NullCheck(L_100);
		int32_t L_102 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_5 = L_102;
		int32_t L_103 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_104 = V_0;
		NullCheck(L_104);
		int32_t L_105 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_104)->max_length),NULL));
		if ((((int32_t)L_103) < ((int32_t)L_105)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_106 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_106, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_107 = __this->____freeCount;
		if ((((int32_t)L_107) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_108 = __this->____freeList;
		V_8 = L_108;
		V_7 = (bool)1;
		int32_t L_109 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_109, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_110 = __this->____count;
		V_13 = L_110;
		int32_t L_111 = V_13;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_112 = V_0;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		if ((!(((uint32_t)L_111) == ((uint32_t)L_113))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_114 = V_13;
		V_8 = L_114;
		int32_t L_115 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_115, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_116 = __this->____entries;
		V_0 = L_116;
	}

IL_0250:
	{
		bool L_117 = V_6;
		if (L_117)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_118 = V_4;
		G_B51_0 = L_118;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->____buckets;
		int32_t L_120 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = __this->____buckets;
		NullCheck(L_121);
		int32_t L_122 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_121)->max_length),NULL));
		NullCheck(L_119);
		G_B51_0 = ((L_119)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_120%L_122)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_123 = V_0;
		int32_t L_124 = V_8;
		NullCheck(L_123);
		V_10 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_124)));
		bool L_125 = V_7;
		if (!L_125)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_126 = V_10;
		int32_t L_127 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_126, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		__this->____freeList = L_127;
	}

IL_028a:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_128 = V_10;
		int32_t L_129 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), L_129);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_130 = V_10;
		int32_t* L_131 = V_9;
		int32_t L_132 = il2cpp_codegen_ldind<int32_t, int32_t>(L_131);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_130, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), ((int32_t)il2cpp_codegen_subtract(L_132, 1)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_133 = V_10;
		il2cpp_codegen_memcpy(L_134, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_write_instance_field_data(L_133, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2), L_134, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_135 = V_10;
		il2cpp_codegen_memcpy(L_136, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(L_135, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_136, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		int32_t* L_137 = V_9;
		int32_t L_138 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_137, (int32_t)((int32_t)il2cpp_codegen_add(L_138, 1)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCE3F24CD19D6E1AAEE9202CFE6CD1E8DA8821552_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_25 = L_21;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), (Il2CppFullySharedGenericAny*)L_21);
		bool L_22 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_21);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), (Il2CppFullySharedGenericAny*)L_25);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), (Il2CppFullySharedGenericAny*)L_28);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_28: *(void**)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00c0:
	{
		int32_t L_30 = V_4;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_31 = V_3;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_33 = V_1;
		__this->____version = L_33;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_34;
		L_34 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_34);
		bool L_35;
		L_35 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_34, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_3, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_9 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_8);
		bool L_10 = L_9;
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)L_10&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 45), (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)))), &L_20, L_19);
		typedef int32_t ( *func_L_22)(void*,const RuntimeMethod*);
		int32_t L_23 = ((func_L_22)L_21)(L_20.thisPtr,L_20.method);
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), ((int32_t)(L_23&((int32_t)2147483647LL))));
	}

IL_0079:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007f:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_33 = ___0_newSize;
		V_6 = ((int32_t)(L_32%L_33));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_34 = V_1;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), ((int32_t)il2cpp_codegen_subtract(L_39, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_0;
		int32_t L_41 = V_6;
		int32_t L_42 = V_5;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (int32_t)((int32_t)il2cpp_codegen_add(L_42, 1)));
	}

IL_00c5:
	{
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00cb:
	{
		int32_t L_44 = V_5;
		int32_t L_45 = V_2;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_0;
		__this->____buckets = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_46);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_1;
		__this->____entries = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_47);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_32 = L_0;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_33 = L_29;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 45), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B6_0 = L_9;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_10: *(void**)L_10));
		G_B6_0 = L_11;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_1 = ((int32_t)(L_12%L_14));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_21 = V_4;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_24 = __this->____comparer;
		RuntimeObject* L_25 = L_24;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_0095;
		}
		G_B9_0 = L_25;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_26;
		L_26 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_26);
		bool L_30;
		L_30 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_31 = V_4;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_34;
		L_34 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_33: *(void**)L_33));
		G_B11_0 = L_34;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____buckets;
		int32_t L_37 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_38, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_42 = V_4;
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), L_43);
	}

IL_00d6:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_44 = V_4;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_45 = V_4;
		int32_t L_46 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_45, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), L_46);
		bool L_47;
		L_47 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		if (!L_47)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_48 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_48, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_00ff:
	{
		bool L_49;
		L_49 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		if (!L_49)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_50 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_50, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0113:
	{
		int32_t L_51 = V_3;
		__this->____freeList = L_51;
		int32_t L_52 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_54 = V_3;
		V_2 = L_54;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_55 = V_4;
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_3 = L_56;
	}

IL_0142:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2EADBFD560B819C9F845F79CC53D727B37690F15_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_32 = L_0;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_33 = L_29;
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 45), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B6_0 = L_9;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_10: *(void**)L_10));
		G_B6_0 = L_11;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_1 = ((int32_t)(L_12%L_14));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_21 = V_4;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_24 = __this->____comparer;
		RuntimeObject* L_25 = L_24;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_0095;
		}
		G_B9_0 = L_25;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_26;
		L_26 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_26);
		bool L_30;
		L_30 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_31 = V_4;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_34;
		L_34 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_33: *(void**)L_33));
		G_B11_0 = L_34;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____buckets;
		int32_t L_37 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_38, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_42 = V_4;
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), L_43);
	}

IL_00d6:
	{
		Il2CppFullySharedGenericAny* L_44 = ___1_value;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_45 = V_4;
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_instance_field_data_pointer(L_45, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_44, L_46, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_44, (void*)L_46);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_47 = V_4;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_48 = V_4;
		int32_t L_49 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_48, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), L_49);
		bool L_50;
		L_50 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_51 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_010c:
	{
		bool L_52;
		L_52 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		if (!L_52)
		{
			goto IL_0120;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_53 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_53, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0120:
	{
		int32_t L_54 = V_3;
		__this->____freeList = L_54;
		int32_t L_55 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_56, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_57 = V_3;
		V_2 = L_57;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_58 = V_4;
		int32_t L_59 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_3 = L_59;
	}

IL_014f:
	{
		int32_t L_60 = V_3;
		if ((((int32_t)L_60) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppFullySharedGenericAny* L_61 = ___1_value;
		il2cpp_codegen_initobj(L_61, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_6, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m71BC76FB3076464E2CF2D51E2607CCF7E51083FF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)0);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49382184C24B9222DF183D303DDE539D20217D5A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD6AE43E992177C3F738687180B1BC97BDBAADE51_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBDBCC7A542FE485FFCDDD79C6453338ACEB4E9D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_49 = L_27;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_55 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_27);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_28, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
			memset(L_55, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? il2cpp_codegen_memcpy(L_53, L_49, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_54, L_52, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_52), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			RuntimeObject* L_56 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), L_55);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_56);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_56);
		}

IL_012a_1:
		{
			int32_t L_57 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		}

IL_0130_1:
		{
			int32_t L_58 = V_7;
			int32_t L_59 = V_5;
			if ((((int32_t)L_58) < ((int32_t)L_59)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_60 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44022592FB7F74617DDAE1914E3376A2C38A0CBB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m195D9C8DE45E7DAC677E02DC0DB5E179F5BBE3BB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_12, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9E5D75EF1543AC00AA3F3BC3D6149B59826438B1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0444A06383E554B1CE9AD1D51B74A570C71A2F20_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)), il2cpp_rgctx_method(method->klass->rgctx_data, 57), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_10 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 58)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_12;
			L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_10, L_12, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_13 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_14 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 59)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_14, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m72D69D25532F2EA8DEE802868E8CC3282018A5D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), L_0);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m378056C9FA954D6A1529465BE95EE5117D401765_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m2B275ED19E00308C60BB7E0CCD26A62FB4626543(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5831F95B47D97E6F321070B815E41D7684F332DF_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m2B275ED19E00308C60BB7E0CCD26A62FB4626543(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0CC22ACA2BFBAE52434658B318CCCD3261B0F42B_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m2B275ED19E00308C60BB7E0CCD26A62FB4626543(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2B275ED19E00308C60BB7E0CCD26A62FB4626543_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9A17FA1785567CD8E901969DE8EBB7A5911B4448(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_5;
		L_5 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF1BA6846F052E61E3FDF03C4DE9824F38F7328E9_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mF8A097858F51D0ED34EDDB4F537E07DB244BD6A0(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF8A097858F51D0ED34EDDB4F537E07DB244BD6A0_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* G_B2_0 = NULL;
	Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m2B275ED19E00308C60BB7E0CCD26A62FB4626543(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* L_9 = ((Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		float L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_mDB304FBDBB5A8DDF40C199811405B214322028FF(__this, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_28);
				V_4 = L_29;
				AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_30;
				L_30 = KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				float L_31;
				L_31 = KeyValuePair_2_get_Value_mB8BEFFB924C70CA6BC7FBD067819E52DAB00C82B_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mDB304FBDBB5A8DDF40C199811405B214322028FF(__this, L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE8A28ABA558C4CEF6E4A954DF34FBB7F07B58509_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD0308072E4983A352B0A0FA2674FCDF503D7A98D_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82* Dictionary_2_get_Keys_m8937F4C8B6D101455249C346564950554B2BFE49_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82* L_1 = (KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m61557D45B081486A0F6379AF8D72984D93169271(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA331A3F9AF1759FD885497410FF3943EFA597D82* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7* Dictionary_2_get_Values_mA38E8842FFCA25DBC2ADA6476AC83C821DA0905C_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7* L_1 = (ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
		ValueCollection__ctor_mEA4B048171F0F499D26F6C5D4ABE6CB0DF884E54(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t42FA250AC60F795A95096166A81D32DC8A5C3BA7* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Dictionary_2_get_Item_m90DA9641F86603BFBE2A57E85C143F09E9AC0CF0_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4F333B8C0F244320229A71DC6E5153F5A013CDA1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		float L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_6 = ___0_key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(float));
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m69594AE682A763E96793BC65F73DEB1EF630E6EB_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		float L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m31A500491689FF984DA61568748CFE8273C085E9(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDB304FBDBB5A8DDF40C199811405B214322028FF_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		float L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m31A500491689FF984DA61568748CFE8273C085E9(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27EB047449D8C75D9EB8D24A30420A1999C17C7B_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0;
		L_0 = KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		float L_1;
		L_1 = KeyValuePair_2_get_Value_mB8BEFFB924C70CA6BC7FBD067819E52DAB00C82B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDB304FBDBB5A8DDF40C199811405B214322028FF(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mCAC7085E2E24239BD7A813469BB4E7CF1DFB6949_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0;
		L_0 = KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4F333B8C0F244320229A71DC6E5153F5A013CDA1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3;
		L_3 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		float L_7;
		L_7 = KeyValuePair_2_get_Value_mB8BEFFB924C70CA6BC7FBD067819E52DAB00C82B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m5EC1EFC1F08EE98CF966CAE2120488A41CFC0F9C_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0;
		L_0 = KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4F333B8C0F244320229A71DC6E5153F5A013CDA1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3;
		L_3 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		float L_7;
		L_7 = KeyValuePair_2_get_Value_mB8BEFFB924C70CA6BC7FBD067819E52DAB00C82B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_9;
		L_9 = KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m2FC405CA79F68E0FF79E511FB9096485EEBD17A3(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m00588E6FDBCFC890952624DF2616313EFC7866E0_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0041:
	{
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC733AF39AB3E879AE2E795991CF33EF4C0538862_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4F333B8C0F244320229A71DC6E5153F5A013CDA1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mDDE03B8C68B89304182BA83A433F471806E05285_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, float ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(float));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_6;
		L_6 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		float L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m64C7E22DA2C3545EC7710A100F97014C53FA5289_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mD0308072E4983A352B0A0FA2674FCDF503D7A98D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		float L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mAD90D28A4BD7945B468982DD538DE5E824509117((&L_22), L_18, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95 Dictionary_2_GetEnumerator_m3F5778487CBBF246CFCFE74A480F75E0847129C9_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m83CC0F6440C696C3A69E085DF2796D3691DD1FE1((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7271B58D85EA726F2275A5A2E8F407CEB46BFB92_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m83CC0F6440C696C3A69E085DF2796D3691DD1FE1((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mED58758247EF58F1EAFF0CCF1D89752B7CCDA815_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_6;
		L_6 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mD0308072E4983A352B0A0FA2674FCDF503D7A98D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_15 = (KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838*)(KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_16 = V_0;
		Dictionary_2_CopyTo_m64C7E22DA2C3545EC7710A100F97014C53FA5289(__this, L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4F333B8C0F244320229A71DC6E5153F5A013CDA1_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_6(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), ___0_key);
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		NullCheck(L_8);
		int32_t L_12 = ((int32_t)(L_9%L_11));
		int32_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
	}

IL_0066:
	{
		int32_t L_15 = V_0;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		if ((!(((uint32_t)L_15) < ((uint32_t)L_17))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_18 = V_2;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		int32_t L_21 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_22;
		L_22 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_26 = ___0_key;
		NullCheck(L_22);
		bool L_27;
		L_27 = VirtualFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(8, L_22, L_25, L_26);
		if (L_27)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		V_0 = L_30;
		int32_t L_31 = V_3;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_35 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_36 = ___0_key;
		NullCheck(L_35);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker1< int32_t, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_35, L_36);
		V_8 = ((int32_t)(L_37&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_1;
		int32_t L_39 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
		NullCheck(L_38);
		int32_t L_42 = ((int32_t)(L_39%L_41));
		int32_t L_43 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
	}

IL_012b:
	{
		int32_t L_44 = V_0;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_45 = V_2;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((!(((uint32_t)L_44) < ((uint32_t)L_46))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode;
		int32_t L_50 = V_8;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_51 = V_4;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_51, L_54, L_55);
		if (L_56)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_57 = V_2;
		int32_t L_58 = V_0;
		NullCheck(L_57);
		int32_t L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___next;
		V_0 = L_59;
		int32_t L_60 = V_3;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_61 = V_2;
		NullCheck(L_61);
		int32_t L_62 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_61)->max_length),NULL));
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_63 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_64 = V_0;
		return L_64;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9A17FA1785567CD8E901969DE8EBB7A5911B4448_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_5 = (EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059*)(EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m31A500491689FF984DA61568748CFE8273C085E9_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* V_10 = NULL;
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9A17FA1785567CD8E901969DE8EBB7A5911B4448(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_10(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), ___0_key);
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%L_15)))));
		int32_t* L_16 = V_4;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		RuntimeObject* L_18 = V_1;
		if (L_18)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
	}

IL_0091:
	{
		int32_t L_20 = V_5;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((!(((uint32_t)L_20) < ((uint32_t)L_22))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_23 = V_0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_27;
		L_27 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_31 = ___0_key;
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(8, L_27, L_30, L_31);
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_33 = ___2_behavior;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_34 = V_0;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		float L_36 = ___1_value;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value = L_36;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_37 = ___2_behavior;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_38 = ___0_key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_39);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_40, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_41 = V_0;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___next;
		V_5 = L_43;
		int32_t L_44 = V_3;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_48 = V_5;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_49)->max_length),NULL));
		if ((!(((uint32_t)L_48) < ((uint32_t)L_50))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___hashCode;
		int32_t L_54 = V_2;
		if ((!(((uint32_t)L_53) == ((uint32_t)L_54))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_55 = V_1;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_59 = ___0_key;
		NullCheck(L_55);
		bool L_60;
		L_60 = InterfaceFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_55, L_58, L_59);
		if (!L_60)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_62 = V_0;
		int32_t L_63 = V_5;
		NullCheck(L_62);
		float L_64 = ___1_value;
		((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___value = L_64;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_65 = ___2_behavior;
		if ((!(((uint32_t)L_65) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_66 = ___0_key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_67 = L_66;
		RuntimeObject* L_68 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_67);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_68, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___next;
		V_5 = L_71;
		int32_t L_72 = V_3;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_76 = __this->____freeCount;
		if ((((int32_t)L_76) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_77 = __this->____freeList;
		V_8 = L_77;
		V_7 = (bool)1;
		int32_t L_78 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_79 = __this->____count;
		V_13 = L_79;
		int32_t L_80 = V_13;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((!(((uint32_t)L_80) == ((uint32_t)L_82))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mBFD4D03838E076F417CA2F03F6ABD3C41C2C05A6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_83 = V_13;
		V_8 = L_83;
		int32_t L_84 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_84, 1));
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_85 = __this->____entries;
		V_0 = L_85;
	}

IL_0250:
	{
		bool L_86 = V_6;
		if (L_86)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_87 = V_4;
		G_B51_0 = L_87;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = __this->____buckets;
		int32_t L_89 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = __this->____buckets;
		NullCheck(L_90);
		int32_t L_91 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_90)->max_length),NULL));
		NullCheck(L_88);
		G_B51_0 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_89%L_91)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_92 = V_0;
		int32_t L_93 = V_8;
		NullCheck(L_92);
		V_10 = ((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_93)));
		bool L_94 = V_7;
		if (!L_94)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_95 = V_10;
		int32_t L_96 = L_95->___next;
		__this->____freeList = L_96;
	}

IL_028a:
	{
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_97 = V_10;
		int32_t L_98 = V_2;
		L_97->___hashCode = L_98;
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_99 = V_10;
		int32_t* L_100 = V_9;
		int32_t L_101 = il2cpp_codegen_ldind<int32_t, int32_t>(L_100);
		L_99->___next = ((int32_t)il2cpp_codegen_subtract(L_101, 1));
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_102 = V_10;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_103 = ___0_key;
		L_102->___key = L_103;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_102->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_102->___key))->___a2), (void*)NULL);
		#endif
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_104 = V_10;
		float L_105 = ___1_value;
		L_104->___value = L_105;
		int32_t* L_106 = V_9;
		int32_t L_107 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_106, (int32_t)((int32_t)il2cpp_codegen_add(L_107, 1)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m3A5BA8622D54A1F32C9EB9679FD4694CF359F05E_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m9A17FA1785567CD8E901969DE8EBB7A5911B4448(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_21;
		L_21 = KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_24;
		L_24 = KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		float L_27;
		L_27 = KeyValuePair_2_get_Value_mB8BEFFB924C70CA6BC7FBD067819E52DAB00C82B_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDB304FBDBB5A8DDF40C199811405B214322028FF(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBFD4D03838E076F417CA2F03F6ABD3C41C2C05A6_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m1D341EA3707CC879A5728CB054BE70F63BB594E4(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1D341EA3707CC879A5728CB054BE70F63BB594E4_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* V_1 = NULL;
	int32_t V_2 = 0;
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_3 = (EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059*)(EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_5 = __this->____entries;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727* L_17 = (AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_18(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), *L_17);
		int32_t L_19;
		L_19 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_18), NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_19&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_26 = V_1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		int32_t L_29 = ___0_newSize;
		V_6 = ((int32_t)(L_28%L_29));
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___next = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)));
	}

IL_00c5:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cb:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		__this->____buckets = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_42);
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_43 = V_1;
		__this->____entries = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_43);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2FC405CA79F68E0FF79E511FB9096485EEBD17A3_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_4(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), ___0_key);
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		V_1 = ((int32_t)(L_8%L_10));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_17 = V_4;
		int32_t L_18 = L_17->___hashCode;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_22;
		L_22 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_23 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_24 = L_23->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_25 = ___0_key;
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(8, L_22, L_24, L_25);
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_27 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_28 = L_27->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_29 = ___0_key;
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_28, L_29);
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_34 = V_4;
		int32_t L_35 = L_34->___next;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_38 = V_4;
		int32_t L_39 = L_38->___next;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next = L_39;
	}

IL_00d6:
	{
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_40 = V_4;
		L_40->___hashCode = (-1);
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_41 = V_4;
		int32_t L_42 = __this->____freeList;
		L_41->___next = L_42;
	}
	{
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_43 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727* L_44 = (AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727*)(&L_43->___key);
		il2cpp_codegen_initobj(L_44, sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m66725984E903ABA2CA93383CB67E3C1CB029C787_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_4(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), ___0_key);
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		V_1 = ((int32_t)(L_8%L_10));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_17 = V_4;
		int32_t L_18 = L_17->___hashCode;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_22;
		L_22 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_23 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_24 = L_23->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_25 = ___0_key;
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(8, L_22, L_24, L_25);
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_27 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_28 = L_27->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_29 = ___0_key;
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_28, L_29);
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_34 = V_4;
		int32_t L_35 = L_34->___next;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_38 = V_4;
		int32_t L_39 = L_38->___next;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next = L_39;
	}

IL_00d6:
	{
		float* L_40 = ___1_value;
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_41 = V_4;
		float L_42 = L_41->___value;
		*(float*)L_40 = L_42;
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_43 = V_4;
		L_43->___hashCode = (-1);
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_44 = V_4;
		int32_t L_45 = __this->____freeList;
		L_44->___next = L_45;
	}
	{
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_46 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727* L_47 = (AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727*)(&L_46->___key);
		il2cpp_codegen_initobj(L_47, sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList = L_48;
		int32_t L_49 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_t330BCB411BB40D1809D7CC1D537EEB0C38C52497* L_52 = V_4;
		int32_t L_53 = L_52->___next;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		float* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(float));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m24BF33563C364A8E7807AAEC1AF14BF1C532D6C4_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4F333B8C0F244320229A71DC6E5153F5A013CDA1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		float* L_3 = ___1_value;
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(float*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		float* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(float));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m5F025AD7D680F603C60A08626ACA483071DDCC4C_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, float ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		float L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m31A500491689FF984DA61568748CFE8273C085E9(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m292EB8E39DF5B989063393CAB03A8F386A26557B_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m082E3BFA20909A6D22C111C4BC8133FCFAC0A826_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m64C7E22DA2C3545EC7710A100F97014C53FA5289(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m76EC8884EFAA3EC3CCBE60439E01B92DA82C3066_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mD0308072E4983A352B0A0FA2674FCDF503D7A98D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE5C12A53906F3C3A6C8A99238F44114A281B6838* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m64C7E22DA2C3545EC7710A100F97014C53FA5289(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		float L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			float L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mAD90D28A4BD7945B468982DD538DE5E824509117((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB4CE1B0641F6D7867FD32B9699AAECC1238A4215_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m83CC0F6440C696C3A69E085DF2796D3691DD1FE1((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mEE45338200E1F8D5E0EFAB484F600AD558EABF60_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t0B3FA961D8197EC16ADACE2A06EF05068A892059* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m9A17FA1785567CD8E901969DE8EBB7A5911B4448(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m1D341EA3707CC879A5728CB054BE70F63BB594E4(__this, L_12, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14D751C3B1A34E47B22455F43FD7A8B1B5C6FB65_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m1366893505C42885239DAF2CF5ADC261607BFFA1_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m40A060114DD0D5E3F7675FA592ABA27557C198CF(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))));
		}
		try
		{
			AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m69594AE682A763E96793BC65F73DEB1EF630E6EB(__this, L_3, ((*(float*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15)))), il2cpp_rgctx_method(method->klass->rgctx_data, 57));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 58)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 59)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE1D2E117FBF886336091CB8C25C6ED110FF3EDA2_gshared (Dictionary_2_t38528545065CF5635C35E9A4A0511FDF04ADA36E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m83CC0F6440C696C3A69E085DF2796D3691DD1FE1((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_tEF42FCD24F91A5E2C567A8C81125594103E70A95 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC1838CAB2416B3E5E935FF7FD0980CA32B54DE3F_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m7001888F85D1E50316383982273666E94D54D6A3(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAE29F7C4BC302E8E162A64C2EB6CC30206A8A033_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m7001888F85D1E50316383982273666E94D54D6A3(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m48E9667A72D1F9332B5DAA1BB2579CA65158895D_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m7001888F85D1E50316383982273666E94D54D6A3(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7001888F85D1E50316383982273666E94D54D6A3_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA2B3A25F33CD0B89D767B0D91B7CBA4F73AB4D8B(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_5;
		L_5 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m12AD1439700E048A2C28B843EB318DFE5930B9A5_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mCAC9AB405BD2A6E49A6B3A615531B2B08DE23163(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCAC9AB405BD2A6E49A6B3A615531B2B08DE23163_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* G_B2_0 = NULL;
	Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m7001888F85D1E50316383982273666E94D54D6A3(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* L_9 = ((Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m770D5D66A5AA3A8CB8273146970A5262EF21E71B(__this, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_28);
				V_4 = L_29;
				AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_30;
				L_30 = KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m78CE97D4C2B40652CF4F4918CB2E1DD3DCA4F124_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m770D5D66A5AA3A8CB8273146970A5262EF21E71B(__this, L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6F225B16813DE12D8FE87865613ED0B3DE539DA_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0D68D906B99741108251B115B731FA87AFEE1D0F_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017* Dictionary_2_get_Keys_m053EEFB1E7A032BB935C79692B700696D8F6C4DA_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017* L_1 = (KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mE1A266B2F74AAD4E082FADBC641778D8EA1E0B15(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t48973668429DD3C89D6AEEAC5325D5606C9AC017* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7* Dictionary_2_get_Values_m629C0E1E969469568A317A9A3FE5E1433365E71B_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7* L_1 = (ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m7BE5C072DBF1A541BB09E8B08EA48E19121D9B06(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t9CFABEA96AB3B8D4C8299878DA63B338FB68F9B7* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_m38F63FD66AC3B9D2F90A79BBF7086A0CF9C992B4_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43326D2EB053E963ED92D8C6D399EBE07F40D3AB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_6 = ___0_key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mFF5C0D752009A003E7BCC84B3487D14270633798_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mB750361F76BEE947B6FA98DBA5FAD93C8F8158C3(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m770D5D66A5AA3A8CB8273146970A5262EF21E71B_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mB750361F76BEE947B6FA98DBA5FAD93C8F8158C3(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35A8F9E2CE4E1BA63F9E1EF961938A3EFB307EA3_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0;
		L_0 = KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m78CE97D4C2B40652CF4F4918CB2E1DD3DCA4F124_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m770D5D66A5AA3A8CB8273146970A5262EF21E71B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mC55AAA559F827174CC4D7A47BF206DA10B7F9281_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0;
		L_0 = KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43326D2EB053E963ED92D8C6D399EBE07F40D3AB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m78CE97D4C2B40652CF4F4918CB2E1DD3DCA4F124_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m0A53CE0D41278D1CC28B3EF829FC19D28578D81B_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0;
		L_0 = KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43326D2EB053E963ED92D8C6D399EBE07F40D3AB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m78CE97D4C2B40652CF4F4918CB2E1DD3DCA4F124_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_9;
		L_9 = KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m2CB80734B5E1AEA45006684CB6120D1ECE72BECB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m07DFED8022ACE70F4B6009BBECF6AA1770B5B436_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0041:
	{
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m47BDD64807D459E0DB9F6F9B1FE0123CE486A9A4_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43326D2EB053E963ED92D8C6D399EBE07F40D3AB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m0D7845DDF1EC88129F1CE84C97E520B94A2E7798_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3D8F429BA29513488C41855E1659D2D2437CA4F1_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m0D68D906B99741108251B115B731FA87AFEE1D0F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mBC6F660255DD7D57537E098DD71D7A85C5B3E5CD((&L_22), L_18, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C Dictionary_2_GetEnumerator_m68A45D427CA86CEBB95F4DE82E796474C0772E65_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m52B696EEF21CB736E0B69B01D7FAC76141B5F2C9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mCC064D6D9877B4C754D52F0C0F2F65D3A7281A69_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m52B696EEF21CB736E0B69B01D7FAC76141B5F2C9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mB69B65554FFAC3E91F3D3259B6158A7584CAC53F_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_6;
		L_6 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m0D68D906B99741108251B115B731FA87AFEE1D0F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_15 = (KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA*)(KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 42), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_16 = V_0;
		Dictionary_2_CopyTo_m3D8F429BA29513488C41855E1659D2D2437CA4F1(__this, L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m43326D2EB053E963ED92D8C6D399EBE07F40D3AB_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_6(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), ___0_key);
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		NullCheck(L_8);
		int32_t L_12 = ((int32_t)(L_9%L_11));
		int32_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
	}

IL_0066:
	{
		int32_t L_15 = V_0;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		if ((!(((uint32_t)L_15) < ((uint32_t)L_17))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_18 = V_2;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		int32_t L_21 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_22;
		L_22 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_26 = ___0_key;
		NullCheck(L_22);
		bool L_27;
		L_27 = VirtualFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(8, L_22, L_25, L_26);
		if (L_27)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		V_0 = L_30;
		int32_t L_31 = V_3;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_35 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_36 = ___0_key;
		NullCheck(L_35);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker1< int32_t, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_35, L_36);
		V_8 = ((int32_t)(L_37&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_1;
		int32_t L_39 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
		NullCheck(L_38);
		int32_t L_42 = ((int32_t)(L_39%L_41));
		int32_t L_43 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
	}

IL_012b:
	{
		int32_t L_44 = V_0;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_45 = V_2;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((!(((uint32_t)L_44) < ((uint32_t)L_46))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode;
		int32_t L_50 = V_8;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_51 = V_4;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_51, L_54, L_55);
		if (L_56)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_57 = V_2;
		int32_t L_58 = V_0;
		NullCheck(L_57);
		int32_t L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___next;
		V_0 = L_59;
		int32_t L_60 = V_3;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_61 = V_2;
		NullCheck(L_61);
		int32_t L_62 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_61)->max_length),NULL));
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_63 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_64 = V_0;
		return L_64;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA2B3A25F33CD0B89D767B0D91B7CBA4F73AB4D8B_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_5 = (EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2*)(EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mB750361F76BEE947B6FA98DBA5FAD93C8F8158C3_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* V_10 = NULL;
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA2B3A25F33CD0B89D767B0D91B7CBA4F73AB4D8B(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_10(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), ___0_key);
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%L_15)))));
		int32_t* L_16 = V_4;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		RuntimeObject* L_18 = V_1;
		if (L_18)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
	}

IL_0091:
	{
		int32_t L_20 = V_5;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((!(((uint32_t)L_20) < ((uint32_t)L_22))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_23 = V_0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_27;
		L_27 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_31 = ___0_key;
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(8, L_27, L_30, L_31);
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_33 = ___2_behavior;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_34 = V_0;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		Il2CppSharedGenericObject* L_36 = ___1_value;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value), (void*)L_36);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_37 = ___2_behavior;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_38 = ___0_key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_39);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_40, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_41 = V_0;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___next;
		V_5 = L_43;
		int32_t L_44 = V_3;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_48 = V_5;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_49)->max_length),NULL));
		if ((!(((uint32_t)L_48) < ((uint32_t)L_50))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___hashCode;
		int32_t L_54 = V_2;
		if ((!(((uint32_t)L_53) == ((uint32_t)L_54))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_55 = V_1;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_59 = ___0_key;
		NullCheck(L_55);
		bool L_60;
		L_60 = InterfaceFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_55, L_58, L_59);
		if (!L_60)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_62 = V_0;
		int32_t L_63 = V_5;
		NullCheck(L_62);
		Il2CppSharedGenericObject* L_64 = ___1_value;
		((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___value = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___value), (void*)L_64);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_65 = ___2_behavior;
		if ((!(((uint32_t)L_65) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_66 = ___0_key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_67 = L_66;
		RuntimeObject* L_68 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_67);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_68, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___next;
		V_5 = L_71;
		int32_t L_72 = V_3;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_76 = __this->____freeCount;
		if ((((int32_t)L_76) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_77 = __this->____freeList;
		V_8 = L_77;
		V_7 = (bool)1;
		int32_t L_78 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_79 = __this->____count;
		V_13 = L_79;
		int32_t L_80 = V_13;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((!(((uint32_t)L_80) == ((uint32_t)L_82))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m5D7273AA2CFA4347EC465FC7356C1EAC8D356C4E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_83 = V_13;
		V_8 = L_83;
		int32_t L_84 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_84, 1));
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_85 = __this->____entries;
		V_0 = L_85;
	}

IL_0250:
	{
		bool L_86 = V_6;
		if (L_86)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_87 = V_4;
		G_B51_0 = L_87;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = __this->____buckets;
		int32_t L_89 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = __this->____buckets;
		NullCheck(L_90);
		int32_t L_91 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_90)->max_length),NULL));
		NullCheck(L_88);
		G_B51_0 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_89%L_91)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_92 = V_0;
		int32_t L_93 = V_8;
		NullCheck(L_92);
		V_10 = ((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_93)));
		bool L_94 = V_7;
		if (!L_94)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_95 = V_10;
		int32_t L_96 = L_95->___next;
		__this->____freeList = L_96;
	}

IL_028a:
	{
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_97 = V_10;
		int32_t L_98 = V_2;
		L_97->___hashCode = L_98;
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_99 = V_10;
		int32_t* L_100 = V_9;
		int32_t L_101 = il2cpp_codegen_ldind<int32_t, int32_t>(L_100);
		L_99->___next = ((int32_t)il2cpp_codegen_subtract(L_101, 1));
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_102 = V_10;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_103 = ___0_key;
		L_102->___key = L_103;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_102->___key))->___a1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_102->___key))->___a2), (void*)NULL);
		#endif
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_104 = V_10;
		Il2CppSharedGenericObject* L_105 = ___1_value;
		L_104->___value = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&L_104->___value), (void*)L_105);
		int32_t* L_106 = V_9;
		int32_t L_107 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_106, (int32_t)((int32_t)il2cpp_codegen_add(L_107, 1)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mDE4E77A01183FF1EA79F2447B39B9076DDE64A94_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 41)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mA2B3A25F33CD0B89D767B0D91B7CBA4F73AB4D8B(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_21;
		L_21 = KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_24;
		L_24 = KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m78CE97D4C2B40652CF4F4918CB2E1DD3DCA4F124_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m770D5D66A5AA3A8CB8273146970A5262EF21E71B(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5D7273AA2CFA4347EC465FC7356C1EAC8D356C4E_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m068C5291193DA02184C462177ED62DD2495E04AA(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m068C5291193DA02184C462177ED62DD2495E04AA_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* V_1 = NULL;
	int32_t V_2 = 0;
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_3 = (EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2*)(EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_5 = __this->____entries;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727* L_17 = (AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_18(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), *L_17);
		int32_t L_19;
		L_19 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_18), NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_19&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_26 = V_1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		int32_t L_29 = ___0_newSize;
		V_6 = ((int32_t)(L_28%L_29));
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___next = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)));
	}

IL_00c5:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cb:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		__this->____buckets = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_42);
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_43 = V_1;
		__this->____entries = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_43);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2CB80734B5E1AEA45006684CB6120D1ECE72BECB_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_4(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), ___0_key);
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		V_1 = ((int32_t)(L_8%L_10));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_17 = V_4;
		int32_t L_18 = L_17->___hashCode;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_22;
		L_22 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_23 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_24 = L_23->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_25 = ___0_key;
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(8, L_22, L_24, L_25);
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_27 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_28 = L_27->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_29 = ___0_key;
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_28, L_29);
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_34 = V_4;
		int32_t L_35 = L_34->___next;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_38 = V_4;
		int32_t L_39 = L_38->___next;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next = L_39;
	}

IL_00d6:
	{
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_40 = V_4;
		L_40->___hashCode = (-1);
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_41 = V_4;
		int32_t L_42 = __this->____freeList;
		L_41->___next = L_42;
	}
	{
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_43 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727* L_44 = (AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727*)(&L_43->___key);
		il2cpp_codegen_initobj(L_44, sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
	}

IL_00ff:
	{
	}
	{
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_0142:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mB4B8A8258E975B0C8283DF3EB421CDBAEB332A53_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727> L_4(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), ___0_key);
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		V_1 = ((int32_t)(L_8%L_10));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_17 = V_4;
		int32_t L_18 = L_17->___hashCode;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_22;
		L_22 = EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_23 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_24 = L_23->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_25 = ___0_key;
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(8, L_22, L_24, L_25);
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_27 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_28 = L_27->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_29 = ___0_key;
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_28, L_29);
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_34 = V_4;
		int32_t L_35 = L_34->___next;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_38 = V_4;
		int32_t L_39 = L_38->___next;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next = L_39;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_40 = ___1_value;
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_41 = V_4;
		Il2CppSharedGenericObject* L_42 = L_41->___value;
		*(Il2CppSharedGenericObject**)L_40 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_40, (void*)L_42);
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_43 = V_4;
		L_43->___hashCode = (-1);
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_44 = V_4;
		int32_t L_45 = __this->____freeList;
		L_44->___next = L_45;
	}
	{
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_46 = V_4;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727* L_47 = (AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727*)(&L_46->___key);
		il2cpp_codegen_initobj(L_47, sizeof(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727));
	}

IL_010c:
	{
	}
	{
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_48 = V_4;
		Il2CppSharedGenericObject** L_49 = (Il2CppSharedGenericObject**)(&L_48->___value);
		il2cpp_codegen_initobj(L_49, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_50 = V_3;
		__this->____freeList = L_50;
		int32_t L_51 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_52, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_53 = V_3;
		V_2 = L_53;
		Entry_t8476503A265344F1EEC2D23FCAC4B6E97234C79C* L_54 = V_4;
		int32_t L_55 = L_54->___next;
		V_3 = L_55;
	}

IL_014f:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_57 = ___1_value;
		il2cpp_codegen_initobj(L_57, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD62D4B0BC9D064038615EB413426FCBEFF24385B_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m43326D2EB053E963ED92D8C6D399EBE07F40D3AB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m28C924A38D1B4251FAD9E4404A1217C79C8610E7_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mB750361F76BEE947B6FA98DBA5FAD93C8F8158C3(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1C599F9361151E7B9563A7668E65312430F98BD7_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m62261220C9C2633B5BEFCC10DCE89F9DF39FE8F8_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m3D8F429BA29513488C41855E1659D2D2437CA4F1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mA68DD8264BEB962DE55B2538AB34485B686A4C6B_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m0D68D906B99741108251B115B731FA87AFEE1D0F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 36)));
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tFCABDEEBAE132B85C404DC5C7B9AAFECE29FBCEA* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m3D8F429BA29513488C41855E1659D2D2437CA4F1(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mBC6F660255DD7D57537E098DD71D7A85C5B3E5CD((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
			KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49CBAF38042B5C5BEC51F795B3756E79FD8E6BDA_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m52B696EEF21CB736E0B69B01D7FAC76141B5F2C9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mB7E3AD29B7F8501CF2C384346DD6D024CB9E8508_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t124CE3D30F0E74130713C9D4437A1E12D542F1C2* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mA2B3A25F33CD0B89D767B0D91B7CBA4F73AB4D8B(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m068C5291193DA02184C462177ED62DD2495E04AA(__this, L_12, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m51B10A2734C4ADB7BED93D23796B3CC9668E726A_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m74E71F69D6808A1E0149C70719FA4C1E250917E8_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))));
		}
		try
		{
			AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mFF5C0D752009A003E7BCC84B3487D14270633798(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 57));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 58)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 59)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mEA3B0A724072AADDDCEA2FB862A9C149CDFE3FB6_gshared (Dictionary_2_t4BDDF209B0B798E287902ED3512323CC73C5F7B2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m52B696EEF21CB736E0B69B01D7FAC76141B5F2C9((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		Enumerator_t10AD61FEE798F2D14E49D63E2BBF84288774123C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 39), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m2D6C914DA984F8F98ADD91D7F01A6DA1DD095AEC_gshared_inline (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 KeyValuePair_2_get_Value_mD5208C429B44260B9708A5C3D6C5875BBACC3E58_gshared_inline (KeyValuePair_2_tB1533AF096DF1AC3EC823EE67BC6B3E1D06D0349* __this, const RuntimeMethod* method) 
{
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* V_0 = NULL;
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_0 = ((EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m72491309D376A9DBF29FB8108EF246F6D6D520D7_gshared_inline (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 KeyValuePair_2_get_Value_m0BC4A3261F4BB68DCF9CA3904493670DA6F654B4_gshared_inline (KeyValuePair_2_t28299F19CC5D5A7A793C7E1BE1CE85C496A35422* __this, const RuntimeMethod* method) 
{
	{
		BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* EqualityComparer_1_get_Default_m4FC95DF57BE97850AC59AA42A75D5DC92D7D1ADD_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* V_0 = NULL;
	{
		EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* L_0 = ((EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4FD1F125CE1BDA84D7912A087FFB323A35365830(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC468FE88CB6371DC145F25C972B57A6FDA49D6A5* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mF429343F2C169C760E21AA1C4B23B6BCF8D41848_gshared_inline (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D KeyValuePair_2_get_Value_m61F501C5D190CEC570C7D43736A202F772BF5874_gshared_inline (KeyValuePair_2_tD861D615CFC2BAF470C5963EFB752D949B3302B9* __this, const RuntimeMethod* method) 
{
	{
		BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* EqualityComparer_1_get_Default_m06369B755187B1B3FD0C2B0853925A113199B68B_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* V_0 = NULL;
	{
		EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* L_0 = ((EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE834B113416D4F8165FE20ABC8D3BF276F5AC62D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t2CB867CA334E9D01DBC5AF4F182D9F589BB7E6CF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* EqualityComparer_1_get_Default_m42F021666C221E457D4236A7D00907684F853869_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* V_0 = NULL;
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_0 = ((EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mAE770D27EEFD0758D138BA7D18C27B82C8AD540F(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6C07E852B52449A177AF473F97AA65C00CC42B31* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 KeyValuePair_2_get_Key_m9FF4DA1D0E7FBF57ED09A285B9611C821CCF527B_gshared_inline (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* __this, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float KeyValuePair_2_get_Value_mB8BEFFB924C70CA6BC7FBD067819E52DAB00C82B_gshared_inline (KeyValuePair_2_t04DF0AA00164A0981F32E1B1C809943816404A48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___value;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 KeyValuePair_2_get_Key_mB8B5ACB524C75CB28DD476EAA16023622487DC61_gshared_inline (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* __this, const RuntimeMethod* method) 
{
	{
		AnimationPair_tF117B11D857702A70A64E2308E56937A56C67727 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m78CE97D4C2B40652CF4F4918CB2E1DD3DCA4F124_gshared_inline (KeyValuePair_2_t1718605BE64268A13B4CA21C2CD08B62245C75EE* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
