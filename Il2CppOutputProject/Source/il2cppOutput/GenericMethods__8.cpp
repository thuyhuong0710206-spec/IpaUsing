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
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
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
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6*, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D;
struct U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9;
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF;
struct ExposedList_1_tE8B7AF07E62310AB8F6EF3F85ADC627177227B80;
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706;
struct Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215;
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9;
struct HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4;
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
struct LinkedListNode_1_t6F3AFCF84169CF541D1E79B660CD8BBF93886ECE;
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A;
struct ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6;
struct ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15;
struct ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D;
struct List_1_t17793F9C5D3D05B86F970A73AEF8E8897591C9FC;
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A;
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
struct TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C;
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141;
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8;
struct Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05;
struct Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513;
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D;
struct LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51;
struct MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17;
struct TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E;
struct TextGenerationSettingsU5BU5D_t704B9CF75AE18D52BBB4D6C4F90E26D456DEF646;
struct TextGeneratorU5BU5D_t840858C0E634690569F2445016C52BA3D4A2BE46;
struct TextInfoU5BU5D_tE18061C3D6F2431FE14749A05930922C1EAB2320;
struct TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22;
struct TextSpanU5BU5D_t5E3335EA0DC1E9CAE42ABA23B1BB679078C9BF1C;
struct TimelineU5BU5D_t8B04D17CE2EACC9AC7F16E46E610622EF95882F8;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8;
struct AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97;
struct Exception_t;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IPanelComponent_tD81E0440587CF3F01EBF4A2726F88D81C40D138F;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct StringBuilder_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA;
struct TextHandlePermanentCache_t80A472CA5379A09786EDB6593DBBFEE019CD6953;
struct TextHandleTemporaryCache_t12F4FD2714809BDD0AF7145D4B1C0F8F53E47597;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct TextLib_tEF7DFF87B9D7FF0F8B2C231A28CA4CE5A5B59F74;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF;
struct TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C;
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
struct TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBoneTimeline_t66A32D344FA49B46BD988D365ABE69B7FD6473B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC;
IL2CPP_EXTERN_C String_t* _stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com;
struct TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4;
struct TextSpan_tD088342260A71C10DC0840BCA5D5E28139BA4219_marshaled_com;
struct TextSpan_tD088342260A71C10DC0840BCA5D5E28139BA4219_marshaled_pinvoke;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51;
struct MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6;
struct TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E;
struct TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D  : public RuntimeObject
{
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___callBack;
};
struct U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9  : public RuntimeObject
{
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___callBack;
};
struct ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF  : public RuntimeObject
{
	TimelineU5BU5D_t8B04D17CE2EACC9AC7F16E46E610622EF95882F8* ___Items;
	int32_t ___Count;
	int32_t ___version;
};
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
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
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
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
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Il2CppSharedGenericObject* ___m_Item2;
};
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8 : public RuntimeObject {};
struct Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Il2CppSharedGenericObject* ___m_Item2;
	Il2CppSharedGenericObject* ___m_Item3;
};
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB : public RuntimeObject {};
struct Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8  : public RuntimeObject
{
	String_t* ___name;
	ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* ___timelines;
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___timelineIds;
	float ___duration;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SpriteDataAccessExtensions_t3E42874762D049E221636AD9A719EBAE7F9C9980  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct TaskToApm_t85E4852EFE616610E8B037ECB1926B91DEA7D458  : public RuntimeObject
{
};
struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53  : public RuntimeObject
{
};
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09  : public RuntimeObject
{
	int32_t ___characterCount;
	int32_t ___spriteCount;
	int32_t ___spaceCount;
	int32_t ___wordCount;
	int32_t ___linkCount;
	int32_t ___lineCount;
	int32_t ___materialCount;
	TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E* ___textElementInfo;
	WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B* ___wordInfo;
	LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51* ___linkInfo;
	LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D* ___lineInfo;
	MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6* ___meshInfo;
	bool ___hasMultipleColors;
};
struct ThreadPool_t1EE413B12D8BD9F25602041645272351A26711FC  : public RuntimeObject
{
};
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};
struct Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyIds;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___frames;
};
struct TimelineExtensions_t7592B34010DAA8AD97542034D1941C1D61443063  : public RuntimeObject
{
};
struct Tuple_tB9DB3180F4853E781BFDDC3093798F56B27AB03F  : public RuntimeObject
{
};
struct Unsafe_t1B60DB2A3A2A631E537D045BDF121ECE5B06A3A0  : public RuntimeObject
{
};
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};
struct Unsafe_t7A5BFA4CCC4DE54D6A25FB6312C3DB95A35D2B9E  : public RuntimeObject
{
};
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
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
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};
struct MarshalledUnityObject_tA225A4A0AE6E49830C3C0142B2984549E0786A28  : public RuntimeObject
{
};
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB  : public RuntimeObject
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task;
	RuntimeObject* ____state;
	bool ____completedSynchronously;
};
struct AlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8 
{
	uint8_t ___dummy;
	bool ___data;
};
struct AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2 
{
	uint8_t ___dummy;
	uint8_t ___data;
};
struct AlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13 
{
	uint8_t ___dummy;
	int16_t ___data;
};
struct AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3 
{
	uint8_t ___dummy;
	int32_t ___data;
};
struct AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A 
{
	uint8_t ___dummy;
	float ___data;
};
struct AlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2 
{
	uint8_t ___dummy;
	uint16_t ___data;
};
struct AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019 
{
	uint8_t ___dummy;
	uint32_t ___data;
};
struct AlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817 
{
	uint8_t ___dummy;
	uint64_t ___data;
};
struct Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 
{
	ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* ___l;
	int32_t ___next;
	int32_t ___ver;
	Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* ___current;
};
struct Enumerator_t40F59BBF1609419DACF10E60EED82BF4CB644DFC 
{
	ExposedList_1_tE8B7AF07E62310AB8F6EF3F85ADC627177227B80* ___l;
	int32_t ___next;
	int32_t ___ver;
	Il2CppSharedGenericObject* ___current;
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct NativeHashMap_2_tD91D2B5CBB23BD457BCA086DE3058BBACFD47A5B 
{
	HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___m_Data;
};
struct NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 
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
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E 
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
};
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_3_tC37BD742145EFA3FAED5C4D56622BB561CA51E6D 
{
	int32_t ___Item1;
	int32_t ___Item2;
	Il2CppSharedGenericObject* ___Item3;
};
struct ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___drawCommandPickingEntityIds;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	int32_t ____sign;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0;
	float ___m_Weight1;
	float ___m_Weight2;
	float ___m_Weight3;
	int32_t ___m_BoneIndex0;
	int32_t ___m_BoneIndex1;
	int32_t ___m_BoneIndex2;
	int32_t ___m_BoneIndex3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
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
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct GroupItem_t94751A3CFB736E6D54F3AEE75B3629F013EE3626 
{
	int32_t ___id;
	int32_t ___indexUI;
	bool ___buyGold;
	bool ___buyCoin;
	int64_t ___lastUse;
};
struct GroupItem_t94751A3CFB736E6D54F3AEE75B3629F013EE3626_marshaled_pinvoke
{
	int32_t ___id;
	int32_t ___indexUI;
	int32_t ___buyGold;
	int32_t ___buyCoin;
	int64_t ___lastUse;
};
struct GroupItem_t94751A3CFB736E6D54F3AEE75B3629F013EE3626_marshaled_com
{
	int32_t ___id;
	int32_t ___indexUI;
	int32_t ___buyGold;
	int32_t ___buyCoin;
	int64_t ___lastUse;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D 
{
	uint8_t ___m_Data;
};
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 
{
	int32_t ___forceLod;
	float ___lodSelectionBias;
};
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF 
{
	uint32_t ___m_RenderingLayerMask;
	uint16_t ___m_Data;
	uint8_t ___m_ObjectLayer;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_com
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___linkId;
	String_t* ___m_LinkIdString;
	String_t* ___m_LinkTextString;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_pinvoke
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkId;
	char* ___m_LinkIdString;
	char* ___m_LinkTextString;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_com
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkId;
	Il2CppChar* ___m_LinkIdString;
	Il2CppChar* ___m_LinkTextString;
};
struct Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 
{
	int64_t ___f0;
	int64_t ___f1;
	int64_t ___f2;
	int64_t ___f3;
	int64_t ___f4;
	int64_t ___f5;
	int64_t ___f6;
	int64_t ___f7;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF 
{
	TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_pinvoke
{
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_com
{
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B 
{
	uint32_t ___m_TargetGlyphID;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_pinvoke
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_com
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetPrevObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
};
struct RenderSpriteInstancedDataLayout_t4129388FA190352FA5AC84729B01A7AB44DFEAB9 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetSpriteColorU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
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
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Unmarshal_t6E47DD68F1B2AF55577919BA98399376D0C839F1 
{
	union
	{
		struct
		{
		};
		uint8_t Unmarshal_t6E47DD68F1B2AF55577919BA98399376D0C839F1__padding[1];
	};
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___m_NextBlock;
	int32_t ___m_NumItems;
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
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};
struct WordInfo_tA466206097891A5A2590896EE164AFC406EB060D 
{
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct float3_t7600B73F092B37F484B12910A5269F30C778D31E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t545A994996126766890C1F28B43EA823F2410190 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_pinvoke
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_com
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4__padding[16];
	};
};
struct U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67__padding[8];
	};
};
struct U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804__padding[16];
	};
};
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};
struct LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 
{
	float ___m_LodSlope;
	float ___m_LodBias;
};
struct ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 
{
	int32_t ___m_IndexId;
	uint16_t ___m_WorldId;
	uint16_t ___m_Padding;
	int32_t ___m_GenerationId;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C 
{
	List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5* ___tags;
	int32_t ___start;
	int32_t ___end;
};
struct Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C_marshaled_pinvoke
{
	List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5* ___tags;
	int32_t ___start;
	int32_t ___end;
};
struct Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C_marshaled_com
{
	List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5* ___tags;
	int32_t ___start;
	int32_t ___end;
};
struct AtlasMaterialOverride_t90720B0A648B7E43B2E50B2533099C59A14B518C 
{
	bool ___overrideEnabled;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalTexture;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___replacementMaterial;
};
struct AtlasMaterialOverride_t90720B0A648B7E43B2E50B2533099C59A14B518C_marshaled_pinvoke
{
	int32_t ___overrideEnabled;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalTexture;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___replacementMaterial;
};
struct AtlasMaterialOverride_t90720B0A648B7E43B2E50B2533099C59A14B518C_marshaled_com
{
	int32_t ___overrideEnabled;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalTexture;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___replacementMaterial;
};
struct AtlasTextureOverride_tDE83955EB2F03720B0B0AD8E5E3E1DF978B187E0 
{
	bool ___overrideEnabled;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalTexture;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___replacementTexture;
};
struct AtlasTextureOverride_tDE83955EB2F03720B0B0AD8E5E3E1DF978B187E0_marshaled_pinvoke
{
	int32_t ___overrideEnabled;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalTexture;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___replacementTexture;
};
struct AtlasTextureOverride_tDE83955EB2F03720B0B0AD8E5E3E1DF978B187E0_marshaled_com
{
	int32_t ___overrideEnabled;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalTexture;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___replacementTexture;
};
struct TextureMaterialPair_t04EE2230C3D1AB9D0D390B2288BF490AF6D87476 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TextureMaterialPair_t04EE2230C3D1AB9D0D390B2288BF490AF6D87476_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TextureMaterialPair_t04EE2230C3D1AB9D0D390B2288BF490AF6D87476_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
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
struct AtlasMaterialOverride_t5C36C7E96DFD795612692C656DFE544819023BA6 
{
	bool ___overrideDisabled;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___replacementMaterial;
};
struct AtlasMaterialOverride_t5C36C7E96DFD795612692C656DFE544819023BA6_marshaled_pinvoke
{
	int32_t ___overrideDisabled;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___replacementMaterial;
};
struct AtlasMaterialOverride_t5C36C7E96DFD795612692C656DFE544819023BA6_marshaled_com
{
	int32_t ___overrideDisabled;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___replacementMaterial;
};
struct SlotMaterialOverride_tD4F9203A940F56D51ABB89E576AE2F9A8A82154E 
{
	bool ___overrideDisabled;
	String_t* ___slotName;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct SlotMaterialOverride_tD4F9203A940F56D51ABB89E576AE2F9A8A82154E_marshaled_pinvoke
{
	int32_t ___overrideDisabled;
	char* ___slotName;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct SlotMaterialOverride_tD4F9203A940F56D51ABB89E576AE2F9A8A82154E_marshaled_com
{
	int32_t ___overrideDisabled;
	Il2CppChar* ___slotName;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___dest;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___src;
};
struct TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___dest;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___src;
};
struct TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___dest;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___src;
};
struct SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F 
{
	int32_t ___slotIndex;
	String_t* ___name;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment;
};
struct SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F_marshaled_pinvoke
{
	int32_t ___slotIndex;
	char* ___name;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment;
};
struct SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F_marshaled_com
{
	int32_t ___slotIndex;
	Il2CppChar* ___name;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 
{
	String_t* ___category;
	String_t* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshaled_pinvoke
{
	char* ___category;
	char* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshaled_com
{
	Il2CppChar* ___category;
	Il2CppChar* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 
{
	String_t* ___fullName;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform;
};
struct TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshaled_pinvoke
{
	char* ___fullName;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform;
};
struct TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshaled_com
{
	Il2CppChar* ___fullName;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_pinvoke
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_com
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 
{
	int32_t ___transformIndex;
	int32_t ___refCount;
};
struct SerializedEntry_t744AADF737D8DD67E6EA1494B5C76C79637821E6 
{
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___from;
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___to;
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___transition;
};
struct SerializedEntry_t744AADF737D8DD67E6EA1494B5C76C79637821E6_marshaled_pinvoke
{
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___from;
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___to;
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___transition;
};
struct SerializedEntry_t744AADF737D8DD67E6EA1494B5C76C79637821E6_marshaled_com
{
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___from;
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___to;
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___transition;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value;
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct AlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285 
{
	uint8_t ___dummy;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___data;
};
struct AlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3 
{
	uint8_t ___dummy;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___data;
};
struct AlignOfHelper_1_t7AA9B9EDA82D3FF933E70009AB03B0EC7CA41059 
{
	uint8_t ___dummy;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___data;
};
struct AlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432 
{
	uint8_t ___dummy;
	intptr_t ___data;
};
struct AlignOfHelper_1_t8226F184077F6C39D92A13C8E8FC1B455548ACED 
{
	uint8_t ___dummy;
	InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D ___data;
};
struct AlignOfHelper_1_t73C026007A3FBF66031EB16A398B618D2CD46123 
{
	uint8_t ___dummy;
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___data;
};
struct AlignOfHelper_1_t968C45BFA95CB6F1910722DA75ABAE2D7D418263 
{
	uint8_t ___dummy;
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___data;
};
struct AlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC 
{
	uint8_t ___dummy;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___data;
};
struct AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56 
{
	uint8_t ___dummy;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___data;
};
struct AlignOfHelper_1_tFB00C1A05598BAF33AA36449BE3505ACC2D83D05 
{
	uint8_t ___dummy;
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___data;
};
struct AlignOfHelper_1_t4480F2E168ED748DE712B196BEB840CA6FFECCEE 
{
	uint8_t ___dummy;
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 ___data;
};
struct AlignOfHelper_1_tE88C9B7AAA013F8306AC4EA24A81855110A32D41 
{
	uint8_t ___dummy;
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C ___data;
};
struct AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269 
{
	uint8_t ___dummy;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___data;
};
struct AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2 
{
	uint8_t ___dummy;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___data;
};
struct AlignOfHelper_1_t92752E49562D92776F63E0ED73ED54C52098D463 
{
	uint8_t ___dummy;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___data;
};
struct AlignOfHelper_1_t8F6F6E087BE57A1D866727D20357D5EA7D9A986A 
{
	uint8_t ___dummy;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___data;
};
struct AlignOfHelper_1_t7BB9E461CA77F27E85AF701FB477AF8F609AE37B 
{
	uint8_t ___dummy;
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___data;
};
struct AlignOfHelper_1_t724DE9BF3376363363522DBAFBA4AC429271CF24 
{
	uint8_t ___dummy;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___data;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 
{
	intptr_t ____value;
};
struct ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 
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
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A 
{
	intptr_t ____value;
};
struct ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 
{
	intptr_t ____value;
};
struct ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 
{
	intptr_t ____value;
};
struct ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 
{
	intptr_t ____value;
};
struct ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 
{
	intptr_t ____value;
};
struct ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF 
{
	intptr_t ____value;
};
struct ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 
{
	intptr_t ____value;
};
struct HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4 
{
	uint8_t* ___Ptr;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B 
{
	uint8_t* ___Ptr;
	int32_t* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F 
{
	uint8_t* ___Ptr;
	uint64_t* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t2204F5417F5C6FA42457ACD964FE25D97F3E158C 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t93C5B109598EAFE9ACB374E1F5C5A08354BA7C4A 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result;
};
struct TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F 
{
	intptr_t ___TransformAccessArray;
	int32_t ___IsReadOnly;
};
struct TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC 
{
	intptr_t ___TransformAccessArray;
	int32_t ___IsReadOnly;
};
struct TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4 
{
	intptr_t ___TransformAccessArray;
	int32_t ___IsReadOnly;
};
struct TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190 
{
	intptr_t ___TransformAccessArray;
	int32_t ___IsReadOnly;
};
struct Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___m_Item2;
	Il2CppSharedGenericObject* ___m_Item3;
};
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D 
{
	uint8_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6 
{
	int32_t* ___Ptr;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___m_Capacity;
	int32_t ___m_Filled;
	int32_t ___m_Write;
	int32_t ___m_Read;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E 
{
	intptr_t ___m_TextElementInfosPtr;
	int32_t ___m_TextElementCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___textAssetId;
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
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
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
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B 
{
	U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 ___m_ScreenRelativeTransitionHeights;
	U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 ___m_FadeTransitionWidths;
	U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 ___m_RendererCounts;
	uint8_t ___m_Length;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
{
	int32_t ___value__;
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
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct FontStyles_t284AF8C10031F4774DF8BC8DE6DF9EC11EE14668 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 
{
	int32_t ___subMeshCount;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GlyphClassDefinitionType_t9C21A3848A07B17C2690F285B5FA60A2E246FBA2 
{
	int32_t ___value__;
};
struct GlyphRenderMode_tE7FB60827750662A45E89D168932FE2D8AEB5281 
{
	int32_t ___value__;
};
struct HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 ___padding;
};
struct HorizontalAlignment_t671E4AFA8AB13903A7304392F6C320D8F0FB48EC 
{
	int32_t ___value__;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct LanguageDirection_tF200DFFA6ED7E53A36D2481CDF7E9E925661B733 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D 
{
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f0;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f1;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f2;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f3;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f4;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f5;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f6;
	Long8_t47945FFD68CACB5C8CE8E03AECE69B817A6A9659 ___f7;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
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
struct PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 
{
	int32_t ___deformVerticesStartPos;
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___bindPosesIndex;
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___verticesIndex;
};
struct PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction;
};
struct PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
};
struct PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
};
struct PreProcessFlags_t543255175547C550175BFDF0F6D61DC45AEB5AC7 
{
	int32_t ___value__;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Collider;
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
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
	RuntimeObject* ___panelComponent;
	RuntimeObject* ___m_element;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
	RuntimeObject* ___panelComponent;
	RuntimeObject* ___m_element;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
	RuntimeObject* ___panelComponent;
	RuntimeObject* ___m_element;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Count;
	int32_t ___m_Offset;
	int32_t ___m_Stride;
};
struct StackCrawlMark_t95CDBA5EE7D71D392741A5533D7EB93341DFC730 
{
	int32_t ___value__;
};
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	int32_t ___value__;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
};
struct TextElementType_tEBCF09EEF888E8B1F62D3DD66AF21890D12545EB 
{
	uint8_t ___value__;
};
struct TextFontWeight_t789E26840C291C6C1270D4434CE007ACDFA40350 
{
	int32_t ___value__;
};
struct TextOverflow_t83A490A0D7D1788215EF4FA8FDEC28BBBEB0CD3E 
{
	int32_t ___value__;
};
struct TextProcessingElementType_t0F469889070F147273CE0C33D25C8A80E11C1319 
{
	int32_t ___value__;
};
struct TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
};
struct TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 
{
	intptr_t ___m_TransformArray;
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
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2 
{
	intptr_t ___m_FirstBlock;
	intptr_t ___m_LastBlock;
	int32_t ___m_MaxItems;
	int32_t ___m_CurrentRead;
	uint8_t* ___m_CurrentWriteBlockTLS;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VerticalAlignment_tED7B4EE5125B3287AAB4A2AD434A933CCD4633F8 
{
	int32_t ___value__;
};
struct float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c0;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c1;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c2;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c3;
};
struct TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE 
{
	intptr_t ___function;
	intptr_t ___state;
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
struct EventType_t7AF1D09076F1C8C73917A3CE63A9BF3B32E8D557 
{
	int32_t ___value__;
};
struct TransformWriteMode_tAC88F83F00B2B74873BDD3631AC07283279591D4 
{
	int32_t ___value__;
};
struct DrawFillOptions_tEDFBA1E7E9317CE7533535BC608111EE1E408298 
{
	int32_t ___value__;
};
struct TransformChangeReason_tB8D979EC98187EBE40684E468216D798FBFF12F4 
{
	int32_t ___value__;
};
struct TagType_t247BEA6080E7E453FA6F0BC2E8C05D682D94E35A 
{
	int32_t ___value__;
};
struct TextHandleFlags_t40039475AD469D10F4C68818B94A467285F965A6 
{
	int32_t ___value__;
};
struct PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	float ___radius;
	float ___elementDepth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct AlignOfHelper_1_tB6573DEE60FA5B31CC3A9B663EABD82C5FDF5F34 
{
	uint8_t ___dummy;
	HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4 ___data;
};
struct AlignOfHelper_1_t6CD22D504947E007577B184FDB3044C5331C3213 
{
	uint8_t ___dummy;
	HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B ___data;
};
struct AlignOfHelper_1_t5FCA4B2B694E482A4A9EA48502834457DB24A612 
{
	uint8_t ___dummy;
	HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F ___data;
};
struct AlignOfHelper_1_t1BF68DC9ACACFA6FDBB0139DC16493B0F70F132F 
{
	uint8_t ___dummy;
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D ___data;
};
struct AlignOfHelper_1_tF7DAEC11C637A41FF2F5A4D227ECE155AE4F3FC9 
{
	uint8_t ___dummy;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___data;
};
struct AlignOfHelper_1_t297C6D22F0E8C2FABB0F241AA540094D060A51D3 
{
	uint8_t ___dummy;
	UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258 ___data;
};
struct AlignOfHelper_1_t093A30D64849BACC93EAA6802655C46F61FF8163 
{
	uint8_t ___dummy;
	UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6 ___data;
};
struct AlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E 
{
	uint8_t ___dummy;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___data;
};
struct AlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A 
{
	uint8_t ___dummy;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___data;
};
struct AlignOfHelper_1_tA8FDB503553DAE8B5D80E26AD5BFEC6AA2EE2977 
{
	uint8_t ___dummy;
	EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B ___data;
};
struct AlignOfHelper_1_tA7B763C987A9DA044963E6599D62CE107B17BEE1 
{
	uint8_t ___dummy;
	GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 ___data;
};
struct AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB 
{
	uint8_t ___dummy;
	ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___data;
};
struct AlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819 
{
	uint8_t ___dummy;
	PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 ___data;
};
struct AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328 
{
	uint8_t ___dummy;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___data;
};
struct AlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C 
{
	uint8_t ___dummy;
	PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___data;
};
struct AlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33 
{
	uint8_t ___dummy;
	PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___data;
};
struct AlignOfHelper_1_tCCFCC99E6C106BA1E17384248B2EB554F107D8F9 
{
	uint8_t ___dummy;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___data;
};
struct AlignOfHelper_1_t04402A718BBE3DED86F441E9EA40E28F610AC7BB 
{
	uint8_t ___dummy;
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 ___data;
};
struct AlignOfHelper_1_tBABFD994AB355FF15A2FDF9B297481F19BD318E3 
{
	uint8_t ___dummy;
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2 ___data;
};
struct AlignOfHelper_1_t158866ED61419EF07D11EDDE3B3CE6730357B2C5 
{
	uint8_t ___dummy;
	float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ___data;
};
struct AlignOfHelper_1_tA2A267591D03FD490BACEAF4B0BCAF0634483396 
{
	uint8_t ___dummy;
	PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 ___data;
};
struct Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F 
{
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f0;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f1;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f2;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f3;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f4;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f5;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f6;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f7;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f8;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f9;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f10;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f11;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f12;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f13;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f14;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f15;
};
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
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
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 ____pointer;
	int32_t ____length;
};
struct Span_1_t460D4E78469192619B0075C15897A6987393AAF9 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A ____pointer;
	int32_t ____length;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_BodyID;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ThisBodyLinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ThisBodyAngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OtherBodyLinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OtherBodyAngularVelocity;
};
struct GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B 
{
	int32_t ___topology;
	uint32_t ___baseVertex;
	uint32_t ___indexStart;
	uint32_t ___indexCount;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F  : public RuntimeObject
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___entityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___cookieTextureEntityId;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct Long512_t2D339FF6672EB3709A6C638EABA7D13C7FEC1878 
{
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f0;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f1;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f2;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f3;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f4;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f5;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f6;
	Long64_t9C8641A91D7FEF90D4B55FDC6B5823A59670156D ___f7;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F 
{
	int32_t ___vertexCount;
	TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexBufferSize;
	bool ___applySDF;
	int32_t ___glyphRenderMode;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_pinvoke
{
	int32_t ___vertexCount;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexBufferSize;
	int32_t ___applySDF;
	int32_t ___glyphRenderMode;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_com
{
	int32_t ___vertexCount;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexBufferSize;
	int32_t ___applySDF;
	int32_t ___glyphRenderMode;
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
struct NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9 
{
	int32_t ___glyphID;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___bottomLeft;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___topLeft;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___topRight;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___bottomRight;
};
struct NativeTextGenerationSettings_t2F77A4671666C1EB65AADCE42D64244F0168A62A 
{
	intptr_t ___fontAsset;
	intptr_t ___textSettings;
	String_t* ___text;
	int32_t ___screenWidth;
	int32_t ___screenHeight;
	bool ___wordWrapEnabled;
	int32_t ___overflow;
	int32_t ___languageDirection;
	int32_t ___vertexPadding;
	int32_t ___horizontalAlignment;
	int32_t ___verticalAlignment;
	int32_t ___fontSize;
	bool ___bestFit;
	int32_t ___maxFontSize;
	int32_t ___minFontSize;
	int32_t ___fontStyle;
	int32_t ___fontWeight;
	TextSpanU5BU5D_t5E3335EA0DC1E9CAE42ABA23B1BB679078C9BF1C* ___textSpans;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	int32_t ___characterSpacing;
	int32_t ___wordSpacing;
	int32_t ___paragraphSpacing;
	int32_t ___preProcessFlags;
	bool ___disableAdvancedFontFeatures;
	bool ___richTextEnabled;
};
struct NativeTextGenerationSettings_t2F77A4671666C1EB65AADCE42D64244F0168A62A_marshaled_pinvoke
{
	intptr_t ___fontAsset;
	intptr_t ___textSettings;
	char* ___text;
	int32_t ___screenWidth;
	int32_t ___screenHeight;
	int32_t ___wordWrapEnabled;
	int32_t ___overflow;
	int32_t ___languageDirection;
	int32_t ___vertexPadding;
	int32_t ___horizontalAlignment;
	int32_t ___verticalAlignment;
	int32_t ___fontSize;
	int32_t ___bestFit;
	int32_t ___maxFontSize;
	int32_t ___minFontSize;
	int32_t ___fontStyle;
	int32_t ___fontWeight;
	TextSpan_tD088342260A71C10DC0840BCA5D5E28139BA4219_marshaled_pinvoke* ___textSpans;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	int32_t ___characterSpacing;
	int32_t ___wordSpacing;
	int32_t ___paragraphSpacing;
	int32_t ___preProcessFlags;
	int32_t ___disableAdvancedFontFeatures;
	int32_t ___richTextEnabled;
};
struct NativeTextGenerationSettings_t2F77A4671666C1EB65AADCE42D64244F0168A62A_marshaled_com
{
	intptr_t ___fontAsset;
	intptr_t ___textSettings;
	Il2CppChar* ___text;
	int32_t ___screenWidth;
	int32_t ___screenHeight;
	int32_t ___wordWrapEnabled;
	int32_t ___overflow;
	int32_t ___languageDirection;
	int32_t ___vertexPadding;
	int32_t ___horizontalAlignment;
	int32_t ___verticalAlignment;
	int32_t ___fontSize;
	int32_t ___bestFit;
	int32_t ___maxFontSize;
	int32_t ___minFontSize;
	int32_t ___fontStyle;
	int32_t ___fontWeight;
	TextSpan_tD088342260A71C10DC0840BCA5D5E28139BA4219_marshaled_com* ___textSpans;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	int32_t ___characterSpacing;
	int32_t ___wordSpacing;
	int32_t ___paragraphSpacing;
	int32_t ___preProcessFlags;
	int32_t ___disableAdvancedFontFeatures;
	int32_t ___richTextEnabled;
};
struct PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___rotation;
};
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	bool ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___previousDeformVerticesStartPos;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___transformId;
	NativeCustomSlice_1_t93C5B109598EAFE9ACB374E1F5C5A08354BA7C4A ___boneTransformId;
	NativeCustomSlice_1_t2204F5417F5C6FA42457ACD964FE25D97F3E158C ___boneBounds;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_pinvoke
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___previousDeformVerticesStartPos;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___transformId;
	NativeCustomSlice_1_t93C5B109598EAFE9ACB374E1F5C5A08354BA7C4A ___boneTransformId;
	NativeCustomSlice_1_t2204F5417F5C6FA42457ACD964FE25D97F3E158C ___boneBounds;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_com
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___previousDeformVerticesStartPos;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___transformId;
	NativeCustomSlice_1_t93C5B109598EAFE9ACB374E1F5C5A08354BA7C4A ___boneTransformId;
	NativeCustomSlice_1_t2204F5417F5C6FA42457ACD964FE25D97F3E158C ___boneBounds;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler;
	int32_t ___m_defaultCreationOptions;
	int32_t ___m_defaultContinuationOptions;
};
struct TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 
{
	int32_t ___elementType;
	uint32_t ___unicode;
	int32_t ___stringIndex;
	int32_t ___length;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67 
{
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 ___m_UntypedListData;
};
struct EventQueueEntry_t02094D08CAA3D30841DB516CA5D063305CE462DE 
{
	int32_t ___type;
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___entry;
	Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97* ___e;
};
struct EventQueueEntry_t02094D08CAA3D30841DB516CA5D063305CE462DE_marshaled_pinvoke
{
	int32_t ___type;
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___entry;
	Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97* ___e;
};
struct EventQueueEntry_t02094D08CAA3D30841DB516CA5D063305CE462DE_marshaled_com
{
	int32_t ___type;
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___entry;
	Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97* ___e;
};
struct ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A 
{
	PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 ___m_Joint;
	intptr_t ___m_UserData;
};
struct TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_ChangeReason;
};
struct TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Size;
	int32_t ___m_Allocator;
};
struct Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406 
{
	int32_t ___tagType;
	bool ___isClosing;
	int32_t ___start;
	int32_t ___end;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value2;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value3;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value4;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value5;
	int8_t ___nestingLevel;
};
struct Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406_marshaled_pinvoke
{
	int32_t ___tagType;
	int32_t ___isClosing;
	int32_t ___start;
	int32_t ___end;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value2;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value3;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value4;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value5;
	int8_t ___nestingLevel;
};
struct Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406_marshaled_com
{
	int32_t ___tagType;
	int32_t ___isClosing;
	int32_t ___start;
	int32_t ___end;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value2;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value3;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value4;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value5;
	int8_t ___nestingLevel;
};
struct PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Size;
	int32_t ___m_Allocator;
};
struct AnimationControl_t1823073EF525E1D34D122EFA96F221FFC5A498C2 
{
	String_t* ___animationName;
	bool ___loop;
	int32_t ___key;
	bool ___useCustomMixDuration;
	float ___mixDuration;
};
struct AnimationControl_t1823073EF525E1D34D122EFA96F221FFC5A498C2_marshaled_pinvoke
{
	char* ___animationName;
	int32_t ___loop;
	int32_t ___key;
	int32_t ___useCustomMixDuration;
	float ___mixDuration;
};
struct AnimationControl_t1823073EF525E1D34D122EFA96F221FFC5A498C2_marshaled_com
{
	Il2CppChar* ___animationName;
	int32_t ___loop;
	int32_t ___key;
	int32_t ___useCustomMixDuration;
	float ___mixDuration;
};
struct KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 
{
	int32_t ___U3CkeyU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
};
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct AlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818 
{
	uint8_t ___dummy;
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___data;
};
struct AlignOfHelper_1_tDE5E63667E5461CC2B49AF3FA944AFE22FFFC3D6 
{
	uint8_t ___dummy;
	GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___data;
};
struct AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18 
{
	uint8_t ___dummy;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___data;
};
struct AlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90 
{
	uint8_t ___dummy;
	SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 ___data;
};
struct AlignOfHelper_1_tBCBF8B8E1CD4F63F3840DC83691B86A3BA432563 
{
	uint8_t ___dummy;
	UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67 ___data;
};
struct AlignOfHelper_1_t1F0C90344DB347D9FC2A0FCB003F49523D39E0D8 
{
	uint8_t ___dummy;
	TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 ___data;
};
struct Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 
{
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f0;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f1;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f2;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f3;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f4;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f5;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f6;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f7;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f8;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f9;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f10;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f11;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f12;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f13;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f14;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f15;
};
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706  : public MulticastDelegate_t
{
};
struct Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215  : public MulticastDelegate_t
{
};
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9  : public MulticastDelegate_t
{
};
struct SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A  : public MulticastDelegate_t
{
};
struct ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE 
{
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 ___Item1;
	int32_t ___Item2;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Long1024_tEE887C506947419DC829213E6C7483D80AF5659F 
{
	Long512_t2D339FF6672EB3709A6C638EABA7D13C7FEC1878 ___f0;
	Long512_t2D339FF6672EB3709A6C638EABA7D13C7FEC1878 ___f1;
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 
{
	uint32_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	bool ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	bool ___isVisible;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_pinvoke
{
	uint32_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_com
{
	uint32_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com* ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TextHandle_tA1D5C98B154F1F73CBD35E42EB4E9CCB02280EF8  : public RuntimeObject
{
	NativeTextGenerationSettings_t2F77A4671666C1EB65AADCE42D64244F0168A62A ___nativeSettings;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pixelPreferedSize;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	float ___m_LineHeightDefault;
	bool ___m_IsPlaceholder;
	bool ___m_IsElided;
	int32_t ___m_CreateGenerationIteration;
	intptr_t ___m_TextGenerationInfo;
	LinkedListNode_1_t6F3AFCF84169CF541D1E79B660CD8BBF93886ECE* ___U3CTextInfoNodeU3Ek__BackingField;
	bool ___U3CIsCachedTemporaryU3Ek__BackingField;
	int32_t ___m_TextHandleFlags;
	int32_t ___m_PreviousGenerationSettingsHash;
	bool ___isDirty;
	List_1_t17793F9C5D3D05B86F970A73AEF8E8897591C9FC* ___m_Links;
	int32_t ___m_HoveredTag;
};
struct TransformAccessJob_tAE459E37A0EB73C9200C7FE7E86918DA6EEE01E3  : public RuntimeObject
{
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_Transform;
	TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 ___m_TransformAccessArray;
	NativeHashMap_2_tD91D2B5CBB23BD457BCA086DE3058BBACFD47A5B ___m_TransformData;
	NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___m_TransformMatrix;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___m_TransformChanged;
	bool ___m_Dirty;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_JobHandle;
};
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};
struct TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_TransformWriteMode;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_TransformDepth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionFrom;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationFrom;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	bool ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC 
{
	ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 ___m_BeginEvent;
};
struct ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A 
{
	ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 ___m_EndEvent;
};
struct JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF 
{
	JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A ___m_JointThresholdEvent;
};
struct TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 
{
	TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 ___m_BeginEvent;
};
struct TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A 
{
	TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 ___m_EndEvent;
};
struct CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	float ___radius;
	float ___length;
	float ___elementDepth;
	int32_t ___drawFillOptions;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	float ___radius;
	float ___elementDepth;
	int32_t ___drawFillOptions;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	float ___length;
	float ___elementDepth;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 
{
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___transform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p7;
	int32_t ___count;
	float ___radius;
	float ___elementDepth;
	int32_t ___drawFillOptions;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct AlignOfHelper_1_tD5F577DCAC665179FE14F05229ECC74B81FE0167 
{
	uint8_t ___dummy;
	TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 ___data;
};
struct AlignOfHelper_1_tD626B076AC0782276084575D7E81BE4BC4A56297 
{
	uint8_t ___dummy;
	CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E ___data;
};
struct AlignOfHelper_1_t9AE32D30BA8577085EA329965010751D5B5F4927 
{
	uint8_t ___dummy;
	CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 ___data;
};
struct AlignOfHelper_1_t4492F0DC39A766C7CEB6D0363E9B5AF0D1CC1B59 
{
	uint8_t ___dummy;
	LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 ___data;
};
struct AlignOfHelper_1_t547B9C0D47210593C75564A860AF4F567B6FA433 
{
	uint8_t ___dummy;
	PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 ___data;
};
struct Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 
{
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f0;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f1;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f2;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f3;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f4;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f5;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f6;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f7;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f8;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f9;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f10;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f11;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f12;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f13;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f14;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f15;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_pinvoke
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_com
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com ___m_BodyUpdateEvent;
};
struct Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6 
{
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f0;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f1;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f2;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f3;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f4;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f5;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f6;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f7;
};
struct ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF_StaticFields
{
	TimelineU5BU5D_t8B04D17CE2EACC9AC7F16E46E610622EF95882F8* ___EmptyArray;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___s_emptyArray;
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
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largePositiveVector2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largeNegativeVector2;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___k_EmojiLookup;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___k_EmojiPresentationFormLookup;
};
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorPositive;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorNegative;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_StaticFields
{
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___Default;
};
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_StaticFields
{
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___Default;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
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
struct float3_t7600B73F092B37F484B12910A5269F30C778D31E_StaticFields
{
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___zero;
};
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_StaticFields
{
	TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C* ___s_defaultFactory;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert;
};
struct float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_StaticFields
{
	float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ___identity;
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
struct TextHandle_tA1D5C98B154F1F73CBD35E42EB4E9CCB02280EF8_StaticFields
{
	TextHandleTemporaryCache_t12F4FD2714809BDD0AF7145D4B1C0F8F53E47597* ___s_TemporaryCache;
	TextHandlePermanentCache_t80A472CA5379A09786EDB6593DBBFEE019CD6953* ___s_PermanentCache;
	TextGenerationSettingsU5BU5D_t704B9CF75AE18D52BBB4D6C4F90E26D456DEF646* ___s_Settings;
	TextGeneratorU5BU5D_t840858C0E634690569F2445016C52BA3D4A2BE46* ___s_Generators;
	TextInfoU5BU5D_tE18061C3D6F2431FE14749A05930922C1EAB2320* ___s_TextInfosCommon;
	TextLib_tEF7DFF87B9D7FF0F8B2C231A28CA4CE5A5B59F74* ___s_TextLib;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22  : public RuntimeArray
{
	ALIGN_FIELD (8) TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 m_Items[1];

	inline TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 value)
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
struct LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51  : public RuntimeArray
{
	ALIGN_FIELD (8) LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 m_Items[1];

	inline LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___linkId), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LinkIdString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LinkTextString), (void*)NULL);
		#endif
	}
	inline LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___linkId), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LinkIdString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LinkTextString), (void*)NULL);
		#endif
	}
};
struct WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B  : public RuntimeArray
{
	ALIGN_FIELD (8) WordInfo_tA466206097891A5A2590896EE164AFC406EB060D m_Items[1];

	inline WordInfo_tA466206097891A5A2590896EE164AFC406EB060D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WordInfo_tA466206097891A5A2590896EE164AFC406EB060D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WordInfo_tA466206097891A5A2590896EE164AFC406EB060D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WordInfo_tA466206097891A5A2590896EE164AFC406EB060D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D value)
	{
		m_Items[index] = value;
	}
};
struct MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F m_Items[1];

	inline MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertexData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
	inline MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertexData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
};
struct TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E  : public RuntimeArray
{
	ALIGN_FIELD (8) TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 m_Items[1];

	inline TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alternativeGlyph), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
	inline TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alternativeGlyph), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
};
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
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mC616C20F98C18ADE02810AB4A6005DB6F19B2231_gshared (int32_t ___0_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018_gshared (int32_t ___0_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893_gshared (int32_t ___0_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_gshared_inline (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared_inline (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, bool ___0_canceled, bool ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_canceled, int32_t ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D_gshared (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC8780122F9C1523E7B77C018C1A016D39471CCC0_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppSharedGenericObject* ___2_arg1, int32_t ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* TaskFactory_1_FromAsyncImpl_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE2D4D64DD691A7A1C33C4F67A9E16606C125B69B_gshared (Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215* ___0_beginMethod, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706* ___1_endFunction, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___2_endAction, Il2CppSharedGenericObject* ___3_arg1, int32_t ___4_arg2, RuntimeObject* ___5_state, int32_t ___6_creationOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD70DF9176547529A9B644ECE46B999E7B347354E_gshared (TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_gshared_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_m9F69F603EB19033FF225E25B457B288FF3EA3011_gshared (LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m6646EE6AF7569488926F3672FEF3AC3091453D89_gshared (WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_mB235457CD021CAEB78F1A46E61EE85B010D130AC_gshared (MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mF6D48102F97D6CEEFF8844D21732E754C411A71D_gshared (TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_1__ctor_mF86740BD04281AA9189C8D2A13E1FE14425CB79C_gshared (U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t40F59BBF1609419DACF10E60EED82BF4CB644DFC ExposedList_1_GetEnumerator_m688720E229D1DAF99CDCA448FFB29C737CC162D1_gshared (ExposedList_1_tE8B7AF07E62310AB8F6EF3F85ADC627177227B80* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m917DA53345549CB0A2ADEEFFFAFDE0A7301CB3FF_gshared (Enumerator_t40F59BBF1609419DACF10E60EED82BF4CB644DFC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m5F973719952342AF0D7D4A970DD8C8D6CDB8B930_gshared_inline (Enumerator_t40F59BBF1609419DACF10E60EED82BF4CB644DFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6CF4F86A8304F8D4C64A998E79EA4FC8DF83F4AA_gshared (Enumerator_t40F59BBF1609419DACF10E60EED82BF4CB644DFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_mCF17A5763381717C7B050B987E97FF2F22362542_gshared (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_mC0598D1C552EABE66E35303D588AEB44AB3A3AF5_gshared (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, Il2CppSharedGenericObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, Il2CppSharedGenericObject* ___2_item3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_m413787D7163635B482B8CB6B959902D16F8A72AD_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, Il2CppSharedGenericObject* ___2_item3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB6573DEE60FA5B31CC3A9B663EABD82C5FDF5F34_m4110F7060636F731667CD4B7781E0290A86A6578_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6CD22D504947E007577B184FDB3044C5331C3213_mB7214786725D1018B6B5B9E54C4D3FFD6B7D6AEE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FCA4B2B694E482A4A9EA48502834457DB24A612_mE5AD6124B635986A2FD0DB831D1FA903DFBF9123_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m3446503708EF53FF3664993B371F061F2C98A44F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1BF68DC9ACACFA6FDBB0139DC16493B0F70F132F_m28939AED1229A6FD6FA2914C24EBC8191B097BC1_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF7DAEC11C637A41FF2F5A4D227ECE155AE4F3FC9_m9D0B75E725BCB2BF7B4BA7F57DA8EC6577CF6554_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t297C6D22F0E8C2FABB0F241AA540094D060A51D3_mDD1B1F984389C8BA91257345B1D3AC789C21099E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t093A30D64849BACC93EAA6802655C46F61FF8163_mDBFDD38DA99E3B805738860F66ACD5B277E43E35_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818_mB94030527368B8CB6C6A4E9C84DAED859A8663F5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m390771D188BFC7495FCB3A56351B5E401291B516_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA8FDB503553DAE8B5D80E26AD5BFEC6AA2EE2977_m392CC283C281ADA579B1BF1E5AF86EA37376DA6F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m4D0481064DF16017FB4BA2602339F52B31AF4C43_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7AA9B9EDA82D3FF933E70009AB03B0EC7CA41059_m23EF9073EE9816840857FE3C4E98214C6D52FE6B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m08598794D3B261C40B450629DF5F06602A5AE07E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA7B763C987A9DA044963E6599D62CE107B17BEE1_mAA18417E6CA85DA4D273F7E0C9EB9A6B76C4751B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m45B49B28BF4C4D3C67E3E97242A22A0ABC6DEFE3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDE5E63667E5461CC2B49AF3FA944AFE22FFFC3D6_m89D6DE5ECEC7CBA37D6150054368A49E564B1854_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mF2F331D655F94C7D53A2A6CC53FEA77004CC0D8F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13_m5D8720B8C5DCF39EF395B27C7BDD1F1C1A0C2DB7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCB825B1D70E67004BF5727535B982744D7748AEC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8226F184077F6C39D92A13C8E8FC1B455548ACED_mA8DE6E492D9FD43976A9B7EC2419C2711C1D2ED8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m70E9545B366314302788F0E1BC38923FA9A615DD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t73C026007A3FBF66031EB16A398B618D2CD46123_m81EB5BADDA97F9F47690EF2EA73B5E2FC04A2CDC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m6751488A2A9157A9C997B3565468257C18BED296_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t968C45BFA95CB6F1910722DA75ABAE2D7D418263_m9E73F7ACA9D66860E914C2DA4A6D9311502EBB67_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mD9339F750CA0D2D3BF8C7BDEF41B48D06193F67A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_mBAC80201764318E3EA5F8128D39E09641398AE17_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFB00C1A05598BAF33AA36449BE3505ACC2D83D05_mFB2782F313C32EB6A95994900D973E0D25908C3C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FEB40E99B7AC93B17218E31E52424937F30C370_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tCCFCC99E6C106BA1E17384248B2EB554F107D8F9_m022B9E6E98AF8BEFC1A7CA4E872758F0A7A4E50F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mBB8E03C1CCE04BAA49DF0EF1A08717DA4ABA9306_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_mA7E20A1B9EBF3F0C025AEB17B4218DED4B1FEC3F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2_m339635A9CD7DE84F0026C1D0AD4ACFEB0FDC7DF0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_m92D326AE7D9C6FC84D0197EAA7F59131FCACEC19_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817_m481B6255CC2EBB63A42623A3A80AD906330E6F8C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t04402A718BBE3DED86F441E9EA40E28F610AC7BB_m06F70D8E155862746C2DDB10B3F0005462F38A82_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4480F2E168ED748DE712B196BEB840CA6FFECCEE_mC18C900487C1B8B317F4A1C493534E9201407F50_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE88C9B7AAA013F8306AC4EA24A81855110A32D41_m0527D65DDABDDF4C68151031401C2F27C19D96FF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBABFD994AB355FF15A2FDF9B297481F19BD318E3_m98B683C331E82560BF2704208B540E316ACDFF78_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBCBF8B8E1CD4F63F3840DC83691B86A3BA432563_m1443C0DB92D8423E459499936018C67AEAF9C150_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t92752E49562D92776F63E0ED73ED54C52098D463_m145878868F4752C03FA0E2BB9F339FFA0FE31FF6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8F6F6E087BE57A1D866727D20357D5EA7D9A986A_m873E2E2443728E1D35D0F23E3F6631F97D4399EA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t158866ED61419EF07D11EDDE3B3CE6730357B2C5_m2392190CC2B659EEF5F97F651ADF1FBB37BF5311_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7BB9E461CA77F27E85AF701FB477AF8F609AE37B_mD4F625BBF2D4E34CA9DC0F468BC4482476EBA6CA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mEBA77C64C399D4BCC37EE3F3D159A5E94C33C6D3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t724DE9BF3376363363522DBAFBA4AC429271CF24_m2F81F84961E1F13E03070D0518CCF8E192659D6E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8D990A8D391065FD74E77A00692F7A4E622C60D9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD5F577DCAC665179FE14F05229ECC74B81FE0167_mDF535988FCDBB03563CD522ACE4535F43F8D6328_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m8CF58EDFCC08B64D6585A9B478F8BA7A893E2432_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1F0C90344DB347D9FC2A0FCB003F49523D39E0D8_m7418BEC212033BD119FEEB687941A91D1D8C5D59_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m85B0A5655D296C4CF794FB1B0D3DE8CCDF215349_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD626B076AC0782276084575D7E81BE4BC4A56297_m2610F85D79111F0298D18D90D26B9598DF8430F9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m3BD3E1983B717570B02921776FFCE5FC7D384E9E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AE32D30BA8577085EA329965010751D5B5F4927_m4E59129FEFD6415478E0081571AE901239E65E0E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m4D2F36005BE36038EF5F2610C491C00A58AC8ECD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4492F0DC39A766C7CEB6D0363E9B5AF0D1CC1B59_mD37C959B5C392A0B1D81CB4BF410603E88BC751C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8D9C30C1CAD2ABCFEE04D493E65332ACAB8D2871_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA2A267591D03FD490BACEAF4B0BCAF0634483396_m70D5D4158D45BFC9E5B49ABE86E203A069E34D18_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_mBCE96454E464CE8F93208CA3B130CBC832499681_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t547B9C0D47210593C75564A860AF4F567B6FA433_m29FB3A441E195F93A15FED72BEC04796CEE09368_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mDB8A80750B9D19690C7D6E72259D5898D209710B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F_m51C7141179672BAA76EF187CCE9B49F79EAB0299_gshared (void* ___0_ptr, TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A_gshared (void* ___0_ptr, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4_m5AB8073872C76A7B897F6564FFC46A5B0C1A4F15_gshared (void* ___0_ptr, TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190_mA7FCB1EA2194DE97479E6D4C79D612CF0FB8D4EC_gshared (void* ___0_ptr, TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190* ___1_output, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D MemoryExtensions_AsSpan_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m4C688940B0B82D2C4F2705B9FA1CB6FB40D0C46B_gshared_inline (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m9A5423B447082566273DC1B802AC541B91781C92_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* NoAllocHelpers_ExtractArrayFromList_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F97FC7D40BA0FC71130687AEFD440306EED539D_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 MemoryExtensions_AsSpan_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m226223EC85769523E588150A5C5E8605A1A8EB23_gshared_inline (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5F7FC4662820F75282DD96C546F0216AE1C65E4F_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t460D4E78469192619B0075C15897A6987393AAF9 MemoryExtensions_AsSpan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9113C67EE5D3D977C3B18E2B72F1587F88934930_gshared_inline (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m400407DBD1147F424F2DD5D79914655E180A7897_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 MemoryExtensions_AsSpan_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m252A89F7FA2D16119704741349D811941B11F317_gshared_inline (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC07BA3B1CBEC83C8F8B1C1D1604BCBF26C892354_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711_gshared (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72_gshared (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* Array_Resize_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m56B4A5FA244655F35F0482ADF8BFAE16F683FAF1_gshared (HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276_gshared (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A_gshared (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE_gshared (int32_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F_gshared (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784_gshared (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21_gshared (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m65662D0552415B85C6F0258540EF727CC2A6CF44_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8_gshared (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D_gshared (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_gshared_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_gshared_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_gshared_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_gshared_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_gshared_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_gshared_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_gshared_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_mC94DEDD2611C7C84632B957D3FDB324F2C85EA7A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* MemoryMarshal_GetReference_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m0FA64E2967A0965F81D0E06B6A21C2166619C413_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* MemoryMarshal_GetReference_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE1CAB7E37A3F4ACC851D89C1EF41D89E3BFC717F_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* MemoryMarshal_GetReference_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF2220508601B9930347F2DB45A57279ECF7C77CB_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* MemoryMarshal_GetReference_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m47AB46B1E5970F1F8BC8C343C1B895ABE13BCA0E_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mC616C20F98C18ADE02810AB4A6005DB6F19B2231 (int32_t ___0_channel, const RuntimeMethod* method)
{
	((  void (*) (int32_t, const RuntimeMethod*))SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mC616C20F98C18ADE02810AB4A6005DB6F19B2231_gshared)(___0_channel, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15 (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F_inline (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F_inline (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18_inline (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
inline NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C_gshared)(___0_dataPointer, ___1_stride, ___2_length, method);
}
inline void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018 (int32_t ___0_channel, const RuntimeMethod* method)
{
	((  void (*) (int32_t, const RuntimeMethod*))SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018_gshared)(___0_channel, method);
}
inline NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0 (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0_gshared)(___0_dataPointer, ___1_stride, ___2_length, method);
}
inline void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893 (int32_t ___0_channel, const RuntimeMethod* method)
{
	((  void (*) (int32_t, const RuntimeMethod*))SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893_gshared)(___0_channel, method);
}
inline NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31 (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31_gshared)(___0_dataPointer, ___1_stride, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104 (int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_inline (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*))SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
inline void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*))SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
inline void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_inline (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*))SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE (uint32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4_gshared)(___0_cancellationToken, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
inline void Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, bool ___0_canceled, bool ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, bool, bool, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52_gshared)(__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline void Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_canceled, int32_t ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, bool, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB_gshared)(__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline void Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_tokenToRecord, RuntimeObject* ___1_cancellationException, const RuntimeMethod* method) ;
inline void Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, const RuntimeMethod*))Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, RuntimeObject* ___0_exceptionObject, const RuntimeMethod* method) ;
inline void Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, int32_t, const RuntimeMethod*))Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2_gshared)(__this, ___0_result, method);
}
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC8780122F9C1523E7B77C018C1A016D39471CCC0 (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppSharedGenericObject* ___2_arg1, int32_t ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppSharedGenericObject*, int32_t, RuntimeObject*, int32_t, const RuntimeMethod*))TaskFactory_FromAsync_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC8780122F9C1523E7B77C018C1A016D39471CCC0_gshared)(__this, ___0_beginMethod, ___1_endMethod, ___2_arg1, ___3_arg2, ___4_state, ___5_creationOptions, method);
}
inline Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* TaskFactory_1_FromAsyncImpl_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE2D4D64DD691A7A1C33C4F67A9E16606C125B69B (Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215* ___0_beginMethod, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706* ___1_endFunction, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___2_endAction, Il2CppSharedGenericObject* ___3_arg1, int32_t ___4_arg2, RuntimeObject* ___5_state, int32_t ___6_creationOptions, const RuntimeMethod* method)
{
	return ((  Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* (*) (Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppSharedGenericObject*, int32_t, RuntimeObject*, int32_t, const RuntimeMethod*))TaskFactory_1_FromAsyncImpl_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE2D4D64DD691A7A1C33C4F67A9E16606C125B69B_gshared)(___0_beginMethod, ___1_endFunction, ___2_endAction, ___3_arg1, ___4_arg2, ___5_state, ___6_creationOptions, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
inline TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared)(__this, method);
}
inline int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80 (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline (int32_t ___0_value, const RuntimeMethod* method) ;
inline void Array_Resize_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD70DF9176547529A9B644ECE46B999E7B347354E (TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22**, int32_t, const RuntimeMethod*))Array_Resize_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD70DF9176547529A9B644ECE46B999E7B347354E_gshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_1_t566D4A654882E282E54CDC3A001E05486F913903*, const RuntimeMethod*))Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_gshared_inline)(__this, method);
}
inline void Array_Resize_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_m9F69F603EB19033FF225E25B457B288FF3EA3011 (LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51**, int32_t, const RuntimeMethod*))Array_Resize_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_m9F69F603EB19033FF225E25B457B288FF3EA3011_gshared)(___0_array, ___1_newSize, method);
}
inline void Array_Resize_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m6646EE6AF7569488926F3672FEF3AC3091453D89 (WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B**, int32_t, const RuntimeMethod*))Array_Resize_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m6646EE6AF7569488926F3672FEF3AC3091453D89_gshared)(___0_array, ___1_newSize, method);
}
inline void Array_Resize_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_mB235457CD021CAEB78F1A46E61EE85B010D130AC (MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6**, int32_t, const RuntimeMethod*))Array_Resize_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_mB235457CD021CAEB78F1A46E61EE85B010D130AC_gshared)(___0_array, ___1_newSize, method);
}
inline void Array_Resize_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mF6D48102F97D6CEEFF8844D21732E754C411A71D (TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E**, int32_t, const RuntimeMethod*))Array_Resize_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mF6D48102F97D6CEEFF8844D21732E754C411A71D_gshared)(___0_array, ___1_newSize, method);
}
inline void U3CU3Ec__DisplayClass17_0_1__ctor_mF86740BD04281AA9189C8D2A13E1FE14425CB79C (U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D*, const RuntimeMethod*))U3CU3Ec__DisplayClass17_0_1__ctor_mF86740BD04281AA9189C8D2A13E1FE14425CB79C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, RuntimeObject* ___1_state, int32_t* ___2_stackMark, bool ___3_compressStack, bool ___4_forceGlobal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* __this, const RuntimeMethod* method) ;
inline Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3 (ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 (*) (ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF*, const RuntimeMethod*))ExposedList_1_GetEnumerator_m688720E229D1DAF99CDCA448FFB29C737CC162D1_gshared)(__this, method);
}
inline void Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7*, const RuntimeMethod*))Enumerator_Dispose_m917DA53345549CB0A2ADEEFFFAFDE0A7301CB3FF_gshared)(__this, method);
}
inline Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_inline (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7* __this, const RuntimeMethod* method)
{
	return ((  Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* (*) (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7*, const RuntimeMethod*))Enumerator_get_Current_m5F973719952342AF0D7D4A970DD8C8D6CDB8B930_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7*, const RuntimeMethod*))Enumerator_MoveNext_m6CF4F86A8304F8D4C64A998E79EA4FC8DF83F4AA_gshared)(__this, method);
}
inline void Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038_gshared)(___0_array, ___1_newSize, method);
}
inline void Tuple_2__ctor_mCF17A5763381717C7B050B987E97FF2F22362542 (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))Tuple_2__ctor_mCF17A5763381717C7B050B987E97FF2F22362542_gshared)(__this, ___0_item1, ___1_item2, method);
}
inline void Tuple_3__ctor_mC0598D1C552EABE66E35303D588AEB44AB3A3AF5 (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* __this, Il2CppSharedGenericObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, Il2CppSharedGenericObject* ___2_item3, const RuntimeMethod* method)
{
	((  void (*) (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05*, Il2CppSharedGenericObject*, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, Il2CppSharedGenericObject*, const RuntimeMethod*))Tuple_3__ctor_mC0598D1C552EABE66E35303D588AEB44AB3A3AF5_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, method);
}
inline void Tuple_3__ctor_m413787D7163635B482B8CB6B959902D16F8A72AD (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, Il2CppSharedGenericObject* ___2_item3, const RuntimeMethod* method)
{
	((  void (*) (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))Tuple_3__ctor_m413787D7163635B482B8CB6B959902D16F8A72AD_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB6573DEE60FA5B31CC3A9B663EABD82C5FDF5F34_m4110F7060636F731667CD4B7781E0290A86A6578_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB6573DEE60FA5B31CC3A9B663EABD82C5FDF5F34_m4110F7060636F731667CD4B7781E0290A86A6578_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6CD22D504947E007577B184FDB3044C5331C3213_mB7214786725D1018B6B5B9E54C4D3FFD6B7D6AEE_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6CD22D504947E007577B184FDB3044C5331C3213_mB7214786725D1018B6B5B9E54C4D3FFD6B7D6AEE_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FCA4B2B694E482A4A9EA48502834457DB24A612_mE5AD6124B635986A2FD0DB831D1FA903DFBF9123_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FCA4B2B694E482A4A9EA48502834457DB24A612_mE5AD6124B635986A2FD0DB831D1FA903DFBF9123_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m3446503708EF53FF3664993B371F061F2C98A44F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m3446503708EF53FF3664993B371F061F2C98A44F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1BF68DC9ACACFA6FDBB0139DC16493B0F70F132F_m28939AED1229A6FD6FA2914C24EBC8191B097BC1_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1BF68DC9ACACFA6FDBB0139DC16493B0F70F132F_m28939AED1229A6FD6FA2914C24EBC8191B097BC1_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF7DAEC11C637A41FF2F5A4D227ECE155AE4F3FC9_m9D0B75E725BCB2BF7B4BA7F57DA8EC6577CF6554_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF7DAEC11C637A41FF2F5A4D227ECE155AE4F3FC9_m9D0B75E725BCB2BF7B4BA7F57DA8EC6577CF6554_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t297C6D22F0E8C2FABB0F241AA540094D060A51D3_mDD1B1F984389C8BA91257345B1D3AC789C21099E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t297C6D22F0E8C2FABB0F241AA540094D060A51D3_mDD1B1F984389C8BA91257345B1D3AC789C21099E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t093A30D64849BACC93EAA6802655C46F61FF8163_mDBFDD38DA99E3B805738860F66ACD5B277E43E35_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t093A30D64849BACC93EAA6802655C46F61FF8163_mDBFDD38DA99E3B805738860F66ACD5B277E43E35_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818_mB94030527368B8CB6C6A4E9C84DAED859A8663F5_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818_mB94030527368B8CB6C6A4E9C84DAED859A8663F5_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m390771D188BFC7495FCB3A56351B5E401291B516_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m390771D188BFC7495FCB3A56351B5E401291B516_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA8FDB503553DAE8B5D80E26AD5BFEC6AA2EE2977_m392CC283C281ADA579B1BF1E5AF86EA37376DA6F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA8FDB503553DAE8B5D80E26AD5BFEC6AA2EE2977_m392CC283C281ADA579B1BF1E5AF86EA37376DA6F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m4D0481064DF16017FB4BA2602339F52B31AF4C43_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m4D0481064DF16017FB4BA2602339F52B31AF4C43_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7AA9B9EDA82D3FF933E70009AB03B0EC7CA41059_m23EF9073EE9816840857FE3C4E98214C6D52FE6B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7AA9B9EDA82D3FF933E70009AB03B0EC7CA41059_m23EF9073EE9816840857FE3C4E98214C6D52FE6B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m08598794D3B261C40B450629DF5F06602A5AE07E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m08598794D3B261C40B450629DF5F06602A5AE07E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA7B763C987A9DA044963E6599D62CE107B17BEE1_mAA18417E6CA85DA4D273F7E0C9EB9A6B76C4751B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA7B763C987A9DA044963E6599D62CE107B17BEE1_mAA18417E6CA85DA4D273F7E0C9EB9A6B76C4751B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m45B49B28BF4C4D3C67E3E97242A22A0ABC6DEFE3_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m45B49B28BF4C4D3C67E3E97242A22A0ABC6DEFE3_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDE5E63667E5461CC2B49AF3FA944AFE22FFFC3D6_m89D6DE5ECEC7CBA37D6150054368A49E564B1854_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDE5E63667E5461CC2B49AF3FA944AFE22FFFC3D6_m89D6DE5ECEC7CBA37D6150054368A49E564B1854_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mF2F331D655F94C7D53A2A6CC53FEA77004CC0D8F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mF2F331D655F94C7D53A2A6CC53FEA77004CC0D8F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13_m5D8720B8C5DCF39EF395B27C7BDD1F1C1A0C2DB7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13_m5D8720B8C5DCF39EF395B27C7BDD1F1C1A0C2DB7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCB825B1D70E67004BF5727535B982744D7748AEC_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCB825B1D70E67004BF5727535B982744D7748AEC_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8226F184077F6C39D92A13C8E8FC1B455548ACED_mA8DE6E492D9FD43976A9B7EC2419C2711C1D2ED8_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8226F184077F6C39D92A13C8E8FC1B455548ACED_mA8DE6E492D9FD43976A9B7EC2419C2711C1D2ED8_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m70E9545B366314302788F0E1BC38923FA9A615DD_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m70E9545B366314302788F0E1BC38923FA9A615DD_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t73C026007A3FBF66031EB16A398B618D2CD46123_m81EB5BADDA97F9F47690EF2EA73B5E2FC04A2CDC_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t73C026007A3FBF66031EB16A398B618D2CD46123_m81EB5BADDA97F9F47690EF2EA73B5E2FC04A2CDC_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m6751488A2A9157A9C997B3565468257C18BED296_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m6751488A2A9157A9C997B3565468257C18BED296_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t968C45BFA95CB6F1910722DA75ABAE2D7D418263_m9E73F7ACA9D66860E914C2DA4A6D9311502EBB67_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t968C45BFA95CB6F1910722DA75ABAE2D7D418263_m9E73F7ACA9D66860E914C2DA4A6D9311502EBB67_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mD9339F750CA0D2D3BF8C7BDEF41B48D06193F67A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mD9339F750CA0D2D3BF8C7BDEF41B48D06193F67A_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_mBAC80201764318E3EA5F8128D39E09641398AE17_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_mBAC80201764318E3EA5F8128D39E09641398AE17_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFB00C1A05598BAF33AA36449BE3505ACC2D83D05_mFB2782F313C32EB6A95994900D973E0D25908C3C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFB00C1A05598BAF33AA36449BE3505ACC2D83D05_mFB2782F313C32EB6A95994900D973E0D25908C3C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FEB40E99B7AC93B17218E31E52424937F30C370_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FEB40E99B7AC93B17218E31E52424937F30C370_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tCCFCC99E6C106BA1E17384248B2EB554F107D8F9_m022B9E6E98AF8BEFC1A7CA4E872758F0A7A4E50F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tCCFCC99E6C106BA1E17384248B2EB554F107D8F9_m022B9E6E98AF8BEFC1A7CA4E872758F0A7A4E50F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mBB8E03C1CCE04BAA49DF0EF1A08717DA4ABA9306_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mBB8E03C1CCE04BAA49DF0EF1A08717DA4ABA9306_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_mA7E20A1B9EBF3F0C025AEB17B4218DED4B1FEC3F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_mA7E20A1B9EBF3F0C025AEB17B4218DED4B1FEC3F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2_m339635A9CD7DE84F0026C1D0AD4ACFEB0FDC7DF0_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2_m339635A9CD7DE84F0026C1D0AD4ACFEB0FDC7DF0_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_m92D326AE7D9C6FC84D0197EAA7F59131FCACEC19_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_m92D326AE7D9C6FC84D0197EAA7F59131FCACEC19_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817_m481B6255CC2EBB63A42623A3A80AD906330E6F8C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817_m481B6255CC2EBB63A42623A3A80AD906330E6F8C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t04402A718BBE3DED86F441E9EA40E28F610AC7BB_m06F70D8E155862746C2DDB10B3F0005462F38A82_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t04402A718BBE3DED86F441E9EA40E28F610AC7BB_m06F70D8E155862746C2DDB10B3F0005462F38A82_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4480F2E168ED748DE712B196BEB840CA6FFECCEE_mC18C900487C1B8B317F4A1C493534E9201407F50_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4480F2E168ED748DE712B196BEB840CA6FFECCEE_mC18C900487C1B8B317F4A1C493534E9201407F50_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE88C9B7AAA013F8306AC4EA24A81855110A32D41_m0527D65DDABDDF4C68151031401C2F27C19D96FF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE88C9B7AAA013F8306AC4EA24A81855110A32D41_m0527D65DDABDDF4C68151031401C2F27C19D96FF_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBABFD994AB355FF15A2FDF9B297481F19BD318E3_m98B683C331E82560BF2704208B540E316ACDFF78_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBABFD994AB355FF15A2FDF9B297481F19BD318E3_m98B683C331E82560BF2704208B540E316ACDFF78_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBCBF8B8E1CD4F63F3840DC83691B86A3BA432563_m1443C0DB92D8423E459499936018C67AEAF9C150_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBCBF8B8E1CD4F63F3840DC83691B86A3BA432563_m1443C0DB92D8423E459499936018C67AEAF9C150_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t92752E49562D92776F63E0ED73ED54C52098D463_m145878868F4752C03FA0E2BB9F339FFA0FE31FF6_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t92752E49562D92776F63E0ED73ED54C52098D463_m145878868F4752C03FA0E2BB9F339FFA0FE31FF6_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8F6F6E087BE57A1D866727D20357D5EA7D9A986A_m873E2E2443728E1D35D0F23E3F6631F97D4399EA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8F6F6E087BE57A1D866727D20357D5EA7D9A986A_m873E2E2443728E1D35D0F23E3F6631F97D4399EA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t158866ED61419EF07D11EDDE3B3CE6730357B2C5_m2392190CC2B659EEF5F97F651ADF1FBB37BF5311_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t158866ED61419EF07D11EDDE3B3CE6730357B2C5_m2392190CC2B659EEF5F97F651ADF1FBB37BF5311_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7BB9E461CA77F27E85AF701FB477AF8F609AE37B_mD4F625BBF2D4E34CA9DC0F468BC4482476EBA6CA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7BB9E461CA77F27E85AF701FB477AF8F609AE37B_mD4F625BBF2D4E34CA9DC0F468BC4482476EBA6CA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mEBA77C64C399D4BCC37EE3F3D159A5E94C33C6D3_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mEBA77C64C399D4BCC37EE3F3D159A5E94C33C6D3_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t724DE9BF3376363363522DBAFBA4AC429271CF24_m2F81F84961E1F13E03070D0518CCF8E192659D6E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t724DE9BF3376363363522DBAFBA4AC429271CF24_m2F81F84961E1F13E03070D0518CCF8E192659D6E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8D990A8D391065FD74E77A00692F7A4E622C60D9_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8D990A8D391065FD74E77A00692F7A4E622C60D9_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD5F577DCAC665179FE14F05229ECC74B81FE0167_mDF535988FCDBB03563CD522ACE4535F43F8D6328_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD5F577DCAC665179FE14F05229ECC74B81FE0167_mDF535988FCDBB03563CD522ACE4535F43F8D6328_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m8CF58EDFCC08B64D6585A9B478F8BA7A893E2432_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m8CF58EDFCC08B64D6585A9B478F8BA7A893E2432_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1F0C90344DB347D9FC2A0FCB003F49523D39E0D8_m7418BEC212033BD119FEEB687941A91D1D8C5D59_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1F0C90344DB347D9FC2A0FCB003F49523D39E0D8_m7418BEC212033BD119FEEB687941A91D1D8C5D59_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m85B0A5655D296C4CF794FB1B0D3DE8CCDF215349_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m85B0A5655D296C4CF794FB1B0D3DE8CCDF215349_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD626B076AC0782276084575D7E81BE4BC4A56297_m2610F85D79111F0298D18D90D26B9598DF8430F9_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD626B076AC0782276084575D7E81BE4BC4A56297_m2610F85D79111F0298D18D90D26B9598DF8430F9_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m3BD3E1983B717570B02921776FFCE5FC7D384E9E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m3BD3E1983B717570B02921776FFCE5FC7D384E9E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AE32D30BA8577085EA329965010751D5B5F4927_m4E59129FEFD6415478E0081571AE901239E65E0E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AE32D30BA8577085EA329965010751D5B5F4927_m4E59129FEFD6415478E0081571AE901239E65E0E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m4D2F36005BE36038EF5F2610C491C00A58AC8ECD_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m4D2F36005BE36038EF5F2610C491C00A58AC8ECD_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4492F0DC39A766C7CEB6D0363E9B5AF0D1CC1B59_mD37C959B5C392A0B1D81CB4BF410603E88BC751C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4492F0DC39A766C7CEB6D0363E9B5AF0D1CC1B59_mD37C959B5C392A0B1D81CB4BF410603E88BC751C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8D9C30C1CAD2ABCFEE04D493E65332ACAB8D2871_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8D9C30C1CAD2ABCFEE04D493E65332ACAB8D2871_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA2A267591D03FD490BACEAF4B0BCAF0634483396_m70D5D4158D45BFC9E5B49ABE86E203A069E34D18_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA2A267591D03FD490BACEAF4B0BCAF0634483396_m70D5D4158D45BFC9E5B49ABE86E203A069E34D18_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_mBCE96454E464CE8F93208CA3B130CBC832499681_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_mBCE96454E464CE8F93208CA3B130CBC832499681_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t547B9C0D47210593C75564A860AF4F567B6FA433_m29FB3A441E195F93A15FED72BEC04796CEE09368_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t547B9C0D47210593C75564A860AF4F567B6FA433_m29FB3A441E195F93A15FED72BEC04796CEE09368_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mDB8A80750B9D19690C7D6E72259D5898D209710B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mDB8A80750B9D19690C7D6E72259D5898D209710B_gshared_inline)(method);
}
inline void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F_m51C7141179672BAA76EF187CCE9B49F79EAB0299 (void* ___0_ptr, TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F_m51C7141179672BAA76EF187CCE9B49F79EAB0299_gshared)(___0_ptr, ___1_output, method);
}
inline void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A (void* ___0_ptr, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A_gshared)(___0_ptr, ___1_output, method);
}
inline void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4_m5AB8073872C76A7B897F6564FFC46A5B0C1A4F15 (void* ___0_ptr, TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4_m5AB8073872C76A7B897F6564FFC46A5B0C1A4F15_gshared)(___0_ptr, ___1_output, method);
}
inline void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190_mA7FCB1EA2194DE97479E6D4C79D612CF0FB8D4EC (void* ___0_ptr, TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190_mA7FCB1EA2194DE97479E6D4C79D612CF0FB8D4EC_gshared)(___0_ptr, ___1_output, method);
}
inline Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method)
{
	return ((  Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared_inline)(___0_list, method);
}
inline Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D MemoryExtensions_AsSpan_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m4C688940B0B82D2C4F2705B9FA1CB6FB40D0C46B_inline (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D (*) (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m4C688940B0B82D2C4F2705B9FA1CB6FB40D0C46B_gshared_inline)(___0_array, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m9A5423B447082566273DC1B802AC541B91781C92_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_span, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D, const RuntimeMethod*))MemoryMarshal_AsBytes_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m9A5423B447082566273DC1B802AC541B91781C92_gshared_inline)(___0_span, method);
}
inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* NoAllocHelpers_ExtractArrayFromList_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F97FC7D40BA0FC71130687AEFD440306EED539D_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F97FC7D40BA0FC71130687AEFD440306EED539D_gshared_inline)(___0_list, method);
}
inline Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 MemoryExtensions_AsSpan_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m226223EC85769523E588150A5C5E8605A1A8EB23_inline (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 (*) (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m226223EC85769523E588150A5C5E8605A1A8EB23_gshared_inline)(___0_array, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5F7FC4662820F75282DD96C546F0216AE1C65E4F_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_span, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5, const RuntimeMethod*))MemoryMarshal_AsBytes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5F7FC4662820F75282DD96C546F0216AE1C65E4F_gshared_inline)(___0_span, method);
}
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared_inline)(___0_list, method);
}
inline Span_1_t460D4E78469192619B0075C15897A6987393AAF9 MemoryExtensions_AsSpan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9113C67EE5D3D977C3B18E2B72F1587F88934930_inline (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t460D4E78469192619B0075C15897A6987393AAF9 (*) (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9113C67EE5D3D977C3B18E2B72F1587F88934930_gshared_inline)(___0_array, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m400407DBD1147F424F2DD5D79914655E180A7897_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_span, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9, const RuntimeMethod*))MemoryMarshal_AsBytes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m400407DBD1147F424F2DD5D79914655E180A7897_gshared_inline)(___0_span, method);
}
inline Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method)
{
	return ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared_inline)(___0_list, method);
}
inline Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 MemoryExtensions_AsSpan_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m252A89F7FA2D16119704741349D811941B11F317_inline (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m252A89F7FA2D16119704741349D811941B11F317_gshared_inline)(___0_array, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC07BA3B1CBEC83C8F8B1C1D1604BCBF26C892354_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_span, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1, const RuntimeMethod*))MemoryMarshal_AsBytes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC07BA3B1CBEC83C8F8B1C1D1604BCBF26C892354_gshared_inline)(___0_span, method);
}
inline Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method)
{
	return ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared)(___0_value, method);
}
inline Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method)
{
	return ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline)(___0_left, ___1_right, method);
}
inline HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* (*) (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* (*) (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* Array_Resize_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m56B4A5FA244655F35F0482ADF8BFAE16F683FAF1 (HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* (*) (HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m56B4A5FA244655F35F0482ADF8BFAE16F683FAF1_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276 (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* (*) (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* (*) (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0 (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE (int32_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (int32_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81 (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  uint64_t* (*) (uint64_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* (*) (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784 (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* (*) (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4 (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* (*) (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21 (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* (*) (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m65662D0552415B85C6F0258540EF727CC2A6CF44 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m65662D0552415B85C6F0258540EF727CC2A6CF44_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8 (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A (*) (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A*, const RuntimeMethod*))PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8_gshared)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A*, const RuntimeMethod*))PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D_gshared)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_gshared)(__this, method);
}
inline NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_gshared)(__this, method);
}
inline NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_gshared)(__this, method);
}
inline NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_gshared)(__this, method);
}
inline NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_gshared)(__this, method);
}
inline NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_gshared)(__this, method);
}
inline NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_gshared)(__this, method);
}
inline NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_gshared)(__this, method);
}
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_gshared)(__this, method);
}
inline void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_gshared)(__this, method);
}
inline int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_mC94DEDD2611C7C84632B957D3FDB324F2C85EA7A (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_mC94DEDD2611C7C84632B957D3FDB324F2C85EA7A_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591_gshared)(method);
}
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline)(___0_from, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
inline ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, const RuntimeMethod*))Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline)(__this, ___0_array, method);
}
inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* MemoryMarshal_GetReference_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m0FA64E2967A0965F81D0E06B6A21C2166619C413 (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_span, const RuntimeMethod* method)
{
	return ((  Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D, const RuntimeMethod*))MemoryMarshal_GetReference_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m0FA64E2967A0965F81D0E06B6A21C2166619C413_gshared)(___0_span, method);
}
inline int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, const RuntimeMethod*))Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline)(__this, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* UnsafeUtility_As_TisListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6_mE5FD3C189A791B18279B00F6A758B785560A43C2 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tBAB6E9622489C11BDD8461ABE2E7E8EE660190D6* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, const RuntimeMethod*))Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared_inline)(__this, ___0_array, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* MemoryMarshal_GetReference_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE1CAB7E37A3F4ACC851D89C1EF41D89E3BFC717F (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_span, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5, const RuntimeMethod*))MemoryMarshal_GetReference_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE1CAB7E37A3F4ACC851D89C1EF41D89E3BFC717F_gshared)(___0_span, method);
}
inline int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, const RuntimeMethod*))Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared_inline)(__this, method);
}
inline ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, const RuntimeMethod*))Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared_inline)(__this, ___0_array, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* MemoryMarshal_GetReference_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF2220508601B9930347F2DB45A57279ECF7C77CB (Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_span, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9, const RuntimeMethod*))MemoryMarshal_GetReference_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF2220508601B9930347F2DB45A57279ECF7C77CB_gshared)(___0_span, method);
}
inline int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, const RuntimeMethod*))Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared_inline)(__this, method);
}
inline ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared)(___0_from, method);
}
inline void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, const RuntimeMethod*))Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared_inline)(__this, ___0_array, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* MemoryMarshal_GetReference_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m47AB46B1E5970F1F8BC8C343C1B895ABE13BCA0E (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_span, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1, const RuntimeMethod*))MemoryMarshal_GetReference_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m47AB46B1E5970F1F8BC8C343C1B895ABE13BCA0E_gshared)(___0_span, method);
}
inline int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, const RuntimeMethod*))Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
inline int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline)(method);
}
inline uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, int32_t, const RuntimeMethod*))Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared)(__this, ___0_index, method);
}
inline bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t, uint16_t, const RuntimeMethod*))Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
inline void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, void*, const RuntimeMethod*))Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared)(__this, ___0_dataPointer, method);
}
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisIl2CppFullySharedGenericAny_mF0922CAD095454417C8E17BCC7AFE746131A9275_gshared (int32_t ___0_channel, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
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
		bool L_1 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		V_0 = L_1;
		goto IL_00e6;
	}

