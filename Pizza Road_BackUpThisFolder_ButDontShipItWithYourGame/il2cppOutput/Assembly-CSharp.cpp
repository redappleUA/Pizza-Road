#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>
struct List_1_t74EC90C5F42E1A99F29BC6A7FF27FD27FCF98344;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2;
// CameraWalker
struct CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC;
// UnityEngine.UIElements.Clickable
struct Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Death
struct Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF;
// DefeatTrigger
struct DefeatTrigger_t1107B9229EC1583D3F30E2C9CA41154B67F30C1A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DestroyCollide
struct DestroyCollide_t3594DF4BD7D26390997318D5AD8914853A355B3D;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// Factory
struct Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530;
// Finish
struct Finish_t7B428A170706166079FF44C68B92C634021A0E99;
// FinishScreen
struct FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.TextCore.Text.FontAsset
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOverScreen
struct GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E;
// HUDScreen
struct HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767;
// HouseSpawner
struct HouseSpawner_t5E422CB3555F3F8C02F188CCF27B0217DEAC9B8C;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UIElements.IBinding
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UIElements.IPanel
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
// UnityEngine.UIElements.IStyle
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
// UnityEngine.UIElements.ITextHandle
struct ITextHandle_tE073838D8ECC8553222F256E181F96527EC273E4;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UIElements.PanelSettings
struct PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC;
// PauseScreen
struct PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77;
// UnityEngine.UIElements.UIDocumentList
struct UIDocumentList_tA2A8305DE916298E4C586EC8235085560914E7C3;
// UnityEngine.UIElements.VectorImage
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
// Vehicle
struct Vehicle_t073676C9121D3FB86ABB1A8B4406EDADC8F2F9B6;
// VehicleDestroy
struct VehicleDestroy_tEEC011CCBD02442B883D3BA5AD098B9A4130B653;
// VehicleSpawner
struct VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// FinishScreen/<>c
struct U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C;
// PauseScreen/<>c
struct U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60;
// Score/<IncrimentTime>d__28
struct U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1;
// SwipeDetection/OnSwipeInput
struct OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55;
// VehicleSpawner/<SpawnVehicle>d__5
struct U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0DA5F1287115C49EF9D36AE3B84E6AB8E4CEF0F5;
IL2CPP_EXTERN_C String_t* _stringLiteral112A1AC841AA0CB86755272772491E403CA7D21F;
IL2CPP_EXTERN_C String_t* _stringLiteral16C43D3D43AA9A7A899D1AFC095538503328BB0B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3;
IL2CPP_EXTERN_C String_t* _stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8;
IL2CPP_EXTERN_C String_t* _stringLiteral5191E2C4DFFBB00038FD95BD8DED200CB04F04DE;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral649B85D71B3DD34F64F98500DD75C0A86DF2C3F2;
IL2CPP_EXTERN_C String_t* _stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C;
IL2CPP_EXTERN_C String_t* _stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6;
IL2CPP_EXTERN_C String_t* _stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral88897CA8DDC75D6298AB6A264F7E482EBC1B25E8;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8170DD57316CACB0E03DF1A826436A5F438855;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA505B812E78C7D1F94064FE40B1D5A19921E880;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FinishScreen_NextButtonPressed_mE9E34959A49339CE7C47EB648C75D581AE969EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameOverScreen_ExitButtonPressed_mB48B05C9A4C07DDF1477C200A570DB0F8E760878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameOverScreen_RestartButtonPressed_m18E0385DDFC3C149A08FC2E20E6EB7EC54B25F32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HUDScreen_U3COpenHUDScreenU3Eb__8_0_m3CC8411F2B9FB1031A5BAD44DF154EADC6CE8DDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisFinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_m722A17C0ACE2F3D5705945C65D8B1AE97F53DE6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_m7F8F1B1327B270DDE9F0DFAF90FB0F2C0177EE03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_mCBC8171D5B940415BA020DB28B981B36EB77B8F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m2958D1BD1B81465BAA86B696C86C759EA993B390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m7F280EF139F161B80A01FEE50E9A22FCA340BB0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD_m4CDBE13676D1822B5E1FF76C1EF4BB43D923D260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PauseScreen_RestartButtonPressed_m28F574500A049D47AC46F30A28FD7D8B1737AB9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PauseScreen_ResumeButtonClicked_m6CDF4B75F5B9C1C1D421BD381351960D3A93EE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Player_OnSwipe_m755F9F95C42FE494A4B1EA54F32E277B4A909496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIncrimentTimeU3Ed__28_System_Collections_IEnumerator_Reset_mB9875473F445FD97D6B38DC3CB1B4D76E86C0795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnVehicleU3Ed__5_System_Collections_IEnumerator_Reset_mABB2663ACB728C1270D748B1E9B0C8AB76F149C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COpenFinishScreenU3Eb__15_0_mE2AD6DD4C598FC6BA24585B2E9845A3B8C5BDCEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COpenPauseScreenU3Eb__6_0_m9B8370DF3D702D6241221A385D820EC3E3F10105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// FinishScreen/<>c
struct U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C  : public RuntimeObject
{
};

struct U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_StaticFields
{
	// FinishScreen/<>c FinishScreen/<>c::<>9
	U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C* ___U3CU3E9_0;
	// System.Action FinishScreen/<>c::<>9__15_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__15_0_1;
};

// PauseScreen/<>c
struct U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60  : public RuntimeObject
{
};

struct U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_StaticFields
{
	// PauseScreen/<>c PauseScreen/<>c::<>9
	U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60* ___U3CU3E9_0;
	// System.Action PauseScreen/<>c::<>9__6_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__6_0_1;
};

// Score/<IncrimentTime>d__28
struct U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1  : public RuntimeObject
{
	// System.Int32 Score/<IncrimentTime>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Score/<IncrimentTime>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Score Score/<IncrimentTime>d__28::<>4__this
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* ___U3CU3E4__this_2;
};

// VehicleSpawner/<SpawnVehicle>d__5
struct U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB  : public RuntimeObject
{
	// System.Int32 VehicleSpawner/<SpawnVehicle>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VehicleSpawner/<SpawnVehicle>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// VehicleSpawner VehicleSpawner/<SpawnVehicle>d__5::<>4__this
	VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* ___U3CU3E4__this_2;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>
struct StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// UnityEngine.UIElements.Background
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	// UnityEngine.Texture2D UnityEngine.UIElements.Background::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_0;
	// UnityEngine.Sprite UnityEngine.UIElements.Background::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_1;
	// UnityEngine.RenderTexture UnityEngine.UIElements.Background::m_RenderTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_2;
	// UnityEngine.UIElements.VectorImage UnityEngine.UIElements.Background::m_VectorImage
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.Background
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_1;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_2;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage_3;
};
// Native definition for COM marshalling of UnityEngine.UIElements.Background
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_1;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_2;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	// UnityEngine.Font UnityEngine.UIElements.FontDefinition::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	// UnityEngine.TextCore.Text.FontAsset UnityEngine.UIElements.FontDefinition::m_FontAsset
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UIElements.Length
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_1;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_2;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// UnityEngine.UIElements.StyleBackground
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	// UnityEngine.UIElements.Background UnityEngine.UIElements.StyleBackground::m_Value
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleBackground::m_Keyword
	int32_t ___m_Keyword_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleBackground
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value_0;
	int32_t ___m_Keyword_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleBackground
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value_0;
	int32_t ___m_Keyword_1;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F 
{
	// UnityEngine.Rect UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	// System.String UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::text
	String_t* ___text_1;
	// UnityEngine.Font UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	// UnityEngine.UIElements.FontDefinition UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontDefinition
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___fontDefinition_3;
	// System.Int32 UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontSize
	int32_t ___fontSize_4;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::letterSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::paragraphSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	// UnityEngine.FontStyle UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontStyle
	int32_t ___fontStyle_8;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	// UnityEngine.TextAnchor UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::anchor
	int32_t ___anchor_10;
	// System.Boolean UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordWrap
	bool ___wordWrap_11;
	// System.Single UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordWrapWidth
	float ___wordWrapWidth_12;
	// System.Boolean UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::richText
	bool ___richText_13;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::playmodeTintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	// UnityEngine.UIElements.TextOverflow UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::textOverflow
	int32_t ___textOverflow_15;
	// UnityEngine.UIElements.TextOverflowPosition UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::textOverflowPosition
	int32_t ___textOverflowPosition_16;
	// UnityEngine.UIElements.OverflowInternal UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::overflow
	int32_t ___overflow_17;
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::panel
	RuntimeObject* ___panel_18;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	char* ___text_1;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___fontDefinition_3;
	int32_t ___fontSize_4;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	int32_t ___fontStyle_8;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	int32_t ___anchor_10;
	int32_t ___wordWrap_11;
	float ___wordWrapWidth_12;
	int32_t ___richText_13;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	int32_t ___textOverflow_15;
	int32_t ___textOverflowPosition_16;
	int32_t ___overflow_17;
	RuntimeObject* ___panel_18;
};
// Native definition for COM marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	Il2CppChar* ___text_1;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___fontDefinition_3;
	int32_t ___fontSize_4;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	int32_t ___fontStyle_8;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	int32_t ___anchor_10;
	int32_t ___wordWrap_11;
	float ___wordWrapWidth_12;
	int32_t ___richText_13;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	int32_t ___textOverflow_15;
	int32_t ___textOverflowPosition_16;
	int32_t ___overflow_17;
	RuntimeObject* ___panel_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.UIElements.BindableElement
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	// UnityEngine.UIElements.IBinding UnityEngine.UIElements.BindableElement::<binding>k__BackingField
	RuntimeObject* ___U3CbindingU3Ek__BackingField_65;
	// System.String UnityEngine.UIElements.BindableElement::<bindingPath>k__BackingField
	String_t* ___U3CbindingPathU3Ek__BackingField_66;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SwipeDetection/OnSwipeInput
struct OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.UIElements.TextElement
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	// UnityEngine.UIElements.ITextHandle UnityEngine.UIElements.TextElement::m_TextHandle
	RuntimeObject* ___m_TextHandle_68;
	// System.String UnityEngine.UIElements.TextElement::m_Text
	String_t* ___m_Text_70;
	// System.Boolean UnityEngine.UIElements.TextElement::m_EnableRichText
	bool ___m_EnableRichText_71;
	// System.Boolean UnityEngine.UIElements.TextElement::m_DisplayTooltipWhenElided
	bool ___m_DisplayTooltipWhenElided_72;
	// System.Boolean UnityEngine.UIElements.TextElement::<isElided>k__BackingField
	bool ___U3CisElidedU3Ek__BackingField_73;
	// System.Boolean UnityEngine.UIElements.TextElement::m_WasElided
	bool ___m_WasElided_75;
	// System.Boolean UnityEngine.UIElements.TextElement::m_UpdateTextParams
	bool ___m_UpdateTextParams_76;
	// UnityEngine.UIElements.MeshGenerationContextUtils/TextParams UnityEngine.UIElements.TextElement::m_TextParams
	TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F ___m_TextParams_77;
	// System.Int32 UnityEngine.UIElements.TextElement::m_PreviousTextParamsHashCode
	int32_t ___m_PreviousTextParamsHashCode_78;
};

struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_StaticFields
{
	// System.String UnityEngine.UIElements.TextElement::ussClassName
	String_t* ___ussClassName_67;
	// System.Int32 UnityEngine.UIElements.TextElement::maxTextVertices
	int32_t ___maxTextVertices_69;
	// System.String UnityEngine.UIElements.TextElement::k_EllipsisText
	String_t* ___k_EllipsisText_74;
};

// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
	// UnityEngine.UIElements.Clickable UnityEngine.UIElements.Button::m_Clickable
	Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* ___m_Clickable_80;
};

struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2_StaticFields
{
	// System.String UnityEngine.UIElements.Button::ussClassName
	String_t* ___ussClassName_79;
	// System.String UnityEngine.UIElements.Button::NonEmptyString
	String_t* ___NonEmptyString_81;
};

// CameraWalker
struct CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraWalker::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.Vector3 CameraWalker::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
	// UnityEngine.Vector3 CameraWalker::offsetStop
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offsetStop_6;
	// Player CameraWalker::playerInst
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___playerInst_7;
	// System.Single CameraWalker::magnitudeToDeath
	float ___magnitudeToDeath_8;
	// System.Single CameraWalker::speedToDeath
	float ___speedToDeath_9;
};

// Death
struct Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Factory Death::factory
	Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* ___factory_5;
};

struct Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_StaticFields
{
	// System.Boolean Death::<isDefeat>k__BackingField
	bool ___U3CisDefeatU3Ek__BackingField_4;
	// GameOverScreen Death::gameOverScreen
	GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* ___gameOverScreen_6;
};

// DefeatTrigger
struct DefeatTrigger_t1107B9229EC1583D3F30E2C9CA41154B67F30C1A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Factory DefeatTrigger::factory
	Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* ___factory_4;
	// UnityEngine.GameObject DefeatTrigger::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
};

// DestroyCollide
struct DestroyCollide_t3594DF4BD7D26390997318D5AD8914853A355B3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Factory
struct Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Factory::roads
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___roads_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Factory::houses
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___houses_5;
	// UnityEngine.GameObject Factory::playerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerPrefab_6;
	// UnityEngine.GameObject Factory::pizzaHouse
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pizzaHouse_7;
	// UnityEngine.GameObject Factory::pizzaPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pizzaPrefab_8;
	// UnityEngine.GameObject Factory::finishTrigger
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___finishTrigger_9;
	// UnityEngine.GameObject Factory::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_11;
	// UnityEngine.Vector3 Factory::currentPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentPosition_13;
	// System.Int32 Factory::lastValue
	int32_t ___lastValue_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Factory::<PizzaList>k__BackingField
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3CPizzaListU3Ek__BackingField_15;
	// System.Int32 Factory::<PizzaCount>k__BackingField
	int32_t ___U3CPizzaCountU3Ek__BackingField_16;
};

struct Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_StaticFields
{
	// System.Int32 Factory::<spawnCount>k__BackingField
	int32_t ___U3CspawnCountU3Ek__BackingField_10;
};

// Finish
struct Finish_t7B428A170706166079FF44C68B92C634021A0E99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FinishScreen Finish::fScreen
	FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* ___fScreen_4;
};