IL_0060:
	{
		bool L_2 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		V_0 = L_2;
		goto IL_00e6;
	}

IL_007c:
	{
		bool L_3 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_00e6;
	}

IL_0098:
	{
		bool L_4 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_00e6;
	}

IL_00b4:
	{
		bool L_5 = (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		V_0 = L_5;
		goto IL_00e6;
	}

IL_00d0:
	{
		int32_t L_6 = ___0_channel;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC)), L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_00e6:
	{
		bool L_11 = V_0;
		if (L_11)
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_12 = ___0_channel;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck((MemberInfo_t*)L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_16);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC)), L_14, (RuntimeObject*)L_17, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_19 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_010e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 SpriteDataAccessExtensions_GetVertexAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mE113D95D7B8893E1AE443F19948DDD6AEEC75975_gshared (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___1_channel;
		SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mC616C20F98C18ADE02810AB4A6005DB6F19B2231(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		int32_t L_2 = ___1_channel;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_3;
		L_3 = SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3(L_1, L_2, NULL);
		V_0 = L_3;
		void* L_4;
		L_4 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_5;
		L_5 = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F_inline((&V_0), NULL);
		int32_t L_6;
		L_6 = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F_inline((&V_0), NULL);
		int32_t L_7;
		L_7 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18_inline((&V_0), NULL);
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_8;
		L_8 = NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C(((void*)il2cpp_codegen_add((intptr_t)L_4, L_5)), L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A SpriteDataAccessExtensions_GetVertexAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m97992D4BCFA628DCB8FEF5900C0A3A8157B929A2_gshared (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___1_channel;
		SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		int32_t L_2 = ___1_channel;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_3;
		L_3 = SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3(L_1, L_2, NULL);
		V_0 = L_3;
		void* L_4;
		L_4 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_5;
		L_5 = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F_inline((&V_0), NULL);
		int32_t L_6;
		L_6 = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F_inline((&V_0), NULL);
		int32_t L_7;
		L_7 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18_inline((&V_0), NULL);
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_8;
		L_8 = NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0(((void*)il2cpp_codegen_add((intptr_t)L_4, L_5)), L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F SpriteDataAccessExtensions_GetVertexAttribute_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5D2FCB716E12E2FDB71D2E19A3C638741DF5B45B_gshared (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___1_channel;
		SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		int32_t L_2 = ___1_channel;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_3;
		L_3 = SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3(L_1, L_2, NULL);
		V_0 = L_3;
		void* L_4;
		L_4 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_5;
		L_5 = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F_inline((&V_0), NULL);
		int32_t L_6;
		L_6 = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F_inline((&V_0), NULL);
		int32_t L_7;
		L_7 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18_inline((&V_0), NULL);
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_8;
		L_8 = NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31(((void*)il2cpp_codegen_add((intptr_t)L_4, L_5)), L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 SpriteDataAccessExtensions_GetVertexAttribute_TisIl2CppFullySharedGenericStruct_m3561CDA5EA522FCB016AEF1FE7018DB3FC302E1C_gshared (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___1_channel;
		((  void (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		int32_t L_2 = ___1_channel;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_3;
		L_3 = SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3(L_1, L_2, NULL);
		V_0 = L_3;
		void* L_4;
		L_4 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_5;
		L_5 = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F_inline((&V_0), NULL);
		int32_t L_6;
		L_6 = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F_inline((&V_0), NULL);
		int32_t L_7;
		L_7 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18_inline((&V_0), NULL);
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_8;
		L_8 = ((  NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(((void*)il2cpp_codegen_add((intptr_t)L_4, L_5)), L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E_mE81F2343FC0D6B9171E80190021EB7A07A47A562_gshared (int32_t ___0_length, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_state, SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_13 = ___1_state;
		NullCheck(L_8);
		SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_inline(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_gshared (int32_t ___0_length, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_state, SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_13 = ___1_state;
		NullCheck(L_8);
		SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85_m6F505BE8BEAF8A3324DDCED5C13F3EC1970BA9B2_gshared (int32_t ___0_length, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_state, SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_13 = ___1_state;
		NullCheck(L_8);
		SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_inline(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_gshared (int32_t ___0_length, Il2CppFullySharedGenericAny ___1_state, SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
	String_t* V_0 = NULL;
	{
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_state : &___1_state), SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
		NullCheck(L_8);
		InvokerActionInvoker2< Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_8, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_13: *(void**)L_13));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B15D251663E1D9C147CD9DA1A8908CACF877570_gshared (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&___0_value), (String_t*)NULL, (RuntimeObject*)L_0, NULL);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F274B553164EF6FB0CB7D16AED9687CE7CA5FC_gshared (StringBuilder_t* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&___0_value), (String_t*)NULL, (RuntimeObject*)L_0, NULL);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisIl2CppFullySharedGenericAny_mF50A5C2F631F6F4450B612A08A50CA5E6DC58AEC_gshared (StringBuilder_t* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_value : &___0_value), &L_2, L_1);
		typedef String_t* ( *func_L_4)(void*,String_t*,RuntimeObject*,const RuntimeMethod*);
		String_t* L_5 = ((func_L_4)L_3)(L_2.thisPtr, (String_t*)NULL, (RuntimeObject*)L_0,L_2.method);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1;
		L_1 = Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCanceled_TisIl2CppFullySharedGenericAny_m6FA2A9DC4ECF7A21441B961F86A94873F5C015C9_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1;
		L_1 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA2563A31BE4ECDB082688B267381538C65FA811B_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
		Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		NullCheck(L_4);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* Task_FromCancellation_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_m3D0619EF0B707377DD0715DB44C2C3AA0530E99A_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2 = (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
		Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		NullCheck(L_4);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	memset(V_0, 0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		InvokerActionInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_2: *(void**)L_2), (int32_t)0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m2223C6E6E1675E311C66C5695E2F0728BED068E5_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
		((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		NullCheck(L_4);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2512A0C4A3009B5078FC0B965B4D1E6C89A3DBD3_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
		Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* Task_FromException_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_m7594A0E6E26B701AD7D7F0E73F0A82019C3D2061_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2 = (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
		Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
		((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF151895F5C0BBB74AEE7600FA2F777D0A8D1EBC5_gshared (int32_t ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_result;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromResult_TisIl2CppFullySharedGenericAny_m829FFC9F5B1DFAC382A3E6ABDED634066EADFB21_gshared (Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_result : &___0_result), SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6F0D2ED5B80A24F60E5E020CB3B118E3684E1957_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppSharedGenericObject* ___2_arg1, int32_t ___3_arg2, RuntimeObject* ___4_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		Il2CppSharedGenericObject* L_2 = ___2_arg1;
		int32_t L_3 = ___3_arg2;
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = __this->___m_defaultCreationOptions;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = TaskFactory_FromAsync_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC8780122F9C1523E7B77C018C1A016D39471CCC0(__this, L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA4D7F2612BE37F888FDEBC6BCC9ABB0DCF93ED7_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppFullySharedGenericAny ___2_arg1, Il2CppFullySharedGenericAny ___3_arg2, RuntimeObject* ___4_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg2 : &___3_arg2), SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = __this->___m_defaultCreationOptions;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InvokerFuncInvoker6< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC8780122F9C1523E7B77C018C1A016D39471CCC0_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppSharedGenericObject* ___2_arg1, int32_t ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Func_5_tA8005DA3FCFB2EC811E64C99F8A834C5891CD215* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		Il2CppSharedGenericObject* L_2 = ___2_arg1;
		int32_t L_3 = ___3_arg2;
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = ___5_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
		L_6 = TaskFactory_1_FromAsyncImpl_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE2D4D64DD691A7A1C33C4F67A9E16606C125B69B(L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m78E42B6911823B51D9AE1A90E071856A3A910D53_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppFullySharedGenericAny ___2_arg1, Il2CppFullySharedGenericAny ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg2 : &___3_arg2), SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = ___5_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
		L_6 = InvokerFuncInvoker7< Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = L_2->___Task;
		V_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_asyncResult;
		V_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_7 = V_0;
		NullCheck(L_7);
		TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_8;
		L_8 = Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		int32_t L_9;
		L_9 = TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_TisIl2CppFullySharedGenericAny_m91FFD6A6ED859B8F22E6E190E8D8C9E7E161442D_gshared (RuntimeObject* ___0_asyncResult, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = L_2->___Task;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_asyncResult;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7 = V_0;
		NullCheck(L_7);
		TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_8;
		L_8 = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (&V_2), (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_m6782229814169B966E0C9A291CDB9DBCCB5067D4_gshared (TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** L_0 = ___0_array;
		TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22* L_1 = il2cpp_codegen_ldind<TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22*, TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22*>(L_0);
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		V_0 = L_3;
		TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** L_4 = ___0_array;
		int32_t L_5 = V_0;
		Array_Resize_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD70DF9176547529A9B644ECE46B999E7B347354E(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisIl2CppFullySharedGenericAny_m6DA80337B38B359E2C0ED89B0491833F56AAC546_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		V_0 = L_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		int32_t L_5 = V_0;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mFA5A6BF0BC051A85069AE66C8647C10B5049CE3D_gshared (TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_size;
		int32_t L_1;
		L_1 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(((int32_t)il2cpp_codegen_add(L_0, 1)), NULL);
		___1_size = L_1;
		TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** L_2 = ___0_array;
		int32_t L_3 = ___1_size;
		Array_Resize_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD70DF9176547529A9B644ECE46B999E7B347354E(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisIl2CppFullySharedGenericAny_mCF3CE030276460690AC28FBCC7DAAD9337DAD265_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_size;
		int32_t L_1;
		L_1 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(((int32_t)il2cpp_codegen_add(L_0, 1)), NULL);
		___1_size = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3 = ___1_size;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextHandle_InitArray_TisIl2CppSharedGenericObject_mC0D8C52EDACCEA9B63312CDD41967C556AF04496_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___1_createInstance, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_0 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_0);
		if (!L_1)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_2 = ___0_array;
		int32_t L_3;
		L_3 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (uint32_t)L_3);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_2, (RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		V_0 = 0;
		goto IL_0027;
	}

IL_0015:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_5 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_5);
		int32_t L_7 = V_0;
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_8 = ___1_createInstance;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_9;
		L_9 = Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_inline(L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppSharedGenericObject*)L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0027:
	{
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextHandle_InitArray_TisIl2CppFullySharedGenericAny_mB6E6F4CBD320F8B2398EAFC5D029728B0CF56DFF_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___1_createInstance, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tD27F54E1457D0C330FB86AB38DF1AF5CAD1FAB54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tD27F54E1457D0C330FB86AB38DF1AF5CAD1FAB54);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		if (!L_1)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3;
		L_3 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (uint32_t)L_3);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_2, (RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		V_0 = 0;
		goto IL_0027;
	}

IL_0015:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_5);
		int32_t L_7 = V_0;
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_8 = ___1_createInstance;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_9, SizeOf_T_tD27F54E1457D0C330FB86AB38DF1AF5CAD1FAB54);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0027:
	{
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_m69E901740AA5A1BA1DB56BF6E903819E8360A6F9_gshared (LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___1_size;
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0010:
	{
		int32_t L_3 = ___1_size;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51** L_4 = ___0_array;
		int32_t L_5 = V_0;
		Array_Resize_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_m9F69F603EB19033FF225E25B457B288FF3EA3011(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m979FAC74E1ACB2C4A59ED1F2C66707E97688D48D_gshared (WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___1_size;
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0010:
	{
		int32_t L_3 = ___1_size;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B** L_4 = ___0_array;
		int32_t L_5 = V_0;
		Array_Resize_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m6646EE6AF7569488926F3672FEF3AC3091453D89(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_m2C45260716FF60199EEDC9435E8545C1A8AC5E27_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___1_size;
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0010:
	{
		int32_t L_3 = ___1_size;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		int32_t L_5 = V_0;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_m12C1214F381EE3DE1ABDDCD67922D47344C093CA_gshared (MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** ___0_array, int32_t ___1_size, bool ___2_isBlockAllocated, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ___2_isBlockAllocated;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___1_size;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_size;
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_2, NULL);
		G_B4_0 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_4 = ___1_size;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)256)));
	}

IL_001a:
	{
		___1_size = G_B4_0;
	}

IL_001c:
	{
		int32_t L_5 = ___1_size;
		MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** L_6 = ___0_array;
		MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6* L_7 = il2cpp_codegen_ldind<MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6*, MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6*>(L_6);
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** L_9 = ___0_array;
		int32_t L_10 = ___1_size;
		Array_Resize_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_mB235457CD021CAEB78F1A46E61EE85B010D130AC(L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mA6966A5218C8D7A4AD10F39BA419E598E283C4DD_gshared (TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** ___0_array, int32_t ___1_size, bool ___2_isBlockAllocated, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ___2_isBlockAllocated;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___1_size;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_size;
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_2, NULL);
		G_B4_0 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_4 = ___1_size;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)256)));
	}

IL_001a:
	{
		___1_size = G_B4_0;
	}

IL_001c:
	{
		int32_t L_5 = ___1_size;
		TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** L_6 = ___0_array;
		TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E* L_7 = il2cpp_codegen_ldind<TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E*, TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E*>(L_6);
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** L_9 = ___0_array;
		int32_t L_10 = ___1_size;
		Array_Resize_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mF6D48102F97D6CEEFF8844D21732E754C411A71D(L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_m7096ECDB11995E143D4B39166A45E07091C6D15B_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, bool ___2_isBlockAllocated, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ___2_isBlockAllocated;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___1_size;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_size;
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_2, NULL);
		G_B4_0 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_4 = ___1_size;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)256)));
	}

IL_001a:
	{
		___1_size = G_B4_0;
	}

IL_001c:
	{
		int32_t L_5 = ___1_size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_6);
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_9 = ___0_array;
		int32_t L_10 = ___1_size;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppSharedGenericObject_mCF99C9926BB09726ED355A16D81D4F63A2DA261A_gshared (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_callBack, Il2CppSharedGenericObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D* L_0 = (U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
		U3CU3Ec__DisplayClass17_0_1__ctor_mF86740BD04281AA9189C8D2A13E1FE14425CB79C(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D* L_1 = L_0;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_2 = ___0_callBack;
		NullCheck(L_1);
		L_1->___callBack = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_tBEC0F3A034EBF2B9E21D54E707F1829CC244DA6D* L_3 = L_1;
		NullCheck(L_3);
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_4 = L_3->___callBack;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
		G_B1_0 = L_3;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Il2CppSharedGenericObject* L_7 = ___1_state;
		bool L_8 = ___2_preferLocal;
		bool L_9;
		L_9 = ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD(L_6, (RuntimeObject*)L_7, (&V_0), (bool)1, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m1BF539C01328BDA70BEABD795BFABD5F18D7F8CE_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___0_callBack, Il2CppFullySharedGenericAny ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_0 = (U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_1 = L_0;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = ___0_callBack;
		NullCheck(L_1);
		L_1->___callBack = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_3 = L_1;
		NullCheck(L_3);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = L_3->___callBack;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
		G_B1_0 = L_3;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_state : &___1_state), SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_7);
		bool L_9 = ___2_preferLocal;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD(L_6, L_8, (&V_0), (bool)1, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m7BB1736E93D2D981AB026211DC2C4DF479BBCDB5_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m19B4DC127BF460731A01C36851ADC2998F38B84C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_3_tC37BD742145EFA3FAED5C4D56622BB561CA51E6D_mD16E7F0DD1F2BBEA9F619B0ACDABBFD570A43FA9_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ValueTuple_3_tC37BD742145EFA3FAED5C4D56622BB561CA51E6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_3_tC37BD742145EFA3FAED5C4D56622BB561CA51E6D));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03_mC48B45CF2BFF28C5AE91C56EE9655DAE7E725FC4_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_mBDADF1ADC786B39B214256498A59FD94EE584F8F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEB26E2A0B36283551F9D0F5623DC18F58F310EC2_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mBBDB4A5A127255953DCADBC6D8746E1790491B00_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mC85BADB7F750EEAF18520AFA219ECD6F5A7E1071_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mAC84FFFDC9FFB212F128B6CCFF412C0521B3CF35_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mE880C25C1E2250EB54958DB93F63F2B2D1C27579_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGroupItem_t94751A3CFB736E6D54F3AEE75B3629F013EE3626_m9EDF41BDB0ED2F0D353C17E40F9A4651F3A3E641_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	GroupItem_t94751A3CFB736E6D54F3AEE75B3629F013EE3626 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GroupItem_t94751A3CFB736E6D54F3AEE75B3629F013EE3626));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01923F87293C27083B806F90CF184E91E2ADA4FC_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m38A8E0DAA141B66DE625AFAC57A1CE80494454A6_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBA2AE448CF35E3B49B08412574DC88B5DA2EC5DD_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mCED93CC50AA75D397596087807FA64731F2DB2B5_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m843FD4A465B7204A130644153874A8AD60827141_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m423E18B4B0D7C4E77584B631E7ED05E294ABC9C3_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m878ED409F61640A7AA1B5CAEDB80056DDE43F50E_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_mC60CB167BC480E23DF6A0A65004EB6F911A18A24_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderSpriteInstancedDataLayout_t4129388FA190352FA5AC84729B01A7AB44DFEAB9_m02B746C0FC85A285B8FB2E8F5D69D124642193D5_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RenderSpriteInstancedDataLayout_t4129388FA190352FA5AC84729B01A7AB44DFEAB9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderSpriteInstancedDataLayout_t4129388FA190352FA5AC84729B01A7AB44DFEAB9));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m40A060114DD0D5E3F7675FA592ABA27557C198CF_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m08A4CAA7C6E14E5D640D714D87396B2AA0F73B5B_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m80BE851671D0186EC70EFBD470EDBD5950EB1F31_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mDD88C907F00EBE385A5C4F646221451B2577EEC0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEC2F089A19D09CAB9C63CF26A9E251949E79D8DF_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEC1C52B874AD5BD406704205ABB2229EC53C8587_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	memset(V_0, 0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m835718C92D2C5DA2051794F6922D21453EAC493E_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_Tis__Il2CppUInt32Enum_t030A7AC35A8339F4C1125239BA7E0DF352914770_mB550F72315A962B072051B4E80B0F9D124721798_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_m668408E30034D9AF162BA065A1B8A9190CCB854C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEventQueueEntry_t02094D08CAA3D30841DB516CA5D063305CE462DE_m3684D6D16EE98AB5D2B29B5619F82F2EAB286102_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	EventQueueEntry_t02094D08CAA3D30841DB516CA5D063305CE462DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EventQueueEntry_t02094D08CAA3D30841DB516CA5D063305CE462DE));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSegment_t7476FA02F7FF67504507F796A025E59EA4F8D46C_m25B0EFEA14A299C01F8B7315632486D3D43CED21_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406_mEEBCD3060BF887D029FDD4DB4623E1649E0BE872_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAtlasMaterialOverride_t90720B0A648B7E43B2E50B2533099C59A14B518C_m64924FC512F939F1130ECB22C0C301F0B8DEB01E_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	AtlasMaterialOverride_t90720B0A648B7E43B2E50B2533099C59A14B518C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AtlasMaterialOverride_t90720B0A648B7E43B2E50B2533099C59A14B518C));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAtlasTextureOverride_tDE83955EB2F03720B0B0AD8E5E3E1DF978B187E0_m7A2D82999C04FE2C9ABBD705B4C36A2AD9EF5D0F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	AtlasTextureOverride_tDE83955EB2F03720B0B0AD8E5E3E1DF978B187E0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AtlasTextureOverride_tDE83955EB2F03720B0B0AD8E5E3E1DF978B187E0));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTextureMaterialPair_t04EE2230C3D1AB9D0D390B2288BF490AF6D87476_m7D7592B1489C1D86F8D4CA29435DCEF136A50522_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	TextureMaterialPair_t04EE2230C3D1AB9D0D390B2288BF490AF6D87476 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TextureMaterialPair_t04EE2230C3D1AB9D0D390B2288BF490AF6D87476));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5_m415216260C5A1B093DCFDFE7D5F3AE0165D2764C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BoneFlipEntry_tF73398E37080F7F43E1179CDAA63721A4FD7BDB5));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D_m0E2758E43745E5E9379A8648BAE5973B464178AB_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BoneFlipEntry_t22149989FC21F8E2FD39FBA8EA034BB8D036781D));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAtlasMaterialOverride_t5C36C7E96DFD795612692C656DFE544819023BA6_m498C9D027CDD6C16DA14D51CCC13CD774F5D7867_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	AtlasMaterialOverride_t5C36C7E96DFD795612692C656DFE544819023BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AtlasMaterialOverride_t5C36C7E96DFD795612692C656DFE544819023BA6));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotMaterialOverride_tD4F9203A940F56D51ABB89E576AE2F9A8A82154E_m1B665F418239F321F28D132B3857C2FC25472D0E_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	SlotMaterialOverride_tD4F9203A940F56D51ABB89E576AE2F9A8A82154E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SlotMaterialOverride_tD4F9203A940F56D51ABB89E576AE2F9A8A82154E));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_m35BE06DA15DEDA21DF89D226A0B1F69AE5489BA3_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F_mB8F7CC57F8DEF31914E8FBF2858026B48028FFA3_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAnimationControl_t1823073EF525E1D34D122EFA96F221FFC5A498C2_m2DC5E0B498E2D3EF086A32D1E1291405B32C2C6D_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	AnimationControl_t1823073EF525E1D34D122EFA96F221FFC5A498C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AnimationControl_t1823073EF525E1D34D122EFA96F221FFC5A498C2));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_m8B7C55656AD7F370CA55E403269FCE079A9EE8E0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_mAF2762D430297FCB48E86EA54E10A3CA16DCEB33_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisFontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_m4AC822CD5CEAF4DA1B4035660F409BF9DD47B8BE_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisFontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_m636F71F1C531B9D0CA2D454670A8DCFC77D9EB09_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSerializedEntry_t744AADF737D8DD67E6EA1494B5C76C79637821E6_m7703D41DDD9FEECF6ADBDE06C24F3831E1411BD7_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	SerializedEntry_t744AADF737D8DD67E6EA1494B5C76C79637821E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SerializedEntry_t744AADF737D8DD67E6EA1494B5C76C79637821E6));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TimelineExtensions_FindTimelineForBone_TisIl2CppSharedGenericObject_m3252666C3AED5A277C213740B7B9A8B02D888616_gshared (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___0_a, int32_t ___1_boneIndex, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBoneTimeline_t66A32D344FA49B46BD988D365ABE69B7FD6473B9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* V_3 = NULL;
	{
		Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* L_0 = ___0_a;
		NullCheck(L_0);
		ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* L_1;
		L_1 = Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline(L_0, NULL);
		NullCheck(L_1);
		Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 L_2;
		L_2 = ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3(L_1, ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D((&V_0), Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_000e_1:
			{
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_3;
				L_3 = Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_inline((&V_0), Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var);
				V_1 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
				Il2CppSharedGenericObject* L_4 = V_1;
				if (!L_4)
				{
					goto IL_003a_1;
				}
			}
			{
				Il2CppSharedGenericObject* L_5 = V_1;
				NullCheck((RuntimeObject*)L_5);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IBoneTimeline_t66A32D344FA49B46BD988D365ABE69B7FD6473B9_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				int32_t L_7 = ___1_boneIndex;
				if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
				{
					goto IL_003a_1;
				}
			}
			{
				Il2CppSharedGenericObject* L_8 = V_1;
				V_2 = L_8;
				goto IL_005d;
			}

IL_003a_1:
			{
				bool L_9;
				L_9 = Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB((&V_0), Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0053;
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

IL_0053:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_10 = V_3;
		return L_10;
	}

IL_005d:
	{
		Il2CppSharedGenericObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessJob_ArrayAdd_TisIl2CppSharedGenericObject_mDCE52A8E2103659D82526C1DA33F0E6E74B08C68_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_0 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_0);
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = L_2;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_3 = ___0_array;
		int32_t L_4 = V_0;
		Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_5 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_5);
		int32_t L_7 = V_0;
		Il2CppSharedGenericObject* L_8 = ___1_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppSharedGenericObject*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessJob_ArrayAdd_TisIl2CppFullySharedGenericAny_m72F7EBA3046372925BE120F853A5D61B6B80E74E_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t13F35ABA164B2548C3BAF6DBCDC2FB83F66259D1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t13F35ABA164B2548C3BAF6DBCDC2FB83F66259D1);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = L_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		int32_t L_4 = V_0;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_5);
		int32_t L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_item : &___1_item), SizeOf_T_t13F35ABA164B2548C3BAF6DBCDC2FB83F66259D1);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t13F35ABA164B2548C3BAF6DBCDC2FB83F66259D1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessJob_ArrayRemoveAt_TisIl2CppSharedGenericObject_mBA976F6FBFF4865548AC788FA3B98D656E925582_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_0 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_0);
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = L_2;
		int32_t L_3 = ___1_index;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0014:
	{
		int32_t L_6 = ___1_index;
		V_1 = L_6;
		goto IL_002e;
	}

IL_0018:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_7 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_7);
		int32_t L_9 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_10 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_10);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		Il2CppSharedGenericObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Il2CppSharedGenericObject*)L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_002e:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, 1)))))
		{
			goto IL_0018;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_18 = ___0_array;
		int32_t L_19 = V_0;
		Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessJob_ArrayRemoveAt_TisIl2CppFullySharedGenericAny_mD788DA68A5DA6D9B4D4511A67FD850BDA1C945B8_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t44FBAB2D046005111C37A74EA43E86119B5F98C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t44FBAB2D046005111C37A74EA43E86119B5F98C9);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = L_2;
		int32_t L_3 = ___1_index;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0014:
	{
		int32_t L_6 = ___1_index;
		V_1 = L_6;
		goto IL_002e;
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_7);
		int32_t L_9 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_10 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_10);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		il2cpp_codegen_memcpy(L_14, (L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_T_t44FBAB2D046005111C37A74EA43E86119B5F98C9);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_14, SizeOf_T_t44FBAB2D046005111C37A74EA43E86119B5F98C9);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_002e:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, 1)))))
		{
			goto IL_0018;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_18 = ___0_array;
		int32_t L_19 = V_0;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformAccessJob_CompactArray_TisIl2CppSharedGenericObject_m69D4732D4CA2C20375EF5EC0A16777AF638549C8_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0031;
	}