// FinishScreen
struct FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Sprite> FinishScreen::medals
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___medals_4;
	// UnityEngine.UIElements.Label FinishScreen::score
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___score_5;
	// UnityEngine.UIElements.Label FinishScreen::highScore
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___highScore_6;
	// UnityEngine.UIElements.VisualElement FinishScreen::medal
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___medal_7;
	// UnityEngine.UIElements.Button FinishScreen::nextButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___nextButton_8;
	// UnityEngine.UIElements.Button FinishScreen::exitButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___exitButton_9;
	// Score FinishScreen::scorePoint
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* ___scorePoint_11;
	// HUDScreen FinishScreen::hudScreen
	HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* ___hudScreen_12;
	// GameOverScreen FinishScreen::gameOverScreen
	GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* ___gameOverScreen_13;
};

struct FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_StaticFields
{
	// System.Boolean FinishScreen::<isFinished>k__BackingField
	bool ___U3CisFinishedU3Ek__BackingField_10;
};

// GameOverScreen
struct GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UIElements.Label GameOverScreen::score
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___score_4;
	// UnityEngine.UIElements.Button GameOverScreen::restartButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___restartButton_5;
	// UnityEngine.UIElements.Button GameOverScreen::exitButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___exitButton_6;
	// HUDScreen GameOverScreen::hudScreen
	HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* ___hudScreen_7;
	// System.Boolean GameOverScreen::isClicked
	bool ___isClicked_8;
};

struct GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_StaticFields
{
	// Score GameOverScreen::scorePoint
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* ___scorePoint_9;
};

// HUDScreen
struct HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UIElements.Label HUDScreen::score
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___score_4;
	// UnityEngine.UIElements.Label HUDScreen::timer
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___timer_5;
	// UnityEngine.UIElements.Button HUDScreen::pauseButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___pauseButton_6;
	// PauseScreen HUDScreen::pauseScreen
	PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* ___pauseScreen_7;
	// Score HUDScreen::scorePoint
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* ___scorePoint_8;
	// Player HUDScreen::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_9;
};

// HouseSpawner
struct HouseSpawner_t5E422CB3555F3F8C02F188CCF27B0217DEAC9B8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HouseSpawner::houses
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___houses_4;
	// UnityEngine.Transform HouseSpawner::spawnPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPos_5;
};

// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
};

struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_StaticFields
{
	// System.String UnityEngine.UIElements.Label::ussClassName
	String_t* ___ussClassName_79;
};

// PauseScreen
struct PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UIElements.Button PauseScreen::resumeButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___resumeButton_4;
	// UnityEngine.UIElements.Button PauseScreen::restartButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___restartButton_5;
	// UnityEngine.UIElements.Button PauseScreen::exitButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___exitButton_6;
	// HUDScreen PauseScreen::screen
	HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* ___screen_7;
	// Score PauseScreen::score
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* ___score_8;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Player::<speed>k__BackingField
	float ___U3CspeedU3Ek__BackingField_4;
	// Factory Player::factory
	Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* ___factory_5;
	// System.String Player::rotationDirection
	String_t* ___rotationDirection_6;
	// Score Player::score
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* ___score_7;
	// System.Boolean Player::<isStartMoving>k__BackingField
	bool ___U3CisStartMovingU3Ek__BackingField_8;
	// System.Boolean Player::isStartTiming
	bool ___isStartTiming_9;
};

// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Score::time
	int32_t ___time_4;
	// System.Int32 Score::remainingTime
	int32_t ___remainingTime_5;
	// System.Int32 Score::<timer>k__BackingField
	int32_t ___U3CtimerU3Ek__BackingField_6;
	// System.String Score::<highscore>k__BackingField
	String_t* ___U3ChighscoreU3Ek__BackingField_7;
	// System.Single Score::playerPos
	float ___playerPos_8;
	// System.Boolean Score::checkPos
	bool ___checkPos_9;
	// System.Int32 Score::<fallPizzaCount>k__BackingField
	int32_t ___U3CfallPizzaCountU3Ek__BackingField_10;
	// System.Int32 Score::<ScorePoint>k__BackingField
	int32_t ___U3CScorePointU3Ek__BackingField_11;
};

// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 SwipeDetection::tapPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tapPosition_5;
	// UnityEngine.Vector2 SwipeDetection::swipeDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___swipeDelta_6;
	// System.Single SwipeDetection::deadZone
	float ___deadZone_7;
	// System.Boolean SwipeDetection::isSwiping
	bool ___isSwiping_8;
	// System.Boolean SwipeDetection::isMobile
	bool ___isMobile_9;
};

struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields
{
	// SwipeDetection/OnSwipeInput SwipeDetection::SwipeEvent
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___SwipeEvent_4;
};

// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityEngine.UIElements.UIDocument::m_UIDocumentCreationIndex
	int32_t ___m_UIDocumentCreationIndex_8;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PanelSettings
	PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC* ___m_PanelSettings_9;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PreviousPanelSettings
	PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC* ___m_PreviousPanelSettings_10;
	// UnityEngine.UIElements.UIDocument UnityEngine.UIElements.UIDocument::m_ParentUI
	UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* ___m_ParentUI_11;
	// UnityEngine.UIElements.UIDocumentList UnityEngine.UIElements.UIDocument::m_ChildrenContent
	UIDocumentList_tA2A8305DE916298E4C586EC8235085560914E7C3* ___m_ChildrenContent_12;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument> UnityEngine.UIElements.UIDocument::m_ChildrenContentCopy
	List_1_t74EC90C5F42E1A99F29BC6A7FF27FD27FCF98344* ___m_ChildrenContentCopy_13;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.UIDocument::sourceAsset
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset_14;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::m_RootVisualElement
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_RootVisualElement_15;
	// System.Int32 UnityEngine.UIElements.UIDocument::m_FirstChildInsertIndex
	int32_t ___m_FirstChildInsertIndex_16;
	// System.Single UnityEngine.UIElements.UIDocument::m_SortingOrder
	float ___m_SortingOrder_17;
};

struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_StaticFields
{
	// System.Int32 UnityEngine.UIElements.UIDocument::s_CurrentUIDocumentCounter
	int32_t ___s_CurrentUIDocumentCounter_7;
};

// Vehicle
struct Vehicle_t073676C9121D3FB86ABB1A8B4406EDADC8F2F9B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Vehicle::speed
	float ___speed_4;
};

// VehicleDestroy
struct VehicleDestroy_tEEC011CCBD02442B883D3BA5AD098B9A4130B653  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VehicleSpawner
struct VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> VehicleSpawner::vehicles
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___vehicles_4;
	// UnityEngine.Transform VehicleSpawner::spawnPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPos_5;
	// System.Single VehicleSpawner::minSeparationTime
	float ___minSeparationTime_6;
	// System.Single VehicleSpawner::maxSeparationTime
	float ___maxSeparationTime_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649  : public RuntimeArray
{
	ALIGN_FIELD (8) Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* m_Items[1];

	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared (bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Implicit(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC StyleEnum_1_op_Implicit_mD776DEBA28E9493976D039080BBB10FF0DA48362_gshared (int32_t ___v0, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean Player::get_isStartMoving()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Player_get_isStartMoving_m0D562BC32A07B7A24071FD32BD44D2A203AB3076_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Single Player::get_speed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_speed_m18501A8629B984AA49088D1EAD23132F15676129_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Boolean FinishScreen::get_isFinished()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FinishScreen_get_isFinished_m1C65D285685984A31F2E5CA62294BA852805FD0A_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Death::Defeat(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Death_Defeat_mDA98317E085D4D3E621ED94164B202314FB7AAE5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Factory>()
inline Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68 (const RuntimeMethod* method)
{
	return ((  Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<GameOverScreen>(System.Boolean)
inline GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_mCBC8171D5B940415BA020DB28B981B36EB77B8F8 (bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___includeInactive0, method);
}
// System.Void Death::set_isDefeat(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Death_set_isDefeat_m0B85B8BC904F9C8F4666AF51A4B25378352BE5D2_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Int32 Factory::get_PizzaCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Factory_get_PizzaCount_m45821852547ECED2FBBE8A539150F0BAAEAB15AA_inline (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) ;
// System.Void GameOverScreen::OpenGameOverScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_OpenGameOverScreen_mC154C92FAC0889C6312E692AC59F55BB256FB7CF (GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* __this, const RuntimeMethod* method) ;
// System.Void Player::set_speed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_speed_m0F212A9054680451F0E2A3E9C86155110EB806BD_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> Factory::get_PizzaList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Factory_get_PizzaList_m953F006FEECB44F3BAF5EF203E2B5476B4ACBAC6_inline (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Factory::SpawnRoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory_SpawnRoad_mFD77DD281158712379E86A90008A5BD6F49F7DD0 (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Factory::PizzaSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory_PizzaSpawn_mF8DE020468CF4B4386E7318B7C65C3CCE09F46C6 (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Int32 Factory::UniqueRandom(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Factory_UniqueRandom_mE39A731BBE68F8CD0CA5D599E8229757F164C53E (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) ;
// System.Int32 Factory::get_spawnCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Factory_get_spawnCount_m73D7D2DE503B7B68E574062F12D32CA1E18E782C_inline (const RuntimeMethod* method) ;
// System.Void Factory::set_PizzaCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Factory_set_PizzaCount_m84370034CE57ABA21DBCC582E0B754F0A4DC229B_inline (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<FinishScreen>(System.Boolean)
inline FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* Object_FindObjectOfType_TisFinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_m722A17C0ACE2F3D5705945C65D8B1AE97F53DE6D (bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___includeInactive0, method);
}
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void FinishScreen::OpenFinishScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScreen_OpenFinishScreen_m2D508AC9C5DAAECD5822D3D94BB5E87A701985C1 (FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* __this, const RuntimeMethod* method) ;
// System.Void HouseSpawner::HouseSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HouseSpawner_HouseSpawn_mF319A6217D7A3211526C1B3F5015D279A75AAD23 (HouseSpawner_t5E422CB3555F3F8C02F188CCF27B0217DEAC9B8C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Score>()
inline Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0 (const RuntimeMethod* method)
{
	return ((  Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void SwipeDetection/OnSwipeInput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipeInput__ctor_mB0C6E52702E54A667BCD028ACF0120D7DE560391 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SwipeDetection::add_SwipeEvent(SwipeDetection/OnSwipeInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_add_SwipeEvent_mF9941194CA9EA15FEA5E4894731E99BAD6736A26 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___value0, const RuntimeMethod* method) ;
// System.Boolean Death::get_isDefeat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Death_get_isDefeat_mEDDE227CBD91E6295898E9785EB94D16C997F896_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Player::set_isStartMoving(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_isStartMoving_m53F056E9999FDBC2A4D638BD39B93EBB174729E3_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Void Score::StartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_StartTimer_m50C73AD50F0D5806A66D5E668790AA02FB40E40A (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void Score::PizzaFalling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_PizzaFalling_mE5C61701C13FCAAFC1218E0A4E80D590CA9B1F20 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// System.Void SwipeDetection::remove_SwipeEvent(SwipeDetection/OnSwipeInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_remove_SwipeEvent_mDE7CC7ABDF14C1D586D8013385B58BE186AD383D (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void SwipeDetection::ResetSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_ResetSwipe_mE1DC59EAC068295F9BF52C2CEA10AB56560FA141 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void SwipeDetection::CheckSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_CheckSwipe_m33523EEE4FE21D4E9068FC0F47F9591C54AF2A5B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// System.Void SwipeDetection/OnSwipeInput::Invoke(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_inline (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameOverScreen>()
inline GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_m7F8F1B1327B270DDE9F0DFAF90FB0F2C0177EE03 (const RuntimeMethod* method)
{
	return ((  GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<HUDScreen>()
inline HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m2958D1BD1B81465BAA86B696C86C759EA993B390 (const RuntimeMethod* method)
{
	return ((  HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void FinishScreen::set_isFinished(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishScreen_set_isFinished_m499A5DF01B0C5EADFE6059D2F0A83A557062E212_inline (bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UIElements.UIDocument>()
inline UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::get_rootVisualElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1 (UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* __this, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Button>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method)
{
	return ((  Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___e0, ___name1, ___className2, method);
}
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Label>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method)
{
	return ((  Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___e0, ___name1, ___className2, method);
}
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.VisualElement>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method)
{
	return ((  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___e0, ___name1, ___className2, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Button::add_clicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81 (Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Int32 Score::get_ScorePoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IStyle UnityEngine.UIElements.VisualElement::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>::op_Implicit(T)
inline StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030 (int32_t ___v0, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_mD776DEBA28E9493976D039080BBB10FF0DA48362_gshared)(___v0, method);
}
// System.Void Score::SetHighscore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_SetHighscore_m091F2A2252AD522DDB3C046D6D27A0005E16BD1D (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// System.String Score::get_highscore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_highscore_m1D405A59E74D0A4E49C92FA0EECB3CA4E2173533_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite FinishScreen::MedalChoose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* FinishScreen_MedalChoose_mE1A313D6281A6165105FBE3FAE94B4112C00D019 (FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleBackground::.ctor(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleBackground__ctor_mFBD280CC7814525DBEE2EB60A770DA5E31EC59E4 (StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void Factory::set_spawnCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Factory_set_spawnCount_m3A39AC8230FFA52FBC03D43AFD66F1AB79608460_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Int32 Score::get_timer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Score_get_timer_mDD5870F6E6B2C3B4940332A924D2DB2CBE266B5A_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// System.Int32 Score::get_fallPizzaCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Score_get_fallPizzaCount_m73CC7576028696F71ECA6CC2EB0BB6796C04EA98_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::.ctor()
inline void List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void FinishScreen/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDE3548A427121CBF710B7A7F66D0F85DB9064765 (U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GameOverScreen::ExitButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_ExitButtonPressed_mB48B05C9A4C07DDF1477C200A570DB0F8E760878 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<PauseScreen>(System.Boolean)
inline PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* Object_FindObjectOfType_TisPauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD_m4CDBE13676D1822B5E1FF76C1EF4BB43D923D260 (bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___includeInactive0, method);
}
// System.Void HUDScreen::OpenHUDScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDScreen_OpenHUDScreen_m6F703B0094923FEEE06B8E6FE88769280B1E2E32 (HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.Void PauseScreen::OpenPauseScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseScreen_OpenPauseScreen_m3E52DB5E7EDBB5F824E9086AA53A123A576BA422 (PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<HUDScreen>(System.Boolean)
inline HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m7F280EF139F161B80A01FEE50E9A22FCA340BB0A (bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___includeInactive0, method);
}
// System.Void Score::StopTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_StopTimer_mFB83ABEEFB4F82C1BAA7065AE77C753F3114247E (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// System.Void Score::ResumeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_ResumeTimer_mF774ACFC2C8407E4211A631E3AE60A3919EA7920 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// System.Void PauseScreen/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8FE2038749CB45A5440DBDE72132A3026AB1A30B (U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Score::set_highscore(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_highscore_mF438C587835BF6007334EB8626F263EC4E197504_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Score::set_ScorePoint(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_ScorePoint_m691D67A13A9BFFFB429E376AAEF89C31CB1B16E7_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Score::set_fallPizzaCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_fallPizzaCount_m6914170BA50F1F621476F43DBEBA9CC9E9ED8FC4_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Score::IncrimentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Score_IncrimentTime_m0E48C51471BB236E874DF9A4C021296BE7730D72 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Score/<IncrimentTime>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncrimentTimeU3Ed__28__ctor_mDE90EA47A09D8C368799E219C40BF2DE2FDFBC28 (U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Score::set_timer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_timer_m45A53389B0B96A8482E0360B59D696938909AF8C_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator VehicleSpawner::SpawnVehicle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VehicleSpawner_SpawnVehicle_mC75A69681206E28C99A6A6E472EFC48C18CD0BA9 (VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* __this, const RuntimeMethod* method) ;
// System.Void VehicleSpawner/<SpawnVehicle>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnVehicleU3Ed__5__ctor_mBA8761F60194E1291A357FAD5CC9C8B8BC6008EF (U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraWalker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWalker_Awake_m15F89893EF80F31ABF63DA6990E827A797DEE8C9 (CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_0);
		// offset = transform.position - player.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___player_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		__this->___offset_5 = L_6;
		// playerInst = player.GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___player_4;
		NullCheck(L_7);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8;
		L_8 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_7, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___playerInst_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerInst_7), (void*)L_8);
		// }
		return;
	}
}
// System.Void CameraWalker::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWalker_FixedUpdate_m070A809289208BA3881B4975B0BD76A4CACF6824 (CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC* __this, const RuntimeMethod* method) 
{
	{
		// if (playerInst.isStartMoving)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___playerInst_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = Player_get_isStartMoving_m0D562BC32A07B7A24071FD32BD44D2A203AB3076_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0131;
		}
	}
	{
		// if (playerInst.speed <= 2) //If player stops
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2 = __this->___playerInst_7;
		NullCheck(L_2);
		float L_3;
		L_3 = Player_get_speed_m18501A8629B984AA49088D1EAD23132F15676129_inline(L_2, NULL);
		if ((!(((float)L_3) <= ((float)(2.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		// if (FinishScreen.isFinished is false)
		bool L_4;
		L_4 = FinishScreen_get_isFinished_m1C65D285685984A31F2E5CA62294BA852805FD0A_inline(NULL);
		if (L_4)
		{
			goto IL_0131;
		}
	}
	{
		// transform.position += speedToDeath * Time.fixedDeltaTime * Vector3.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = __this->___speedToDeath_9;
		float L_9;
		L_9 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_8, L_9)), L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_11, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_12, NULL);
		// offsetStop = transform.position - player.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___player_4;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_14, L_17, NULL);
		__this->___offsetStop_6 = L_18;
		// if (offsetStop.magnitude < magnitudeToDeath) //Defeat if the player is off screen
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___offsetStop_6);
		float L_20;
		L_20 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_19, NULL);
		float L_21 = __this->___magnitudeToDeath_8;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_0131;
		}
	}
	{
		// Death.Defeat(player);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___player_4;
		Death_Defeat_mDA98317E085D4D3E621ED94164B202314FB7AAE5(L_22, NULL);
		return;
	}

IL_00a0:
	{
		// if (offsetStop.magnitude < offset.magnitude) //The camera catches up with the player
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___offsetStop_6);
		float L_24;
		L_24 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___offset_5);
		float L_26;
		L_26 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_25, NULL);
		if ((!(((float)L_24) < ((float)L_26))))
		{
			goto IL_010b;
		}
	}
	{
		// transform.position += speedToDeath * Time.fixedDeltaTime * Vector3.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = __this->___speedToDeath_9;
		float L_31;
		L_31 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_30, L_31)), L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_33, NULL);
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_34, NULL);
		// offsetStop = transform.position - player.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___player_4;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_36, L_39, NULL);
		__this->___offsetStop_6 = L_40;
		return;
	}

IL_010b:
	{
		// transform.position = player.transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___player_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_45, NULL);
		NullCheck(L_41);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_41, L_46, NULL);
	}

IL_0131:
	{
		// }
		return;
	}
}
// System.Void CameraWalker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWalker__ctor_m6316E6CA2E7F64DBAA18E365C3F4344409CF9FAF (CameraWalker_t04284262D4EF568956C5F39D01E9A206703620BC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Boolean Death::get_isDefeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Death_get_isDefeat_mEDDE227CBD91E6295898E9785EB94D16C997F896 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isDefeat { get; set; }
		bool L_0 = ((Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_StaticFields*)il2cpp_codegen_static_fields_for(Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var))->___U3CisDefeatU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Death::set_isDefeat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Death_set_isDefeat_m0B85B8BC904F9C8F4666AF51A4B25378352BE5D2 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isDefeat { get; set; }
		bool L_0 = ___value0;
		((Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_StaticFields*)il2cpp_codegen_static_fields_for(Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var))->___U3CisDefeatU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Death::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Death_Awake_m94945032BF13813CA74151D204A2F70ADA444D91 (Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_mCBC8171D5B940415BA020DB28B981B36EB77B8F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// factory = FindObjectOfType<Factory>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_0;
		L_0 = Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68(Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68_RuntimeMethod_var);
		__this->___factory_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___factory_5), (void*)L_0);
		// gameOverScreen = FindObjectOfType<GameOverScreen>(true);
		GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* L_1;
		L_1 = Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_mCBC8171D5B940415BA020DB28B981B36EB77B8F8((bool)1, Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_mCBC8171D5B940415BA020DB28B981B36EB77B8F8_RuntimeMethod_var);
		((Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_StaticFields*)il2cpp_codegen_static_fields_for(Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var))->___gameOverScreen_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_StaticFields*)il2cpp_codegen_static_fields_for(Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var))->___gameOverScreen_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Death::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Death_Start_mEBD9AB6A8974DBABE72EA712FDAB88963863956F (Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF* __this, const RuntimeMethod* method) 
{
	{
		// private void Start() => isDefeat = false;
		Death_set_isDefeat_m0B85B8BC904F9C8F4666AF51A4B25378352BE5D2_inline((bool)0, NULL);
		return;
	}
}
// System.Void Death::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Death_FixedUpdate_m2A8186F98AF840E8E1B9C3EFE946E52519A9AE9C (Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (factory.PizzaCount == 0)
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_0 = __this->___factory_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Factory_get_PizzaCount_m45821852547ECED2FBBE8A539150F0BAAEAB15AA_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// gameOverScreen.OpenGameOverScreen();
		GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* L_2 = ((Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_StaticFields*)il2cpp_codegen_static_fields_for(Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var))->___gameOverScreen_6;
		NullCheck(L_2);
		GameOverScreen_OpenGameOverScreen_mC154C92FAC0889C6312E692AC59F55BB256FB7CF(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Death::Defeat(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Death_Defeat_mDA98317E085D4D3E621ED94164B202314FB7AAE5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isDefeat = true;
		Death_set_isDefeat_m0B85B8BC904F9C8F4666AF51A4B25378352BE5D2_inline((bool)1, NULL);
		// player.GetComponent<Player>().speed = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___player0;
		NullCheck(L_0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1;
		L_1 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_0, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		NullCheck(L_1);
		Player_set_speed_m0F212A9054680451F0E2A3E9C86155110EB806BD_inline(L_1, (0.0f), NULL);
		// var rb = player.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___player0;
		NullCheck(L_2);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3;
		L_3 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_2, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// rb.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = L_3;
		NullCheck(L_4);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_4, (bool)1, NULL);
		// rb.isKinematic = false;
		NullCheck(L_4);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_4, (bool)0, NULL);
		// if(FinishScreen.isFinished is false)
		bool L_5;
		L_5 = FinishScreen_get_isFinished_m1C65D285685984A31F2E5CA62294BA852805FD0A_inline(NULL);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// gameOverScreen.OpenGameOverScreen();
		GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* L_6 = ((Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_StaticFields*)il2cpp_codegen_static_fields_for(Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var))->___gameOverScreen_6;
		NullCheck(L_6);
		GameOverScreen_OpenGameOverScreen_mC154C92FAC0889C6312E692AC59F55BB256FB7CF(L_6, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Death::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Death__ctor_m7C1ADD15CCC13AA5F8A62BC4433AF85749F3DF7D (Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void DefeatTrigger::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatTrigger_Awake_mAE59B140F31FDEF37F55A8DAD6FCE7F8DABF910D (DefeatTrigger_t1107B9229EC1583D3F30E2C9CA41154B67F30C1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// factory = FindObjectOfType<Factory>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_0;
		L_0 = Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68(Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68_RuntimeMethod_var);
		__this->___factory_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___factory_4), (void*)L_0);
		// player = GameObject.FindWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void DefeatTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatTrigger_OnTriggerEnter_m206E3D3172928AEF9E0472E8B865B5CB7B75228E (DefeatTrigger_t1107B9229EC1583D3F30E2C9CA41154B67F30C1A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Death.Defeat(player);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_5;
		Death_Defeat_mDA98317E085D4D3E621ED94164B202314FB7AAE5(L_0, NULL);
		// if(factory.PizzaCount > 0)
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_1 = __this->___factory_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Factory_get_PizzaCount_m45821852547ECED2FBBE8A539150F0BAAEAB15AA_inline(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		// foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_3 = __this->___factory_4;
		NullCheck(L_3);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4;
		L_4 = Factory_get_PizzaList_m953F006FEECB44F3BAF5EF203E2B5476B4ACBAC6_inline(L_3, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = V_2;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_8);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_9;
		L_9 = GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F(L_8, GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var);
		V_0 = L_9;
		V_1 = 0;
		goto IL_004f;
	}

IL_003d:
	{
		// foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// item.GetComponent<Rigidbody>().isKinematic = false;
		NullCheck(L_13);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14;
		L_14 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_13, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_14);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_14, (bool)0, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004f:
	{
		// foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
		int32_t L_16 = V_1;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_003d;
		}
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void DefeatTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatTrigger__ctor_m10A28DDB123F9E66E6EE553EDF6ADDF87B664F26 (DefeatTrigger_t1107B9229EC1583D3F30E2C9CA41154B67F30C1A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void DestroyCollide::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyCollide_OnTriggerEnter_mD2DF3690F5DF04E856AB94FBD88B7DBCDC212F00 (DestroyCollide_t3594DF4BD7D26390997318D5AD8914853A355B3D* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void DestroyCollide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyCollide__ctor_mD284C65CC9A3ED8C2A0BE8C19850EE06B62BE842 (DestroyCollide_t3594DF4BD7D26390997318D5AD8914853A355B3D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Int32 Factory::get_spawnCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Factory_get_spawnCount_m73D7D2DE503B7B68E574062F12D32CA1E18E782C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int spawnCount { get; set; } = 4;
		il2cpp_codegen_runtime_class_init_inline(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_StaticFields*)il2cpp_codegen_static_fields_for(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var))->___U3CspawnCountU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Factory::set_spawnCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory_set_spawnCount_m3A39AC8230FFA52FBC03D43AFD66F1AB79608460 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int spawnCount { get; set; } = 4;
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		((Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_StaticFields*)il2cpp_codegen_static_fields_for(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var))->___U3CspawnCountU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> Factory::get_PizzaList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Factory_get_PizzaList_m953F006FEECB44F3BAF5EF203E2B5476B4ACBAC6 (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) 
{
	{
		// public List<GameObject> PizzaList { get; set; } = new();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___U3CPizzaListU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Factory::set_PizzaList(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory_set_PizzaList_m23D9B89FC93E18189396B50B5F36C9D017014096 (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<GameObject> PizzaList { get; set; } = new();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___value0;
		__this->___U3CPizzaListU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPizzaListU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Int32 Factory::get_PizzaCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Factory_get_PizzaCount_m45821852547ECED2FBBE8A539150F0BAAEAB15AA (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) 
{
	{
		// public int PizzaCount { get; set; }
		int32_t L_0 = __this->___U3CPizzaCountU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Factory::set_PizzaCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory_set_PizzaCount_m84370034CE57ABA21DBCC582E0B754F0A4DC229B (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int PizzaCount { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CPizzaCountU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void Factory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory_Start_m28B162443601EEE94296AFF1E8C156E29F0857B0 (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 2; i++)
		V_0 = 0;
		goto IL_0039;
	}

IL_0004:
	{
		// Instantiate(roads[0], currentPosition, Quaternion.identity);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___roads_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___currentPosition_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// currentPosition.x += roadLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___currentPosition_13);
		float* L_6 = (&L_5->___x_2);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, (12.0f)));
		// for (int i = 0; i < 2; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < 2; i++)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		// SpawnRoad();
		Factory_SpawnRoad_mFD77DD281158712379E86A90008A5BD6F49F7DD0(__this, NULL);
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_11), (void*)L_11);
		// Instantiate(pizzaHouse, new Vector3(8.5f, 0, 10), Quaternion.Euler(0, -90, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pizzaHouse_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (8.5f), (0.0f), (10.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (-90.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_12, L_13, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// PizzaSpawn();
		Factory_PizzaSpawn_mF8DE020468CF4B4386E7318B7C65C3CCE09F46C6(__this, NULL);
		// }
		return;
	}
}
// System.Int32 Factory::UniqueRandom(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Factory_UniqueRandom_mE39A731BBE68F8CD0CA5D599E8229757F164C53E (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int val = Random.Range(min, max);
		int32_t L_0 = ___min0;
		int32_t L_1 = ___max1;
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_000a:
	{
		// val = Random.Range(min, max);
		int32_t L_3 = ___min0;
		int32_t L_4 = ___max1;
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(L_3, L_4, NULL);
		V_0 = L_5;
	}

IL_0012:
	{
		// while (lastValue == val)
		int32_t L_6 = __this->___lastValue_14;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_000a;
		}
	}
	{
		// lastValue = val;
		int32_t L_8 = V_0;
		__this->___lastValue_14 = L_8;
		// return val;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void Factory::SpawnRoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory_SpawnRoad_mFD77DD281158712379E86A90008A5BD6F49F7DD0 (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i <= spawnCount; i++)
		V_0 = 0;
		goto IL_010d;
	}

IL_0007:
	{
		// Instantiate(roads[UniqueRandom(1, roads.Count)], currentPosition, Quaternion.identity);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___roads_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___roads_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Factory_UniqueRandom_mE39A731BBE68F8CD0CA5D599E8229757F164C53E(__this, 1, L_2, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___currentPosition_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// currentPosition.x += roadLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___currentPosition_13);
		float* L_9 = (&L_8->___x_2);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_add(L_11, (12.0f)));
		// Instantiate(roads[0], currentPosition, Quaternion.identity);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___roads_4;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_12, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___currentPosition_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_13, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// currentPosition.x += roadLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___currentPosition_13);
		float* L_18 = (&L_17->___x_2);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_add(L_20, (12.0f)));
		// if(i == spawnCount)
		int32_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = Factory_get_spawnCount_m73D7D2DE503B7B68E574062F12D32CA1E18E782C_inline(NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0109;
		}
	}
	{
		// Instantiate(roads[0], currentPosition, Quaternion.identity);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_23 = __this->___roads_4;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_23, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___currentPosition_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_24, L_25, L_26, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Instantiate(finishTrigger, currentPosition, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___finishTrigger_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___currentPosition_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_28, L_29, L_30, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// currentPosition.x += roadLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___currentPosition_13);
		float* L_33 = (&L_32->___x_2);
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		*((float*)L_34) = (float)((float)il2cpp_codegen_add(L_35, (12.0f)));
		// Instantiate(houses[Random.Range(0, houses.Count)], currentPosition, Quaternion.Euler(0, -90, 0));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_36 = __this->___houses_5;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_37 = __this->___houses_5;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_37, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_39;
		L_39 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_38, NULL);
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_36, L_39, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___currentPosition_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (-90.0f), (0.0f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_40, L_41, L_42, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_0109:
	{
		// for (int i = 0; i <= spawnCount; i++)
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_010d:
	{
		// for (int i = 0; i <= spawnCount; i++)
		int32_t L_45 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		int32_t L_46;
		L_46 = Factory_get_spawnCount_m73D7D2DE503B7B68E574062F12D32CA1E18E782C_inline(NULL);
		if ((((int32_t)L_45) <= ((int32_t)L_46)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Factory::PizzaSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory_PizzaSpawn_mF8DE020468CF4B4386E7318B7C65C3CCE09F46C6 (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// PizzaCount = 4;
		Factory_set_PizzaCount_m84370034CE57ABA21DBCC582E0B754F0A4DC229B_inline(__this, 4, NULL);
		// Vector3 pizzaSpawnPos = new(-1.868f, 1.378f, 0.013f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (-1.86800003f), (1.37800002f), (0.0130000003f), NULL);
		// for (int i = 0; i < PizzaCount; i++)
		V_1 = 0;
		goto IL_007d;
	}

IL_0021:
	{
		// var pizza = Instantiate(pizzaPrefab, pizzaSpawnPos, Quaternion.Euler(0, 0, 9.648f), player.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pizzaPrefab_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (9.64799976f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___player_11;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_0, L_1, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		V_2 = L_5;
		// pizzaSpawnPos.y += 0.1f;
		float* L_6 = (&(&V_0)->___y_3);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, (0.100000001f)));
		// pizzaSpawnPos.x -= 0.03f;
		float* L_9 = (&(&V_0)->___x_2);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_subtract(L_11, (0.0299999993f)));
		// PizzaList.Add(pizza);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12;
		L_12 = Factory_get_PizzaList_m953F006FEECB44F3BAF5EF203E2B5476B4ACBAC6_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		NullCheck(L_12);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_12, L_13, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < PizzaCount; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_007d:
	{
		// for (int i = 0; i < PizzaCount; i++)
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Factory_get_PizzaCount_m45821852547ECED2FBBE8A539150F0BAAEAB15AA_inline(__this, NULL);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Factory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory__ctor_m8A868830FC6D7FCB905746BFF6A02B86AD9DAB72 (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] List<GameObject> roads = new();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___roads_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roads_4), (void*)L_0);
		// [SerializeField] List<GameObject> houses = new();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___houses_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___houses_5), (void*)L_1);
		// private Vector3 currentPosition = new(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___currentPosition_13 = L_2;
		// public List<GameObject> PizzaList { get; set; } = new();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_3, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___U3CPizzaListU3Ek__BackingField_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPizzaListU3Ek__BackingField_15), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Factory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory__cctor_mA8BE23DF76539C3A8218B62E3758D58656000386 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int spawnCount { get; set; } = 4;
		((Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_StaticFields*)il2cpp_codegen_static_fields_for(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var))->___U3CspawnCountU3Ek__BackingField_10 = 4;
		return;
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
// System.Void Finish::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Finish_Awake_mC5C286A83861432F1D1EE412AD594A443EF12A0D (Finish_t7B428A170706166079FF44C68B92C634021A0E99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_m722A17C0ACE2F3D5705945C65D8B1AE97F53DE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void Awake() => fScreen = FindObjectOfType<FinishScreen>(true);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* L_0;
		L_0 = Object_FindObjectOfType_TisFinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_m722A17C0ACE2F3D5705945C65D8B1AE97F53DE6D((bool)1, Object_FindObjectOfType_TisFinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_m722A17C0ACE2F3D5705945C65D8B1AE97F53DE6D_RuntimeMethod_var);
		__this->___fScreen_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fScreen_4), (void*)L_0);
		return;
	}
}
// System.Void Finish::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Finish_OnTriggerEnter_mDC370B2BF5CD1BAFA144EBA7B036BFFB95636BF0 (Finish_t7B428A170706166079FF44C68B92C634021A0E99* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// other.GetComponent<Player>().speed = 0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4;
		L_4 = Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3(L_3, Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3_RuntimeMethod_var);
		NullCheck(L_4);
		Player_set_speed_m0F212A9054680451F0E2A3E9C86155110EB806BD_inline(L_4, (0.0f), NULL);
		// fScreen.OpenFinishScreen();
		FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* L_5 = __this->___fScreen_4;
		NullCheck(L_5);
		FinishScreen_OpenFinishScreen_m2D508AC9C5DAAECD5822D3D94BB5E87A701985C1(L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Finish::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Finish__ctor_m1C22870293D937B3091D24E0C0EB27B7DF08B48B (Finish_t7B428A170706166079FF44C68B92C634021A0E99* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void HouseSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HouseSpawner_Start_m3A22C0AAF70A6DAFCA1BA785B9BC61A613F8937B (HouseSpawner_t5E422CB3555F3F8C02F188CCF27B0217DEAC9B8C* __this, const RuntimeMethod* method) 
{
	{
		// HouseSpawn();
		HouseSpawner_HouseSpawn_mF319A6217D7A3211526C1B3F5015D279A75AAD23(__this, NULL);
		// }
		return;
	}
}
// System.Void HouseSpawner::HouseSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HouseSpawner_HouseSpawn_mF319A6217D7A3211526C1B3F5015D279A75AAD23 (HouseSpawner_t5E422CB3555F3F8C02F188CCF27B0217DEAC9B8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int i = Random.Range(0, houses.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___houses_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_1, NULL);
		V_0 = L_2;
		// Instantiate(houses[i], spawnPos.position, houses[i].transform.rotation);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___houses_4;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___spawnPos_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___houses_4;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_8, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_7, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HouseSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HouseSpawner__ctor_m0DCEB4588F5A2D513E4D2608A59A5DA19D326DC5 (HouseSpawner_t5E422CB3555F3F8C02F188CCF27B0217DEAC9B8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] List<GameObject> houses = new();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___houses_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___houses_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Single Player::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_get_speed_m18501A8629B984AA49088D1EAD23132F15676129 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float speed { get; set; } = 0;
		float L_0 = __this->___U3CspeedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Player::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_speed_m0F212A9054680451F0E2A3E9C86155110EB806BD (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float speed { get; set; } = 0;
		float L_0 = ___value0;
		__this->___U3CspeedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Player::get_isStartMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_get_isStartMoving_m0D562BC32A07B7A24071FD32BD44D2A203AB3076 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public bool isStartMoving { get; private set; } = false;
		bool L_0 = __this->___U3CisStartMovingU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Player::set_isStartMoving(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_isStartMoving_m53F056E9999FDBC2A4D638BD39B93EBB174729E3 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isStartMoving { get; private set; } = false;
		bool L_0 = ___value0;
		__this->___U3CisStartMovingU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_OnSwipe_m755F9F95C42FE494A4B1EA54F32E277B4A909496_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// factory = FindObjectOfType<Factory>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_0;
		L_0 = Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68(Object_FindObjectOfType_TisFactory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_m5A0CF75A7285D18F837B42BB626ABC4D42BB1D68_RuntimeMethod_var);
		__this->___factory_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___factory_5), (void*)L_0);
		// score = FindObjectOfType<Score>();
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_1;
		L_1 = Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0(Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		__this->___score_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_7), (void*)L_1);
		// SwipeDetection.SwipeEvent += OnSwipe;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_2 = (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)il2cpp_codegen_object_new(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OnSwipeInput__ctor_mB0C6E52702E54A667BCD028ACF0120D7DE560391(L_2, __this, (intptr_t)((void*)Player_OnSwipe_m755F9F95C42FE494A4B1EA54F32E277B4A909496_RuntimeMethod_var), NULL);
		SwipeDetection_add_SwipeEvent_mF9941194CA9EA15FEA5E4894731E99BAD6736A26(L_2, NULL);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mEDDB0539FCD5145298CB87D4592DFFF98503AF9B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!Death.isDefeat && !FinishScreen.isFinished) //Block the moving after death/victory
		bool L_0;
		L_0 = Death_get_isDefeat_mEDDE227CBD91E6295898E9785EB94D16C997F896_inline(NULL);
		if (L_0)
		{
			goto IL_00d7;
		}
	}
	{
		bool L_1;
		L_1 = FinishScreen_get_isFinished_m1C65D285685984A31F2E5CA62294BA852805FD0A_inline(NULL);
		if (L_1)
		{
			goto IL_00d7;
		}
	}
	{
		// if (speed < 10)
		float L_2;
		L_2 = Player_get_speed_m18501A8629B984AA49088D1EAD23132F15676129_inline(__this, NULL);
		if ((!(((float)L_2) < ((float)(10.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// if (rotationDirection is "up")
		String_t* L_3 = __this->___rotationDirection_6;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, NULL);
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		// speed++;
		float L_5;
		L_5 = Player_get_speed_m18501A8629B984AA49088D1EAD23132F15676129_inline(__this, NULL);
		V_0 = L_5;
		float L_6 = V_0;
		Player_set_speed_m0F212A9054680451F0E2A3E9C86155110EB806BD_inline(__this, ((float)il2cpp_codegen_add(L_6, (1.0f))), NULL);
		// isStartMoving = true;
		Player_set_isStartMoving_m53F056E9999FDBC2A4D638BD39B93EBB174729E3_inline(__this, (bool)1, NULL);
		// rotationDirection = null;
		__this->___rotationDirection_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rotationDirection_6), (void*)(String_t*)NULL);
	}

IL_0055:
	{
		// if (speed > 0)
		float L_7;
		L_7 = Player_get_speed_m18501A8629B984AA49088D1EAD23132F15676129_inline(__this, NULL);
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		// if (rotationDirection is "down")
		String_t* L_8 = __this->___rotationDirection_6;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, NULL);
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		// speed--;
		float L_10;
		L_10 = Player_get_speed_m18501A8629B984AA49088D1EAD23132F15676129_inline(__this, NULL);
		V_0 = L_10;
		float L_11 = V_0;
		Player_set_speed_m0F212A9054680451F0E2A3E9C86155110EB806BD_inline(__this, ((float)il2cpp_codegen_subtract(L_11, (1.0f))), NULL);
		// rotationDirection = null;
		__this->___rotationDirection_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rotationDirection_6), (void*)(String_t*)NULL);
	}