IL_0006:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_0 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_0);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_7 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_7);
		int32_t L_9 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_10 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_10);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Il2CppSharedGenericObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Il2CppSharedGenericObject*)L_14);
	}

IL_0029:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_002d:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0031:
	{
		int32_t L_17 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_18 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_19 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_18);
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		if ((((int32_t)L_17) < ((int32_t)L_20)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_21 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_22 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_23 = il2cpp_codegen_ldind<__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*>(L_22);
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		int32_t L_25 = ((((int32_t)L_21) < ((int32_t)L_24))? 1 : 0);
		if (!L_25)
		{
			G_B9_0 = L_25;
			goto IL_0049;
		}
		G_B8_0 = L_25;
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_26 = ___0_array;
		int32_t L_27 = V_0;
		Array_Resize_TisIl2CppSharedGenericObject_m2368EE7266665D349010E73D8C23E09C635C3038(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B9_0 = G_B8_0;
	}

IL_0049:
	{
		return (bool)G_B9_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformAccessJob_CompactArray_TisIl2CppFullySharedGenericAny_m1CB38F24515630B2F87871D00308DC0351A2E31F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4F5795A737D54C7EC11569DA51BF7CBC3E1CF296 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t4F5795A737D54C7EC11569DA51BF7CBC3E1CF296);
	const Il2CppFullySharedGenericAny L_15 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0031;
	}

IL_0006:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_t4F5795A737D54C7EC11569DA51BF7CBC3E1CF296);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_4);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0029;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_8);
		int32_t L_10 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_11 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_11);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_t4F5795A737D54C7EC11569DA51BF7CBC3E1CF296);
		NullCheck(L_9);
		il2cpp_codegen_memcpy((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), L_15, SizeOf_T_t4F5795A737D54C7EC11569DA51BF7CBC3E1CF296);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), (void*)L_15);
	}