IL_008f:
	{
		// gameObject.transform.Translate(speed * Time.fixedDeltaTime * Vector3.down);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		float L_14;
		L_14 = Player_get_speed_m18501A8629B984AA49088D1EAD23132F15676129_inline(__this, NULL);
		float L_15;
		L_15 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_14, L_15)), L_16, NULL);
		NullCheck(L_13);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_13, L_17, NULL);
		// if (isStartMoving && !isStartTiming)
		bool L_18;
		L_18 = Player_get_isStartMoving_m0D562BC32A07B7A24071FD32BD44D2A203AB3076_inline(__this, NULL);
		if (!L_18)
		{
			goto IL_00d7;
		}
	}
	{
		bool L_19 = __this->___isStartTiming_9;
		if (L_19)
		{
			goto IL_00d7;
		}
	}
	{
		// score.StartTimer();
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_20 = __this->___score_7;
		NullCheck(L_20);
		Score_StartTimer_m50C73AD50F0D5806A66D5E668790AA02FB40E40A(L_20, NULL);
		// isStartTiming = true;
		__this->___isStartTiming_9 = (bool)1;
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void Player::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnCollisionEnter_mD8FFD58F1755BCB20B74ECDD0BB365677FA639EE (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5191E2C4DFFBB00038FD95BD8DED200CB04F04DE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// speed = 0;
		Player_set_speed_m0F212A9054680451F0E2A3E9C86155110EB806BD_inline(__this, (0.0f), NULL);
		// if (factory.PizzaCount > 0 && collision.gameObject.CompareTag("Vehicle"))
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_0 = __this->___factory_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Factory_get_PizzaCount_m45821852547ECED2FBBE8A539150F0BAAEAB15AA_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_2 = ___collision0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_3, _stringLiteral5191E2C4DFFBB00038FD95BD8DED200CB04F04DE, NULL);
		if (!L_4)
		{
			goto IL_00d4;
		}
	}
	{
		// factory.PizzaList[^1].transform.parent = null;
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_5 = __this->___factory_5;
		NullCheck(L_5);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6;
		L_6 = Factory_get_PizzaList_m953F006FEECB44F3BAF5EF203E2B5476B4ACBAC6_inline(L_5, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_7, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = V_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_7, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_11, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_12 = __this->___factory_5;
		NullCheck(L_12);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13;
		L_13 = Factory_get_PizzaList_m953F006FEECB44F3BAF5EF203E2B5476B4ACBAC6_inline(L_12, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_14, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		int32_t L_16 = V_2;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_14, L_16, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_17);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_18;
		L_18 = GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F(L_17, GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var);
		V_1 = L_18;
		V_0 = 0;
		goto IL_008c;
	}

IL_007a:
	{
		// foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_19 = V_1;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		// item.GetComponent<Rigidbody>().isKinematic = false;
		NullCheck(L_22);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_23;
		L_23 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_22, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_23);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_23, (bool)0, NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008c:
	{
		// foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
		int32_t L_25 = V_0;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_26 = V_1;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_007a;
		}
	}
	{
		// factory.PizzaList.RemoveAt(factory.PizzaList.Count - 1);
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_27 = __this->___factory_5;
		NullCheck(L_27);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_28;
		L_28 = Factory_get_PizzaList_m953F006FEECB44F3BAF5EF203E2B5476B4ACBAC6_inline(L_27, NULL);
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_29 = __this->___factory_5;
		NullCheck(L_29);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30;
		L_30 = Factory_get_PizzaList_m953F006FEECB44F3BAF5EF203E2B5476B4ACBAC6_inline(L_29, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_30, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_28);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_28, ((int32_t)il2cpp_codegen_subtract(L_31, 1)), List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// factory.PizzaCount--;
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_32 = __this->___factory_5;
		Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Factory_get_PizzaCount_m45821852547ECED2FBBE8A539150F0BAAEAB15AA_inline(L_33, NULL);
		V_0 = L_34;
		int32_t L_35 = V_0;
		NullCheck(L_33);
		Factory_set_PizzaCount_m84370034CE57ABA21DBCC582E0B754F0A4DC229B_inline(L_33, ((int32_t)il2cpp_codegen_subtract(L_35, 1)), NULL);
		// score.PizzaFalling();
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_36 = __this->___score_7;
		NullCheck(L_36);
		Score_PizzaFalling_mE5C61701C13FCAAFC1218E0A4E80D590CA9B1F20(L_36, NULL);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void Player::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDestroy_m130A1BF02C7F0D5620BF35D6D2C198F2F011552C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_OnSwipe_m755F9F95C42FE494A4B1EA54F32E277B4A909496_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SwipeDetection.SwipeEvent -= OnSwipe;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_0 = (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)il2cpp_codegen_object_new(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnSwipeInput__ctor_mB0C6E52702E54A667BCD028ACF0120D7DE560391(L_0, __this, (intptr_t)((void*)Player_OnSwipe_m755F9F95C42FE494A4B1EA54F32E277B4A909496_RuntimeMethod_var), NULL);
		SwipeDetection_remove_SwipeEvent_mDE7CC7ABDF14C1D586D8013385B58BE186AD383D(L_0, NULL);
		// }
		return;
	}
}
// System.Void Player::OnSwipe(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnSwipe_m755F9F95C42FE494A4B1EA54F32E277B4A909496 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		s_Il2CppMethodInitialized = true;
	}
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B4_0 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B1_0 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B3_0 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B2_0 = NULL;
	String_t* G_B5_0 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B5_1 = NULL;
	{
		// rotationDirection = direction == Vector2.up ? "up" :
		//     direction == Vector2.down ? "down" : null;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___direction0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B4_0 = __this;
			goto IL_0025;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___direction0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		bool L_5;
		L_5 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_3, L_4, NULL);
		G_B2_0 = G_B1_0;
		if (L_5)
		{
			G_B3_0 = G_B1_0;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B2_0;
		goto IL_002a;
	}

IL_001e:
	{
		G_B5_0 = _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
		G_B5_1 = G_B3_0;
		goto IL_002a;
	}

IL_0025:
	{
		G_B5_0 = _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
		G_B5_1 = G_B4_0;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		G_B5_1->___rotationDirection_6 = G_B5_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___rotationDirection_6), (void*)G_B5_0);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void SwipeDetection::add_SwipeEvent(SwipeDetection/OnSwipeInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_add_SwipeEvent_mF9941194CA9EA15FEA5E4894731E99BAD6736A26 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_0 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_1 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_2 = NULL;
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_0 = ((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4;
		V_0 = L_0;
	}

IL_0006:
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_1 = V_0;
		V_1 = L_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_2 = V_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)CastclassSealed((RuntimeObject*)L_4, OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var));
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_5 = V_2;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_6 = V_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*>((&((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4), L_5, L_6);
		V_0 = L_7;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_8 = V_0;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)L_8) == ((RuntimeObject*)(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SwipeDetection::remove_SwipeEvent(SwipeDetection/OnSwipeInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_remove_SwipeEvent_mDE7CC7ABDF14C1D586D8013385B58BE186AD383D (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_0 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_1 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_2 = NULL;
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_0 = ((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4;
		V_0 = L_0;
	}

IL_0006:
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_1 = V_0;
		V_1 = L_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_2 = V_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)CastclassSealed((RuntimeObject*)L_4, OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var));
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_5 = V_2;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_6 = V_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*>((&((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4), L_5, L_6);
		V_0 = L_7;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_8 = V_0;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)L_8) == ((RuntimeObject*)(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SwipeDetection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_Start_m70C6479D4B71F2A4EBEB1EE11E362E4C9641B127 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	{
		// isMobile = Application.isMobilePlatform;
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		__this->___isMobile_9 = L_0;
		// }
		return;
	}
}
// System.Void SwipeDetection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_Update_m2C2173A4CF609396BF54D14C1FF94FD498C10904 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!isMobile)
		bool L_0 = __this->___isMobile_9;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0)) //If we tap the button
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// isSwiping = true;
		__this->___isSwiping_8 = (bool)1;
		// tapPosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		__this->___tapPosition_5 = L_3;
		goto IL_0096;
	}

IL_0029:
	{
		// else if (Input.GetMouseButtonUp(0)) //If we release the button
		bool L_4;
		L_4 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_4)
		{
			goto IL_0096;
		}
	}
	{
		// ResetSwipe();
		SwipeDetection_ResetSwipe_mE1DC59EAC068295F9BF52C2CEA10AB56560FA141(__this, NULL);
		goto IL_0096;
	}

IL_0039:
	{
		// if (Input.touchCount > 0)
		int32_t L_5;
		L_5 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Began) //If the touching has just begun
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_6;
		L_6 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_7)
		{
			goto IL_006e;
		}
	}
	{
		// isSwiping = true;
		__this->___isSwiping_8 = (bool)1;
		// tapPosition = Input.GetTouch(0).position;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_8;
		L_8 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___tapPosition_5 = L_9;
		goto IL_0096;
	}

IL_006e:
	{
		// else if (Input.GetTouch(0).phase == TouchPhase.Canceled || Input.GetTouch(0).phase == TouchPhase.Ended) //If the touching ended
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_10;
		L_10 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_10;
		int32_t L_11;
		L_11 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((((int32_t)L_11) == ((int32_t)4)))
		{
			goto IL_0090;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_12;
		L_12 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0096;
		}
	}

IL_0090:
	{
		// ResetSwipe();
		SwipeDetection_ResetSwipe_mE1DC59EAC068295F9BF52C2CEA10AB56560FA141(__this, NULL);
	}

IL_0096:
	{
		// CheckSwipe();
		SwipeDetection_CheckSwipe_m33523EEE4FE21D4E9068FC0F47F9591C54AF2A5B(__this, NULL);
		// }
		return;
	}
}
// System.Void SwipeDetection::CheckSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_CheckSwipe_m33523EEE4FE21D4E9068FC0F47F9591C54AF2A5B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* G_B11_0 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* G_B10_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* G_B12_1 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* G_B15_0 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* G_B14_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* G_B16_1 = NULL;
	{
		// swipeDelta = Vector2.zero; //Reset the delta
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___swipeDelta_6 = L_0;
		// if (isSwiping)
		bool L_1 = __this->___isSwiping_8;
		if (!L_1)
		{
			goto IL_0067;
		}
	}
	{
		// if (!isMobile && Input.GetMouseButton(0))
		bool L_2 = __this->___isMobile_9;
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// swipeDelta = (Vector2)Input.mousePosition - tapPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___tapPosition_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_5, L_6, NULL);
		__this->___swipeDelta_6 = L_7;
		goto IL_0067;
	}

IL_0040:
	{
		// else if (Input.touchCount > 0)
		int32_t L_8;
		L_8 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		// swipeDelta = Input.GetTouch(0).position - tapPosition;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_9;
		L_9 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___tapPosition_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_11, NULL);
		__this->___swipeDelta_6 = L_12;
	}