IL_0029:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_002d:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0031:
	{
		int32_t L_18 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_19 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_19);
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_18) < ((int32_t)L_21)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_22 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_23 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_23);
		NullCheck(L_24);
		int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
		int32_t L_26 = ((((int32_t)L_22) < ((int32_t)L_25))? 1 : 0);
		if (!L_26)
		{
			G_B9_0 = L_26;
			goto IL_0049;
		}
		G_B8_0 = L_26;
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_27 = ___0_array;
		int32_t L_28 = V_0;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_27, L_28, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B9_0 = G_B8_0;
	}

IL_0049:
	{
		return (bool)G_B9_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* Tuple_Create_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m61DE7E645AC7E63FCFEF4C23D698A20FA37C635A_gshared (Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		Il2CppSharedGenericObject* L_1 = ___1_item2;
		Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* L_2 = (Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		Tuple_2__ctor_mCF17A5763381717C7B050B987E97FF2F22362542(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA77107B30389EA4092249AFF47FFBFFE45BB038_gshared (Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* Tuple_Create_TisIl2CppSharedGenericObject_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_TisIl2CppSharedGenericObject_m688D7404056BE704AD407622EF08A8636EB9B03C_gshared (Il2CppSharedGenericObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, Il2CppSharedGenericObject* ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_1 = ___1_item2;
		Il2CppSharedGenericObject* L_2 = ___2_item3;
		Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05* L_3 = (Tuple_3_t2AF28966A14BBAB5D34BD81FE6C3AE7E7910FA05*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		Tuple_3__ctor_mC0598D1C552EABE66E35303D588AEB44AB3A3AF5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* Tuple_Create_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m50472D047C1E80AC52D00E953A92550E8619131C_gshared (Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, Il2CppSharedGenericObject* ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		Il2CppSharedGenericObject* L_1 = ___1_item2;
		Il2CppSharedGenericObject* L_2 = ___2_item3;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_3 = (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		Tuple_3__ctor_m413787D7163635B482B8CB6B959902D16F8A72AD(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF23536EC283D2934606FB2245E28DFB4E9638BF9_gshared (Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_item3 : &___2_item3), SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_3 = (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Unmarshal_UnmarshalUnityObject_TisIl2CppSharedGenericObject_m804E2527602CAF2C9901E7C332D558547F76C6AA_gshared (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_1;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline(L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mB3F08848197461508634619D2125BFB713699361_gshared (Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericAny*,intptr_t,false,false>(L_0,NULL));
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mDA4722F94AF13693FCE1583B641A792D2EA47924_gshared (Il2CppFullySharedGenericAny* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,uint32_t,int32_t,false,false>(L_2,NULL));
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, L_3))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC89D70E498F759E971238CF82E99E44CC68197DA_gshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_gshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,uint32_t,int32_t,false,false>(L_2,NULL));
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, L_3))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* Unsafe_AddByteOffset_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mB279EBEED3107235A83F1DCBEBCC0FF0CB1C358E_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* Unsafe_AddByteOffset_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m8790ABAA53663A7A3FC0270EFE53C3EB3D874E50_gshared (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* Unsafe_AddByteOffset_TisAnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03_mA99B42456F7F417100375B5F94FCC03A16F124B2_gshared (AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Unsafe_AddByteOffset_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA2075B625F1AB4324C2456D74BE29619DAA1CF73_gshared (bool* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		bool* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<bool,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7A80584F05268AB9D9BA488678556DC7F23392AB_gshared (uint8_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AddByteOffset_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m84D81937D031E8F901409C5BEAC76302AD9A3E05_gshared (Il2CppChar* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Il2CppChar,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* Unsafe_AddByteOffset_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB26CD5B0101C2D820642BA9473AF4CAFBE987CE3_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Unsafe_AddByteOffset_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mEDF71C7218BFC2F87EA8B19AD63FD2F6A8C6B4E5_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* Unsafe_AddByteOffset_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m4C73D48C5307C635649B5854BB2041E5909148D6_gshared (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_AddByteOffset_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE3F93B4D9D017D3D13236A4FADC55908F3938F8D_gshared (int32_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int32_t* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<int32_t,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_AddByteOffset_TisIntPtr_t_m4F825FC0085FC5E63BDD33284411567EF15BB519_gshared (intptr_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		intptr_t* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<intptr_t,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* Unsafe_AddByteOffset_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD6DDA1FFDFB0F5AD21D9923D517B2EE3BF8DDE83_gshared (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* Unsafe_AddByteOffset_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m7F1D7389A61A4F7CEEE97EF30626296DCC62931D_gshared (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* Unsafe_AddByteOffset_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m79B425A93B36F24FEC92E1EA0CDD6D5B93672020_gshared (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* Unsafe_AddByteOffset_TisNativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9_mB9CF8B6DF40F47F8517B021932ED6D70882BD6E9_gshared (NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* Unsafe_AddByteOffset_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m50D553EFFF81A6964E66C184B16FB78D5F8D7F7E_gshared (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* Unsafe_AddByteOffset_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mAA1807DF433A5C6FED1BFF3E2F9D0E482F7B96AE_gshared (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_AddByteOffset_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mF476D15C51A60B9921602D35A3935D3D59FF05C0_gshared (int8_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		int8_t* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<int8_t,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* Unsafe_AddByteOffset_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB0D050D3172AE8B4526848020170EC1408149BFE_gshared (float* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		float* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<float,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* Unsafe_AddByteOffset_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_mD28839C5D19354D5BC0736EAF17A17CA8E1B9603_gshared (UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* Unsafe_AddByteOffset_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m55271B57A59C7AE3F0142FBC48B640889EBC9F02_gshared (UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* Unsafe_AddByteOffset_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m271385F1C9DC12F513B54CDABB88A8BBCC7E97E8_gshared (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_AddByteOffset_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m16C91DE2AA40E6B24D70110472F63BFBFEE91907_gshared (uint16_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		uint16_t* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<uint16_t,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_AddByteOffset_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE78187DC3BB9609D6DADDB06380F8FD6C4CAC41C_gshared (uint32_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<uint32_t,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* Unsafe_AddByteOffset_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCC61969701CEF7BF211B382FE6B5BE94A14638C8_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_AddByteOffset_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEA1591C8E36B4DA823A8DBE14E22E836D3E59455_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* Unsafe_AddByteOffset_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0F4F8D9A87C5AEE3DC9CE8A7B6D12E8434C65159_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** Unsafe_AddByteOffset_TisIl2CppSharedGenericObject_m9B40BB9CA728388344587C8DCC24A290954B61BB_gshared (Il2CppSharedGenericObject** ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Il2CppSharedGenericObject** L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Il2CppSharedGenericObject*,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m023762698D869AA8F4D477B66833C0BCFC1EA25C_gshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_gshared (Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Il2CppFullySharedGenericAny* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Il2CppFullySharedGenericAny,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* Unsafe_AddByteOffset_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2B33645A82DB89EDF9724B2C69DCBDFCFE6E2BF3_gshared (TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* Unsafe_AddByteOffset_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_mBE88862E321678830D217C5BEC6FED01F35C80B3_gshared (BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* Unsafe_AddByteOffset_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m64B1F147EC050BD4D696525C35BA620F7B25FE99_gshared (ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* Unsafe_AddByteOffset_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_mCF647633CFA522C9217A30984CBA0A2082A8CE58_gshared (ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* Unsafe_AddByteOffset_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_m7BA2C3BF6D282ADFEDC7FD5FF942EAEB1CA0E767_gshared (JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* Unsafe_AddByteOffset_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m22EF5B9366BF036ECA674E8040C8F5D2CE0CB292_gshared (TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* Unsafe_AddByteOffset_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m753153E18ADEC7D4BAB67394760072FE995C3758_gshared (TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_mEFCD9F27093DEB04CA603DC1C6F306CE6DCCDC3C_gshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Unsafe_As_TisIl2CppSharedGenericObject_mEA282A8D403A0B743C8FF21F53E3421FFE98BCCC_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_o;
		return (Il2CppSharedGenericObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAF06A659941D15118FC1E4800E3A7A0F262628A4_gshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mE85961ECFFC7310EBEF309E6E67AD0FED2F9030B_gshared (Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericAny*,intptr_t,false,false>(L_0,NULL));
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m088920550101BD3FA6B40E99A5F107C35BE752FA_gshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mD269D4D95DA51D3CF4E4025805638814158802A3_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m731B9B0C5A4B349E4545E7AAAB44731B9ADB6597_gshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_mF6B28073E683AAE891ED373C5F5F29DA2A0708A2_gshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m42C276800437B81F51F1F38619B499B6AAFB0021_gshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_mF9DAA41D685A65A581864DBF65CE23C6F7E72BDF_gshared (uint8_t* ___0_destination, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6* Unsafe_AsRef_TisArray32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6_mA61D216FC909FB8B42CB2EDBD3146EF82808E8D9_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___0_source;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Long1024_tEE887C506947419DC829213E6C7483D80AF5659F* Unsafe_AsRef_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_m55889A5425117884EC38A5171F72C0C46A4FEBD9_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___0_source;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Long1024_tEE887C506947419DC829213E6C7483D80AF5659F*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m32B7913D5C99D58667B8F989FEFA15BF74484607_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___0_source;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Il2CppFullySharedGenericAny*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6B9F350F0F53569AA71C7448E87D47E49E62F38F_gshared (uint8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint32_t L_1 = sizeof(uint8_t);
		int32_t L_2 = ___1_elementOffset;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_Add_TisIl2CppFullySharedGenericStruct_m4625509781F2C6C3F2D7CD81A4F403FBD0C5F68E_gshared (Il2CppFullySharedGenericStruct* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3ED0FC7E488CFFBF3E490B4E083AA7F43D01F605 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_source;
		uint32_t L_1 = SizeOf_T_t3ED0FC7E488CFFBF3E490B4E083AA7F43D01F605;
		int32_t L_2 = ___1_elementOffset;
		return ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_gshared (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB6573DEE60FA5B31CC3A9B663EABD82C5FDF5F34_m4110F7060636F731667CD4B7781E0290A86A6578_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6CD22D504947E007577B184FDB3044C5331C3213_mB7214786725D1018B6B5B9E54C4D3FFD6B7D6AEE_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_mC94DEDD2611C7C84632B957D3FDB324F2C85EA7A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FCA4B2B694E482A4A9EA48502834457DB24A612_mE5AD6124B635986A2FD0DB831D1FA903DFBF9123_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m3446503708EF53FF3664993B371F061F2C98A44F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m19F7A1665A096A9F7E8897858E2C1A7F40A02D8A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1BF68DC9ACACFA6FDBB0139DC16493B0F70F132F_m28939AED1229A6FD6FA2914C24EBC8191B097BC1_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m2436A8F36CBABD7FF2C312473C14CFB743FEB5FB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF7DAEC11C637A41FF2F5A4D227ECE155AE4F3FC9_m9D0B75E725BCB2BF7B4BA7F57DA8EC6577CF6554_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t297C6D22F0E8C2FABB0F241AA540094D060A51D3_mDD1B1F984389C8BA91257345B1D3AC789C21099E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t093A30D64849BACC93EAA6802655C46F61FF8163_mDBFDD38DA99E3B805738860F66ACD5B277E43E35_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m55CBD42505397C2C585C193FA2DB9264910F8D99_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mB4C86C47B1FD997F67EC91E35AB9468FE53E624E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m95894D62A7100CDA1E8E9ECDF7623FF50802BB73_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2B54DEAE04DA7718238C600DEC6801202F182CAB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE326FE5077B7826CA97AFD52249B22B1E6F673_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818_mB94030527368B8CB6C6A4E9C84DAED859A8663F5_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m390771D188BFC7495FCB3A56351B5E401291B516_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mE27D3F37C819B68DEF46727F1C111BA5ECE8B7EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mEB6296776C95A2A3440CABCB121B9DE34745F87C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA8FDB503553DAE8B5D80E26AD5BFEC6AA2EE2977_m392CC283C281ADA579B1BF1E5AF86EA37376DA6F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m4D0481064DF16017FB4BA2602339F52B31AF4C43_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m336B97C32947D1D53AC28694E7164925EDA450BE_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7AA9B9EDA82D3FF933E70009AB03B0EC7CA41059_m23EF9073EE9816840857FE3C4E98214C6D52FE6B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m08598794D3B261C40B450629DF5F06602A5AE07E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m312BA37FED97B204682E60E5D9443F66C3E54BB1_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA7B763C987A9DA044963E6599D62CE107B17BEE1_mAA18417E6CA85DA4D273F7E0C9EB9A6B76C4751B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m45B49B28BF4C4D3C67E3E97242A22A0ABC6DEFE3_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m4F85DCE87BDB18E498D0AEC2CAE8885182B9B623_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDE5E63667E5461CC2B49AF3FA944AFE22FFFC3D6_m89D6DE5ECEC7CBA37D6150054368A49E564B1854_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mF2F331D655F94C7D53A2A6CC53FEA77004CC0D8F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m850FB9C9422BCC4F42F36EF592EE59C881EE2312_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13_m5D8720B8C5DCF39EF395B27C7BDD1F1C1A0C2DB7_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCB825B1D70E67004BF5727535B982744D7748AEC_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m1CA23B5FBDCD8201648A712DC74ECD78735CFCDB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8226F184077F6C39D92A13C8E8FC1B455548ACED_mA8DE6E492D9FD43976A9B7EC2419C2711C1D2ED8_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m70E9545B366314302788F0E1BC38923FA9A615DD_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m27514475B79403724F06D2D179196E9E53AF6088_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t73C026007A3FBF66031EB16A398B618D2CD46123_m81EB5BADDA97F9F47690EF2EA73B5E2FC04A2CDC_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m6751488A2A9157A9C997B3565468257C18BED296_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m21C65DFDEFB5D4DEF712F149EE79389591864AB7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t968C45BFA95CB6F1910722DA75ABAE2D7D418263_m9E73F7ACA9D66860E914C2DA4A6D9311502EBB67_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mD9339F750CA0D2D3BF8C7BDEF41B48D06193F67A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6E1227F119951939CF6F08C6A1948051ED483009_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF5AA4A895EA1D19CEB918E04CACADA5DCB0A13C6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m763C773E8E8A2C722C8D68FB0140B7554C7936B4_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_mBAC80201764318E3EA5F8128D39E09641398AE17_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_mFDE18EBED901C94D8D5C6C8ABB0926BAE30C3B00_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m7C9676413764B9F46479956AB3EAE4D4D3987344_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mB19E41A773BE59E0A35D4E683298E0B3248CFAB0_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m56ABF5B734F197DE6EE0D90C55A0585D3C577286_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m7EC424F97CFAB6AB7BFD7207C89C3185EE211913_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m11FD71BF1A7D98E85310EF3E4FB409CC0C522D9A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFB00C1A05598BAF33AA36449BE3505ACC2D83D05_mFB2782F313C32EB6A95994900D973E0D25908C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FEB40E99B7AC93B17218E31E52424937F30C370_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA49AAC24139BE07A19FA45DFE07A603846035C54_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tCCFCC99E6C106BA1E17384248B2EB554F107D8F9_m022B9E6E98AF8BEFC1A7CA4E872758F0A7A4E50F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mBB8E03C1CCE04BAA49DF0EF1A08717DA4ABA9306_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7BDD582A0A2C440C146F9699D10B6FF35C0C027C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_mA7E20A1B9EBF3F0C025AEB17B4218DED4B1FEC3F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mC4B490EDE532D37CAA39356FC17C8FB44D074891_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m742C058FF2011B81DD081BA92DC32E0E34CEAAC8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2_m339635A9CD7DE84F0026C1D0AD4ACFEB0FDC7DF0_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCE248C5AF70A79CF4BEF0C2B3DDBDCACB5CC53F7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_m92D326AE7D9C6FC84D0197EAA7F59131FCACEC19_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817_m481B6255CC2EBB63A42623A3A80AD906330E6F8C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t04402A718BBE3DED86F441E9EA40E28F610AC7BB_m06F70D8E155862746C2DDB10B3F0005462F38A82_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4480F2E168ED748DE712B196BEB840CA6FFECCEE_mC18C900487C1B8B317F4A1C493534E9201407F50_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE88C9B7AAA013F8306AC4EA24A81855110A32D41_m0527D65DDABDDF4C68151031401C2F27C19D96FF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBABFD994AB355FF15A2FDF9B297481F19BD318E3_m98B683C331E82560BF2704208B540E316ACDFF78_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBCBF8B8E1CD4F63F3840DC83691B86A3BA432563_m1443C0DB92D8423E459499936018C67AEAF9C150_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mCFF3A02BFA327100E27F86AA90F94EA85D86D689_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m9B25263D143C20F712C84EF45A8BFD1E0B24F3EF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mDE2571CBA20CB8E3E7E99D457DC146A9C246BBCF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t92752E49562D92776F63E0ED73ED54C52098D463_m145878868F4752C03FA0E2BB9F339FFA0FE31FF6_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m8CE31E5AA62C5936D8878B97DD42821053507093_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8F6F6E087BE57A1D866727D20357D5EA7D9A986A_m873E2E2443728E1D35D0F23E3F6631F97D4399EA_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m14669F7B07F84E907048C38614B3BBD7DE0B4C63_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t158866ED61419EF07D11EDDE3B3CE6730357B2C5_m2392190CC2B659EEF5F97F651ADF1FBB37BF5311_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m0A4863DD32FC0F3C1A06F8D8C03E2DDA275696D3_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7BB9E461CA77F27E85AF701FB477AF8F609AE37B_mD4F625BBF2D4E34CA9DC0F468BC4482476EBA6CA_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mEBA77C64C399D4BCC37EE3F3D159A5E94C33C6D3_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mB656C24F20B80413C265EE41F3C5A03DFF6E9F1D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t724DE9BF3376363363522DBAFBA4AC429271CF24_m2F81F84961E1F13E03070D0518CCF8E192659D6E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8D990A8D391065FD74E77A00692F7A4E622C60D9_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mBAF2B92E0552F537819887C61B8292F6322C7E9B_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD5F577DCAC665179FE14F05229ECC74B81FE0167_mDF535988FCDBB03563CD522ACE4535F43F8D6328_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m8CF58EDFCC08B64D6585A9B478F8BA7A893E2432_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mB8AC62E64457D9339C2CBB700D08547D4ECB7D07_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1F0C90344DB347D9FC2A0FCB003F49523D39E0D8_m7418BEC212033BD119FEEB687941A91D1D8C5D59_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m85B0A5655D296C4CF794FB1B0D3DE8CCDF215349_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m4C55115F37414B22433DA39CD2CF5BD47F0C7490_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD626B076AC0782276084575D7E81BE4BC4A56297_m2610F85D79111F0298D18D90D26B9598DF8430F9_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m3BD3E1983B717570B02921776FFCE5FC7D384E9E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m762195E01E5252C05F51AC1A9FD975997C5D821C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AE32D30BA8577085EA329965010751D5B5F4927_m4E59129FEFD6415478E0081571AE901239E65E0E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m4D2F36005BE36038EF5F2610C491C00A58AC8ECD_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mCBD9434213949BAD1342E5CFD46D43E4ACE3C1EC_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4492F0DC39A766C7CEB6D0363E9B5AF0D1CC1B59_mD37C959B5C392A0B1D81CB4BF410603E88BC751C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8D9C30C1CAD2ABCFEE04D493E65332ACAB8D2871_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_mBDF7F12D40AD2324F0BD4468D64580AC99493102_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA2A267591D03FD490BACEAF4B0BCAF0634483396_m70D5D4158D45BFC9E5B49ABE86E203A069E34D18_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_mBCE96454E464CE8F93208CA3B130CBC832499681_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m24D02865E802C98CB739249158D3CCFB138381CA_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t547B9C0D47210593C75564A860AF4F567B6FA433_m29FB3A441E195F93A15FED72BEC04796CEE09368_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mDB8A80750B9D19690C7D6E72259D5898D209710B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_from;
		return (Il2CppSharedGenericObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppSharedGenericObject_mE24DEF94AFB77ADFE585EA284FD61661D5B4953A_gshared (uint8_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_from;
		return (Il2CppSharedGenericObject**)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		return (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* UnsafeUtility_As_TisUntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mE061863B1D6CE66A69A87708F3E0B73E036F60FF_gshared (UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* ___0_from, const RuntimeMethod* method) 
{
	{
		UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* L_0 = ___0_from;
		return (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** UnsafeUtility_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7E01BE5B3130A632C43D1F86A8781C30A93D3DCF_gshared (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_from;
		return (Il2CppSharedGenericObject**)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* UnsafeUtility_AsRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m25A044E35DB3B85E460623F4CA2560AB861C8184_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (int64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* UnsafeUtility_AsRef_TisTableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE_m12F6D8C38FB3A00F6AAF703301922FD0BF889CCF_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisTransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F_mE024431C4708C5F8EDAF9870B3F873C687ED97F1_gshared (void* ___0_ptr, TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F* L_1 = ___1_output;
		UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F_m51C7141179672BAA76EF187CCE9B49F79EAB0299(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_mC934A088EB949F95B9C233D56C2BC21136199311_gshared (void* ___0_ptr, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* L_1 = ___1_output;
		UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisTransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4_m7C916FDF1EC36FCA86E1FC1910362DDE14418736_gshared (void* ___0_ptr, TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4* L_1 = ___1_output;
		UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4_m5AB8073872C76A7B897F6564FFC46A5B0C1A4F15(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisTransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190_m62AA11E6B8900F6343C4F81FB311B38489B1B10A_gshared (void* ___0_ptr, TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190* L_1 = ___1_output;
		UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190_mA7FCB1EA2194DE97479E6D4C79D612CF0FB8D4EC(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___1_output;
		((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 UnsafeUtility_GetByteSpanFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mD842A1F6BE61547C07ABAD58018537BECBF36854_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_1;
		L_1 = NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2;
		L_2 = MemoryExtensions_AsSpan_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m4C688940B0B82D2C4F2705B9FA1CB6FB40D0C46B_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = MemoryMarshal_AsBytes_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m9A5423B447082566273DC1B802AC541B91781C92_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 UnsafeUtility_GetByteSpanFromList_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1FA6DD3790513AD8D8BB853699088F460835824C_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_list;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1;
		L_1 = NoAllocHelpers_ExtractArrayFromList_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F97FC7D40BA0FC71130687AEFD440306EED539D_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_2;
		L_2 = MemoryExtensions_AsSpan_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m226223EC85769523E588150A5C5E8605A1A8EB23_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = MemoryMarshal_AsBytes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5F7FC4662820F75282DD96C546F0216AE1C65E4F_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 UnsafeUtility_GetByteSpanFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFC15A3D969BBC576088A9E1C807355F692DD0B01_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_2;
		L_2 = MemoryExtensions_AsSpan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9113C67EE5D3D977C3B18E2B72F1587F88934930_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = MemoryMarshal_AsBytes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m400407DBD1147F424F2DD5D79914655E180A7897_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 UnsafeUtility_GetByteSpanFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF99017B10DDF6E0F06175C3B2FB2A0E0097E7A11_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1;
		L_1 = NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_2;
		L_2 = MemoryExtensions_AsSpan_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m252A89F7FA2D16119704741349D811941B11F317_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = MemoryMarshal_AsBytes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC07BA3B1CBEC83C8F8B1C1D1604BCBF26C892354_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 UnsafeUtility_GetByteSpanFromList_TisIl2CppFullySharedGenericStruct_m7644779593338EF0C449D6761DD2578F7DAEB46E_gshared (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_list;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1;
		L_1 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_2;
		L_2 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F_m51C7141179672BAA76EF187CCE9B49F79EAB0299_gshared (void* ___0_ptr, TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F* ___1_output, const RuntimeMethod* method) 
{
	{
		TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F L_2 = (*(TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F*)L_1);
		*(TransformJobData_tF0FA739C70A77D3F16E9ACC8A1284993D31DAC0F*)L_0 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A_gshared (void* ___0_ptr, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* ___1_output, const RuntimeMethod* method) 
{
	{
		TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC L_2 = (*(TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC*)L_1);
		*(TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC*)L_0 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4_m5AB8073872C76A7B897F6564FFC46A5B0C1A4F15_gshared (void* ___0_ptr, TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4* ___1_output, const RuntimeMethod* method) 
{
	{
		TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4 L_2 = (*(TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4*)L_1);
		*(TransformJobData_t13902B16CF7C6BB43A7A916637B8BE983764F1E4*)L_0 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190_mA7FCB1EA2194DE97479E6D4C79D612CF0FB8D4EC_gshared (void* ___0_ptr, TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190* ___1_output, const RuntimeMethod* method) 
{
	{
		TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190 L_2 = (*(TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190*)L_1);
		*(TransformJobData_tB9528D71F68128492E57548A4F58F07A645D4190*)L_0 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E_gshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_2, SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtility_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mAD2E8BB847754DAFE09F5868548BEDDA822A2617_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_6 = (*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F UnsafeUtility_ReadArrayElement_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mDD04C3CC823DEC02B652AF31F413CCB11D775C64_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_6 = (*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(bool);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		bool L_6 = (*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 UnsafeUtility_ReadArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA77EAA0B012867DC63EF516448C2F5FA24F96CD5_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = (*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint8_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint8_t L_6 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B UnsafeUtility_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m27C9AC27DE15EAB418444BE62AD9C2CE19317991_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_6 = (*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtility_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mFD2AC538DAACCF1C5AAE44C0B4758D3A6A4C54EF_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = (*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B UnsafeUtility_ReadArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m636B16C7FAE04CCA69A15700712ECB9E95585812_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B L_6 = (*(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 UnsafeUtility_ReadArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m21A5E02751759C9BA429F30B068C328D019B53EE_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 L_6 = (*(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B UnsafeUtility_ReadArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mAE8FEB32714B69865DA53A642D5E181EB2F8809A_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_6 = (*(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UnsafeUtility_ReadArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF2AFA3F9C5D4F6BDB6CBAC3D8C29A51CA8D71EC9_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int16_t L_6 = (*(int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(intptr_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		intptr_t L_6 = (*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D UnsafeUtility_ReadArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_mB6F5D86C1E8F6A0BEACDD6D4F0B693CCDB4277C0_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D L_6 = (*(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 UnsafeUtility_ReadArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mA754D188685B180A0F497FD811E5532A56743BD2_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 L_6 = (*(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF UnsafeUtility_ReadArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mE609B853DC7087CE4C10CE2F308B1B9C4BE94115_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF L_6 = (*(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtility_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2ED1FB77CEDEF6090E5857DAA0CE6F3AFC6C35E4_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtility_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m200AA8F5A5776F6CAEA9E79B6551EC01D4316611_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtility_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mEA45FBD76E48DCE01C215C48D8C647B488C60516_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_6 = (*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 UnsafeUtility_ReadArrayElement_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_mC6184A79922ED3EE99EAEBCC22E604F77BBB6198_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_6 = (*(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtility_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mEB527AAA71722D961891591C3A13D3FDD83B42A5_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C UnsafeUtility_ReadArrayElement_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m4C9D2C2EF0FF779E8C7DD6FE2FEFF74E3CE1D3E7_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_6 = (*(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 UnsafeUtility_ReadArrayElement_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m0C547B842C95E80E226B9661DDABFD2CE7C13D84_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_6 = (*(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtility_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC90C0EE3D32DDFEF22B982217F27BA07286AC2B7_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 UnsafeUtility_ReadArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m98C26C5BAD492EBCE9F5F45EEADDD18D3E6E86B3_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_6 = (*(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA UnsafeUtility_ReadArrayElement_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m3FCDF61697CF6B7C3EF036153A2C6F0C22DDAC6F_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6 = (*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE8E8016F9D75B5FE0F784B0B6EBEF71D6B31D134_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float L_6 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 UnsafeUtility_ReadArrayElement_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mF130EF76844CB7CCC773ABCA0C5B74C25EEEBB11_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_6 = (*(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint16_t L_6 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint32_t L_6 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m113285A6894774BBBB284A644C2D7094F30AB442_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtility_ReadArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mD87C3A7372D142B0EA88A8FF8AD08122940B359B_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float3_t7600B73F092B37F484B12910A5269F30C778D31E);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_6 = (*(float3_t7600B73F092B37F484B12910A5269F30C778D31E*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 UnsafeUtility_ReadArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m5F208C837C6C181F7E81B6B6A36ECB74684DBA9F_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float4_t545A994996126766890C1F28B43EA823F2410190);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4_t545A994996126766890C1F28B43EA823F2410190 L_6 = (*(float4_t545A994996126766890C1F28B43EA823F2410190*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA UnsafeUtility_ReadArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mD8EE7D8C864807FBCEC4DDC8FA4F49020E69CDAD_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA L_6 = (*(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_tB123E869131C6102341F8F9AA01726E0E7C2768D UnsafeUtility_ReadArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mEF7B9D6AC26FFFC21DE942E43BF4A9F61B241442_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_6 = (*(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 UnsafeUtility_ReadArrayElement_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mAE76299115B8DAF9CC8D891843EB2B6F2D05E39C_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 L_6 = (*(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 UnsafeUtility_ReadArrayElement_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m7242E99297B833234A0134AE7D6D768F3EBBA560_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 L_6 = (*(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 UnsafeUtility_ReadArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m41A161AA831DC15C0FFE00918C25978D07864CD6_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_6 = (*(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E UnsafeUtility_ReadArrayElement_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m8296FC9699A4F871BFE48E4ED806D453D5E0A6E1_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E L_6 = (*(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 UnsafeUtility_ReadArrayElement_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m075E633634A8A2A42314CCD5915242B45D592214_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 L_6 = (*(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 UnsafeUtility_ReadArrayElement_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m73AB31141D65F05F9DB72E2094081880B3D41A2A_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 L_6 = (*(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 UnsafeUtility_ReadArrayElement_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m514F63634EDF147822DA76CC2737C04A291C3633_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 L_6 = (*(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 UnsafeUtility_ReadArrayElement_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m57D8F1E9016653B8E40A7ACE4DCBA4B892189F01_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 L_6 = (*(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F UnsafeUtility_ReadArrayElementWithStride_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mABB5F0B253D214197DB592D4D69A8441627BB450_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_6 = (*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 UnsafeUtility_ReadArrayElementWithStride_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mCFB1E5189E080E2AF141F4303ABE96EB1A53EF02_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = (*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC24C19ACD67D7D24118C4917A58301288B0FD2C7_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint8_t L_6 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtility_ReadArrayElementWithStride_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m102363371067BF681D20A30ECAFD94862849D662_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtility_ReadArrayElementWithStride_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6F9B8F3929D81E25CDAA7C2ECA45FB9A4F6F7388_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C UnsafeUtility_ReadArrayElementWithStride_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mE01309AE51871316494668E4BE0616B1280F2221_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_6 = (*(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 UnsafeUtility_ReadArrayElementWithStride_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m6F22CC47E4DDAC2A6201E9F90EE4F261FB622989_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_6 = (*(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0823BA8B97766FCB2A9F676A2CA04C9E5E4EDE8_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElementWithStride_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD4431DDC736E0AF53C4D7C0310CABAE1D6D7C15D_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mA2FA845DC97225E057F01D0D4161C801EECA284F_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtility_ReadArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mFE1F5718E0BB21814F12FFABF6F1225692861091_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_6 = (*(float3_t7600B73F092B37F484B12910A5269F30C778D31E*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 UnsafeUtility_ReadArrayElementWithStride_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m71B2FBFEA4848452F729588E8972E295DDEBC1C8_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4_t545A994996126766890C1F28B43EA823F2410190 L_6 = (*(float4_t545A994996126766890C1F28B43EA823F2410190*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA UnsafeUtility_ReadArrayElementWithStride_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m3BE690C36F52C9F28DCE27A1D58EF0E7FCD76638_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA L_6 = (*(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB6573DEE60FA5B31CC3A9B663EABD82C5FDF5F34_m4110F7060636F731667CD4B7781E0290A86A6578_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB6573DEE60FA5B31CC3A9B663EABD82C5FDF5F34);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6CD22D504947E007577B184FDB3044C5331C3213_mB7214786725D1018B6B5B9E54C4D3FFD6B7D6AEE_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6CD22D504947E007577B184FDB3044C5331C3213);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FCA4B2B694E482A4A9EA48502834457DB24A612_mE5AD6124B635986A2FD0DB831D1FA903DFBF9123_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5FCA4B2B694E482A4A9EA48502834457DB24A612);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1BF68DC9ACACFA6FDBB0139DC16493B0F70F132F_m28939AED1229A6FD6FA2914C24EBC8191B097BC1_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1BF68DC9ACACFA6FDBB0139DC16493B0F70F132F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF7DAEC11C637A41FF2F5A4D227ECE155AE4F3FC9_m9D0B75E725BCB2BF7B4BA7F57DA8EC6577CF6554_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF7DAEC11C637A41FF2F5A4D227ECE155AE4F3FC9);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t297C6D22F0E8C2FABB0F241AA540094D060A51D3_mDD1B1F984389C8BA91257345B1D3AC789C21099E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t297C6D22F0E8C2FABB0F241AA540094D060A51D3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t093A30D64849BACC93EAA6802655C46F61FF8163_mDBFDD38DA99E3B805738860F66ACD5B277E43E35_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t093A30D64849BACC93EAA6802655C46F61FF8163);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818_mB94030527368B8CB6C6A4E9C84DAED859A8663F5_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA8FDB503553DAE8B5D80E26AD5BFEC6AA2EE2977_m392CC283C281ADA579B1BF1E5AF86EA37376DA6F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA8FDB503553DAE8B5D80E26AD5BFEC6AA2EE2977);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7AA9B9EDA82D3FF933E70009AB03B0EC7CA41059_m23EF9073EE9816840857FE3C4E98214C6D52FE6B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7AA9B9EDA82D3FF933E70009AB03B0EC7CA41059);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA7B763C987A9DA044963E6599D62CE107B17BEE1_mAA18417E6CA85DA4D273F7E0C9EB9A6B76C4751B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA7B763C987A9DA044963E6599D62CE107B17BEE1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDE5E63667E5461CC2B49AF3FA944AFE22FFFC3D6_m89D6DE5ECEC7CBA37D6150054368A49E564B1854_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDE5E63667E5461CC2B49AF3FA944AFE22FFFC3D6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13_m5D8720B8C5DCF39EF395B27C7BDD1F1C1A0C2DB7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8226F184077F6C39D92A13C8E8FC1B455548ACED_mA8DE6E492D9FD43976A9B7EC2419C2711C1D2ED8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8226F184077F6C39D92A13C8E8FC1B455548ACED);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t73C026007A3FBF66031EB16A398B618D2CD46123_m81EB5BADDA97F9F47690EF2EA73B5E2FC04A2CDC_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t73C026007A3FBF66031EB16A398B618D2CD46123);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t968C45BFA95CB6F1910722DA75ABAE2D7D418263_m9E73F7ACA9D66860E914C2DA4A6D9311502EBB67_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t968C45BFA95CB6F1910722DA75ABAE2D7D418263);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_mBAC80201764318E3EA5F8128D39E09641398AE17_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFB00C1A05598BAF33AA36449BE3505ACC2D83D05_mFB2782F313C32EB6A95994900D973E0D25908C3C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tFB00C1A05598BAF33AA36449BE3505ACC2D83D05);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tCCFCC99E6C106BA1E17384248B2EB554F107D8F9_m022B9E6E98AF8BEFC1A7CA4E872758F0A7A4E50F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tCCFCC99E6C106BA1E17384248B2EB554F107D8F9);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_mA7E20A1B9EBF3F0C025AEB17B4218DED4B1FEC3F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2_m339635A9CD7DE84F0026C1D0AD4ACFEB0FDC7DF0_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_m92D326AE7D9C6FC84D0197EAA7F59131FCACEC19_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817_m481B6255CC2EBB63A42623A3A80AD906330E6F8C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t04402A718BBE3DED86F441E9EA40E28F610AC7BB_m06F70D8E155862746C2DDB10B3F0005462F38A82_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t04402A718BBE3DED86F441E9EA40E28F610AC7BB);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4480F2E168ED748DE712B196BEB840CA6FFECCEE_mC18C900487C1B8B317F4A1C493534E9201407F50_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4480F2E168ED748DE712B196BEB840CA6FFECCEE);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE88C9B7AAA013F8306AC4EA24A81855110A32D41_m0527D65DDABDDF4C68151031401C2F27C19D96FF_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE88C9B7AAA013F8306AC4EA24A81855110A32D41);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBABFD994AB355FF15A2FDF9B297481F19BD318E3_m98B683C331E82560BF2704208B540E316ACDFF78_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBABFD994AB355FF15A2FDF9B297481F19BD318E3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBCBF8B8E1CD4F63F3840DC83691B86A3BA432563_m1443C0DB92D8423E459499936018C67AEAF9C150_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBCBF8B8E1CD4F63F3840DC83691B86A3BA432563);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t92752E49562D92776F63E0ED73ED54C52098D463_m145878868F4752C03FA0E2BB9F339FFA0FE31FF6_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t92752E49562D92776F63E0ED73ED54C52098D463);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8F6F6E087BE57A1D866727D20357D5EA7D9A986A_m873E2E2443728E1D35D0F23E3F6631F97D4399EA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8F6F6E087BE57A1D866727D20357D5EA7D9A986A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t158866ED61419EF07D11EDDE3B3CE6730357B2C5_m2392190CC2B659EEF5F97F651ADF1FBB37BF5311_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t158866ED61419EF07D11EDDE3B3CE6730357B2C5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7BB9E461CA77F27E85AF701FB477AF8F609AE37B_mD4F625BBF2D4E34CA9DC0F468BC4482476EBA6CA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7BB9E461CA77F27E85AF701FB477AF8F609AE37B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t724DE9BF3376363363522DBAFBA4AC429271CF24_m2F81F84961E1F13E03070D0518CCF8E192659D6E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t724DE9BF3376363363522DBAFBA4AC429271CF24);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD5F577DCAC665179FE14F05229ECC74B81FE0167_mDF535988FCDBB03563CD522ACE4535F43F8D6328_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD5F577DCAC665179FE14F05229ECC74B81FE0167);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1F0C90344DB347D9FC2A0FCB003F49523D39E0D8_m7418BEC212033BD119FEEB687941A91D1D8C5D59_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1F0C90344DB347D9FC2A0FCB003F49523D39E0D8);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD626B076AC0782276084575D7E81BE4BC4A56297_m2610F85D79111F0298D18D90D26B9598DF8430F9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD626B076AC0782276084575D7E81BE4BC4A56297);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AE32D30BA8577085EA329965010751D5B5F4927_m4E59129FEFD6415478E0081571AE901239E65E0E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9AE32D30BA8577085EA329965010751D5B5F4927);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4492F0DC39A766C7CEB6D0363E9B5AF0D1CC1B59_mD37C959B5C392A0B1D81CB4BF410603E88BC751C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4492F0DC39A766C7CEB6D0363E9B5AF0D1CC1B59);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA2A267591D03FD490BACEAF4B0BCAF0634483396_m70D5D4158D45BFC9E5B49ABE86E203A069E34D18_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA2A267591D03FD490BACEAF4B0BCAF0634483396);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t547B9C0D47210593C75564A860AF4F567B6FA433_m29FB3A441E195F93A15FED72BEC04796CEE09368_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t547B9C0D47210593C75564A860AF4F567B6FA433);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisArray32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6_m548E4D71AFEF1CECD2CDC464941403E01E0031A4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m3446503708EF53FF3664993B371F061F2C98A44F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(bool);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m390771D188BFC7495FCB3A56351B5E401291B516_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m4D0481064DF16017FB4BA2602339F52B31AF4C43_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m08598794D3B261C40B450629DF5F06602A5AE07E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m45B49B28BF4C4D3C67E3E97242A22A0ABC6DEFE3_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mF2F331D655F94C7D53A2A6CC53FEA77004CC0D8F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCB825B1D70E67004BF5727535B982744D7748AEC_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m70E9545B366314302788F0E1BC38923FA9A615DD_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m6751488A2A9157A9C997B3565468257C18BED296_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mD9339F750CA0D2D3BF8C7BDEF41B48D06193F67A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLong1024_tEE887C506947419DC829213E6C7483D80AF5659F_m93A923BCA5B81DDC9C30AA705D6733C8CE385708_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Long1024_tEE887C506947419DC829213E6C7483D80AF5659F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FEB40E99B7AC93B17218E31E52424937F30C370_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mBB8E03C1CCE04BAA49DF0EF1A08717DA4ABA9306_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float3_t7600B73F092B37F484B12910A5269F30C778D31E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4_t545A994996126766890C1F28B43EA823F2410190);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mEBA77C64C399D4BCC37EE3F3D159A5E94C33C6D3_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8D990A8D391065FD74E77A00692F7A4E622C60D9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m8CF58EDFCC08B64D6585A9B478F8BA7A893E2432_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m85B0A5655D296C4CF794FB1B0D3DE8CCDF215349_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m3BD3E1983B717570B02921776FFCE5FC7D384E9E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m4D2F36005BE36038EF5F2610C491C00A58AC8ECD_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8D9C30C1CAD2ABCFEE04D493E65332ACAB8D2871_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_mBCE96454E464CE8F93208CA3B130CBC832499681_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mDB8A80750B9D19690C7D6E72259D5898D209710B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m91B4BE7F47C68D100E0A963FE8AEDB5C491546FA_gshared (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_6 = ___2_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5E6C889EB34EAE2740370CD443757158EB45CA11_gshared (void* ___0_destination, int32_t ___1_index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_6 = ___2_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(bool);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		bool L_6 = ___2_value;
		*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m39673DEA8CD190D6395DE7B4743E53DD8E7576E0_gshared (void* ___0_destination, int32_t ___1_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ___2_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint8_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint8_t L_6 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mF19D462EAE007A50E5E2D633559CE72611626837_gshared (void* ___0_destination, int32_t ___1_index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_6 = ___2_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEF6442BF2C415D9A5FFD255E882378DF7F682E19_gshared (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = ___2_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m81193E3F78F23B139FABC84F014169954DC20743_gshared (void* ___0_destination, int32_t ___1_index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B L_6 = ___2_value;
		*(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_gshared (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___2_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mA2ECC305BE471B742A0F8A21008BFDF84B8CE6DD_gshared (void* ___0_destination, int32_t ___1_index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 L_6 = ___2_value;
		*(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD8E8E40C6234AA692B549620F0D7FF1D2309713E_gshared (void* ___0_destination, int32_t ___1_index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_6 = ___2_value;
		*(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3FEF0035123C35A7E3C79551C6CB1CF49D800A4C_gshared (void* ___0_destination, int32_t ___1_index, int16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int16_t L_6 = ___2_value;
		*(int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIntPtr_t_m4F172B1EA620A9AAD916874CDBA3ECB5FB5BA8BE_gshared (void* ___0_destination, int32_t ___1_index, intptr_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(intptr_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		intptr_t L_6 = ___2_value;
		*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_mE6EB6C7E8C8354FAF1CBCC74E3824B89F17DADEF_gshared (void* ___0_destination, int32_t ___1_index, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D L_6 = ___2_value;
		*(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mADB541C095B1C4A306057C9E114235988B3A52D9_gshared (void* ___0_destination, int32_t ___1_index, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 L_6 = ___2_value;
		*(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m35A9E355587315DB02A3550EF7A71172F418C9C5_gshared (void* ___0_destination, int32_t ___1_index, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF L_6 = ___2_value;
		*(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6113BA4FEE412326B8C4AE48EF490E280EF24144_gshared (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = ___2_value;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDED3D71F106839CF27D02475C04EB53AFC379717_gshared (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___2_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m984D59C779E69C17ED01C8FAB083CE6F114D6E44_gshared (void* ___0_destination, int32_t ___1_index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_6 = ___2_value;
		*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m82DB510EE367C48D85612E30940009BDDEF1B758_gshared (void* ___0_destination, int32_t ___1_index, PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_6 = ___2_value;
		*(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m5752F3073072D6DCB16C429071ED8126C1CB6502_gshared (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = ___2_value;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mA2388F9D64F789EFCC1E4C1C8B8131349FEE8615_gshared (void* ___0_destination, int32_t ___1_index, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_6 = ___2_value;
		*(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m049FD2974799E42947325253CE4E6E3B2EA1B363_gshared (void* ___0_destination, int32_t ___1_index, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_6 = ___2_value;
		*(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m8FECF9726B6A90FEADC960133A19868C171B28E9_gshared (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___2_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m6F644E9F16BCA33198224E89E60794839BC6D59F_gshared (void* ___0_destination, int32_t ___1_index, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_6 = ___2_value;
		*(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7D446B6F9099002D20DA21B42DF93BEC931E03F4_gshared (void* ___0_destination, int32_t ___1_index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6 = ___2_value;
		*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC03212F05038DAAA1F180317241B89AB90500BF8_gshared (void* ___0_destination, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float L_6 = ___2_value;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_m545EEE4DCBD391DA082FD5B66BDC47E7D7C4E94B_gshared (void* ___0_destination, int32_t ___1_index, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_6 = ___2_value;
		*(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_gshared (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint16_t L_6 = ___2_value;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_gshared (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint32_t L_6 = ___2_value;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = ___2_value;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC08010A74AC1BF608813C293C4C52F4EF4B30106_gshared (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___2_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_gshared (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___2_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m82BCC61EC4B95EFCBBF5BD83012E4A052200C040_gshared (void* ___0_destination, int32_t ___1_index, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float3_t7600B73F092B37F484B12910A5269F30C778D31E);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_6 = ___2_value;
		*(float3_t7600B73F092B37F484B12910A5269F30C778D31E*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mDD422B9BCA777C492800A29A8BCD027FEE4A0902_gshared (void* ___0_destination, int32_t ___1_index, float4_t545A994996126766890C1F28B43EA823F2410190 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float4_t545A994996126766890C1F28B43EA823F2410190);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4_t545A994996126766890C1F28B43EA823F2410190 L_6 = ___2_value;
		*(float4_t545A994996126766890C1F28B43EA823F2410190*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m7D1FCEB1F46F5A4F1A25F295015C1A7775B7335E_gshared (void* ___0_destination, int32_t ___1_index, float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA L_6 = ___2_value;
		*(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB65608056427FDDB5C875F9A9BFA4AF826060353_gshared (void* ___0_destination, int32_t ___1_index, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_6 = ___2_value;
		*(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_gshared (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m212A78B02CADF3BEF4BDEE21B3911733EF1DB344_gshared (void* ___0_destination, int32_t ___1_index, TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 L_6 = ___2_value;
		*(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mF706336047653DC405B343390E5012DB6D94B2F7_gshared (void* ___0_destination, int32_t ___1_index, TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70 L_6 = ___2_value;
		*(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_gshared (void* ___0_destination, int32_t ___1_index, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_6 = ___2_value;
		*(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m76F22BD1F0150677FD98B440C5021FDEBE31A795_gshared (void* ___0_destination, int32_t ___1_index, CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E L_6 = ___2_value;
		*(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m25901B4C1B7255001FFB348711F813FD62035E12_gshared (void* ___0_destination, int32_t ___1_index, CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1 L_6 = ___2_value;
		*(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m2B231745BA20552204BBF5024F114155250A70F2_gshared (void* ___0_destination, int32_t ___1_index, LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		LineElement_t012671A3568902C51830B75D1F5DB18B390F8454 L_6 = ___2_value;
		*(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m44A1A41465AD6EF9B6A8571283C4E80BAAD4E2A6_gshared (void* ___0_destination, int32_t ___1_index, PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0 L_6 = ___2_value;
		*(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m5DF092B2E67B51DC6B9BF7136D53BCD8EE2C1AA0_gshared (void* ___0_destination, int32_t ___1_index, PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57 L_6 = ___2_value;
		*(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5B55C38E0B7634A1479676B7EB819C037EC1CA70_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_6 = ___3_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m6736BCFBD4D629AD07847CD30C3454BC92289C43_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ___3_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD64B816BD360CF926B77516A2707ED5608023EB3_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, uint8_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint8_t L_6 = ___3_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m97FC265921038A327A5E5B81658AEF7891917544_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___3_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mCD207A17F51EADD1C3FDD878565BA38609999DFD_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___3_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mC38B480588DAD58466ED957043F394E8214822CC_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_6 = ___3_value;
		*(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m062C5F59372622D1CE1120FB42BC83BF54230AA6_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_6 = ___3_value;
		*(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC6522E62D62D0F3B595EB475556A84D8FD0F88CE_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___3_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m242A5C6256A4A5B4D7B078023F71622A7F5F1812_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___3_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD6C17E0F294919C280E583601A298E265D20935A_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m125DC0D8A190431CDC4DF42A94FE849E01AC5A8A_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_6 = ___3_value;
		*(float3_t7600B73F092B37F484B12910A5269F30C778D31E*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mF59466E913671DCFFC4639FC34C5297CC5D771C8_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, float4_t545A994996126766890C1F28B43EA823F2410190 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4_t545A994996126766890C1F28B43EA823F2410190 L_6 = ___3_value;
		*(float4_t545A994996126766890C1F28B43EA823F2410190*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m47D97A3A8AD1CCEDD3BD4367C5C0ACE49491F4FB_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA L_6 = ___3_value;
		*(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0D538510931D731CE9075661C07B0DECAAC84B82_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1E49423160D9D2F662A38FDEE88842FC26B67EBC_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = ((  Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Volatile_Read_TisIl2CppSharedGenericObject_m80AA45DB17514248EE3F1C51892F22E546B63BC9_gshared (Il2CppSharedGenericObject** ___0_location, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value;
		il2cpp_codegen_memory_barrier();
		Il2CppSharedGenericObject* L_3;
		L_3 = il2cpp_unsafe_as<Il2CppSharedGenericObject*>(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisIl2CppSharedGenericObject_m5283DEB09B854082CE5EFC9E4C1B19F4D8E1A5CA_gshared (Il2CppSharedGenericObject** ___0_location, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		Il2CppSharedGenericObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value), (void*)(RuntimeObject*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m1F2E37212086F85A441145A7B080D43DC4AE96E4_gshared (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_6;
		L_6 = Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m805FE99DED95E176759F6DBEF0B7B3120EB67B47_gshared (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_6;
		L_6 = Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_mF8220FD740AC717FEB8B7460771A3B6FD63D53A3_gshared (HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* L_6;
		L_6 = Array_Resize_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m56B4A5FA244655F35F0482ADF8BFAE16F683FAF1(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m2DE439768C1ED8207B310B087BA22C4E1344C151_gshared (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_6;
		L_6 = Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m1EEF7F2F65542F10C73B042CE442EB5F8FA73473_gshared (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_6;
		L_6 = Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint8_t* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		uint8_t* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		uint8_t* L_6;
		L_6 = Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDAC644D78CB577E5C3CEF18A59DB392CB645A4C_gshared (int32_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		int32_t* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		int32_t* L_6;
		L_6 = Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEE0CCF17012BE1CA95605693A9DC3BC6AACCFB64_gshared (uint64_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint64_t* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		uint64_t* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		uint64_t* L_6;
		L_6 = Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mE3F6373EC4A8E7ED5EA452E3A5738529668CD99E_gshared (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_6;
		L_6 = Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m22827025CA779A0BDA69EEF4AB67F77D1070C655_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6;
		L_6 = Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m096E2AEE0566600497706AAD1E2B8CF599A2EFDB_gshared (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_6;
		L_6 = Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m2B126798068B361AB653416A8345288E9A242B22_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_6;
		L_6 = Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m43022B9CFB1F8C5AB5994140793058FD355CCF84_gshared (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_6;
		L_6 = Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_6;
		L_6 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Il2CppSharedGenericObject* L_1 = ___0_obj;
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8_gshared (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A));
		NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m65662D0552415B85C6F0258540EF727CC2A6CF44(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A>(__this);
	NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A _returnValue;
	_returnValue = PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D_gshared (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		L_6 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A>(__this);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		L_6 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86));
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68));
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602));
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF));
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683));
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8));
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D));
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711_gshared (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72_gshared (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* Array_Resize_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m56B4A5FA244655F35F0482ADF8BFAE16F683FAF1_gshared (HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_mC94DEDD2611C7C84632B957D3FDB324F2C85EA7A(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276_gshared (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A_gshared (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint8_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(uint8_t);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (uint8_t*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE_gshared (int32_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(int32_t);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (int32_t*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint64_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(uint64_t);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (uint64_t*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F_gshared (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784_gshared (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21_gshared (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = sizeof(UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67*)(L_7);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		uint32_t L_4 = SizeOf_T_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7;
		L_7 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, L_5, L_6, NULL);
		return (Il2CppFullySharedGenericStruct*)(L_7);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F_inline (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Offset;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F_inline (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Stride;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18_inline (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_2 = ((int32_t)(L_1|((int32_t)(L_1>>((int32_t)16)))));
		int32_t L_3 = ((int32_t)(L_2|((int32_t)(L_2>>8))));
		int32_t L_4 = ((int32_t)(L_3|((int32_t)(L_3>>4))));
		int32_t L_5 = ((int32_t)(L_4|((int32_t)(L_4>>2))));
		return ((int32_t)il2cpp_codegen_add(((int32_t)(L_5|((int32_t)(L_5>>1)))), 1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* __this, const RuntimeMethod* method) 
{
	{
		ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* L_0 = __this->___timelines;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_gshared_inline (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared_inline (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_gshared_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m5F973719952342AF0D7D4A970DD8C8D6CDB8B930_gshared_inline (Enumerator_t40F59BBF1609419DACF10E60EED82BF4CB644DFC* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB6573DEE60FA5B31CC3A9B663EABD82C5FDF5F34_m4110F7060636F731667CD4B7781E0290A86A6578_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB6573DEE60FA5B31CC3A9B663EABD82C5FDF5F34);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6CD22D504947E007577B184FDB3044C5331C3213_mB7214786725D1018B6B5B9E54C4D3FFD6B7D6AEE_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6CD22D504947E007577B184FDB3044C5331C3213);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FCA4B2B694E482A4A9EA48502834457DB24A612_mE5AD6124B635986A2FD0DB831D1FA903DFBF9123_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5FCA4B2B694E482A4A9EA48502834457DB24A612);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F_m3446503708EF53FF3664993B371F061F2C98A44F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1BF68DC9ACACFA6FDBB0139DC16493B0F70F132F_m28939AED1229A6FD6FA2914C24EBC8191B097BC1_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1BF68DC9ACACFA6FDBB0139DC16493B0F70F132F);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mCC9A510A3E266658E30A9D9EB577AC6016EFA086_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF7DAEC11C637A41FF2F5A4D227ECE155AE4F3FC9_m9D0B75E725BCB2BF7B4BA7F57DA8EC6577CF6554_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF7DAEC11C637A41FF2F5A4D227ECE155AE4F3FC9);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m348D66015CD9DE899E1D629A356A294625A89A79_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t297C6D22F0E8C2FABB0F241AA540094D060A51D3_mDD1B1F984389C8BA91257345B1D3AC789C21099E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t297C6D22F0E8C2FABB0F241AA540094D060A51D3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t093A30D64849BACC93EAA6802655C46F61FF8163_mDBFDD38DA99E3B805738860F66ACD5B277E43E35_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t093A30D64849BACC93EAA6802655C46F61FF8163);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(bool);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818_mB94030527368B8CB6C6A4E9C84DAED859A8663F5_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m390771D188BFC7495FCB3A56351B5E401291B516_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA8FDB503553DAE8B5D80E26AD5BFEC6AA2EE2977_m392CC283C281ADA579B1BF1E5AF86EA37376DA6F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA8FDB503553DAE8B5D80E26AD5BFEC6AA2EE2977);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m4D0481064DF16017FB4BA2602339F52B31AF4C43_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7AA9B9EDA82D3FF933E70009AB03B0EC7CA41059_m23EF9073EE9816840857FE3C4E98214C6D52FE6B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7AA9B9EDA82D3FF933E70009AB03B0EC7CA41059);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m08598794D3B261C40B450629DF5F06602A5AE07E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA7B763C987A9DA044963E6599D62CE107B17BEE1_mAA18417E6CA85DA4D273F7E0C9EB9A6B76C4751B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA7B763C987A9DA044963E6599D62CE107B17BEE1);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m45B49B28BF4C4D3C67E3E97242A22A0ABC6DEFE3_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDE5E63667E5461CC2B49AF3FA944AFE22FFFC3D6_m89D6DE5ECEC7CBA37D6150054368A49E564B1854_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDE5E63667E5461CC2B49AF3FA944AFE22FFFC3D6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mF2F331D655F94C7D53A2A6CC53FEA77004CC0D8F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13_m5D8720B8C5DCF39EF395B27C7BDD1F1C1A0C2DB7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCB825B1D70E67004BF5727535B982744D7748AEC_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8226F184077F6C39D92A13C8E8FC1B455548ACED_mA8DE6E492D9FD43976A9B7EC2419C2711C1D2ED8_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8226F184077F6C39D92A13C8E8FC1B455548ACED);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m70E9545B366314302788F0E1BC38923FA9A615DD_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t73C026007A3FBF66031EB16A398B618D2CD46123_m81EB5BADDA97F9F47690EF2EA73B5E2FC04A2CDC_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t73C026007A3FBF66031EB16A398B618D2CD46123);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m6751488A2A9157A9C997B3565468257C18BED296_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t968C45BFA95CB6F1910722DA75ABAE2D7D418263_m9E73F7ACA9D66860E914C2DA4A6D9311502EBB67_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t968C45BFA95CB6F1910722DA75ABAE2D7D418263);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mD9339F750CA0D2D3BF8C7BDEF41B48D06193F67A_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_mBAC80201764318E3EA5F8128D39E09641398AE17_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFB00C1A05598BAF33AA36449BE3505ACC2D83D05_mFB2782F313C32EB6A95994900D973E0D25908C3C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tFB00C1A05598BAF33AA36449BE3505ACC2D83D05);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FEB40E99B7AC93B17218E31E52424937F30C370_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tCCFCC99E6C106BA1E17384248B2EB554F107D8F9_m022B9E6E98AF8BEFC1A7CA4E872758F0A7A4E50F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tCCFCC99E6C106BA1E17384248B2EB554F107D8F9);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mBB8E03C1CCE04BAA49DF0EF1A08717DA4ABA9306_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_mA7E20A1B9EBF3F0C025AEB17B4218DED4B1FEC3F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2_m339635A9CD7DE84F0026C1D0AD4ACFEB0FDC7DF0_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_m92D326AE7D9C6FC84D0197EAA7F59131FCACEC19_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817_m481B6255CC2EBB63A42623A3A80AD906330E6F8C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t04402A718BBE3DED86F441E9EA40E28F610AC7BB_m06F70D8E155862746C2DDB10B3F0005462F38A82_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t04402A718BBE3DED86F441E9EA40E28F610AC7BB);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4480F2E168ED748DE712B196BEB840CA6FFECCEE_mC18C900487C1B8B317F4A1C493534E9201407F50_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4480F2E168ED748DE712B196BEB840CA6FFECCEE);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE88C9B7AAA013F8306AC4EA24A81855110A32D41_m0527D65DDABDDF4C68151031401C2F27C19D96FF_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE88C9B7AAA013F8306AC4EA24A81855110A32D41);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBABFD994AB355FF15A2FDF9B297481F19BD318E3_m98B683C331E82560BF2704208B540E316ACDFF78_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBABFD994AB355FF15A2FDF9B297481F19BD318E3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBCBF8B8E1CD4F63F3840DC83691B86A3BA432563_m1443C0DB92D8423E459499936018C67AEAF9C150_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBCBF8B8E1CD4F63F3840DC83691B86A3BA432563);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t92752E49562D92776F63E0ED73ED54C52098D463_m145878868F4752C03FA0E2BB9F339FFA0FE31FF6_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t92752E49562D92776F63E0ED73ED54C52098D463);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float3_t7600B73F092B37F484B12910A5269F30C778D31E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8F6F6E087BE57A1D866727D20357D5EA7D9A986A_m873E2E2443728E1D35D0F23E3F6631F97D4399EA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8F6F6E087BE57A1D866727D20357D5EA7D9A986A);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4_t545A994996126766890C1F28B43EA823F2410190);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t158866ED61419EF07D11EDDE3B3CE6730357B2C5_m2392190CC2B659EEF5F97F651ADF1FBB37BF5311_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t158866ED61419EF07D11EDDE3B3CE6730357B2C5);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7BB9E461CA77F27E85AF701FB477AF8F609AE37B_mD4F625BBF2D4E34CA9DC0F468BC4482476EBA6CA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7BB9E461CA77F27E85AF701FB477AF8F609AE37B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mEBA77C64C399D4BCC37EE3F3D159A5E94C33C6D3_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t724DE9BF3376363363522DBAFBA4AC429271CF24_m2F81F84961E1F13E03070D0518CCF8E192659D6E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t724DE9BF3376363363522DBAFBA4AC429271CF24);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8D990A8D391065FD74E77A00692F7A4E622C60D9_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD5F577DCAC665179FE14F05229ECC74B81FE0167_mDF535988FCDBB03563CD522ACE4535F43F8D6328_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD5F577DCAC665179FE14F05229ECC74B81FE0167);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m8CF58EDFCC08B64D6585A9B478F8BA7A893E2432_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1F0C90344DB347D9FC2A0FCB003F49523D39E0D8_m7418BEC212033BD119FEEB687941A91D1D8C5D59_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1F0C90344DB347D9FC2A0FCB003F49523D39E0D8);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m85B0A5655D296C4CF794FB1B0D3DE8CCDF215349_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD626B076AC0782276084575D7E81BE4BC4A56297_m2610F85D79111F0298D18D90D26B9598DF8430F9_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD626B076AC0782276084575D7E81BE4BC4A56297);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m3BD3E1983B717570B02921776FFCE5FC7D384E9E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AE32D30BA8577085EA329965010751D5B5F4927_m4E59129FEFD6415478E0081571AE901239E65E0E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9AE32D30BA8577085EA329965010751D5B5F4927);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m4D2F36005BE36038EF5F2610C491C00A58AC8ECD_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4492F0DC39A766C7CEB6D0363E9B5AF0D1CC1B59_mD37C959B5C392A0B1D81CB4BF410603E88BC751C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4492F0DC39A766C7CEB6D0363E9B5AF0D1CC1B59);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m8D9C30C1CAD2ABCFEE04D493E65332ACAB8D2871_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LineElement_t012671A3568902C51830B75D1F5DB18B390F8454);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA2A267591D03FD490BACEAF4B0BCAF0634483396_m70D5D4158D45BFC9E5B49ABE86E203A069E34D18_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA2A267591D03FD490BACEAF4B0BCAF0634483396);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_mBCE96454E464CE8F93208CA3B130CBC832499681_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t547B9C0D47210593C75564A860AF4F567B6FA433_m29FB3A441E195F93A15FED72BEC04796CEE09368_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t547B9C0D47210593C75564A860AF4F567B6FA433);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mDB8A80750B9D19690C7D6E72259D5898D209710B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D MemoryExtensions_AsSpan_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m4C688940B0B82D2C4F2705B9FA1CB6FB40D0C46B_gshared_inline (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m9A5423B447082566273DC1B802AC541B91781C92_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_0 = ___0_span;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1;
		L_1 = MemoryMarshal_GetReference_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m0FA64E2967A0965F81D0E06B6A21C2166619C413(L_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		if (((int64_t)L_3 * (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 * (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_5), L_2, ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* NoAllocHelpers_ExtractArrayFromList_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F97FC7D40BA0FC71130687AEFD440306EED539D_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 MemoryExtensions_AsSpan_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m226223EC85769523E588150A5C5E8605A1A8EB23_gshared_inline (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5F7FC4662820F75282DD96C546F0216AE1C65E4F_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_0 = ___0_span;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1;
		L_1 = MemoryMarshal_GetReference_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE1CAB7E37A3F4ACC851D89C1EF41D89E3BFC717F(L_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		if (((int64_t)L_3 * (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 * (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_5), L_2, ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t460D4E78469192619B0075C15897A6987393AAF9 MemoryExtensions_AsSpan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9113C67EE5D3D977C3B18E2B72F1587F88934930_gshared_inline (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m400407DBD1147F424F2DD5D79914655E180A7897_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_0 = ___0_span;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1;
		L_1 = MemoryMarshal_GetReference_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF2220508601B9930347F2DB45A57279ECF7C77CB(L_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		if (((int64_t)L_3 * (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 * (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_5), L_2, ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 MemoryExtensions_AsSpan_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m252A89F7FA2D16119704741349D811941B11F317_gshared_inline (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC07BA3B1CBEC83C8F8B1C1D1604BCBF26C892354_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_0 = ___0_span;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1;
		L_1 = MemoryMarshal_GetReference_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m47AB46B1E5970F1F8BC8C343C1B895ABE13BCA0E(L_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		if (((int64_t)L_3 * (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 * (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_5), L_2, ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		if ((uintptr_t)L_2 * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, 2));
		int8_t* L_4;
		if (L_3 == 0)
		{
			L_4 = NULL;
		}
		else
		{
			L_4 = (int8_t*)alloca(L_3);
			memset(L_4, 0, L_3);
		}
		V_4 = (uint16_t*)L_4;
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_5 = V_4;
		int32_t L_6 = V_5;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_9;
		L_9 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_10 = V_5;
		uint16_t L_11;
		L_11 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_12;
		L_12 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_13;
		L_13 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_13));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		il2cpp_codegen_stind<int16_t>((int16_t*)G_B22_1, (int16_t)G_B22_0);
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0122:
	{
		int32_t L_15 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_16;
		L_16 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_17 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_18), (void*)L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_18;
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		goto IL_06e5;
	}

IL_06e5:
	{
		goto IL_097b;
	}

IL_097b:
	{
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_19 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_20 = L_19.___register;
		uint16_t L_21 = L_20.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_22 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_23 = L_22.___register;
		uint16_t L_24 = L_23.___uint16_0;
		if ((((int32_t)L_21) == ((int32_t)L_24)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_25;
		L_25 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_25));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_29 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_30 = L_29.___register;
		uint16_t L_31 = L_30.___uint16_1;
		if ((((int32_t)L_28) == ((int32_t)L_31)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_32;
		L_32 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_32));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_33 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_34 = L_33.___register;
		uint16_t L_35 = L_34.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_2;
		if ((((int32_t)L_35) == ((int32_t)L_38)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_39;
		L_39 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_39));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_40 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_41 = L_40.___register;
		uint16_t L_42 = L_41.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_43 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_44 = L_43.___register;
		uint16_t L_45 = L_44.___uint16_3;
		if ((((int32_t)L_42) == ((int32_t)L_45)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_46;
		L_46 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_46));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_47 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_48 = L_47.___register;
		uint16_t L_49 = L_48.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_50 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_51 = L_50.___register;
		uint16_t L_52 = L_51.___uint16_4;
		if ((((int32_t)L_49) == ((int32_t)L_52)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_53;
		L_53 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_53));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_54 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_55 = L_54.___register;
		uint16_t L_56 = L_55.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_57 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_58 = L_57.___register;
		uint16_t L_59 = L_58.___uint16_5;
		if ((((int32_t)L_56) == ((int32_t)L_59)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_60;
		L_60 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_60));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_61 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = L_61.___register;
		uint16_t L_63 = L_62.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_64 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_65 = L_64.___register;
		uint16_t L_66 = L_65.___uint16_6;
		if ((((int32_t)L_63) == ((int32_t)L_66)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_67;
		L_67 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_67));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_68 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_69 = L_68.___register;
		uint16_t L_70 = L_69.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_71 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = L_71.___register;
		uint16_t L_73 = L_72.___uint16_7;
		if ((((int32_t)L_70) == ((int32_t)L_73)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_74;
		L_74 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_74));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_75), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_75;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_gshared_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_2;
		L_2 = il2cpp_unsafe_as_ref<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84>((uint8_t*)L_1);
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_gshared_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC>((uint8_t*)L_1);
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_gshared_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A>((uint8_t*)L_1);
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_gshared_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_2;
		L_2 = il2cpp_unsafe_as_ref<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF>((uint8_t*)L_1);
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_gshared_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576>((uint8_t*)L_1);
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_gshared_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A>((uint8_t*)L_1);
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 10)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_gshared_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_2;
		L_2 = il2cpp_unsafe_as_ref<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7>((uint8_t*)L_1);
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((intptr_t)((intptr_t)(L_0&L_1))) == ((intptr_t)L_2))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>((&V_0),NULL));
		il2cpp_codegen_stind<int16_t>((int16_t*)L_0, (int16_t)((int32_t)65535));
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		return (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0037;
	}

IL_0037:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_3);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		goto IL_0037;
	}

IL_0037:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_3);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460D4E78469192619B0075C15897A6987393AAF9));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		goto IL_0037;
	}

IL_0037:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_3);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		goto IL_0037;
	}

IL_0037:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_3);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
	}
	{
		uint16_t L_0 = ___0_left;
		uint16_t L_1 = ___1_right;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