IL_0067:
	{
		// if (swipeDelta.magnitude > deadZone) //If the swipe happened
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___swipeDelta_6);
		float L_14;
		L_14 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_13, NULL);
		float L_15 = __this->___deadZone_7;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_00fe;
		}
	}
	{
		// if (SwipeEvent != null) //If the event have subscribers
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_16 = ((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4;
		if (!L_16)
		{
			goto IL_00f8;
		}
	}
	{
		// if (Mathf.Abs(swipeDelta.x) > Mathf.Abs(swipeDelta.y)) //If swipe is horizontal
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___swipeDelta_6);
		float L_18 = L_17->___x_0;
		float L_19;
		L_19 = fabsf(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___swipeDelta_6);
		float L_21 = L_20->___y_1;
		float L_22;
		L_22 = fabsf(L_21);
		if ((!(((float)L_19) > ((float)L_22))))
		{
			goto IL_00d0;
		}
	}
	{
		// SwipeEvent(swipeDelta.x > 0 ? Vector2.right : Vector2.left);
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_23 = ((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&__this->___swipeDelta_6);
		float L_25 = L_24->___x_0;
		G_B10_0 = L_23;
		if ((((float)L_25) > ((float)(0.0f))))
		{
			G_B11_0 = L_23;
			goto IL_00c4;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		G_B12_0 = L_26;
		G_B12_1 = G_B10_0;
		goto IL_00c9;
	}

IL_00c4:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		G_B12_0 = L_27;
		G_B12_1 = G_B11_0;
	}

IL_00c9:
	{
		NullCheck(G_B12_1);
		OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_inline(G_B12_1, G_B12_0, NULL);
		goto IL_00f8;
	}

IL_00d0:
	{
		// SwipeEvent(swipeDelta.y > 0 ? Vector2.up : Vector2.down);
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_28 = ((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->___swipeDelta_6);
		float L_30 = L_29->___y_1;
		G_B14_0 = L_28;
		if ((((float)L_30) > ((float)(0.0f))))
		{
			G_B15_0 = L_28;
			goto IL_00ee;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		G_B16_0 = L_31;
		G_B16_1 = G_B14_0;
		goto IL_00f3;
	}

IL_00ee:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		G_B16_0 = L_32;
		G_B16_1 = G_B15_0;
	}

IL_00f3:
	{
		NullCheck(G_B16_1);
		OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_inline(G_B16_1, G_B16_0, NULL);
	}

IL_00f8:
	{
		// ResetSwipe();
		SwipeDetection_ResetSwipe_mE1DC59EAC068295F9BF52C2CEA10AB56560FA141(__this, NULL);
	}

IL_00fe:
	{
		// }
		return;
	}
}
// System.Void SwipeDetection::ResetSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_ResetSwipe_mE1DC59EAC068295F9BF52C2CEA10AB56560FA141 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	{
		// isSwiping = false;
		__this->___isSwiping_8 = (bool)0;
		// tapPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___tapPosition_5 = L_0;
		// swipeDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___swipeDelta_6 = L_1;
		// }
		return;
	}
}
// System.Void SwipeDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection__ctor_m57902E84B7829542CBF0214C71B3F7816129BD9B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	{
		// private readonly float deadZone = 80;
		__this->___deadZone_7 = (80.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_Multicast(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* currentDelegate = reinterpret_cast<OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___direction0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_OpenInst(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___direction0, method);
}
void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_OpenStatic(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___direction0, method);
}
void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_OpenStaticInvoker(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, ___direction0);
}
void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_ClosedStaticInvoker(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___direction0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___direction0);

}
// System.Void SwipeDetection/OnSwipeInput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipeInput__ctor_mB0C6E52702E54A667BCD028ACF0120D7DE560391 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_Multicast;
}
// System.Void SwipeDetection/OnSwipeInput::Invoke(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___direction0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SwipeDetection/OnSwipeInput::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSwipeInput_BeginInvoke_m81D585E4C9E2B1C04D0004C3C4C10EFAD8F832FB (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___direction0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SwipeDetection/OnSwipeInput::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipeInput_EndInvoke_mE58F8CABAD4C93C42CA2EFE89BBC0A583FC33A2F (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean FinishScreen::get_isFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FinishScreen_get_isFinished_m1C65D285685984A31F2E5CA62294BA852805FD0A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isFinished { get; private set; }
		bool L_0 = ((FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_StaticFields*)il2cpp_codegen_static_fields_for(FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_il2cpp_TypeInfo_var))->___U3CisFinishedU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void FinishScreen::set_isFinished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScreen_set_isFinished_m499A5DF01B0C5EADFE6059D2F0A83A557062E212 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isFinished { get; private set; }
		bool L_0 = ___value0;
		((FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_StaticFields*)il2cpp_codegen_static_fields_for(FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_il2cpp_TypeInfo_var))->___U3CisFinishedU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void FinishScreen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScreen_Awake_m4040D04896FAA9DBC69D1E4D25E9C7ED6A91B6A0 (FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_m7F8F1B1327B270DDE9F0DFAF90FB0F2C0177EE03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m2958D1BD1B81465BAA86B696C86C759EA993B390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// scorePoint = FindObjectOfType<Score>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_1;
		L_1 = Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0(Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		__this->___scorePoint_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scorePoint_11), (void*)L_1);
		// gameOverScreen = FindObjectOfType<GameOverScreen>();
		GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* L_2;
		L_2 = Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_m7F8F1B1327B270DDE9F0DFAF90FB0F2C0177EE03(Object_FindObjectOfType_TisGameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_m7F8F1B1327B270DDE9F0DFAF90FB0F2C0177EE03_RuntimeMethod_var);
		__this->___gameOverScreen_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameOverScreen_13), (void*)L_2);
		// hudScreen = FindObjectOfType<HUDScreen>();
		HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* L_3;
		L_3 = Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m2958D1BD1B81465BAA86B696C86C759EA993B390(Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m2958D1BD1B81465BAA86B696C86C759EA993B390_RuntimeMethod_var);
		__this->___hudScreen_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hudScreen_12), (void*)L_3);
		// }
		return;
	}
}
// System.Void FinishScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScreen_Start_mAF0F77F02FE6CE4CA521690688F713F45827872C (FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* __this, const RuntimeMethod* method) 
{
	{
		// private void Start() => isFinished = false;
		FinishScreen_set_isFinished_m499A5DF01B0C5EADFE6059D2F0A83A557062E212_inline((bool)0, NULL);
		return;
	}
}
// System.Void FinishScreen::OpenFinishScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScreen_OpenFinishScreen_m2D508AC9C5DAAECD5822D3D94BB5E87A701985C1 (FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishScreen_NextButtonPressed_mE9E34959A49339CE7C47EB648C75D581AE969EF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COpenFinishScreenU3Eb__15_0_mE2AD6DD4C598FC6BA24585B2E9845A3B8C5BDCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B8170DD57316CACB0E03DF1A826436A5F438855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA505B812E78C7D1F94064FE40B1D5A19921E880);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	int32_t V_1 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* G_B1_1 = NULL;
	{
		// hudScreen.gameObject.SetActive(false);
		HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* L_0 = __this->___hudScreen_12;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// gameOverScreen.gameObject.SetActive(false);
		GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* L_2 = __this->___gameOverScreen_13;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// isFinished = true;
		FinishScreen_set_isFinished_m499A5DF01B0C5EADFE6059D2F0A83A557062E212_inline((bool)1, NULL);
		// var root = GetComponent<UIDocument>().rootVisualElement;
		UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* L_5;
		L_5 = Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F(__this, Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		NullCheck(L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6;
		L_6 = UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1(L_5, NULL);
		V_0 = L_6;
		// nextButton = root.Q<Button>("NextButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_8;
		L_8 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_7, _stringLiteral9B8170DD57316CACB0E03DF1A826436A5F438855, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___nextButton_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButton_8), (void*)L_8);
		// exitButton = root.Q<Button>("ExitButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_10;
		L_10 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_9, _stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___exitButton_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exitButton_9), (void*)L_10);
		// score = root.Q<Label>("Score");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = V_0;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_12;
		L_12 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_11, _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->___score_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_5), (void*)L_12);
		// highScore = root.Q<Label>("HighScore");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = V_0;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_14;
		L_14 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_13, _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->___highScore_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___highScore_6), (void*)L_14);
		// medal = root.Q<VisualElement>("Medal");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16;
		L_16 = UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB(L_15, _stringLiteralDA505B812E78C7D1F94064FE40B1D5A19921E880, (String_t*)NULL, UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB_RuntimeMethod_var);
		__this->___medal_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___medal_7), (void*)L_16);
		// nextButton.clicked += NextButtonPressed;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_17 = __this->___nextButton_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_18, __this, (intptr_t)((void*)FinishScreen_NextButtonPressed_mE9E34959A49339CE7C47EB648C75D581AE969EF9_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_17, L_18, NULL);
		// exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_19 = __this->___exitButton_9;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = ((U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = L_20;
		G_B1_0 = L_21;
		G_B1_1 = L_19;
		if (L_21)
		{
			G_B2_0 = L_21;
			G_B2_1 = L_19;
			goto IL_00d6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var);
		U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C* L_22 = ((U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3COpenFinishScreenU3Eb__15_0_mE2AD6DD4C598FC6BA24585B2E9845A3B8C5BDCEC_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = L_23;
		((U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1), (void*)L_24);
		G_B2_0 = L_24;
		G_B2_1 = G_B1_1;
	}

IL_00d6:
	{
		NullCheck(G_B2_1);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(G_B2_1, G_B2_0, NULL);
		// score.text = "Score: " + scorePoint.ScorePoint.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_25 = __this->___score_5;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_26 = __this->___scorePoint_11;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline(L_26, NULL);
		V_1 = L_27;
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_29;
		L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_28, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(101 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_25, L_29);
		// score.style.display = DisplayStyle.Flex;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_30 = __this->___score_5;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_30, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_32;
		L_32 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030(0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_31);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(18 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_31, L_32);
		// scorePoint.SetHighscore();
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_33 = __this->___scorePoint_11;
		NullCheck(L_33);
		Score_SetHighscore_m091F2A2252AD522DDB3C046D6D27A0005E16BD1D(L_33, NULL);
		// highScore.text = "Highscore: " + scorePoint.highscore.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_34 = __this->___highScore_6;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_35 = __this->___scorePoint_11;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = Score_get_highscore_m1D405A59E74D0A4E49C92FA0EECB3CA4E2173533_inline(L_35, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		String_t* L_38;
		L_38 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_37, NULL);
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(101 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_34, L_38);
		// highScore.style.display = DisplayStyle.Flex;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_39 = __this->___highScore_6;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_39, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_41;
		L_41 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030(0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_40);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(18 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_40, L_41);
		// medal.style.backgroundImage = new StyleBackground(MedalChoose());
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = __this->___medal_7;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_42, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_44;
		L_44 = FinishScreen_MedalChoose_mE1A313D6281A6165105FBE3FAE94B4112C00D019(__this, NULL);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_45;
		memset((&L_45), 0, sizeof(L_45));
		StyleBackground__ctor_mFBD280CC7814525DBEE2EB60A770DA5E31EC59E4((&L_45), L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B >::Invoke(1 /* System.Void UnityEngine.UIElements.IStyle::set_backgroundImage(UnityEngine.UIElements.StyleBackground) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_43, L_45);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void FinishScreen::NextButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScreen_NextButtonPressed_mE9E34959A49339CE7C47EB648C75D581AE969EF9 (FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Factory.spawnCount += 2;
		il2cpp_codegen_runtime_class_init_inline(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Factory_get_spawnCount_m73D7D2DE503B7B68E574062F12D32CA1E18E782C_inline(NULL);
		Factory_set_spawnCount_m3A39AC8230FFA52FBC03D43AFD66F1AB79608460_inline(((int32_t)il2cpp_codegen_add(L_0, 2)), NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// UnityEngine.Sprite FinishScreen::MedalChoose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* FinishScreen_MedalChoose_mE1A313D6281A6165105FBE3FAE94B4112C00D019 (FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((scorePoint.timer >= 15) && (scorePoint.fallPizzaCount == 0))
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_0 = __this->___scorePoint_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Score_get_timer_mDD5870F6E6B2C3B4940332A924D2DB2CBE266B5A_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)15))))
		{
			goto IL_0029;
		}
	}
	{
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_2 = __this->___scorePoint_11;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Score_get_fallPizzaCount_m73CC7576028696F71ECA6CC2EB0BB6796C04EA98_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		// return medals[0];
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_4 = __this->___medals_4;
		NullCheck(L_4);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5;
		L_5 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_4, 0, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		return L_5;
	}

IL_0029:
	{
		// else if ((scorePoint.timer >= 10) && (scorePoint.fallPizzaCount <= 2))
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_6 = __this->___scorePoint_11;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Score_get_timer_mDD5870F6E6B2C3B4940332A924D2DB2CBE266B5A_inline(L_6, NULL);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)10))))
		{
			goto IL_0053;
		}
	}
	{
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_8 = __this->___scorePoint_11;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Score_get_fallPizzaCount_m73CC7576028696F71ECA6CC2EB0BB6796C04EA98_inline(L_8, NULL);
		if ((((int32_t)L_9) > ((int32_t)2)))
		{
			goto IL_0053;
		}
	}
	{
		// return medals[1];
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_10 = __this->___medals_4;
		NullCheck(L_10);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11;
		L_11 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_10, 1, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		return L_11;
	}

IL_0053:
	{
		// return medals[2];
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_12 = __this->___medals_4;
		NullCheck(L_12);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13;
		L_13 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_12, 2, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void FinishScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScreen__ctor_m6EA3B1B73714850851186811E190554AC1B61ED1 (FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] List<Sprite> medals = new();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_0, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___medals_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___medals_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void FinishScreen/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8A4B62EDDF08D696E278E930943FD6F884377E92 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C* L_0 = (U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C*)il2cpp_codegen_object_new(U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mDE3548A427121CBF710B7A7F66D0F85DB9064765(L_0, NULL);
		((U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void FinishScreen/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDE3548A427121CBF710B7A7F66D0F85DB9064765 (U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FinishScreen/<>c::<OpenFinishScreen>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COpenFinishScreenU3Eb__15_0_mE2AD6DD4C598FC6BA24585B2E9845A3B8C5BDCEC (U3CU3Ec_t50CBFFA38957B452E48ADA29015182E9F19D106C* __this, const RuntimeMethod* method) 
{
	{
		// exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };
		GameOverScreen_ExitButtonPressed_mB48B05C9A4C07DDF1477C200A570DB0F8E760878(NULL);
		// exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };
		return;
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
// System.Void GameOverScreen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_Awake_mB7C360F186C59145D07D5F9117001B5E12A47C13 (GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m2958D1BD1B81465BAA86B696C86C759EA993B390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// hudScreen = FindObjectOfType<HUDScreen>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* L_1;
		L_1 = Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m2958D1BD1B81465BAA86B696C86C759EA993B390(Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m2958D1BD1B81465BAA86B696C86C759EA993B390_RuntimeMethod_var);
		__this->___hudScreen_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hudScreen_7), (void*)L_1);
		// scorePoint = FindObjectOfType<Score>();
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_2;
		L_2 = Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0(Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		((GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_StaticFields*)il2cpp_codegen_static_fields_for(GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_il2cpp_TypeInfo_var))->___scorePoint_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_StaticFields*)il2cpp_codegen_static_fields_for(GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_il2cpp_TypeInfo_var))->___scorePoint_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void GameOverScreen::RestartButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_RestartButtonPressed_m18E0385DDFC3C149A08FC2E20E6EB7EC54B25F32 (GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isClicked) //It clicked many times cause event system is bugging
		bool L_0 = __this->___isClicked_8;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// Factory.spawnCount = 4;
		il2cpp_codegen_runtime_class_init_inline(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		Factory_set_spawnCount_m3A39AC8230FFA52FBC03D43AFD66F1AB79608460_inline(4, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// isClicked = true;
		__this->___isClicked_8 = (bool)1;
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void GameOverScreen::ExitButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_ExitButtonPressed_mB48B05C9A4C07DDF1477C200A570DB0F8E760878 (const RuntimeMethod* method) 
{
	{
		// public static void ExitButtonPressed() => Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		return;
	}
}
// System.Void GameOverScreen::OpenGameOverScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_OpenGameOverScreen_mC154C92FAC0889C6312E692AC59F55BB256FB7CF (GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverScreen_ExitButtonPressed_mB48B05C9A4C07DDF1477C200A570DB0F8E760878_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverScreen_RestartButtonPressed_m18E0385DDFC3C149A08FC2E20E6EB7EC54B25F32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// hudScreen.gameObject.SetActive(false);
		HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* L_0 = __this->___hudScreen_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// var root = GetComponent<UIDocument>().rootVisualElement;
		UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* L_3;
		L_3 = Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F(__this, Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		NullCheck(L_3);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4;
		L_4 = UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1(L_3, NULL);
		V_0 = L_4;
		// restartButton = root.Q<Button>("RestartButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_6;
		L_6 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_5, _stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___restartButton_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___restartButton_5), (void*)L_6);
		// exitButton = root.Q<Button>("ExitButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_8;
		L_8 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_7, _stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___exitButton_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exitButton_6), (void*)L_8);
		// score = root.Q<Label>("Score");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = V_0;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_10;
		L_10 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_9, _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->___score_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_4), (void*)L_10);
		// restartButton.clicked += RestartButtonPressed;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_11 = __this->___restartButton_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, __this, (intptr_t)((void*)GameOverScreen_RestartButtonPressed_m18E0385DDFC3C149A08FC2E20E6EB7EC54B25F32_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_11, L_12, NULL);
		// exitButton.clicked += ExitButtonPressed;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_13 = __this->___exitButton_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_14, NULL, (intptr_t)((void*)GameOverScreen_ExitButtonPressed_mB48B05C9A4C07DDF1477C200A570DB0F8E760878_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_13, L_14, NULL);
		// score.text = "Score: " + scorePoint.ScorePoint.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_15 = __this->___score_4;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_16 = ((GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_StaticFields*)il2cpp_codegen_static_fields_for(GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E_il2cpp_TypeInfo_var))->___scorePoint_9;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline(L_16, NULL);
		V_1 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_18, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(101 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_15, L_19);
		// score.style.display = DisplayStyle.Flex;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_20 = __this->___score_4;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_20, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_22;
		L_22 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030(0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_21);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(18 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_21, L_22);
		// }
		return;
	}
}
// System.Void GameOverScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen__ctor_mC5150146F14E85405429254671C40F23C5BD9F20 (GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void HUDScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDScreen_Start_m3D100E5AD9825C8A1D2612AB817B7EF1228E23DC (HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD_m4CDBE13676D1822B5E1FF76C1EF4BB43D923D260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1;
		L_1 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_0, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_9), (void*)L_1);
		// scorePoint = FindObjectOfType<Score>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_2;
		L_2 = Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0(Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		__this->___scorePoint_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scorePoint_8), (void*)L_2);
		// pauseScreen = FindObjectOfType<PauseScreen>(true);
		PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* L_3;
		L_3 = Object_FindObjectOfType_TisPauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD_m4CDBE13676D1822B5E1FF76C1EF4BB43D923D260((bool)1, Object_FindObjectOfType_TisPauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD_m4CDBE13676D1822B5E1FF76C1EF4BB43D923D260_RuntimeMethod_var);
		__this->___pauseScreen_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pauseScreen_7), (void*)L_3);
		// OpenHUDScreen();
		HUDScreen_OpenHUDScreen_m6F703B0094923FEEE06B8E6FE88769280B1E2E32(__this, NULL);
		// }
		return;
	}
}
// System.Void HUDScreen::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDScreen_FixedUpdate_m5DDE389D92FC19AA1FA8E660467516859B31C319 (HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral112A1AC841AA0CB86755272772491E403CA7D21F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (player.isStartMoving)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_9;
		NullCheck(L_0);
		bool L_1;
		L_1 = Player_get_isStartMoving_m0D562BC32A07B7A24071FD32BD44D2A203AB3076_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		// score.text = scorePoint.ScorePoint.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_2 = __this->___score_4;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_3 = __this->___scorePoint_8;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline(L_3, NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(101 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_2, L_5);
		// timer.text = scorePoint.timer.ToString() + " sec";
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_6 = __this->___timer_5;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_7 = __this->___scorePoint_8;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Score_get_timer_mDD5870F6E6B2C3B4940332A924D2DB2CBE266B5A_inline(L_7, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral112A1AC841AA0CB86755272772491E403CA7D21F, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(101 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_6, L_10);
	}

IL_0053:
	{
		// if(Time.timeScale < 1) gameObject.SetActive(false);
		float L_11;
		L_11 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((!(((float)L_11) < ((float)(1.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		// if(Time.timeScale < 1) gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void HUDScreen::OpenHUDScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDScreen_OpenHUDScreen_m6F703B0094923FEEE06B8E6FE88769280B1E2E32 (HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HUDScreen_U3COpenHUDScreenU3Eb__8_0_m3CC8411F2B9FB1031A5BAD44DF154EADC6CE8DDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DA5F1287115C49EF9D36AE3B84E6AB8E4CEF0F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral649B85D71B3DD34F64F98500DD75C0A86DF2C3F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88897CA8DDC75D6298AB6A264F7E482EBC1B25E8);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// var root = GetComponent<UIDocument>().rootVisualElement;
		UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* L_1;
		L_1 = Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F(__this, Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		NullCheck(L_1);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1(L_1, NULL);
		V_0 = L_2;
		// score = root.Q<Label>("ScoreLabel");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_4;
		L_4 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_3, _stringLiteral88897CA8DDC75D6298AB6A264F7E482EBC1B25E8, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->___score_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_4), (void*)L_4);
		// timer = root.Q<Label>("Timer");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = V_0;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_6;
		L_6 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_5, _stringLiteral0DA5F1287115C49EF9D36AE3B84E6AB8E4CEF0F5, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->___timer_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timer_5), (void*)L_6);
		// score.style.display = DisplayStyle.Flex;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_7 = __this->___score_4;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_7, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_9;
		L_9 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030(0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(18 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_8, L_9);
		// timer.style.display = DisplayStyle.Flex;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_10 = __this->___timer_5;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_10, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_12;
		L_12 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030(0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_11);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(18 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_11, L_12);
		// pauseButton = root.Q<Button>("PauseButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_14;
		L_14 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_13, _stringLiteral649B85D71B3DD34F64F98500DD75C0A86DF2C3F2, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___pauseButton_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pauseButton_6), (void*)L_14);
		// pauseButton.clicked += delegate () { pauseScreen.OpenPauseScreen(); };
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_15 = __this->___pauseButton_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_16, __this, (intptr_t)((void*)HUDScreen_U3COpenHUDScreenU3Eb__8_0_m3CC8411F2B9FB1031A5BAD44DF154EADC6CE8DDA_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void HUDScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDScreen__ctor_m43B00C8E702B841CB94D771A5C635371DC235BB3 (HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void HUDScreen::<OpenHUDScreen>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDScreen_U3COpenHUDScreenU3Eb__8_0_m3CC8411F2B9FB1031A5BAD44DF154EADC6CE8DDA (HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* __this, const RuntimeMethod* method) 
{
	{
		// pauseButton.clicked += delegate () { pauseScreen.OpenPauseScreen(); };
		PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* L_0 = __this->___pauseScreen_7;
		NullCheck(L_0);
		PauseScreen_OpenPauseScreen_m3E52DB5E7EDBB5F824E9086AA53A123A576BA422(L_0, NULL);
		// pauseButton.clicked += delegate () { pauseScreen.OpenPauseScreen(); };
		return;
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
// System.Void PauseScreen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseScreen_Awake_mB9ADF566B3674DCC423FBCE24A92E105FB5556D4 (PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m7F280EF139F161B80A01FEE50E9A22FCA340BB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// screen = FindObjectOfType<HUDScreen>(true);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* L_1;
		L_1 = Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m7F280EF139F161B80A01FEE50E9A22FCA340BB0A((bool)1, Object_FindObjectOfType_TisHUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767_m7F280EF139F161B80A01FEE50E9A22FCA340BB0A_RuntimeMethod_var);
		__this->___screen_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___screen_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void PauseScreen::OpenPauseScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseScreen_OpenPauseScreen_m3E52DB5E7EDBB5F824E9086AA53A123A576BA422 (PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseScreen_RestartButtonPressed_m28F574500A049D47AC46F30A28FD7D8B1737AB9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseScreen_ResumeButtonClicked_m6CDF4B75F5B9C1C1D421BD381351960D3A93EE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COpenPauseScreenU3Eb__6_0_m9B8370DF3D702D6241221A385D820EC3E3F10105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral649B85D71B3DD34F64F98500DD75C0A86DF2C3F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* G_B1_1 = NULL;
	{
		// score = FindObjectOfType<Score>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_0;
		L_0 = Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0(Object_FindObjectOfType_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m5D0B3DDE211C9070EC088E0FF858BA8730D5C4C0_RuntimeMethod_var);
		__this->___score_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_8), (void*)L_0);
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// screen.gameObject.SetActive(false);
		HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* L_2 = __this->___screen_7;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// score.StopTimer();
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_4 = __this->___score_8;
		NullCheck(L_4);
		Score_StopTimer_mFB83ABEEFB4F82C1BAA7065AE77C753F3114247E(L_4, NULL);
		// var root = GetComponent<UIDocument>().rootVisualElement;
		UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* L_5;
		L_5 = Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F(__this, Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		NullCheck(L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6;
		L_6 = UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1(L_5, NULL);
		V_0 = L_6;
		// restartButton = root.Q<Button>("RestartButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_8;
		L_8 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_7, _stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___restartButton_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___restartButton_5), (void*)L_8);
		// resumeButton = root.Q<Button>("PauseButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_10;
		L_10 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_9, _stringLiteral649B85D71B3DD34F64F98500DD75C0A86DF2C3F2, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___resumeButton_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resumeButton_4), (void*)L_10);
		// exitButton = root.Q<Button>("ExitButton");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_12;
		L_12 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_11, _stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___exitButton_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exitButton_6), (void*)L_12);
		// resumeButton.clicked += ResumeButtonClicked;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_13 = __this->___resumeButton_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_14, __this, (intptr_t)((void*)PauseScreen_ResumeButtonClicked_m6CDF4B75F5B9C1C1D421BD381351960D3A93EE95_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_13, L_14, NULL);
		// restartButton.clicked += RestartButtonPressed;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_15 = __this->___restartButton_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_16, __this, (intptr_t)((void*)PauseScreen_RestartButtonPressed_m28F574500A049D47AC46F30A28FD7D8B1737AB9F_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_15, L_16, NULL);
		// exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_17 = __this->___exitButton_6;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = ((U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = L_18;
		G_B1_0 = L_19;
		G_B1_1 = L_17;
		if (L_19)
		{
			G_B2_0 = L_19;
			G_B2_1 = L_17;
			goto IL_00c8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var);
		U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60* L_20 = ((U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_21, L_20, (intptr_t)((void*)U3CU3Ec_U3COpenPauseScreenU3Eb__6_0_m9B8370DF3D702D6241221A385D820EC3E3F10105_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = L_21;
		((U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_22);
		G_B2_0 = L_22;
		G_B2_1 = G_B1_1;
	}

IL_00c8:
	{
		NullCheck(G_B2_1);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(G_B2_1, G_B2_0, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseScreen::ResumeButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseScreen_ResumeButtonClicked_m6CDF4B75F5B9C1C1D421BD381351960D3A93EE95 (PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// screen.OpenHUDScreen();
		HUDScreen_tAA1FA591FA18C46C27138450413BE6E6E5CB2767* L_1 = __this->___screen_7;
		NullCheck(L_1);
		HUDScreen_OpenHUDScreen_m6F703B0094923FEEE06B8E6FE88769280B1E2E32(L_1, NULL);
		// score.ResumeTimer();
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_2 = __this->___score_8;
		NullCheck(L_2);
		Score_ResumeTimer_mF774ACFC2C8407E4211A631E3AE60A3919EA7920(L_2, NULL);
		// }
		return;
	}
}
// System.Void PauseScreen::RestartButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseScreen_RestartButtonPressed_m28F574500A049D47AC46F30A28FD7D8B1737AB9F (PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Factory.spawnCount = 4;
		il2cpp_codegen_runtime_class_init_inline(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		Factory_set_spawnCount_m3A39AC8230FFA52FBC03D43AFD66F1AB79608460_inline(4, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void PauseScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseScreen__ctor_mBE2F57D5C2D6DBFB827B17E757210DDEBFDA0A93 (PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void PauseScreen/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4D1E39223E79D8EC8D64C898CA0CE044AC6B3FF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60* L_0 = (U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60*)il2cpp_codegen_object_new(U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8FE2038749CB45A5440DBDE72132A3026AB1A30B(L_0, NULL);
		((U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void PauseScreen/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8FE2038749CB45A5440DBDE72132A3026AB1A30B (U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PauseScreen/<>c::<OpenPauseScreen>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COpenPauseScreenU3Eb__6_0_m9B8370DF3D702D6241221A385D820EC3E3F10105 (U3CU3Ec_t3A366F43C8702E73F93903995E4FA9B104029A60* __this, const RuntimeMethod* method) 
{
	{
		// exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };
		GameOverScreen_ExitButtonPressed_mB48B05C9A4C07DDF1477C200A570DB0F8E760878(NULL);
		// exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };
		return;
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
// System.Int32 Score::get_timer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Score_get_timer_mDD5870F6E6B2C3B4940332A924D2DB2CBE266B5A (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// public int timer { get; private set; }
		int32_t L_0 = __this->___U3CtimerU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Score::set_timer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_timer_m45A53389B0B96A8482E0360B59D696938909AF8C (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int timer { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CtimerU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String Score::get_highscore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_get_highscore_m1D405A59E74D0A4E49C92FA0EECB3CA4E2173533 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// public string highscore { get; private set; }
		String_t* L_0 = __this->___U3ChighscoreU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Score::set_highscore(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_highscore_mF438C587835BF6007334EB8626F263EC4E197504 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string highscore { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3ChighscoreU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChighscoreU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Int32 Score::get_fallPizzaCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Score_get_fallPizzaCount_m73CC7576028696F71ECA6CC2EB0BB6796C04EA98 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// public int fallPizzaCount { get; private set; } = 0;
		int32_t L_0 = __this->___U3CfallPizzaCountU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Score::set_fallPizzaCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_fallPizzaCount_m6914170BA50F1F621476F43DBEBA9CC9E9ED8FC4 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int fallPizzaCount { get; private set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CfallPizzaCountU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Int32 Score::get_ScorePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// public int ScorePoint { get; private set; }
		int32_t L_0 = __this->___U3CScorePointU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Score::set_ScorePoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_ScorePoint_m691D67A13A9BFFFB429E376AAEF89C31CB1B16E7 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ScorePoint { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CScorePointU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m9851EAC634456AE4AD4D1163695A64EB3E4AA8FF (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16C43D3D43AA9A7A899D1AFC095538503328BB0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (PlayerPrefs.HasKey("Highscore") == true)
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6, NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// highscore = PlayerPrefs.GetInt("Highscore").ToString();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		Score_set_highscore_mF438C587835BF6007334EB8626F263EC4E197504_inline(__this, L_2, NULL);
		return;
	}

IL_0025:
	{
		// highscore = "No High Scores Yet";
		Score_set_highscore_mF438C587835BF6007334EB8626F263EC4E197504_inline(__this, _stringLiteral16C43D3D43AA9A7A899D1AFC095538503328BB0B, NULL);
		// }
		return;
	}
}
// System.Void Score::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_FixedUpdate_m61BB5FB3035C3525F5E9D617472CBAB96D31B376 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (checkPos)
		bool L_0 = __this->___checkPos_9;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// playerPos = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___playerPos_8 = L_3;
		// checkPos = false;
		__this->___checkPos_9 = (bool)0;
	}

IL_0025:
	{
		// if (transform.position.x > playerPos + 5)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		float L_7 = __this->___playerPos_8;
		if ((!(((float)L_6) > ((float)((float)il2cpp_codegen_add(L_7, (5.0f)))))))
		{
			goto IL_0061;
		}
	}
	{
		// if (!Death.isDefeat) //After death do not encrease the score
		bool L_8;
		L_8 = Death_get_isDefeat_mEDDE227CBD91E6295898E9785EB94D16C997F896_inline(NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		// ScorePoint++;
		int32_t L_9;
		L_9 = Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline(__this, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		Score_set_ScorePoint_m691D67A13A9BFFFB429E376AAEF89C31CB1B16E7_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		// checkPos = true;
		__this->___checkPos_9 = (bool)1;
	}

IL_0061:
	{
		// if (ScorePoint < 0) ScorePoint = 0; //Score cant be less the zero
		int32_t L_11;
		L_11 = Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline(__this, NULL);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		// if (ScorePoint < 0) ScorePoint = 0; //Score cant be less the zero
		Score_set_ScorePoint_m691D67A13A9BFFFB429E376AAEF89C31CB1B16E7_inline(__this, 0, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Score::PizzaFalling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_PizzaFalling_mE5C61701C13FCAAFC1218E0A4E80D590CA9B1F20 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// fallPizzaCount++;
		int32_t L_0;
		L_0 = Score_get_fallPizzaCount_m73CC7576028696F71ECA6CC2EB0BB6796C04EA98_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Score_set_fallPizzaCount_m6914170BA50F1F621476F43DBEBA9CC9E9ED8FC4_inline(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// if (!Death.isDefeat)
		bool L_2;
		L_2 = Death_get_isDefeat_mEDDE227CBD91E6295898E9785EB94D16C997F896_inline(NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// ScorePoint -= 2 * fallPizzaCount;
		int32_t L_3;
		L_3 = Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline(__this, NULL);
		int32_t L_4;
		L_4 = Score_get_fallPizzaCount_m73CC7576028696F71ECA6CC2EB0BB6796C04EA98_inline(__this, NULL);
		Score_set_ScorePoint_m691D67A13A9BFFFB429E376AAEF89C31CB1B16E7_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)il2cpp_codegen_multiply(2, L_4)))), NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Score::StartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_StartTimer_m50C73AD50F0D5806A66D5E668790AA02FB40E40A (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// remainingTime = time;
		int32_t L_0 = __this->___time_4;
		__this->___remainingTime_5 = L_0;
		// StartCoroutine(IncrimentTime());
		RuntimeObject* L_1;
		L_1 = Score_IncrimentTime_m0E48C51471BB236E874DF9A4C021296BE7730D72(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Score::StopTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_StopTimer_mFB83ABEEFB4F82C1BAA7065AE77C753F3114247E (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// }
		return;
	}
}
// System.Void Score::ResumeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_ResumeTimer_mF774ACFC2C8407E4211A631E3AE60A3919EA7920 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(IncrimentTime());
		RuntimeObject* L_0;
		L_0 = Score_IncrimentTime_m0E48C51471BB236E874DF9A4C021296BE7730D72(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Score::SetHighscore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_SetHighscore_m091F2A2252AD522DDB3C046D6D27A0005E16BD1D (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(PlayerPrefs.GetInt("Highscore") < ScorePoint)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6, NULL);
		int32_t L_1;
		L_1 = Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_003a;
		}
	}
	{
		// PlayerPrefs.SetInt("Highscore", ScorePoint);
		int32_t L_2;
		L_2 = Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6, L_2, NULL);
		// highscore = PlayerPrefs.GetInt("Highscore").ToString();
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		Score_set_highscore_mF438C587835BF6007334EB8626F263EC4E197504_inline(__this, L_4, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Score::ClearHighscores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_ClearHighscores_m95B3D64A3758B74BE10AC2ABF3EEE9BD75D656B0 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16C43D3D43AA9A7A899D1AFC095538503328BB0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.DeleteKey("Highscore");
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6, NULL);
		// highscore = "No High Scores Yet";
		Score_set_highscore_mF438C587835BF6007334EB8626F263EC4E197504_inline(__this, _stringLiteral16C43D3D43AA9A7A899D1AFC095538503328BB0B, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Score::IncrimentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Score_IncrimentTime_m0E48C51471BB236E874DF9A4C021296BE7730D72 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1* L_0 = (U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1*)il2cpp_codegen_object_new(U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIncrimentTimeU3Ed__28__ctor_mDE90EA47A09D8C368799E219C40BF2DE2FDFBC28(L_0, 0, NULL);
		U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mDEDBA72E1F38C2F7CFF4E6C6556103C5D62C1670 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// private bool checkPos = true;
		__this->___checkPos_9 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void Score/<IncrimentTime>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncrimentTimeU3Ed__28__ctor_mDE90EA47A09D8C368799E219C40BF2DE2FDFBC28 (U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Score/<IncrimentTime>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncrimentTimeU3Ed__28_System_IDisposable_Dispose_m503ABF1F7C236CCBA7A1EC8F65B09BFF4B775071 (U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Score/<IncrimentTime>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIncrimentTimeU3Ed__28_MoveNext_m5B6855D64A901493E5E4BEC0ECD3EE61020C36AC (U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// remainingTime -= 1;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_4 = V_1;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___remainingTime_5;
		NullCheck(L_4);
		L_4->___remainingTime_5 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// timer = remainingTime;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_7 = V_1;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___remainingTime_5;
		NullCheck(L_7);
		Score_set_timer_m45A53389B0B96A8482E0360B59D696938909AF8C_inline(L_7, L_9, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (remainingTime == 0)
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___remainingTime_5;
		if (L_12)
		{
			goto IL_001e;
		}
	}
	{
		// Death.Defeat(gameObject);
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		Death_Defeat_mDA98317E085D4D3E621ED94164B202314FB7AAE5(L_14, NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object Score/<IncrimentTime>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIncrimentTimeU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m783A9D1F43897975103A26830944A490B839F5F4 (U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Score/<IncrimentTime>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncrimentTimeU3Ed__28_System_Collections_IEnumerator_Reset_mB9875473F445FD97D6B38DC3CB1B4D76E86C0795 (U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIncrimentTimeU3Ed__28_System_Collections_IEnumerator_Reset_mB9875473F445FD97D6B38DC3CB1B4D76E86C0795_RuntimeMethod_var)));
	}
}
// System.Object Score/<IncrimentTime>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIncrimentTimeU3Ed__28_System_Collections_IEnumerator_get_Current_m3D08E7D393504625FB77C635C0CF31EEFCAAB23E (U3CIncrimentTimeU3Ed__28_t9F4E1C0BF025DFA79E221A556C2537F9235DE0F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Vehicle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vehicle_Awake_m984B9C7DDBEB010752213501EB515816BE6FE0B6 (Vehicle_t073676C9121D3FB86ABB1A8B4406EDADC8F2F9B6* __this, const RuntimeMethod* method) 
{
	{
		// speed = Random.Range(4, 6);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(4, 6, NULL);
		__this->___speed_4 = ((float)L_0);
		// }
		return;
	}
}
// System.Void Vehicle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vehicle_Update_m0EAAE021D0C5BE94BC1C060395C708DFA72C51B1 (Vehicle_t073676C9121D3FB86ABB1A8B4406EDADC8F2F9B6* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.transform.Translate(speed * Time.deltaTime * Vector3.forward);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___speed_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4, NULL);
		NullCheck(L_1);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_1, L_5, NULL);
		// }
		return;
	}
}
// System.Void Vehicle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vehicle__ctor_m54D509CEE3EB7C8CA84DC7704E87BE9DE87D70DF (Vehicle_t073676C9121D3FB86ABB1A8B4406EDADC8F2F9B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void VehicleDestroy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleDestroy_OnTriggerEnter_m7260D1F57AE4D4FFDCDEEFA03CC7A5F2250DC35A (VehicleDestroy_tEEC011CCBD02442B883D3BA5AD098B9A4130B653* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(other.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void VehicleDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleDestroy__ctor_mA67C8B6581170742D58E6BD1BDEAC7F79DEE2F50 (VehicleDestroy_tEEC011CCBD02442B883D3BA5AD098B9A4130B653* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void VehicleSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleSpawner_Start_m8CB57EF8B2790F900F174D20E0224857DB453448 (VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(SpawnVehicle());
		RuntimeObject* L_0;
		L_0 = VehicleSpawner_SpawnVehicle_mC75A69681206E28C99A6A6E472EFC48C18CD0BA9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VehicleSpawner::SpawnVehicle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VehicleSpawner_SpawnVehicle_mC75A69681206E28C99A6A6E472EFC48C18CD0BA9 (VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB* L_0 = (U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB*)il2cpp_codegen_object_new(U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnVehicleU3Ed__5__ctor_mBA8761F60194E1291A357FAD5CC9C8B8BC6008EF(L_0, 0, NULL);
		U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void VehicleSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleSpawner__ctor_m01011336C72F1872C787A85E4D23AC8FCC207CA8 (VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] List<GameObject> vehicles = new();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___vehicles_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vehicles_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
// System.Void VehicleSpawner/<SpawnVehicle>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnVehicleU3Ed__5__ctor_mBA8761F60194E1291A357FAD5CC9C8B8BC6008EF (U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VehicleSpawner/<SpawnVehicle>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnVehicleU3Ed__5_System_IDisposable_Dispose_m7BFCB7A060D9FC694A40B014DCEA29A198BD2BF5 (U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VehicleSpawner/<SpawnVehicle>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnVehicleU3Ed__5_MoveNext_m1CE29502522DEE7D354C335EE412E96E0370D110 (U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(Random.Range(minSeparationTime, maxSeparationTime));
		VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___minSeparationTime_6;
		VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___maxSeparationTime_7;
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_5, L_7, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Instantiate(vehicles[Random.Range(0, vehicles.Count)], spawnPos.position, Quaternion.Euler(0, 180, 0));
		VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* L_10 = V_1;
		NullCheck(L_10);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = L_10->___vehicles_4;
		VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* L_12 = V_1;
		NullCheck(L_12);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = L_12->___vehicles_4;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_13, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_15;
		L_15 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_14, NULL);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, L_15, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		VehicleSpawner_t9E1073428D7D075CE212084B6DBE18ACC62310A2* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17->___spawnPos_5;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (180.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_19, L_20, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// while (true)
		goto IL_001e;
	}
}
// System.Object VehicleSpawner/<SpawnVehicle>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnVehicleU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1636F4DF8BCB7195F4D5DB4BE7D872FB0A489CB9 (U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VehicleSpawner/<SpawnVehicle>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnVehicleU3Ed__5_System_Collections_IEnumerator_Reset_mABB2663ACB728C1270D748B1E9B0C8AB76F149C9 (U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnVehicleU3Ed__5_System_Collections_IEnumerator_Reset_mABB2663ACB728C1270D748B1E9B0C8AB76F149C9_RuntimeMethod_var)));
	}
}
// System.Object VehicleSpawner/<SpawnVehicle>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnVehicleU3Ed__5_System_Collections_IEnumerator_get_Current_m81472286FE4EFACA0EBC2A8B3D6498FB32D721BD (U3CSpawnVehicleU3Ed__5_t80BBE68211195016A2D7CB711A97A3A48FE5A5AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Player_get_isStartMoving_m0D562BC32A07B7A24071FD32BD44D2A203AB3076_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public bool isStartMoving { get; private set; } = false;
		bool L_0 = __this->___U3CisStartMovingU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_speed_m18501A8629B984AA49088D1EAD23132F15676129_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float speed { get; set; } = 0;
		float L_0 = __this->___U3CspeedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FinishScreen_get_isFinished_m1C65D285685984A31F2E5CA62294BA852805FD0A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isFinished { get; private set; }
		bool L_0 = ((FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_StaticFields*)il2cpp_codegen_static_fields_for(FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_il2cpp_TypeInfo_var))->___U3CisFinishedU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Death_set_isDefeat_m0B85B8BC904F9C8F4666AF51A4B25378352BE5D2_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isDefeat { get; set; }
		bool L_0 = ___value0;
		((Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_StaticFields*)il2cpp_codegen_static_fields_for(Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var))->___U3CisDefeatU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Factory_get_PizzaCount_m45821852547ECED2FBBE8A539150F0BAAEAB15AA_inline (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) 
{
	{
		// public int PizzaCount { get; set; }
		int32_t L_0 = __this->___U3CPizzaCountU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_speed_m0F212A9054680451F0E2A3E9C86155110EB806BD_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float speed { get; set; } = 0;
		float L_0 = ___value0;
		__this->___U3CspeedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Factory_get_PizzaList_m953F006FEECB44F3BAF5EF203E2B5476B4ACBAC6_inline (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, const RuntimeMethod* method) 
{
	{
		// public List<GameObject> PizzaList { get; set; } = new();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___U3CPizzaListU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Factory_get_spawnCount_m73D7D2DE503B7B68E574062F12D32CA1E18E782C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int spawnCount { get; set; } = 4;
		il2cpp_codegen_runtime_class_init_inline(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_StaticFields*)il2cpp_codegen_static_fields_for(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var))->___U3CspawnCountU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Factory_set_PizzaCount_m84370034CE57ABA21DBCC582E0B754F0A4DC229B_inline (Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int PizzaCount { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CPizzaCountU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Death_get_isDefeat_mEDDE227CBD91E6295898E9785EB94D16C997F896_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isDefeat { get; set; }
		bool L_0 = ((Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_StaticFields*)il2cpp_codegen_static_fields_for(Death_t151ADD39BAF75AD7303FEB064646AB2010973FFF_il2cpp_TypeInfo_var))->___U3CisDefeatU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_isStartMoving_m53F056E9999FDBC2A4D638BD39B93EBB174729E3_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isStartMoving { get; private set; } = false;
		bool L_0 = ___value0;
		__this->___U3CisStartMovingU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___leftVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_inline (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___direction0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishScreen_set_isFinished_m499A5DF01B0C5EADFE6059D2F0A83A557062E212_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isFinished { get; private set; }
		bool L_0 = ___value0;
		((FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_StaticFields*)il2cpp_codegen_static_fields_for(FinishScreen_t127AE903C256F5AF33AC2F38F6E497B61769B5C8_il2cpp_TypeInfo_var))->___U3CisFinishedU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Score_get_ScorePoint_m5A691986E49BF0E30167382A4DB22DC35FDE3964_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// public int ScorePoint { get; private set; }
		int32_t L_0 = __this->___U3CScorePointU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_highscore_m1D405A59E74D0A4E49C92FA0EECB3CA4E2173533_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// public string highscore { get; private set; }
		String_t* L_0 = __this->___U3ChighscoreU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Factory_set_spawnCount_m3A39AC8230FFA52FBC03D43AFD66F1AB79608460_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int spawnCount { get; set; } = 4;
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var);
		((Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_StaticFields*)il2cpp_codegen_static_fields_for(Factory_tC1629A163BFE3F2165C0AEE89EBC54D61D134530_il2cpp_TypeInfo_var))->___U3CspawnCountU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Score_get_timer_mDD5870F6E6B2C3B4940332A924D2DB2CBE266B5A_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// public int timer { get; private set; }
		int32_t L_0 = __this->___U3CtimerU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Score_get_fallPizzaCount_m73CC7576028696F71ECA6CC2EB0BB6796C04EA98_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// public int fallPizzaCount { get; private set; } = 0;
		int32_t L_0 = __this->___U3CfallPizzaCountU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_highscore_mF438C587835BF6007334EB8626F263EC4E197504_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string highscore { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3ChighscoreU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChighscoreU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_ScorePoint_m691D67A13A9BFFFB429E376AAEF89C31CB1B16E7_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ScorePoint { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CScorePointU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_fallPizzaCount_m6914170BA50F1F621476F43DBEBA9CC9E9ED8FC4_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int fallPizzaCount { get; private set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CfallPizzaCountU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_timer_m45A53389B0B96A8482E0360B59D696938909AF8C_inline (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int timer { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CtimerU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
