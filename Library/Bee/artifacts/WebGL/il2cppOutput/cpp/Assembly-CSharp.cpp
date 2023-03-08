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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BGmusic
struct BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BlueBlenderController
struct BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2;
// BlueBlenderHorizontalProjectile
struct BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1;
// BlueBossController
struct BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF;
// BossController
struct BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A;
// BossProjectile
struct BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213;
// BossTeleport
struct BossTeleport_tAA5678D9783D1BB22785E3DEEB97DC250A75A342;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// ButtonBehavior
struct ButtonBehavior_tDECF56CD32D4F44DD297CDB3DD4E76E6670D3070;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DamageOnImpact
struct DamageOnImpact_t511854547F4E77E86C7D5C42C3D8D3E41996FC72;
// DestroySelf
struct DestroySelf_t7C174F6201045F5FE6F7AE315CB98D6E00D013E0;
// DoorSetActive
struct DoorSetActive_t5C17FE11B9FD888DDE1FF2E4BD69F95A9FDE04DC;
// DoorTriggerButton
struct DoorTriggerButton_t9617BD78405FFDD62BDB460484B2BA883FBE8DC3;
// EndScreenText
struct EndScreenText_t196B9ECDA2B84A29CF60DEAA450E0BAB27F8F1ED;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FlashOnHit
struct FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HealthBar
struct HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// IcePuddleShot
struct IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// KeptData
struct KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E;
// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OrangeBossController
struct OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C;
// OrangeBowlBallProjectile
struct OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// PinkVaseBossController
struct PinkVaseBossController_t499FA5EFF4679F30B9584330654B3FA5588F5E4A;
// PlatformMovement
struct PlatformMovement_tE792223D032209ACC1AB4D9C252AF86BE07443DA;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerProjectile
struct PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF;
// PuddleSlide
struct PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6;
// PullTowards
struct PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B;
// PushAway
struct PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Shop
struct Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TimerScript
struct TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5;
// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TreeHollowScript
struct TreeHollowScript_t83302A45C06F8270823C949D0D4BC12BB97D3AAE;
// UIGameManager
struct UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VineArmController
struct VineArmController_t03E4D9647EABCF92D0BD3035BEC6832ED1DCE504;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// bounceScript
struct bounceScript_t7AD2C1DF9E450B445AC5D30D50B2B162431C43A0;
// BlueBlenderController/<FireBurst>d__24
struct U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B;
// BlueBossController/<Wait>d__8
struct U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084;
// FlashOnHit/<BlueFlashRoutine>d__11
struct U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A;
// FlashOnHit/<FlashRoutine>d__10
struct U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B;
// MainMenu/<LoadLevel>d__6
struct U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PauseMenu/<LoadLevel>d__14
struct U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4;
// PlayerController/<Dash>d__68
struct U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228;
// PlayerController/<Defend>d__69
struct U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00;
// PlayerController/<Invincible>d__67
struct U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525;
// PlayerController/<Knockback>d__66
struct U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UIGameManager/<LoadLevel>d__53
struct U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114;

IL2CPP_EXTERN_C RuntimeClass* BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02C0BF0F9E328EC681A030927F523A58B74FB3CE;
IL2CPP_EXTERN_C String_t* _stringLiteral033CD9E91437D67E4FEEEDA8A193F4E789B16FA9;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral068B22ACF600ECBE7F98BDF7FE088B8AD7177F46;
IL2CPP_EXTERN_C String_t* _stringLiteral0EFB2A43C07F788ACAB38D6B805BE9AC4DB21D6C;
IL2CPP_EXTERN_C String_t* _stringLiteral1EDEE13378ECCB8CBB1DD58667BBF0D326750EED;
IL2CPP_EXTERN_C String_t* _stringLiteral201E005A9C0DA581E3EDB697752C743ABAB5ADD0;
IL2CPP_EXTERN_C String_t* _stringLiteral2059F61430BFD2694C34433FE0D030CA76CA718B;
IL2CPP_EXTERN_C String_t* _stringLiteral2776195C4C4F2BC3F8D02FCDD6712FE6681E5B17;
IL2CPP_EXTERN_C String_t* _stringLiteral2A001925EC5635C455EF4564A5EBEFBA2C3694E2;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3543B1B7A1251000EA83C627F81556C12C006E57;
IL2CPP_EXTERN_C String_t* _stringLiteral4D81147188D85BBDD667818E097DE79FD7340EB3;
IL2CPP_EXTERN_C String_t* _stringLiteral51F057EE350775EFFE1A71A5313E208C0920C4A9;
IL2CPP_EXTERN_C String_t* _stringLiteral544174D37FE3259B941ABBD96A451AE19AAEE7F3;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral55EE082EF68CBD803E91FC0BC7B669804C08292B;
IL2CPP_EXTERN_C String_t* _stringLiteral64A57470536163F266B2FDEA5764C64DBB0DB7E1;
IL2CPP_EXTERN_C String_t* _stringLiteral65BE2224A681B97721F233B62834E3169A95DEED;
IL2CPP_EXTERN_C String_t* _stringLiteral666CE8017D86620669CA0B096CF4432FC11637E1;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral70563BEAFCFFDECDB57126E6D40EEFB8A850F340;
IL2CPP_EXTERN_C String_t* _stringLiteral742A9132E922EC557467DECBB44584FD820EED25;
IL2CPP_EXTERN_C String_t* _stringLiteral7D55B47531F63746B8E5A7B9B459605F08C5F89B;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF00B5237C1FC0463231E9D2E6CE7A6F568851F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral83EE4C7004342DC2EEEC76B50778E6943B193786;
IL2CPP_EXTERN_C String_t* _stringLiteral8A1E743152441D5897B17BC48E995CFD54CC6D39;
IL2CPP_EXTERN_C String_t* _stringLiteral8AC397301FEA3378118DB7745630BD325E9D6E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral92B541A952E05826EC849EA0AB638D112B6D47A7;
IL2CPP_EXTERN_C String_t* _stringLiteral94FB5026E82CFB24A91F741A2E6802C7F1C2D3FF;
IL2CPP_EXTERN_C String_t* _stringLiteral9A8B3270291AA5F18FFA97453A2963119A236F74;
IL2CPP_EXTERN_C String_t* _stringLiteralA3BCFDA0DDB86CAEE85E05C79A8B5CD9F2B17AEF;
IL2CPP_EXTERN_C String_t* _stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7;
IL2CPP_EXTERN_C String_t* _stringLiteralAE967F23A1FD47B62C21D80FF127DA08D38BA445;
IL2CPP_EXTERN_C String_t* _stringLiteralB198FA0623DDBA539EF4E61CDAB535E9B0A390C2;
IL2CPP_EXTERN_C String_t* _stringLiteralBB816DF4AAD3D58B7C2D0C8BD626E58C5753D024;
IL2CPP_EXTERN_C String_t* _stringLiteralC35F4C5697E9D6D7CED8930E06BC60CBF73C1E76;
IL2CPP_EXTERN_C String_t* _stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A;
IL2CPP_EXTERN_C String_t* _stringLiteralC85A896B09DF1D7F4CFA8D4C0E876AF2206E0067;
IL2CPP_EXTERN_C String_t* _stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE7F174AA19633DF63A75D4720838FD9898B55C;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC1718851612D10ED675D84468FA7CD9A079512;
IL2CPP_EXTERN_C String_t* _stringLiteralD614837794C324F5A00254337A5409B6F7AA2F50;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralE2BBD00347753849E9E98918FEA07AE95D51F7C8;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DC6DB186DEF6C0F9C988D1C401526A835CC85C;
IL2CPP_EXTERN_C String_t* _stringLiteralE442D6F53ECF4DBBFCA3AB388E96C5981E2D111C;
IL2CPP_EXTERN_C String_t* _stringLiteralE5F1C416E1B575C17CDC503EEDA793AA9263BAAD;
IL2CPP_EXTERN_C String_t* _stringLiteralE9E04E9DA5E464CE47859C54C13A147DE41779A9;
IL2CPP_EXTERN_C String_t* _stringLiteralF7BEE7F10A24BD13BAB78BC2758506E1366A7A19;
IL2CPP_EXTERN_C String_t* _stringLiteralFA75E8EC7E883621D2CF7F39D2D368045B61C9C9;
IL2CPP_EXTERN_C String_t* _stringLiteralFCEED6F48A1F4B605BC5637D10D8B2730CBB04B2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_m334DA90909CB9FDE616182A437A50C580FBD1C42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_mC669AA67B850814D1E260C78A078C3F53966B76F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A_mD17749A3B8E062EA0F31C2E564890A39074364DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4_mC1FEC140467A24786989EF9991C556868E02CBBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mA2ABAD61A554C16F10736E226A126B7F3509EE3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisBlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1_m101E27BAADBA8EFA525EC4879E08CF968B5FCEF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisBossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213_m24D0E41D4A8C084152E0F4F36CBA2A386495A98B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisIcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A_mFA8CA77285390ED79848FDE57651165873A4525D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisOrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE_m98D45300E9E35EEF33EE805EC7FE5A9F4C8F99B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisPlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF_m16192BF0693C610F436CD6F1882AA800CCCC7C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisPuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6_m02F06B5A7068C362A8782B76DE72CAF4FCD1E799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBlueFlashRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mDB5B0A6CECB2B62B0AD46A825B7354364BE57D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDashU3Ed__68_System_Collections_IEnumerator_Reset_mF4FD27291DFA9C60CEC577C26BC30F75CC2B0CF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDefendU3Ed__69_System_Collections_IEnumerator_Reset_m9A4FDE4495772B07BD9E9B28CD0922CFF4068BF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireBurstU3Ed__24_System_Collections_IEnumerator_Reset_mF6E9B8C99958416562FDB0B957D67D729EB6CD27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlashRoutineU3Ed__10_System_Collections_IEnumerator_Reset_m58D177F05618AFA4850D7EE4CB9653A019CCEA47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInvincibleU3Ed__67_System_Collections_IEnumerator_Reset_mCF2AD58A0438ADF9B1351F117279C6BA9F023BBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CKnockbackU3Ed__66_System_Collections_IEnumerator_Reset_mD292D438D8715F06BD543B4BC0C99FC63EE72F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadLevelU3Ed__14_System_Collections_IEnumerator_Reset_m2300DA281C84066EDF9B6784986E762A7FEA06CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadLevelU3Ed__53_System_Collections_IEnumerator_Reset_mF988023BD0F11FCA2AA0C6ABE5E2E458B91779DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadLevelU3Ed__6_System_Collections_IEnumerator_Reset_m36ADCE1469CF8A7B98F94586A0EE02D5FBCA4B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitU3Ed__8_System_Collections_IEnumerator_Reset_m475365F25E7CC5FF565300ED08CD1FD8A8B9A2CD_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
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

// BlueBlenderController/<FireBurst>d__24
struct U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B  : public RuntimeObject
{
	// System.Int32 BlueBlenderController/<FireBurst>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BlueBlenderController/<FireBurst>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BlueBlenderController BlueBlenderController/<FireBurst>d__24::<>4__this
	BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* ___U3CU3E4__this_2;
	// BlueBlenderHorizontalProjectile BlueBlenderController/<FireBurst>d__24::prefab
	BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* ___prefab_3;
	// UnityEngine.Transform BlueBlenderController/<FireBurst>d__24::offset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___offset_4;
	// System.Int32 BlueBlenderController/<FireBurst>d__24::burstSize
	int32_t ___burstSize_5;
	// System.Int32 BlueBlenderController/<FireBurst>d__24::<i>5__2
	int32_t ___U3CiU3E5__2_6;
};

// BlueBossController/<Wait>d__8
struct U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084  : public RuntimeObject
{
	// System.Int32 BlueBossController/<Wait>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BlueBossController/<Wait>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BlueBossController BlueBossController/<Wait>d__8::<>4__this
	BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* ___U3CU3E4__this_2;
};

// FlashOnHit/<BlueFlashRoutine>d__11
struct U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A  : public RuntimeObject
{
	// System.Int32 FlashOnHit/<BlueFlashRoutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FlashOnHit/<BlueFlashRoutine>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FlashOnHit FlashOnHit/<BlueFlashRoutine>d__11::<>4__this
	FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* ___U3CU3E4__this_2;
};

// FlashOnHit/<FlashRoutine>d__10
struct U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B  : public RuntimeObject
{
	// System.Int32 FlashOnHit/<FlashRoutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FlashOnHit/<FlashRoutine>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FlashOnHit FlashOnHit/<FlashRoutine>d__10::<>4__this
	FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* ___U3CU3E4__this_2;
};

// MainMenu/<LoadLevel>d__6
struct U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD  : public RuntimeObject
{
	// System.Int32 MainMenu/<LoadLevel>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainMenu/<LoadLevel>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MainMenu MainMenu/<LoadLevel>d__6::<>4__this
	MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* ___U3CU3E4__this_2;
	// System.String MainMenu/<LoadLevel>d__6::levelIndex
	String_t* ___levelIndex_3;
};

// PauseMenu/<LoadLevel>d__14
struct U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4  : public RuntimeObject
{
	// System.Int32 PauseMenu/<LoadLevel>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PauseMenu/<LoadLevel>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PauseMenu PauseMenu/<LoadLevel>d__14::<>4__this
	PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* ___U3CU3E4__this_2;
	// System.String PauseMenu/<LoadLevel>d__14::levelIndex
	String_t* ___levelIndex_3;
};

// PlayerController/<Dash>d__68
struct U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228  : public RuntimeObject
{
	// System.Int32 PlayerController/<Dash>d__68::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Dash>d__68::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Dash>d__68::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
	// System.Single PlayerController/<Dash>d__68::<originalGravity>5__2
	float ___U3CoriginalGravityU3E5__2_3;
};

// PlayerController/<Defend>d__69
struct U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00  : public RuntimeObject
{
	// System.Int32 PlayerController/<Defend>d__69::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Defend>d__69::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Defend>d__69::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<Invincible>d__67
struct U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525  : public RuntimeObject
{
	// System.Int32 PlayerController/<Invincible>d__67::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Invincible>d__67::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Invincible>d__67::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<Knockback>d__66
struct U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB  : public RuntimeObject
{
	// System.Int32 PlayerController/<Knockback>d__66::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Knockback>d__66::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Knockback>d__66::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// UIGameManager/<LoadLevel>d__53
struct U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114  : public RuntimeObject
{
	// System.Int32 UIGameManager/<LoadLevel>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIGameManager/<LoadLevel>d__53::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UIGameManager UIGameManager/<LoadLevel>d__53::<>4__this
	UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* ___U3CU3E4__this_2;
	// System.String UIGameManager/<LoadLevel>d__53::levelIndex
	String_t* ___levelIndex_3;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// KeptData
struct KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 KeptData::renown
	int32_t ___renown_4;
	// System.Int32 KeptData::essences
	int32_t ___essences_5;
	// System.Single KeptData::healthMod
	float ___healthMod_6;
	// System.Int32 KeptData::speedMod
	int32_t ___speedMod_7;
	// System.Int32 KeptData::attackMod
	int32_t ___attackMod_8;
	// System.Boolean KeptData::dashBought
	bool ___dashBought_9;
	// System.Boolean KeptData::doubleJumpBought
	bool ___doubleJumpBought_10;
	// System.Boolean KeptData::halfDamageBought
	bool ___halfDamageBought_11;
	// System.Boolean KeptData::doubAttBought
	bool ___doubAttBought_12;
	// System.Boolean KeptData::timeBought
	bool ___timeBought_13;
	// System.Int32 KeptData::heldElementalPowers
	int32_t ___heldElementalPowers_14;
	// System.Int32 KeptData::healingEssence
	int32_t ___healingEssence_15;
	// System.Int32 KeptData::defeatedBossNumber
	int32_t ___defeatedBossNumber_16;
	// System.Int32 KeptData::attackPrice
	int32_t ___attackPrice_17;
	// System.Int32 KeptData::healthPrice
	int32_t ___healthPrice_18;
	// System.Int32 KeptData::speedPrice
	int32_t ___speedPrice_19;
	// System.Int32 KeptData::dashPrice
	int32_t ___dashPrice_20;
	// System.Int32 KeptData::doublePrice
	int32_t ___doublePrice_21;
	// System.Int32 KeptData::doubAttPrice
	int32_t ___doubAttPrice_22;
	// System.Int32 KeptData::halfDamagePrice
	int32_t ___halfDamagePrice_23;
	// System.Int32 KeptData::timePrice
	int32_t ___timePrice_24;
	// System.Int32 KeptData::elementalPowerPrice
	int32_t ___elementalPowerPrice_25;
	// System.Int32 KeptData::healingPrice
	int32_t ___healingPrice_26;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BGmusic
struct BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource BGmusic::bossMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bossMusic_5;
	// UnityEngine.AudioSource BGmusic::mainMenuMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___mainMenuMusic_6;
};

struct BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_StaticFields
{
	// BGmusic BGmusic::instance
	BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE* ___instance_4;
};

// BlueBlenderHorizontalProjectile
struct BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 BlueBlenderHorizontalProjectile::dam
	int32_t ___dam_4;
	// UnityEngine.GameObject BlueBlenderHorizontalProjectile::jumpShotSpot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jumpShotSpot_5;
	// UnityEngine.GameObject BlueBlenderHorizontalProjectile::crouchShotSpot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___crouchShotSpot_6;
	// System.Single BlueBlenderHorizontalProjectile::speed
	float ___speed_7;
	// KeptData BlueBlenderHorizontalProjectile::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_8;
	// System.Boolean BlueBlenderHorizontalProjectile::animComplete
	bool ___animComplete_9;
	// System.Boolean BlueBlenderHorizontalProjectile::jumpShotPlaced
	bool ___jumpShotPlaced_10;
	// System.Boolean BlueBlenderHorizontalProjectile::crouchShotPlaced
	bool ___crouchShotPlaced_11;
};

// BossController
struct BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BossController::health
	float ___health_4;
	// System.Single BossController::shootCooldown
	float ___shootCooldown_5;
	// System.Single BossController::countdown
	float ___countdown_6;
	// System.Int32 BossController::counter
	int32_t ___counter_7;
	// BossProjectile BossController::bulletPrefab
	BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* ___bulletPrefab_8;
	// UnityEngine.Transform BossController::fireOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___fireOffset_9;
	// UnityEngine.Transform BossController::projectile
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___projectile_10;
	// System.Single BossController::currentCooldown
	float ___currentCooldown_11;
	// System.Single BossController::duration
	float ___duration_12;
	// UnityEngine.GameObject BossController::healthbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___healthbar_13;
	// PlayerController BossController::player
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___player_14;
	// UnityEngine.AudioSource BossController::defeatSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___defeatSound_15;
	// UIGameManager BossController::uiGM
	UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* ___uiGM_16;
};

// BossProjectile
struct BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 BossProjectile::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BossProjectile::targets
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___targets_5;
	// System.Single BossProjectile::projectileSpeed
	float ___projectileSpeed_6;
	// System.Single BossProjectile::arcHeight
	float ___arcHeight_7;
	// System.Int32 BossProjectile::dam
	int32_t ___dam_8;
	// KeptData BossProjectile::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_9;
	// UnityEngine.BoxCollider2D BossProjectile::coll
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___coll_10;
	// UnityEngine.Animator BossProjectile::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_11;
	// UnityEngine.Quaternion BossProjectile::initialRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initialRotation_12;
	// UnityEngine.Vector3 BossProjectile::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_13;
	// UnityEngine.Vector3 BossProjectile::nextPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextPos_14;
};

// BossTeleport
struct BossTeleport_tAA5678D9783D1BB22785E3DEEB97DC250A75A342  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Transform> BossTeleport::spawnTarget
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___spawnTarget_4;
	// System.Single BossTeleport::countdown
	float ___countdown_5;
	// System.Single BossTeleport::counter
	float ___counter_6;
	// UnityEngine.Transform BossTeleport::spawnTargetPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnTargetPos_7;
	// UnityEngine.Animator BossTeleport::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_8;
	// UnityEngine.Vector3 BossTeleport::originalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalScale_9;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// ButtonBehavior
struct ButtonBehavior_tDECF56CD32D4F44DD297CDB3DD4E76E6670D3070  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DamageOnImpact
struct DamageOnImpact_t511854547F4E77E86C7D5C42C3D8D3E41996FC72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 DamageOnImpact::damage
	int32_t ___damage_4;
};

// DestroySelf
struct DestroySelf_t7C174F6201045F5FE6F7AE315CB98D6E00D013E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DoorSetActive
struct DoorSetActive_t5C17FE11B9FD888DDE1FF2E4BD69F95A9FDE04DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DoorSetActive::equipMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___equipMenu_4;
};

// DoorTriggerButton
struct DoorTriggerButton_t9617BD78405FFDD62BDB460484B2BA883FBE8DC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UIGameManager DoorTriggerButton::uiGM
	UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* ___uiGM_4;
	// System.Boolean DoorTriggerButton::isInRange
	bool ___isInRange_5;
	// UnityEngine.Events.UnityEvent DoorTriggerButton::interactAction
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___interactAction_6;
};

// EndScreenText
struct EndScreenText_t196B9ECDA2B84A29CF60DEAA450E0BAB27F8F1ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text EndScreenText::essenceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___essenceText_4;
	// UnityEngine.UI.Text EndScreenText::renownText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___renownText_5;
	// UnityEngine.UI.Text EndScreenText::Title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Title_6;
	// PlayerController EndScreenText::script
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___script_7;
	// BossController EndScreenText::script2
	BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* ___script2_8;
	// KeptData EndScreenText::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_9;
	// UnityEngine.GameObject EndScreenText::vicScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___vicScreen_10;
	// System.Int32 EndScreenText::essenceVal
	int32_t ___essenceVal_11;
	// System.Int32 EndScreenText::renown
	int32_t ___renown_12;
	// System.Single EndScreenText::health
	float ___health_13;
	// System.Single EndScreenText::bossHealth
	float ___bossHealth_14;
	// System.Single EndScreenText::initBoss
	float ___initBoss_15;
	// System.Single EndScreenText::barHealth
	float ___barHealth_16;
	// System.Single EndScreenText::currenthealth
	float ___currenthealth_17;
	// System.Single EndScreenText::checker
	float ___checker_18;
	// System.Boolean EndScreenText::run
	bool ___run_19;
};

// FlashOnHit
struct FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material FlashOnHit::flashMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___flashMaterial_4;
	// System.Single FlashOnHit::duration
	float ___duration_5;
	// System.Single FlashOnHit::blueDuration
	float ___blueDuration_6;
	// UnityEngine.Material FlashOnHit::blueFlashMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blueFlashMaterial_7;
	// UnityEngine.SpriteRenderer FlashOnHit::sprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sprite_8;
	// UnityEngine.Material FlashOnHit::originalMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMaterial_9;
	// UnityEngine.Coroutine FlashOnHit::flashRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___flashRoutine_10;
};

// HealthBar
struct HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider HealthBar::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
};

// IcePuddleShot
struct IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 IcePuddleShot::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_4;
	// System.Single IcePuddleShot::projectileSpeed
	float ___projectileSpeed_5;
	// System.Single IcePuddleShot::arcHeight
	float ___arcHeight_6;
	// System.Int32 IcePuddleShot::dam
	int32_t ___dam_7;
	// PuddleSlide IcePuddleShot::puddlePrefab
	PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* ___puddlePrefab_8;
	// KeptData IcePuddleShot::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_9;
	// UnityEngine.BoxCollider2D IcePuddleShot::coll
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___coll_10;
	// UnityEngine.Animator IcePuddleShot::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_11;
	// UnityEngine.Quaternion IcePuddleShot::initialRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initialRotation_12;
	// UnityEngine.Vector3 IcePuddleShot::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_13;
	// UnityEngine.Vector3 IcePuddleShot::nextPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextPos_14;
};

// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator MainMenu::transition
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___transition_4;
	// System.Single MainMenu::trasitionTime
	float ___trasitionTime_5;
};

// OrangeBowlBallProjectile
struct OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OrangeBowlBallProjectile::projectileSpeed
	float ___projectileSpeed_4;
	// System.Single OrangeBowlBallProjectile::arcHeight
	float ___arcHeight_5;
	// System.Int32 OrangeBowlBallProjectile::dam
	int32_t ___dam_6;
	// KeptData OrangeBowlBallProjectile::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_7;
	// UnityEngine.BoxCollider2D OrangeBowlBallProjectile::coll
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___coll_8;
	// UnityEngine.Quaternion OrangeBowlBallProjectile::initialRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initialRotation_9;
	// UnityEngine.Vector3 OrangeBowlBallProjectile::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_10;
	// UnityEngine.Vector3 OrangeBowlBallProjectile::nextPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextPos_11;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PauseMenu::trasitionTime
	float ___trasitionTime_4;
	// UnityEngine.Animator PauseMenu::transition
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___transition_5;
	// UnityEngine.GameObject PauseMenu::pauseFirstButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseFirstButton_6;
	// UnityEngine.GameObject PauseMenu::playerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerObject_7;
	// UnityEngine.GameObject PauseMenu::bossObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bossObject_8;
	// UnityEngine.GameObject PauseMenu::pauseMenuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenuUI_10;
};

struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields
{
	// System.Boolean PauseMenu::GameIsPaused
	bool ___GameIsPaused_9;
};

// PlatformMovement
struct PlatformMovement_tE792223D032209ACC1AB4D9C252AF86BE07443DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlatformMovement::speed
	float ___speed_4;
	// UnityEngine.Transform PlatformMovement::startPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startPoint_5;
	// UnityEngine.Transform PlatformMovement::endPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___endPoint_6;
	// UnityEngine.Transform PlatformMovement::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_7;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerController/State PlayerController::state
	int32_t ___state_4;
	// System.Int32 PlayerController::animLayer
	int32_t ___animLayer_5;
	// UnityEngine.Animator PlayerController::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_6;
	// UnityEngine.SpriteRenderer PlayerController::sprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sprite_7;
	// System.Single PlayerController::horizontal
	float ___horizontal_8;
	// PlayerProjectile PlayerController::projectilePrefab
	PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* ___projectilePrefab_9;
	// PlayerProjectile PlayerController::superProjectilePrefab
	PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* ___superProjectilePrefab_10;
	// UnityEngine.Transform PlayerController::fireOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___fireOffset_11;
	// System.Int32 PlayerController::superAttackCount
	int32_t ___superAttackCount_12;
	// System.Boolean PlayerController::isFacingRight
	bool ___isFacingRight_13;
	// System.Single PlayerController::currentCooldown
	float ___currentCooldown_14;
	// System.Single PlayerController::healAmount
	float ___healAmount_15;
	// UnityEngine.Vector2 PlayerController::standingSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___standingSize_16;
	// UnityEngine.Vector2 PlayerController::crouchingSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___crouchingSize_17;
	// UnityEngine.Vector2 PlayerController::offsetSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offsetSize_18;
	// System.Boolean PlayerController::canDash
	bool ___canDash_19;
	// System.Single PlayerController::defendCount
	float ___defendCount_20;
	// UnityEngine.BoxCollider2D PlayerController::col
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___col_21;
	// System.Single PlayerController::pushForce
	float ___pushForce_22;
	// UnityEngine.Rigidbody2D PlayerController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_23;
	// System.Single PlayerController::health
	float ___health_24;
	// System.Single PlayerController::speed
	float ___speed_25;
	// System.Single PlayerController::groundRadius
	float ___groundRadius_26;
	// UnityEngine.LayerMask PlayerController::ground
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ground_27;
	// System.Boolean PlayerController::grounded
	bool ___grounded_28;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_29;
	// System.Boolean PlayerController::canDoubleJump
	bool ___canDoubleJump_30;
	// System.Single PlayerController::shootCooldown
	float ___shootCooldown_31;
	// System.Boolean PlayerController::knockback
	bool ___knockback_32;
	// System.Boolean PlayerController::isInvincible
	bool ___isInvincible_33;
	// System.Boolean PlayerController::isDefending
	bool ___isDefending_34;
	// System.Boolean PlayerController::isDashing
	bool ___isDashing_35;
	// UnityEngine.TrailRenderer PlayerController::trail
	TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* ___trail_36;
	// UnityEngine.AudioSource PlayerController::footsteps
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___footsteps_37;
	// UnityEngine.AudioSource PlayerController::jumpSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___jumpSound_38;
	// UnityEngine.AudioSource PlayerController::doubleJumpSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___doubleJumpSound_39;
	// UnityEngine.AudioSource PlayerController::hurtSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___hurtSound_40;
	// UnityEngine.AudioSource PlayerController::victorySound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___victorySound_41;
	// UnityEngine.AudioSource PlayerController::bubbleSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bubbleSound_42;
	// UnityEngine.AudioSource PlayerController::crouchSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___crouchSound_43;
	// UnityEngine.AudioSource PlayerController::dashSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___dashSound_44;
	// System.Single PlayerController::dashingPower
	float ___dashingPower_45;
	// UnityEngine.GameObject PlayerController::poof
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poof_46;
	// BossController PlayerController::boss
	BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* ___boss_47;
	// System.Single PlayerController::dashingTime
	float ___dashingTime_48;
	// System.Single PlayerController::dashingCooldown
	float ___dashingCooldown_49;
	// System.Single PlayerController::maxHealth
	float ___maxHealth_50;
	// UnityEngine.Vector2 PlayerController::dir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir_51;
	// KeptData PlayerController::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_52;
	// UIGameManager PlayerController::uiGM
	UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* ___uiGM_53;
	// System.Single PlayerController::counter
	float ___counter_54;
	// System.Single PlayerController::currentHealth
	float ___currentHealth_55;
};

// PlayerProjectile
struct PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerProjectile::speed
	float ___speed_4;
	// System.Int32 PlayerProjectile::damage
	int32_t ___damage_5;
	// KeptData PlayerProjectile::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_6;
};

// PuddleSlide
struct PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D PuddleSlide::playerRB
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___playerRB_4;
	// UnityEngine.GameObject PuddleSlide::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// System.Single PuddleSlide::slideSpeed
	float ___slideSpeed_6;
	// UnityEngine.Vector2 PuddleSlide::dir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir_7;
	// System.Single PuddleSlide::timer
	float ___timer_8;
};

// PullTowards
struct PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PullTowards::windSpeed
	float ___windSpeed_4;
	// UnityEngine.Rigidbody2D PullTowards::playerRB
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___playerRB_5;
	// UnityEngine.GameObject PullTowards::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_6;
	// UnityEngine.Vector2 PullTowards::dir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir_7;
};

// PushAway
struct PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PushAway::windSpeed
	float ___windSpeed_4;
	// UnityEngine.Rigidbody2D PushAway::playerRB
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___playerRB_5;
	// UnityEngine.GameObject PushAway::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_6;
	// UnityEngine.Vector2 PushAway::dir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir_7;
};

// Shop
struct Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Shop::buyAttackText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buyAttackText_4;
	// UnityEngine.UI.Text Shop::buyHealthText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buyHealthText_5;
	// UnityEngine.UI.Text Shop::buySpeedText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buySpeedText_6;
	// UnityEngine.UI.Text Shop::renownText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___renownText_7;
	// UnityEngine.UI.Text Shop::essenceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___essenceText_8;
	// KeptData Shop::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_9;
	// UnityEngine.GameObject Shop::shopMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shopMenu_10;
};

// TimerScript
struct TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// KeptData TimerScript::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_4;
	// System.Single TimerScript::TimeLeft
	float ___TimeLeft_5;
	// System.Boolean TimerScript::TimerOn
	bool ___TimerOn_6;
	// UnityEngine.UI.Text TimerScript::TimerText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TimerText_7;
};

// TreeHollowScript
struct TreeHollowScript_t83302A45C06F8270823C949D0D4BC12BB97D3AAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] TreeHollowScript::vineArms
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___vineArms_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIGameManager
struct UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text UIGameManager::buyAttackText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buyAttackText_4;
	// UnityEngine.UI.Text UIGameManager::buyHealthText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buyHealthText_5;
	// UnityEngine.UI.Text UIGameManager::buySpeedText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buySpeedText_6;
	// UnityEngine.UI.Text UIGameManager::renownTextShop
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___renownTextShop_7;
	// UnityEngine.UI.Text UIGameManager::essenceTextShop
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___essenceTextShop_8;
	// UnityEngine.GameObject UIGameManager::dashButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dashButton_9;
	// UnityEngine.GameObject UIGameManager::doubleButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___doubleButton_10;
	// UnityEngine.GameObject UIGameManager::halfDamageButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___halfDamageButton_11;
	// UnityEngine.GameObject UIGameManager::doubAttButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___doubAttButton_12;
	// UnityEngine.GameObject UIGameManager::darkScabbardTextBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___darkScabbardTextBox_13;
	// UnityEngine.UI.Text UIGameManager::darkScabbardText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___darkScabbardText_14;
	// KeptData UIGameManager::data
	KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* ___data_15;
	// PlayerController UIGameManager::pc
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___pc_16;
	// UnityEngine.GameObject UIGameManager::shopMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shopMenu_17;
	// UnityEngine.UI.Slider UIGameManager::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_18;
	// UnityEngine.UI.Slider UIGameManager::bossSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___bossSlider_19;
	// UnityEngine.UI.Text UIGameManager::elemPowers
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___elemPowers_20;
	// UnityEngine.UI.Text UIGameManager::healing
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___healing_21;
	// UnityEngine.GameObject UIGameManager::equipMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___equipMenu_22;
	// UnityEngine.Animator UIGameManager::transition
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___transition_23;
	// System.Single UIGameManager::trasitionTime
	float ___trasitionTime_24;
	// UnityEngine.GameObject UIGameManager::controlsImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___controlsImage_25;
	// System.Boolean UIGameManager::controlsOpen
	bool ___controlsOpen_26;
	// UnityEngine.UI.Text UIGameManager::essenceTextResult
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___essenceTextResult_27;
	// UnityEngine.UI.Text UIGameManager::renownTextResult
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___renownTextResult_28;
	// UnityEngine.UI.Text UIGameManager::Title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Title_29;
	// PlayerController UIGameManager::script
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___script_30;
	// BossController UIGameManager::script2
	BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* ___script2_31;
	// UnityEngine.GameObject UIGameManager::vicScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___vicScreen_32;
	// UnityEngine.GameObject UIGameManager::gc
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gc_33;
	// TimerScript UIGameManager::timer
	TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* ___timer_34;
	// UnityEngine.GameObject UIGameManager::victoryObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victoryObj_35;
	// UnityEngine.GameObject UIGameManager::defeatObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___defeatObj_36;
	// System.Int32 UIGameManager::essenceVal
	int32_t ___essenceVal_37;
	// System.Int32 UIGameManager::goldVal
	int32_t ___goldVal_38;
	// System.Int32 UIGameManager::renown
	int32_t ___renown_39;
	// System.Single UIGameManager::health
	float ___health_40;
	// System.Single UIGameManager::bossHealth
	float ___bossHealth_41;
	// System.Single UIGameManager::initBoss
	float ___initBoss_42;
	// System.Single UIGameManager::checker
	float ___checker_43;
	// System.Boolean UIGameManager::run
	bool ___run_44;
	// UnityEngine.GameObject UIGameManager::pauseFirstButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseFirstButton_45;
	// UnityEngine.GameObject UIGameManager::playerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerObject_46;
	// UnityEngine.GameObject UIGameManager::bossObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bossObject_47;
	// UnityEngine.GameObject UIGameManager::pauseMenuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenuUI_49;
};

struct UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_StaticFields
{
	// System.Boolean UIGameManager::GameIsPaused
	bool ___GameIsPaused_48;
};

// VineArmController
struct VineArmController_t03E4D9647EABCF92D0BD3035BEC6832ED1DCE504  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform VineArmController::startPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startPoint_4;
	// UnityEngine.GameObject VineArmController::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// UnityEngine.Vector2 VineArmController::direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction_6;
	// System.Single VineArmController::speed
	float ___speed_7;
	// System.Single VineArmController::rotationModifier
	float ___rotationModifier_8;
};

// bounceScript
struct bounceScript_t7AD2C1DF9E450B445AC5D30D50B2B162431C43A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject bounceScript::collider
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___collider_4;
	// UnityEngine.Rigidbody2D bounceScript::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_5;
	// System.Single bounceScript::launchForce
	float ___launchForce_6;
};

// BlueBlenderController
struct BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2  : public BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A
{
	// System.Single BlueBlenderController::value
	float ___value_17;
	// System.Single BlueBlenderController::icePuddleCountDown
	float ___icePuddleCountDown_18;
	// BlueBlenderHorizontalProjectile BlueBlenderController::JumpProjectilePrefab
	BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* ___JumpProjectilePrefab_19;
	// BlueBlenderHorizontalProjectile BlueBlenderController::CrouchProjectilePrefab
	BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* ___CrouchProjectilePrefab_20;
	// IcePuddleShot BlueBlenderController::puddleProjectilePrefab
	IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* ___puddleProjectilePrefab_21;
	// System.Boolean BlueBlenderController::isHoriShotting
	bool ___isHoriShotting_22;
	// UnityEngine.GameObject BlueBlenderController::background
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___background_23;
	// UnityEngine.AudioSource BlueBlenderController::iceShotSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___iceShotSound_24;
	// UnityEngine.AudioSource BlueBlenderController::windSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___windSound_25;
	// UnityEngine.Transform BlueBlenderController::horizontalOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___horizontalOffset_26;
	// UnityEngine.Transform BlueBlenderController::horizontalOffset2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___horizontalOffset2_27;
	// UnityEngine.Animator BlueBlenderController::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_28;
	// System.Single BlueBlenderController::timeRemaining
	float ___timeRemaining_29;
	// System.Single BlueBlenderController::horiCountdown
	float ___horiCountdown_30;
	// System.Single BlueBlenderController::horiTimer
	float ___horiTimer_31;
	// PullTowards BlueBlenderController::pull
	PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* ___pull_32;
	// PushAway BlueBlenderController::push
	PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* ___push_33;
	// System.Int32 BlueBlenderController::spiral
	int32_t ___spiral_34;
	// System.Int32 BlueBlenderController::runningCount
	int32_t ___runningCount_35;
};

// BlueBossController
struct BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF  : public BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A
{
	// System.Single BlueBossController::value
	float ___value_17;
	// System.Single BlueBossController::countdown
	float ___countdown_18;
	// PullTowards BlueBossController::pull
	PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* ___pull_19;
	// PushAway BlueBossController::push
	PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* ___push_20;
	// System.Single BlueBossController::timeRemaining
	float ___timeRemaining_21;
	// System.Single BlueBossController::duration
	float ___duration_22;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// OrangeBossController
struct OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C  : public BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A
{
	// System.Single OrangeBossController::walkSpeed
	float ___walkSpeed_17;
	// System.Boolean OrangeBossController::mustPatrol
	bool ___mustPatrol_18;
	// System.Boolean OrangeBossController::mustTurn
	bool ___mustTurn_19;
	// UnityEngine.Rigidbody2D OrangeBossController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_20;
	// UnityEngine.Transform OrangeBossController::wallCheckPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___wallCheckPos_21;
	// UnityEngine.LayerMask OrangeBossController::groundLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayer_22;
	// OrangeBowlBallProjectile OrangeBossController::ballPrefab
	OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* ___ballPrefab_23;
	// UnityEngine.Transform OrangeBossController::ballOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ballOffset_24;
};

// PinkVaseBossController
struct PinkVaseBossController_t499FA5EFF4679F30B9584330654B3FA5588F5E4A  : public BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A
{
	// UnityEngine.GameObject PinkVaseBossController::vinePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___vinePrefab_17;
	// System.Double PinkVaseBossController::firstBreakpoint
	double ___firstBreakpoint_18;
	// System.Double PinkVaseBossController::secondBreakpoint
	double ___secondBreakpoint_19;
	// System.Int32 PinkVaseBossController::vinesSpawned
	int32_t ___vinesSpawned_20;
	// UnityEngine.GameObject PinkVaseBossController::firstVineArm
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___firstVineArm_21;
	// UnityEngine.GameObject PinkVaseBossController::secondVineArm
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___secondVineArm_22;
	// UnityEngine.Transform PinkVaseBossController::startPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startPoint_23;
	// UnityEngine.Animator PinkVaseBossController::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_24;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single BossController::getHealth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BossController_getHealth_mF528BC0852BD83C576BBD068BC923E64388BA408_inline (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, const RuntimeMethod* method) ;
// System.Single PlayerController::getHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_getHealth_m712A29BFED0BED37C19EFBCB7E456F291AF3C3C8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void EndScreenText::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScreenText_show_m6BF3629440B4DF348822C007A67D3FA77085CA98 (EndScreenText_t196B9ECDA2B84A29CF60DEAA450E0BAB27F8F1ED* __this, const RuntimeMethod* method) ;
// System.Void KeptData::addRenown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_addRenown_mC41662C0A130FF83F54A013FB3041EEF8B3DEA45 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, int32_t ___newRenown0, const RuntimeMethod* method) ;
// System.Void KeptData::addEssence(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_addEssence_m904F3856242F8BB6AD0659EE5929F3461D71ACF9 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, int32_t ___newEssence0, const RuntimeMethod* method) ;
// System.Void EndScreenText::hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScreenText_hide_mD373AAE6095E85B8296AC17F03CBC09556EBAFD3 (EndScreenText_t196B9ECDA2B84A29CF60DEAA450E0BAB27F8F1ED* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator MainMenu::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenu_LoadLevel_m2BC8BFA203E3E25320133D6A3BB8229CE0310330 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, String_t* ___levelIndex0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void MainMenu/<LoadLevel>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__6__ctor_m5CD5A5C4627E58596E1D63180ED495A4FB495875 (U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void KeptData::increaseDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_increaseDamage_m672F84B3FA0A20BAFDB742881F9B890BF940BA3D (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Void KeptData::loseRenown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, int32_t ___lostRenown0, const RuntimeMethod* method) ;
// System.Void KeptData::increaseHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_increaseHealth_m6D8A91515241B0551D28BC27AA3AABC3187AA80B (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Void KeptData::increaseSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_increaseSpeed_m4F874E5ABF5BB56A0930647B97821698E40B4B7D (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PullTowards>()
inline PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* Component_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_m334DA90909CB9FDE616182A437A50C580FBD1C42 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PushAway>()
inline PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* Component_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_mC669AA67B850814D1E260C78A078C3F53966B76F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BossController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossController_Update_mAA580799CF6D2B3F2AB709AA6492E720872A4EB2 (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void BlueBlenderController::ArcShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderController_ArcShot_m4559504B7A49CB94651155B80EBC1D8BB02ED416 (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void BlueBlenderController::HorizontalShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderController_HorizontalShot_m984AB596F684E5634C51A3E2C039C9C033B8A403 (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, const RuntimeMethod* method) ;
// System.Void BlueBlenderController::IcePuddleShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderController_IcePuddleShot_mABB117DC853847C9BE9B6CEA5A0BA45B1EBEB833 (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<BossProjectile>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* Object_Instantiate_TisBossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213_m24D0E41D4A8C084152E0F4F36CBA2A386495A98B (BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* (*) (BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<IcePuddleShot>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* Object_Instantiate_TisIcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A_mFA8CA77285390ED79848FDE57651165873A4525D (IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* (*) (IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Collections.IEnumerator BlueBlenderController::FireBurst(BlueBlenderHorizontalProjectile,UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlueBlenderController_FireBurst_mE962F720EC818AB902B32FE89F2F1390E6A60707 (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* ___prefab0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___offset1, int32_t ___burstSize2, const RuntimeMethod* method) ;
// System.Void BlueBlenderController/<FireBurst>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireBurstU3Ed__24__ctor_m028A0F71F1AA160E6D57BCB25692B45A69401B5A (U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void BossController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossController__ctor_mC4C9EEC35858E3E8D6475F9C844D40EF8F2E537A (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<BlueBlenderHorizontalProjectile>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* Object_Instantiate_TisBlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1_m101E27BAADBA8EFA525EC4879E08CF968B5FCEF2 (BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* (*) (BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Physics2D::IgnoreCollision(UnityEngine.Collider2D,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreCollision_mFE023CDD902A5068236266648DAB8E9FD8EE387F (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider10, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider21, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void PlayerController::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, int32_t ___damage0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BlueBossController::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlueBossController_Wait_m8BDE625FE9B110DECF415D02ABFBEA6BDCB5D1BF (BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* __this, const RuntimeMethod* method) ;
// System.Void BlueBossController/<Wait>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__8__ctor_m4063F634DA83029AEA773E95C2B13E7CC7DEF332 (U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UIGameManager::SetBossMaxHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_SetBossMaxHealth_mD7718E930255F8DE75F1CA03A379E294908F25CA (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, float ___health0, const RuntimeMethod* method) ;
// System.Void UIGameManager::SetBossHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_SetBossHealth_m936355881B46A1A12E2686EDDAB50E42D3C8258D (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, float ___health0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<HealthBar>()
inline HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* GameObject_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mA2ABAD61A554C16F10736E226A126B7F3509EE3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void HealthBar::SetHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetHealth_mED8850BF31377EAB417D2DE07E3659B1CBF6D50B (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___health0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 BossProjectile::GetRandomTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BossProjectile_GetRandomTarget_m970AE505FCFB8FD7BB53B523E98E91495C2DE98D (BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion BossProjectile::LookAt2D(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BossProjectile_LookAt2D_m624C74774B585CE131AF4E1F689EF546E1177C4F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider2D::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_isTrigger_m19D5227BAB5D41F212D515C1E2CA433C2FEF7A48 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform BossTeleport::GetRandomTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BossTeleport_GetRandomTarget_m1A536990CCA695D587BE53972CC7C3BAB444C936 (BossTeleport_tAA5678D9783D1BB22785E3DEEB97DC250A75A342* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UIGameManager::OpenDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_OpenDoor_mA4B4CA067A331AB54C8E9A687CB35514B8753968 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FlashOnHit::FlashRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlashOnHit_FlashRoutine_mCF497E51A8AA389B08130AA15E02317254DEF0A3 (FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FlashOnHit::BlueFlashRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlashOnHit_BlueFlashRoutine_m61FC413AE676BF056F7C8E2AB5E905194BBA9E19 (FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* __this, const RuntimeMethod* method) ;
// System.Void FlashOnHit/<FlashRoutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashRoutineU3Ed__10__ctor_m0C1E7497B4BE99FA2BD42B95E424AB06FC3563E2 (U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void FlashOnHit/<BlueFlashRoutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlueFlashRoutineU3Ed__11__ctor_m62A17CF5EF40576FB565D450885760B44A5DF77D (U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion IcePuddleShot::LookAt2D(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 IcePuddleShot_LookAt2D_m277B5D334E5368FB76D0E46BB96FE3B15AE8B2B6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<PuddleSlide>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* Object_Instantiate_TisPuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6_m02F06B5A7068C362A8782B76DE72CAF4FCD1E799 (PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* (*) (PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.Object::Instantiate<OrangeBowlBallProjectile>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* Object_Instantiate_TisOrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE_m98D45300E9E35EEF33EE805EC7FE5A9F4C8F99B2 (OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* (*) (OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void OrangeBossController::Patrol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBossController_Patrol_m50A29340E9D157F81265DBA359268E99ADE06DC5 (OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void OrangeBossController::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBossController_Flip_m592C536F10FEBC6DA6549DF39E845D68D28A1D90 (OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion OrangeBowlBallProjectile::LookAt2D(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 OrangeBowlBallProjectile_LookAt2D_mB20E3A3559FCAEC438AF48BBAC999C93E3709224 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___forward0, const RuntimeMethod* method) ;
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_m5C6B949CB19184E7227C891FF3C8AF707689AAF0 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PullTowards>()
inline PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<PushAway>()
inline PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PauseMenu::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PauseMenu_LoadLevel_mDDA94B8E23CE001F40E4399465449C73F2AA4A32 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, String_t* ___levelIndex0, const RuntimeMethod* method) ;
// System.Void PauseMenu/<LoadLevel>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__14__ctor_m078A2D5C0B1D1CA802097D8FC4BA696B236FF9D8 (U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlatformMovement::UpdateTargetDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformMovement_UpdateTargetDestination_m08060A2D7BC48F95FB393C71DA5D6FF99EB5E22D (PlatformMovement_tE792223D032209ACC1AB4D9C252AF86BE07443DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.TrailRenderer>()
inline TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider2D::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider2D_set_size_mA69E48F639FFB614B5FC083D3FEED3DF78A9FF46 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UIGameManager::SetMaxHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_SetMaxHealth_mBA9C9DE5A921DF05DDDA9B3D2F7232F1C9F712CF (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, float ___health0, const RuntimeMethod* method) ;
// System.Void UIGameManager::SetHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_SetHealth_m6379E9B7292A9A82A4E173A4BB1CA814590E550D (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, float ___health0, const RuntimeMethod* method) ;
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m68BFC8B882D42955A212B23E7D1DDD56CC87DB09 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<PlayerProjectile>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* Object_Instantiate_TisPlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF_m16192BF0693C610F436CD6F1882AA800CCCC7C40 (PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* (*) (PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void PlayerController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void PlayerController::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::Defend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Defend_m075D9383C1F48486D6961E1D550FC0E1A1C68A16 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::healEssence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_healEssence_m3CBC0E7E52622DB98160249C48CF06B957DDD51A (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::StateChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StateChange_mA0EBC3DE3A9F67F550A2AA66A6B3BD3A353056A4 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::Dash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Dash_m938DABEFCA1784F1F5783713E48D31AD457FAE7B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Collections.IEnumerator PlayerController::Invincible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Invincible_mD27DA051AAB9E69017732921F2EA7BE873E2CF2E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::StopMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StopMovement_mA788659B3AD2F959DB0D37EDEB0B44CE77263922 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Knockback(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Knockback_m8CA12607988A44981D62608D162AB89D72DE2865 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::Knockback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Knockback_mFA49CDDD72BC512DF20D78BD39A19249B50300E6 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Void PlayerController/<Knockback>d__66::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKnockbackU3Ed__66__ctor_m8D2364FE21CB5991C4EE0BE26754BA232D5717FC (U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerController/<Invincible>d__67::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvincibleU3Ed__67__ctor_m7CF6963B9EBAD66AB1ED6916ACA21905D2CCA729 (U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerController/<Dash>d__68::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDashU3Ed__68__ctor_m0C5B5200B9EB557CFCD75EB0772828F0B53624C5 (U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerController/<Defend>d__69::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefendU3Ed__69__ctor_m315BF37A229FAD491966BC9023FC73966AE839F2 (U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rigidbody2D::get_gravityScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_gravityScale_mCFA8E159F51B876E16EEF634A63415F7051AFF44 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_emitting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_emitting_m16F5AF286796F5A3525EC91EAC427D61302A098B (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<FlashOnHit>()
inline FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* GameObject_GetComponent_TisFlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4_mC1FEC140467A24786989EF9991C556868E02CBBC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void FlashOnHit::MultiFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashOnHit_MultiFlash_m495219C276D62FBA5B58C55E6D26E73F05F74AC7 (FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BossController>()
inline BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* GameObject_GetComponent_TisBossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A_mD17749A3B8E062EA0F31C2E564890A39074364DF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void BossController::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossController_TakeDamage_mECD12B0A883B0831410593DE6BEFEBA03C5646DB (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, int32_t ___damage0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, const RuntimeMethod* method) ;
// System.Void TimerScript::updateTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript_updateTimer_mE5554D2DACC992570416C538810EF95681E360A9 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, float ___currentTime0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void KeptData::unlockDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_unlockDash_mA22B56A55F872610B0A9D45A2CF498EB04A9DD79 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Void KeptData::unlockDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_unlockDouble_mED43CAE64B61820F35088102680F5FE33F99EC43 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Void KeptData::buyTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_buyTime_m172EADFB4AD7D6FDE91006E9E13E73EDF9A6A2EA (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Void KeptData::halfDamageUnlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_halfDamageUnlock_m4017532285B004F617E1C8891FC36E97A6635641 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Void KeptData::buyDoubAtt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_buyDoubAtt_m1E285C89EBDABEB305C74987DC41A32E0A4AB757 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Void KeptData::buyElementalPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_buyElementalPower_m067BC18AF5C83CEF833E3DA22728588C82402CD3 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Void KeptData::loseEssence(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_loseEssence_m7969D0D5927F40591AE9A68A1AA1048AFBC70D02 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, int32_t ___lostEssence0, const RuntimeMethod* method) ;
// System.Void KeptData::buyHealing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_buyHealing_m930AFE1A84B8D569F263C25BBE48BE438E938153 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UIGameManager::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGameManager_LoadLevel_m5A7E2B2D8FC3406EA96B452B05BA8DE423B75DB2 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, String_t* ___levelIndex0, const RuntimeMethod* method) ;
// System.Void UIGameManager/<LoadLevel>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__53__ctor_mFA6FD2E44AD62191DD83477D2534E395499B0309 (U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UIGameManager::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Resume_m5A3D918E6E74A66AF2C608FB056057932DEFFDE9 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) ;
// System.Void UIGameManager::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_show_mD844CF589998EC733E987A125C644C83EABE9E6C (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) ;
// System.Void UIGameManager::Calculate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Calculate_m0812B3C1DB13CF715E76B5D46FC52DD26F6227FD (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, int32_t ___renown0, int32_t ___essenceVal1, const RuntimeMethod* method) ;
// System.Void UIGameManager::hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_hide_mB9AF58A79E1D867C29EC2F1587068924BD4DA17C (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) ;
// System.Void UIGameManager::victory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_victory_m4AFC7F03360BED8604750D90FE84D50C8C17382B (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) ;
// System.Void KeptData::bossDefeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_bossDefeat_m178C4F0A288C75F97523C6AC56A667A61A9DA557 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) ;
// System.Void UIGameManager::defeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_defeat_m500B82808AD451AF263AC67FD364037E8AB02D67 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) ;
// System.Void UIGameManager::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Pause_m95364418C17541B7F5F26162A2043B7C5A814A6A (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
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
// System.Void KeptData::resetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_resetValues_mBA23224BC9926C597E15C4D5443F48AB3C562987 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// renown = 0;
		__this->___renown_4 = 0;
		// essences = 0;
		__this->___essences_5 = 0;
		// healthMod = 0;
		__this->___healthMod_6 = (0.0f);
		// speedMod = 0;
		__this->___speedMod_7 = 0;
		// attackMod = 0;
		__this->___attackMod_8 = 0;
		// attackPrice = 10;
		__this->___attackPrice_17 = ((int32_t)10);
		// speedPrice = 10;
		__this->___speedPrice_19 = ((int32_t)10);
		// healthPrice = 10;
		__this->___healthPrice_18 = ((int32_t)10);
		// timePrice = 10;
		__this->___timePrice_24 = ((int32_t)10);
		// doubleJumpBought = false;
		__this->___doubleJumpBought_10 = (bool)0;
		// dashBought = false;
		__this->___dashBought_9 = (bool)0;
		// halfDamageBought = false;
		__this->___halfDamageBought_11 = (bool)0;
		// doubAttBought = false;
		__this->___doubAttBought_12 = (bool)0;
		// timeBought = false;
		__this->___timeBought_13 = (bool)0;
		// heldElementalPowers = 0;
		__this->___heldElementalPowers_14 = 0;
		// healingEssence = 0;
		__this->___healingEssence_15 = 0;
		// defeatedBossNumber = 0;
		__this->___defeatedBossNumber_16 = 0;
		// }
		return;
	}
}
// System.Void KeptData::addRenown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_addRenown_mC41662C0A130FF83F54A013FB3041EEF8B3DEA45 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, int32_t ___newRenown0, const RuntimeMethod* method) 
{
	{
		// renown += newRenown;
		int32_t L_0 = __this->___renown_4;
		int32_t L_1 = ___newRenown0;
		__this->___renown_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void KeptData::loseRenown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, int32_t ___lostRenown0, const RuntimeMethod* method) 
{
	{
		// renown -= lostRenown;
		int32_t L_0 = __this->___renown_4;
		int32_t L_1 = ___lostRenown0;
		__this->___renown_4 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// }
		return;
	}
}
// System.Void KeptData::addEssence(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_addEssence_m904F3856242F8BB6AD0659EE5929F3461D71ACF9 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, int32_t ___newEssence0, const RuntimeMethod* method) 
{
	{
		// essences += newEssence;
		int32_t L_0 = __this->___essences_5;
		int32_t L_1 = ___newEssence0;
		__this->___essences_5 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void KeptData::loseEssence(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_loseEssence_m7969D0D5927F40591AE9A68A1AA1048AFBC70D02 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, int32_t ___lostEssence0, const RuntimeMethod* method) 
{
	{
		// essences -= lostEssence;
		int32_t L_0 = __this->___essences_5;
		int32_t L_1 = ___lostEssence0;
		__this->___essences_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// }
		return;
	}
}
// System.Void KeptData::increaseHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_increaseHealth_m6D8A91515241B0551D28BC27AA3AABC3187AA80B (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// healthMod += 2;
		float L_0 = __this->___healthMod_6;
		__this->___healthMod_6 = ((float)il2cpp_codegen_add(L_0, (2.0f)));
		// }
		return;
	}
}
// System.Void KeptData::increaseSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_increaseSpeed_m4F874E5ABF5BB56A0930647B97821698E40B4B7D (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// speedMod ++;
		int32_t L_0 = __this->___speedMod_7;
		__this->___speedMod_7 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void KeptData::increaseDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_increaseDamage_m672F84B3FA0A20BAFDB742881F9B890BF940BA3D (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// attackMod++;
		int32_t L_0 = __this->___attackMod_8;
		__this->___attackMod_8 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void KeptData::unlockDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_unlockDash_mA22B56A55F872610B0A9D45A2CF498EB04A9DD79 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// dashBought = true;
		__this->___dashBought_9 = (bool)1;
		// }
		return;
	}
}
// System.Void KeptData::unlockDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_unlockDouble_mED43CAE64B61820F35088102680F5FE33F99EC43 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// doubleJumpBought = true;
		__this->___doubleJumpBought_10 = (bool)1;
		// }
		return;
	}
}
// System.Void KeptData::halfDamageUnlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_halfDamageUnlock_m4017532285B004F617E1C8891FC36E97A6635641 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// halfDamageBought = true;
		__this->___halfDamageBought_11 = (bool)1;
		// }
		return;
	}
}
// System.Void KeptData::buyDoubAtt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_buyDoubAtt_m1E285C89EBDABEB305C74987DC41A32E0A4AB757 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// doubAttBought = true;
		__this->___doubAttBought_12 = (bool)1;
		// }
		return;
	}
}
// System.Void KeptData::buyTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_buyTime_m172EADFB4AD7D6FDE91006E9E13E73EDF9A6A2EA (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// timeBought = true;
		__this->___timeBought_13 = (bool)1;
		// }
		return;
	}
}
// System.Void KeptData::buyElementalPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_buyElementalPower_m067BC18AF5C83CEF833E3DA22728588C82402CD3 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heldElementalPowers += 1;
		int32_t L_0 = __this->___heldElementalPowers_14;
		__this->___heldElementalPowers_14 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// Debug.Log(heldElementalPowers);
		int32_t L_1 = __this->___heldElementalPowers_14;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void KeptData::buyHealing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_buyHealing_m930AFE1A84B8D569F263C25BBE48BE438E938153 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// healingEssence += 1;
		int32_t L_0 = __this->___healingEssence_15;
		__this->___healingEssence_15 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// Debug.Log(healingEssence);
		int32_t L_1 = __this->___healingEssence_15;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void KeptData::usingHealing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_usingHealing_mCA870EE68CD5CD7DE1175034BE000D9CCE2A3973 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// healingEssence -= 1;
		int32_t L_0 = __this->___healingEssence_15;
		__this->___healingEssence_15 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// }
		return;
	}
}
// System.Void KeptData::usingElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_usingElements_m309EF513A4325F03F5488B70592E1CB47796B8EB (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// heldElementalPowers -= 1;
		int32_t L_0 = __this->___heldElementalPowers_14;
		__this->___heldElementalPowers_14 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// }
		return;
	}
}
// System.Void KeptData::bossDefeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData_bossDefeat_m178C4F0A288C75F97523C6AC56A667A61A9DA557 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// defeatedBossNumber++;
		int32_t L_0 = __this->___defeatedBossNumber_16;
		__this->___defeatedBossNumber_16 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void KeptData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeptData__ctor_m4C1F2EEFCAFAE456275AA97B270C19060595A060 (KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public int attackPrice = 10;
		__this->___attackPrice_17 = ((int32_t)10);
		// [SerializeField] public int healthPrice = 10;
		__this->___healthPrice_18 = ((int32_t)10);
		// [SerializeField] public int speedPrice = 10;
		__this->___speedPrice_19 = ((int32_t)10);
		// [SerializeField] public int dashPrice = 10;
		__this->___dashPrice_20 = ((int32_t)10);
		// [SerializeField] public int doublePrice = 10;
		__this->___doublePrice_21 = ((int32_t)10);
		// [SerializeField] public int doubAttPrice = 50;
		__this->___doubAttPrice_22 = ((int32_t)50);
		// [SerializeField] public int halfDamagePrice = 10;
		__this->___halfDamagePrice_23 = ((int32_t)10);
		// [SerializeField] public int timePrice = 10;
		__this->___timePrice_24 = ((int32_t)10);
		// [SerializeField] public int elementalPowerPrice = 1;
		__this->___elementalPowerPrice_25 = 1;
		// [SerializeField] public int healingPrice = 3;
		__this->___healingPrice_26 = 3;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void DoorSetActive::OpenDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorSetActive_OpenDoor_m4FBE23A3EC7B40F550639E7E3333680DB1A0A3BD (DoorSetActive_t5C17FE11B9FD888DDE1FF2E4BD69F95A9FDE04DC* __this, const RuntimeMethod* method) 
{
	{
		// equipMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___equipMenu_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void DoorSetActive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorSetActive__ctor_m14EE5A14002D2C9C29753EA922477B0D4AC69227 (DoorSetActive_t5C17FE11B9FD888DDE1FF2E4BD69F95A9FDE04DC* __this, const RuntimeMethod* method) 
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
// System.Void EndScreenText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScreenText_Start_m669744B840AA6A964E9D7A3D579C10E109C30D36 (EndScreenText_t196B9ECDA2B84A29CF60DEAA450E0BAB27F8F1ED* __this, const RuntimeMethod* method) 
{
	{
		// initBoss = script2.getHealth(); //Sets current boss health
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_0 = __this->___script2_8;
		float L_1;
		L_1 = BossController_getHealth_mF528BC0852BD83C576BBD068BC923E64388BA408_inline(L_0, NULL);
		__this->___initBoss_15 = L_1;
		// run = true;
		__this->___run_19 = (bool)1;
		// }
		return;
	}
}
// System.Void EndScreenText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScreenText_Update_mCEA42401D35B4DC10AEA9B51F5786BD720944407 (EndScreenText_t196B9ECDA2B84A29CF60DEAA450E0BAB27F8F1ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral666CE8017D86620669CA0B096CF4432FC11637E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DC6DB186DEF6C0F9C988D1C401526A835CC85C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7BEE7F10A24BD13BAB78BC2758506E1366A7A19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health = script.getHealth();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = __this->___script_7;
		float L_1;
		L_1 = PlayerController_getHealth_m712A29BFED0BED37C19EFBCB7E456F291AF3C3C8(L_0, NULL);
		__this->___health_13 = L_1;
		// bossHealth = script2.getHealth();
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_2 = __this->___script2_8;
		float L_3;
		L_3 = BossController_getHealth_mF528BC0852BD83C576BBD068BC923E64388BA408_inline(L_2, NULL);
		__this->___bossHealth_14 = L_3;
		// checker = (initBoss - bossHealth)/initBoss; //value to check for percent of boss health depleted
		float L_4 = __this->___initBoss_15;
		float L_5 = __this->___bossHealth_14;
		float L_6 = __this->___initBoss_15;
		__this->___checker_18 = ((float)(((float)il2cpp_codegen_subtract(L_4, L_5))/L_6));
		// if(checker >= 0.25 && checker < 0.5){
		float L_7 = __this->___checker_18;
		if ((!(((double)((double)L_7)) >= ((double)(0.25)))))
		{
			goto IL_0073;
		}
	}
	{
		float L_8 = __this->___checker_18;
		if ((!(((double)((double)L_8)) < ((double)(0.5)))))
		{
			goto IL_0073;
		}
	}
	{
		// essenceVal = 1;
		__this->___essenceVal_11 = 1;
		// renown = 1;
		__this->___renown_12 = 1;
		goto IL_0101;
	}

IL_0073:
	{
		// else if(checker >= 0.5 && checker < 0.75){
		float L_9 = __this->___checker_18;
		if ((!(((double)((double)L_9)) >= ((double)(0.5)))))
		{
			goto IL_00a7;
		}
	}
	{
		float L_10 = __this->___checker_18;
		if ((!(((double)((double)L_10)) < ((double)(0.75)))))
		{
			goto IL_00a7;
		}
	}
	{
		// essenceVal = 2;
		__this->___essenceVal_11 = 2;
		// renown = 2;
		__this->___renown_12 = 2;
		goto IL_0101;
	}

IL_00a7:
	{
		// else if(checker >= 0.75 && checker < 1){
		float L_11 = __this->___checker_18;
		if ((!(((double)((double)L_11)) >= ((double)(0.75)))))
		{
			goto IL_00d6;
		}
	}
	{
		float L_12 = __this->___checker_18;
		if ((!(((float)L_12) < ((float)(1.0f)))))
		{
			goto IL_00d6;
		}
	}
	{
		// essenceVal = 3;
		__this->___essenceVal_11 = 3;
		// renown = 3;
		__this->___renown_12 = 3;
		goto IL_0101;
	}

IL_00d6:
	{
		// else if(checker == 1){
		float L_13 = __this->___checker_18;
		if ((!(((float)L_13) == ((float)(1.0f)))))
		{
			goto IL_00f3;
		}
	}
	{
		// essenceVal = 5;
		__this->___essenceVal_11 = 5;
		// renown = 5;
		__this->___renown_12 = 5;
		goto IL_0101;
	}

IL_00f3:
	{
		// essenceVal = 0;
		__this->___essenceVal_11 = 0;
		// renown = 0;
		__this->___renown_12 = 0;
	}

IL_0101:
	{
		// essenceText.text = "Essence: " + essenceVal.ToString(); //Strings for End Screen
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___essenceText_4;
		int32_t* L_15 = (&__this->___essenceVal_11);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral666CE8017D86620669CA0B096CF4432FC11637E1, L_16, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_17);
		// renownText.text = "Renown: " + essenceVal.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___renownText_5;
		int32_t* L_19 = (&__this->___essenceVal_11);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF7BEE7F10A24BD13BAB78BC2758506E1366A7A19, L_20, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
		// if (bossHealth == 0){
		float L_22 = __this->___bossHealth_14;
		if ((!(((float)L_22) == ((float)(0.0f)))))
		{
			goto IL_015e;
		}
	}
	{
		// Title.text = "Victory";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___Title_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, _stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042);
	}

IL_015e:
	{
		// if (health <= 0){
		float L_24 = __this->___health_13;
		if ((!(((float)L_24) <= ((float)(0.0f)))))
		{
			goto IL_017b;
		}
	}
	{
		// Title.text = "Defeat";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___Title_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, _stringLiteralE3DC6DB186DEF6C0F9C988D1C401526A835CC85C);
	}

IL_017b:
	{
		// if(health <= 0 || bossHealth <= 0){
		float L_26 = __this->___health_13;
		if ((((float)L_26) <= ((float)(0.0f))))
		{
			goto IL_0195;
		}
	}
	{
		float L_27 = __this->___bossHealth_14;
		if ((!(((float)L_27) <= ((float)(0.0f)))))
		{
			goto IL_01cd;
		}
	}

IL_0195:
	{
		// show();
		EndScreenText_show_m6BF3629440B4DF348822C007A67D3FA77085CA98(__this, NULL);
		// if (run == true){
		bool L_28 = __this->___run_19;
		if (!L_28)
		{
			goto IL_01d3;
		}
	}
	{
		// data.addRenown(essenceVal);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_29 = __this->___data_9;
		int32_t L_30 = __this->___essenceVal_11;
		KeptData_addRenown_mC41662C0A130FF83F54A013FB3041EEF8B3DEA45(L_29, L_30, NULL);
		// data.addEssence(essenceVal);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_31 = __this->___data_9;
		int32_t L_32 = __this->___essenceVal_11;
		KeptData_addEssence_m904F3856242F8BB6AD0659EE5929F3461D71ACF9(L_31, L_32, NULL);
		// run = false;
		__this->___run_19 = (bool)0;
		return;
	}

IL_01cd:
	{
		// hide();
		EndScreenText_hide_mD373AAE6095E85B8296AC17F03CBC09556EBAFD3(__this, NULL);
	}

IL_01d3:
	{
		// }
		return;
	}
}
// System.Void EndScreenText::hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScreenText_hide_mD373AAE6095E85B8296AC17F03CBC09556EBAFD3 (EndScreenText_t196B9ECDA2B84A29CF60DEAA450E0BAB27F8F1ED* __this, const RuntimeMethod* method) 
{
	{
		// vicScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___vicScreen_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void EndScreenText::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScreenText_show_m6BF3629440B4DF348822C007A67D3FA77085CA98 (EndScreenText_t196B9ECDA2B84A29CF60DEAA450E0BAB27F8F1ED* __this, const RuntimeMethod* method) 
{
	{
		// vicScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___vicScreen_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void EndScreenText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScreenText__ctor_mAF4EA02301D3D5FC689685C6A622E159752E97AE (EndScreenText_t196B9ECDA2B84A29CF60DEAA450E0BAB27F8F1ED* __this, const RuntimeMethod* method) 
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
// System.Void HealthBar::SetMaxHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetMaxHealth_mF924738DAA38B85BAA0C262F7959D66A4FDA1143 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___health0, const RuntimeMethod* method) 
{
	{
		// slider.maxValue = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = ___health0;
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, L_1, NULL);
		// slider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___slider_4;
		float L_3 = ___health0;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void HealthBar::SetHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetHealth_mED8850BF31377EAB417D2DE07E3659B1CBF6D50B (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___health0, const RuntimeMethod* method) 
{
	{
		// slider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = ___health0;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void HealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar__ctor_m6874A2796BC8D86E80B24E349500653ACFA80662 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
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
// System.Void MainMenu::ExitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ExitButton_mF86100263A10A1331A2EAED63F76C85D3321D397 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65BE2224A681B97721F233B62834E3169A95DEED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// Debug.Log("Game Closed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral65BE2224A681B97721F233B62834E3169A95DEED, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Play_Button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Play_Button_m04BC7C5B954FB6EE6EEC4E274D914D194B095D90 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A1E743152441D5897B17BC48E995CFD54CC6D39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(LoadLevel("Coliseum"));
		RuntimeObject* L_0;
		L_0 = MainMenu_LoadLevel_m2BC8BFA203E3E25320133D6A3BB8229CE0310330(__this, _stringLiteral8A1E743152441D5897B17BC48E995CFD54CC6D39, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::SettingsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SettingsButton_mBD69F0D66CE9B583B07802FB9CA22D3CA62CF7C0 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51F057EE350775EFFE1A71A5313E208C0920C4A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// StartCoroutine(LoadLevel("Settings Menu"));
		RuntimeObject* L_0;
		L_0 = MainMenu_LoadLevel_m2BC8BFA203E3E25320133D6A3BB8229CE0310330(__this, _stringLiteral51F057EE350775EFFE1A71A5313E208C0920C4A9, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::MainMenuButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_MainMenuButton_m8C1A9BE97CE963D6CE859563282769A9A8CC0973 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// StartCoroutine(LoadLevel("Main Menu"));
		RuntimeObject* L_0;
		L_0 = MainMenu_LoadLevel_m2BC8BFA203E3E25320133D6A3BB8229CE0310330(__this, _stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MainMenu::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenu_LoadLevel_m2BC8BFA203E3E25320133D6A3BB8229CE0310330 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, String_t* ___levelIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* L_0 = (U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD*)il2cpp_codegen_object_new(U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD_il2cpp_TypeInfo_var);
		U3CLoadLevelU3Ed__6__ctor_m5CD5A5C4627E58596E1D63180ED495A4FB495875(L_0, 0, NULL);
		U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* L_2 = L_1;
		String_t* L_3 = ___levelIndex0;
		L_2->___levelIndex_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___levelIndex_3), (void*)L_3);
		return L_2;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// public float trasitionTime = 1f;
		__this->___trasitionTime_5 = (1.0f);
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
// System.Void MainMenu/<LoadLevel>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__6__ctor_m5CD5A5C4627E58596E1D63180ED495A4FB495875 (U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MainMenu/<LoadLevel>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__6_System_IDisposable_Dispose_mD2A805ADEC164BA7BB2051CDD7DDB4A29916F6AD (U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MainMenu/<LoadLevel>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadLevelU3Ed__6_MoveNext_mBFB12472A7A43DE5DC07E174FDF41665B54C4FCE (U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// transition.SetTrigger("Start");
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_4 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___transition_4;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		// yield return new WaitForSeconds(trasitionTime);
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_6 = V_1;
		float L_7 = L_6->___trasitionTime_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(levelIndex);
		String_t* L_9 = __this->___levelIndex_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MainMenu/<LoadLevel>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadLevelU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC52699312DD99CC27CDEDC6B31F27DFE189E338B (U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MainMenu/<LoadLevel>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__6_System_Collections_IEnumerator_Reset_m36ADCE1469CF8A7B98F94586A0EE02D5FBCA4B2A (U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadLevelU3Ed__6_System_Collections_IEnumerator_Reset_m36ADCE1469CF8A7B98F94586A0EE02D5FBCA4B2A_RuntimeMethod_var)));
	}
}
// System.Object MainMenu/<LoadLevel>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadLevelU3Ed__6_System_Collections_IEnumerator_get_Current_mE34A336E5F06B734A83F167D8F0F04E0611419BD (U3CLoadLevelU3Ed__6_tF1400C0AC6A2E402D59A59975D115E037B4AC6CD* __this, const RuntimeMethod* method) 
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
// System.Void Shop::buyAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_buyAttack_m084C17B17D1872E4729C878AA006A7DE759D06D9 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	{
		// if(data.renown >= data.attackPrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_9;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_9;
		int32_t L_3 = L_2->___attackPrice_17;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0056;
		}
	}
	{
		// data.increaseDamage();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_9;
		KeptData_increaseDamage_m672F84B3FA0A20BAFDB742881F9B890BF940BA3D(L_4, NULL);
		// data.loseRenown(data.attackPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_9;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_9;
		int32_t L_7 = L_6->___attackPrice_17;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// data.attackPrice += data.attackPrice;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_9;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_9 = L_8;
		int32_t L_10 = L_9->___attackPrice_17;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_9;
		int32_t L_12 = L_11->___attackPrice_17;
		L_9->___attackPrice_17 = ((int32_t)il2cpp_codegen_add(L_10, L_12));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Shop::buyHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_buyHealth_mD1480C30A7E775E8A733CF5A58593733EF901236 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	{
		// if(data.renown >= data.healthPrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_9;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_9;
		int32_t L_3 = L_2->___healthPrice_18;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0056;
		}
	}
	{
		// data.increaseHealth();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_9;
		KeptData_increaseHealth_m6D8A91515241B0551D28BC27AA3AABC3187AA80B(L_4, NULL);
		// data.loseRenown(data.healthPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_9;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_9;
		int32_t L_7 = L_6->___healthPrice_18;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// data.healthPrice += data.healthPrice;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_9;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_9 = L_8;
		int32_t L_10 = L_9->___healthPrice_18;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_9;
		int32_t L_12 = L_11->___healthPrice_18;
		L_9->___healthPrice_18 = ((int32_t)il2cpp_codegen_add(L_10, L_12));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Shop::buySpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_buySpeed_m216ECDE2D5013DC31E7F122B1E5FA15A52773E88 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	{
		// if(data.renown >= data.speedPrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_9;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_9;
		int32_t L_3 = L_2->___speedPrice_19;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0056;
		}
	}
	{
		// data.increaseSpeed();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_9;
		KeptData_increaseSpeed_m4F874E5ABF5BB56A0930647B97821698E40B4B7D(L_4, NULL);
		// data.loseRenown(data.speedPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_9;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_9;
		int32_t L_7 = L_6->___speedPrice_19;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// data.speedPrice += data.speedPrice;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_9;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_9 = L_8;
		int32_t L_10 = L_9->___speedPrice_19;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_9;
		int32_t L_12 = L_11->___speedPrice_19;
		L_9->___speedPrice_19 = ((int32_t)il2cpp_codegen_add(L_10, L_12));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Shop::toggleOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_toggleOff_m994FDD4ACBE37573A07DFDF63D792781838A42C7 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	{
		// shopMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shopMenu_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void Shop::blueBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_blueBattle_m2AC12E427D3987A7886B31B79F164194890E90B1 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene("SampleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		// }
		return;
	}
}
// System.Void Shop::pinkBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_pinkBattle_mC338E71E6F58C50B71C082384F2C00C9A1D96312 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD614837794C324F5A00254337A5409B6F7AA2F50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene("PinkVaseStage");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralD614837794C324F5A00254337A5409B6F7AA2F50, NULL);
		// }
		return;
	}
}
// System.Void Shop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Start_mF1084EC30E8CFE8BA2F37507C0E8DF7F3E11D45C (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Shop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Update_mE0B7030006E21777E86235E0CCB9F7DE8F296882 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2059F61430BFD2694C34433FE0D030CA76CA718B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A57470536163F266B2FDEA5764C64DBB0DB7E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE967F23A1FD47B62C21D80FF127DA08D38BA445);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5F1C416E1B575C17CDC503EEDA793AA9263BAAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7BEE7F10A24BD13BAB78BC2758506E1366A7A19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buyAttackText.text = "Buy Attack: "+data.attackPrice;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___buyAttackText_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_1 = __this->___data_9;
		int32_t* L_2 = (&L_1->___attackPrice_17);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2059F61430BFD2694C34433FE0D030CA76CA718B, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// buyHealthText.text = "Buy Health: "+data.healthPrice;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___buyHealthText_5;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_9;
		int32_t* L_7 = (&L_6->___healthPrice_18);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral64A57470536163F266B2FDEA5764C64DBB0DB7E1, L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// buySpeedText.text = "Buy Speed: "+data.speedPrice;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___buySpeedText_6;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_9;
		int32_t* L_12 = (&L_11->___speedPrice_19);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE5F1C416E1B575C17CDC503EEDA793AA9263BAAD, L_13, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_14);
		// renownText.text = "Renown: " + data.renown;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___renownText_7;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_16 = __this->___data_9;
		int32_t* L_17 = (&L_16->___renown_4);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF7BEE7F10A24BD13BAB78BC2758506E1366A7A19, L_18, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_19);
		// essenceText.text = "Essences: " + data.essences;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___essenceText_8;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_21 = __this->___data_9;
		int32_t* L_22 = (&L_21->___essences_5);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAE967F23A1FD47B62C21D80FF127DA08D38BA445, L_23, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_24);
		// }
		return;
	}
}
// System.Void Shop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop__ctor_m7BDEDC38368666EB9081CB3C46CE0BDB7380566E (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
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
// System.Void BGmusic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGmusic_Awake_m31B2C59E19F769B3AB02C8C41425E96A411E05CE (BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance != null)
		BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE* L_0 = ((BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_StaticFields*)il2cpp_codegen_static_fields_for(BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		return;
	}

IL_0019:
	{
		// instance = this;
		((BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_StaticFields*)il2cpp_codegen_static_fields_for(BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_StaticFields*)il2cpp_codegen_static_fields_for(BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_3, NULL);
		// }
		return;
	}
}
// System.Void BGmusic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGmusic_Update_m4D5BE132D53BE92217C9D91F387A42D43CBF96E1 (BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A1E743152441D5897B17BC48E995CFD54CC6D39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD614837794C324F5A00254337A5409B6F7AA2F50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().name == "Main Menu" || SceneManager.GetActiveScene().name == "Coliseum")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral8A1E743152441D5897B17BC48E995CFD54CC6D39, NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}

IL_0032:
	{
		// if (!mainMenuMusic.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___mainMenuMusic_6;
		bool L_7;
		L_7 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_6, NULL);
		if (L_7)
		{
			goto IL_0078;
		}
	}
	{
		// BGmusic.instance.mainMenuMusic.Play();
		BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE* L_8 = ((BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_StaticFields*)il2cpp_codegen_static_fields_for(BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = L_8->___mainMenuMusic_6;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		goto IL_0078;
	}

IL_0050:
	{
		// else if(SceneManager.GetActiveScene().name != "Main Menu")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_10;
		L_10 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_12;
		L_12 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_11, _stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7, NULL);
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		// BGmusic.instance.mainMenuMusic.Stop();
		BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE* L_13 = ((BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_StaticFields*)il2cpp_codegen_static_fields_for(BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = L_13->___mainMenuMusic_6;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_14, NULL);
	}

IL_0078:
	{
		// if (SceneManager.GetActiveScene().name == "SampleScene" || SceneManager.GetActiveScene().name == "PinkVaseStage")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_15;
		L_15 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_15;
		String_t* L_16;
		L_16 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		if (L_17)
		{
			goto IL_00aa;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_18;
		L_18 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_18;
		String_t* L_19;
		L_19 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD614837794C324F5A00254337A5409B6F7AA2F50, NULL);
		if (!L_20)
		{
			goto IL_00c7;
		}
	}

IL_00aa:
	{
		// if (!bossMusic.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___bossMusic_5;
		bool L_22;
		L_22 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_21, NULL);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		// BGmusic.instance.bossMusic.Play();
		BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE* L_23 = ((BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_StaticFields*)il2cpp_codegen_static_fields_for(BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = L_23->___bossMusic_5;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_24, NULL);
		return;
	}

IL_00c7:
	{
		// else if(SceneManager.GetActiveScene().name != "SampleScene" || SceneManager.GetActiveScene().name != "PinkVaseStage")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_25;
		L_25 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_25;
		String_t* L_26;
		L_26 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_27;
		L_27 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_26, _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		if (L_27)
		{
			goto IL_00f9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_28;
		L_28 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_28;
		String_t* L_29;
		L_29 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_30;
		L_30 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_29, _stringLiteralD614837794C324F5A00254337A5409B6F7AA2F50, NULL);
		if (!L_30)
		{
			goto IL_0108;
		}
	}

IL_00f9:
	{
		// BGmusic.instance.bossMusic.Stop();
		BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE* L_31 = ((BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_StaticFields*)il2cpp_codegen_static_fields_for(BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_32 = L_31->___bossMusic_5;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_32, NULL);
	}

IL_0108:
	{
		// }
		return;
	}
}
// System.Void BGmusic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGmusic__ctor_m157FCF85E701B8D90B5F2795F5FC0747724C139C (BGmusic_tCE1E0C0FA0568A50AB502E4F386B4912C637CFAE* __this, const RuntimeMethod* method) 
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
// System.Void BlueBlenderController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderController_Start_mEE785E31831C835EF6D85E55D55C44A5EF2FDA9A (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_m334DA90909CB9FDE616182A437A50C580FBD1C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_mC669AA67B850814D1E260C78A078C3F53966B76F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B541A952E05826EC849EA0AB638D112B6D47A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB198FA0623DDBA539EF4E61CDAB535E9B0A390C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_28), (void*)L_0);
		// pull = GetComponent<PullTowards>();
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_1;
		L_1 = Component_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_m334DA90909CB9FDE616182A437A50C580FBD1C42(__this, Component_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_m334DA90909CB9FDE616182A437A50C580FBD1C42_RuntimeMethod_var);
		__this->___pull_32 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pull_32), (void*)L_1);
		// push = GetComponent<PushAway>();
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_2;
		L_2 = Component_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_mC669AA67B850814D1E260C78A078C3F53966B76F(__this, Component_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_mC669AA67B850814D1E260C78A078C3F53966B76F_RuntimeMethod_var);
		__this->___push_33 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___push_33), (void*)L_2);
		// value = UnityEngine.Random.Range(0, 2);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		__this->___value_17 = ((float)L_3);
		// spiral = 0;
		__this->___spiral_34 = 0;
		// shootCooldown = 1;
		((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___shootCooldown_5 = (1.0f);
		// timeRemaining = countdown;
		float L_4 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___countdown_6;
		__this->___timeRemaining_29 = L_4;
		// horiTimer = horiCountdown;
		float L_5 = __this->___horiCountdown_30;
		__this->___horiTimer_31 = L_5;
		// runningCount = 0;
		__this->___runningCount_35 = 0;
		// if(value == 0)
		float L_6 = __this->___value_17;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		// background.GetComponent<Animator>().Play("WindRight");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___background_23;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_7, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_8, _stringLiteralB198FA0623DDBA539EF4E61CDAB535E9B0A390C2, NULL);
		// pull.enabled = true;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_9 = __this->___pull_32;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)1, NULL);
		return;
	}

IL_0092:
	{
		// background.GetComponent<Animator>().Play("WindLeft");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___background_23;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_10, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_11, _stringLiteral92B541A952E05826EC849EA0AB638D112B6D47A7, NULL);
		// push.enabled = true;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_12 = __this->___push_33;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BlueBlenderController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderController_Update_mCC416F7DD135E16961FF8DEDC6596F0F4F6CF16A (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B541A952E05826EC849EA0AB638D112B6D47A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB198FA0623DDBA539EF4E61CDAB535E9B0A390C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Update();
		BossController_Update_mAA580799CF6D2B3F2AB709AA6492E720872A4EB2(__this, NULL);
		// horiTimer -= Time.deltaTime;
		float L_0 = __this->___horiTimer_31;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___horiTimer_31 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (!isHoriShotting)
		bool L_2 = __this->___isHoriShotting_22;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// ArcShot();
		BlueBlenderController_ArcShot_m4559504B7A49CB94651155B80EBC1D8BB02ED416(__this, NULL);
	}

IL_0026:
	{
		// if (timeRemaining <= 0)
		float L_3 = __this->___timeRemaining_29;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_00da;
		}
	}
	{
		// if (pull.enabled == true)
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_4 = __this->___pull_32;
		bool L_5;
		L_5 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_4, NULL);
		if (!L_5)
		{
			goto IL_0089;
		}
	}
	{
		// pull.enabled = false;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_6 = __this->___pull_32;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// background.GetComponent<Animator>().Play("WindLeft");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___background_23;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_7, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_8, _stringLiteral92B541A952E05826EC849EA0AB638D112B6D47A7, NULL);
		// windSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___windSound_25;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// push.enabled = true;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_10 = __this->___push_33;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		// timeRemaining = countdown;
		float L_11 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___countdown_6;
		__this->___timeRemaining_29 = L_11;
		goto IL_00da;
	}

IL_0089:
	{
		// else if (push.enabled == true)
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_12 = __this->___push_33;
		bool L_13;
		L_13 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_12, NULL);
		if (!L_13)
		{
			goto IL_00da;
		}
	}
	{
		// push.enabled = false;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_14 = __this->___push_33;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)0, NULL);
		// background.GetComponent<Animator>().Play("WindRight");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___background_23;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16;
		L_16 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_15, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_16, _stringLiteralB198FA0623DDBA539EF4E61CDAB535E9B0A390C2, NULL);
		// windSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___windSound_25;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_17, NULL);
		// pull.enabled = true;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_18 = __this->___pull_32;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)1, NULL);
		// timeRemaining = countdown;
		float L_19 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___countdown_6;
		__this->___timeRemaining_29 = L_19;
	}

IL_00da:
	{
		// if(horiTimer <= 0 && isHoriShotting != true)
		float L_20 = __this->___horiTimer_31;
		if ((!(((float)L_20) <= ((float)(0.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		bool L_21 = __this->___isHoriShotting_22;
		if (L_21)
		{
			goto IL_0108;
		}
	}
	{
		// isHoriShotting = true;
		__this->___isHoriShotting_22 = (bool)1;
		// horiTimer = horiCountdown;
		float L_22 = __this->___horiCountdown_30;
		__this->___horiTimer_31 = L_22;
		// HorizontalShot();
		BlueBlenderController_HorizontalShot_m984AB596F684E5634C51A3E2C039C9C033B8A403(__this, NULL);
	}

IL_0108:
	{
		// if(icePuddleCountDown <= 0)
		float L_23 = __this->___icePuddleCountDown_18;
		if ((!(((float)L_23) <= ((float)(0.0f)))))
		{
			goto IL_0126;
		}
	}
	{
		// icePuddleCountDown = 9;
		__this->___icePuddleCountDown_18 = (9.0f);
		// IcePuddleShot();
		BlueBlenderController_IcePuddleShot_mABB117DC853847C9BE9B6CEA5A0BA45B1EBEB833(__this, NULL);
	}

IL_0126:
	{
		// }
		return;
	}
}
// System.Void BlueBlenderController::ArcShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderController_ArcShot_m4559504B7A49CB94651155B80EBC1D8BB02ED416 (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisBossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213_m24D0E41D4A8C084152E0F4F36CBA2A386495A98B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentCooldown <= 0)
		float L_0 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___currentCooldown_11;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_003d;
		}
	}
	{
		// currentCooldown = shootCooldown;
		float L_1 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___shootCooldown_5;
		((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___currentCooldown_11 = L_1;
		// BossProjectile bullet = Instantiate(bulletPrefab, fireOffset.position, projectile.rotation);
		BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* L_2 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___bulletPrefab_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___fireOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___projectile_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* L_7;
		L_7 = Object_Instantiate_TisBossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213_m24D0E41D4A8C084152E0F4F36CBA2A386495A98B(L_2, L_4, L_6, Object_Instantiate_TisBossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213_m24D0E41D4A8C084152E0F4F36CBA2A386495A98B_RuntimeMethod_var);
		goto IL_004f;
	}

IL_003d:
	{
		// currentCooldown -= Time.deltaTime;
		float L_8 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___currentCooldown_11;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___currentCooldown_11 = ((float)il2cpp_codegen_subtract(L_8, L_9));
	}

IL_004f:
	{
		// timeRemaining -= Time.deltaTime;
		float L_10 = __this->___timeRemaining_29;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeRemaining_29 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// icePuddleCountDown -= Time.deltaTime;
		float L_12 = __this->___icePuddleCountDown_18;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___icePuddleCountDown_18 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// spiral = UnityEngine.Random.Range(1, 21);
		int32_t L_14;
		L_14 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)21), NULL);
		__this->___spiral_34 = L_14;
		// if (spiral == 20)
		int32_t L_15 = __this->___spiral_34;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_009e;
		}
	}
	{
		// shootCooldown = 0;
		((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___shootCooldown_5 = (0.0f);
		// runningCount = 10;
		__this->___runningCount_35 = ((int32_t)10);
	}

IL_009e:
	{
		// if (runningCount != 0)
		int32_t L_16 = __this->___runningCount_35;
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		// runningCount--;
		int32_t L_17 = __this->___runningCount_35;
		__this->___runningCount_35 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_00b4:
	{
		// if (shootCooldown == 0 && runningCount == 0)
		float L_18 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___shootCooldown_5;
		if ((!(((float)L_18) == ((float)(0.0f)))))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_19 = __this->___runningCount_35;
		if (L_19)
		{
			goto IL_00d4;
		}
	}
	{
		// shootCooldown = 1;
		((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___shootCooldown_5 = (1.0f);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void BlueBlenderController::IcePuddleShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderController_IcePuddleShot_mABB117DC853847C9BE9B6CEA5A0BA45B1EBEB833 (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisIcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A_mFA8CA77285390ED79848FDE57651165873A4525D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iceShotSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___iceShotSound_24;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// IcePuddleShot puddle = Instantiate(puddleProjectilePrefab, fireOffset.position, transform.rotation);
		IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* L_1 = __this->___puddleProjectilePrefab_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___fireOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* L_6;
		L_6 = Object_Instantiate_TisIcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A_mFA8CA77285390ED79848FDE57651165873A4525D(L_1, L_3, L_5, Object_Instantiate_TisIcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A_mFA8CA77285390ED79848FDE57651165873A4525D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BlueBlenderController::HorizontalShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderController_HorizontalShot_m984AB596F684E5634C51A3E2C039C9C033B8A403 (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, const RuntimeMethod* method) 
{
	{
		// value = UnityEngine.Random.Range(0, 2);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		__this->___value_17 = ((float)L_0);
		// if(value == 0)
		float L_1 = __this->___value_17;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// StartCoroutine(FireBurst(JumpProjectilePrefab, horizontalOffset, 3));
		BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* L_2 = __this->___JumpProjectilePrefab_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___horizontalOffset_26;
		RuntimeObject* L_4;
		L_4 = BlueBlenderController_FireBurst_mE962F720EC818AB902B32FE89F2F1390E6A60707(__this, L_2, L_3, 3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		return;
	}

IL_0036:
	{
		// StartCoroutine(FireBurst(CrouchProjectilePrefab, horizontalOffset2, 3));
		BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* L_6 = __this->___CrouchProjectilePrefab_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___horizontalOffset2_27;
		RuntimeObject* L_8;
		L_8 = BlueBlenderController_FireBurst_mE962F720EC818AB902B32FE89F2F1390E6A60707(__this, L_6, L_7, 3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BlueBlenderController::FireBurst(BlueBlenderHorizontalProjectile,UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlueBlenderController_FireBurst_mE962F720EC818AB902B32FE89F2F1390E6A60707 (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* ___prefab0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___offset1, int32_t ___burstSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* L_0 = (U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B*)il2cpp_codegen_object_new(U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B_il2cpp_TypeInfo_var);
		U3CFireBurstU3Ed__24__ctor_m028A0F71F1AA160E6D57BCB25692B45A69401B5A(L_0, 0, NULL);
		U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* L_2 = L_1;
		BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* L_3 = ___prefab0;
		L_2->___prefab_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___prefab_3), (void*)L_3);
		U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* L_4 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___offset1;
		L_4->___offset_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___offset_4), (void*)L_5);
		U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* L_6 = L_4;
		int32_t L_7 = ___burstSize2;
		L_6->___burstSize_5 = L_7;
		return L_6;
	}
}
// System.Void BlueBlenderController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderController__ctor_mB4A527381EDCF40AD9B7029685D9D704B04D11CA (BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* __this, const RuntimeMethod* method) 
{
	{
		// float horiCountdown = 8;
		__this->___horiCountdown_30 = (8.0f);
		BossController__ctor_mC4C9EEC35858E3E8D6475F9C844D40EF8F2E537A(__this, NULL);
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
// System.Void BlueBlenderController/<FireBurst>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireBurstU3Ed__24__ctor_m028A0F71F1AA160E6D57BCB25692B45A69401B5A (U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BlueBlenderController/<FireBurst>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireBurstU3Ed__24_System_IDisposable_Dispose_m856D7CA3B5D2E4BDE78060A60A44BA484261FB88 (U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BlueBlenderController/<FireBurst>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireBurstU3Ed__24_MoveNext_mA6A7F71832B01258F579B3B25CEFB6049CD8440C (U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisBlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1_m101E27BAADBA8EFA525EC4879E08CF968B5FCEF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE442D6F53ECF4DBBFCA3AB388E96C5981E2D111C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_00a0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < burstSize; i++)
		__this->___U3CiU3E5__2_6 = 0;
		goto IL_00b7;
	}

IL_0035:
	{
		// anim.Play("HorizShotAnimation");
		BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* L_3 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = L_3->___anim_28;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_4, _stringLiteralE442D6F53ECF4DBBFCA3AB388E96C5981E2D111C, NULL);
		// yield return new WaitForSeconds(3.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (3.0999999f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// BlueBlenderHorizontalProjectile bullet = Instantiate(prefab, offset.position, transform.rotation);
		BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* L_6 = __this->___prefab_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___offset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* L_12;
		L_12 = Object_Instantiate_TisBlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1_m101E27BAADBA8EFA525EC4879E08CF968B5FCEF2(L_6, L_8, L_11, Object_Instantiate_TisBlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1_m101E27BAADBA8EFA525EC4879E08CF968B5FCEF2_RuntimeMethod_var);
		// yield return new WaitForSeconds(4.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (4.5f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < burstSize; i++)
		int32_t L_14 = __this->___U3CiU3E5__2_6;
		V_2 = L_14;
		int32_t L_15 = V_2;
		__this->___U3CiU3E5__2_6 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_00b7:
	{
		// for (int i = 0; i < burstSize; i++)
		int32_t L_16 = __this->___U3CiU3E5__2_6;
		int32_t L_17 = __this->___burstSize_5;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0035;
		}
	}
	{
		// isHoriShotting = false;
		BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* L_18 = V_1;
		L_18->___isHoriShotting_22 = (bool)0;
		// horiTimer = horiCountdown;
		BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* L_19 = V_1;
		BlueBlenderController_t3DAD0DBFBB5FAB0E8FEE0B3037600E2C768285A2* L_20 = V_1;
		float L_21 = L_20->___horiCountdown_30;
		L_19->___horiTimer_31 = L_21;
		// }
		return (bool)0;
	}
}
// System.Object BlueBlenderController/<FireBurst>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireBurstU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m82CCBCFB0CC57FBE05C1E57027FBE4A0A3AD26CE (U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BlueBlenderController/<FireBurst>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireBurstU3Ed__24_System_Collections_IEnumerator_Reset_mF6E9B8C99958416562FDB0B957D67D729EB6CD27 (U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireBurstU3Ed__24_System_Collections_IEnumerator_Reset_mF6E9B8C99958416562FDB0B957D67D729EB6CD27_RuntimeMethod_var)));
	}
}
// System.Object BlueBlenderController/<FireBurst>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireBurstU3Ed__24_System_Collections_IEnumerator_get_Current_m016DF9EBBC8530D8B62974CE993FB6892E32FC14 (U3CFireBurstU3Ed__24_t7E6CE6985AEF2425D3CFA52CF47EAA7B7C775A2B* __this, const RuntimeMethod* method) 
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
// System.Void BlueBlenderHorizontalProjectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderHorizontalProjectile_Start_m379071E8E802C1430D3BAF1A3E7B0000F559EDE1 (BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject boss = GameObject.FindGameObjectWithTag("Enemy");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		// Physics2D.IgnoreCollision(boss.gameObject.GetComponent<Collider2D>(), GetComponent<Collider2D>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2;
		L_2 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_1, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3;
		L_3 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Physics2D_IgnoreCollision_mFE023CDD902A5068236266648DAB8E9FD8EE387F(L_2, L_3, NULL);
		// if (data.halfDamageBought == false)
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_8;
		bool L_5 = L_4->___halfDamageBought_11;
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		// dam = 2;
		__this->___dam_4 = 2;
	}

IL_0033:
	{
		// if (data.halfDamageBought == true)
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_8;
		bool L_7 = L_6->___halfDamageBought_11;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// dam = 1;
		__this->___dam_4 = 1;
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void BlueBlenderHorizontalProjectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderHorizontalProjectile_Update_m6612958BAC2867651147E867F22548A8A6B6C35E (BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EDEE13378ECCB8CBB1DD58667BBF0D326750EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D81147188D85BBDD667818E097DE79FD7340EB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (animComplete)
		bool L_0 = __this->___animComplete_9;
		if (!L_0)
		{
			goto IL_0189;
		}
	}
	{
		// if(gameObject.tag == "Jump Projectile")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral1EDEE13378ECCB8CBB1DD58667BBF0D326750EED, NULL);
		if (!L_3)
		{
			goto IL_00cc;
		}
	}
	{
		// if (!jumpShotPlaced)
		bool L_4 = __this->___jumpShotPlaced_10;
		if (L_4)
		{
			goto IL_0090;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, jumpShotSpot.transform.position, 15f * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___jumpShotSpot_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_7, L_10, ((float)il2cpp_codegen_multiply((15.0f), L_11)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_12, NULL);
		// if (transform.position == jumpShotSpot.transform.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___jumpShotSpot_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		bool L_18;
		L_18 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_14, L_17, NULL);
		if (!L_18)
		{
			goto IL_0189;
		}
	}
	{
		// jumpShotPlaced = true;
		__this->___jumpShotPlaced_10 = (bool)1;
		return;
	}

IL_0090:
	{
		// transform.position += -transform.right * Time.deltaTime * speed; //Shoots the projectile forward based on player position.
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_23, NULL);
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		float L_27 = __this->___speed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_28, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_29, NULL);
		return;
	}

IL_00cc:
	{
		// else if (gameObject.tag == "Crouch Projectile")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_31;
		L_31 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_30, NULL);
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4D81147188D85BBDD667818E097DE79FD7340EB3, NULL);
		if (!L_32)
		{
			goto IL_0189;
		}
	}
	{
		// if (!crouchShotPlaced)
		bool L_33 = __this->___crouchShotPlaced_11;
		if (L_33)
		{
			goto IL_014e;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, crouchShotSpot.transform.position, 15f * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___crouchShotSpot_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		float L_40;
		L_40 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_36, L_39, ((float)il2cpp_codegen_multiply((15.0f), L_40)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, L_41, NULL);
		// if (transform.position == crouchShotSpot.transform.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___crouchShotSpot_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		bool L_47;
		L_47 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_43, L_46, NULL);
		if (!L_47)
		{
			goto IL_0189;
		}
	}
	{
		// crouchShotPlaced = true;
		__this->___crouchShotPlaced_11 = (bool)1;
		return;
	}

IL_014e:
	{
		// transform.position += -transform.right * Time.deltaTime * speed; //Shoots the projectile forward based on player position.
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_52, NULL);
		float L_54;
		L_54 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_53, L_54, NULL);
		float L_56 = __this->___speed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_55, L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_50, L_57, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_49, L_58, NULL);
	}

IL_0189:
	{
		// }
		return;
	}
}
// System.Void BlueBlenderHorizontalProjectile::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderHorizontalProjectile_OnCollisionEnter2D_mB748C94DBEE97B6FA93786661B81F3E563458D33 (BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201E005A9C0DA581E3EDB697752C743ABAB5ADD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Player")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// collision.gameObject.GetComponent<PlayerController>().TakeDamage(dam);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_4, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_5, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		int32_t L_7 = __this->___dam_4;
		PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80(L_6, L_7, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		return;
	}

IL_0039:
	{
		// else if(collision.transform.tag == "Damaging Entity")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_9 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_9, NULL);
		String_t* L_11;
		L_11 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral201E005A9C0DA581E3EDB697752C743ABAB5ADD0, NULL);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void BlueBlenderHorizontalProjectile::animFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderHorizontalProjectile_animFinished_mEA33D271C1FDC7EFC91BF96B16AB162E81E3132A (BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* __this, const RuntimeMethod* method) 
{
	{
		// animComplete = true;
		__this->___animComplete_9 = (bool)1;
		// }
		return;
	}
}
// System.Void BlueBlenderHorizontalProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBlenderHorizontalProjectile__ctor_mF83A3D22EB0586E7E0AC2D92762879D7F250C104 (BlueBlenderHorizontalProjectile_tDDA353D7D9AC0C4C255E31C41335C52E1DBE75A1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public int dam = 2;
		__this->___dam_4 = 2;
		// public float speed = 8f;
		__this->___speed_7 = (8.0f);
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
// System.Void BlueBossController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBossController_Start_m80F812A036049A56F8B0A0EA3802DAAE67E6BC58 (BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_m334DA90909CB9FDE616182A437A50C580FBD1C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_mC669AA67B850814D1E260C78A078C3F53966B76F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pull = GetComponent<PullTowards>();
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_0;
		L_0 = Component_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_m334DA90909CB9FDE616182A437A50C580FBD1C42(__this, Component_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_m334DA90909CB9FDE616182A437A50C580FBD1C42_RuntimeMethod_var);
		__this->___pull_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pull_19), (void*)L_0);
		// push = GetComponent<PushAway>();
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_1;
		L_1 = Component_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_mC669AA67B850814D1E260C78A078C3F53966B76F(__this, Component_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_mC669AA67B850814D1E260C78A078C3F53966B76F_RuntimeMethod_var);
		__this->___push_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___push_20), (void*)L_1);
		// timeRemaining = countdown;
		float L_2 = __this->___countdown_18;
		__this->___timeRemaining_21 = L_2;
		// value = Random.Range(0, 2);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		__this->___value_17 = ((float)L_3);
		// }
		return;
	}
}
// System.Void BlueBossController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBossController_Update_m14F9D7A2680D335852FFADA0101A8F71E9DED726 (BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* __this, const RuntimeMethod* method) 
{
	{
		// timeRemaining -= Time.deltaTime;
		float L_0 = __this->___timeRemaining_21;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeRemaining_21 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (timeRemaining <= 0)
		float L_2 = __this->___timeRemaining_21;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0053;
		}
	}
	{
		// if (value == 0)
		float L_3 = __this->___value_17;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		// pull.enabled = true;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_4 = __this->___pull_19;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		goto IL_0046;
	}

IL_003a:
	{
		// push.enabled = true;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_5 = __this->___push_20;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
	}

IL_0046:
	{
		// StartCoroutine(Wait());
		RuntimeObject* L_6;
		L_6 = BlueBossController_Wait_m8BDE625FE9B110DECF415D02ABFBEA6BDCB5D1BF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BlueBossController::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlueBossController_Wait_m8BDE625FE9B110DECF415D02ABFBEA6BDCB5D1BF (BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084* L_0 = (U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084*)il2cpp_codegen_object_new(U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084_il2cpp_TypeInfo_var);
		U3CWaitU3Ed__8__ctor_m4063F634DA83029AEA773E95C2B13E7CC7DEF332(L_0, 0, NULL);
		U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BlueBossController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueBossController__ctor_mEBEBF8E26D6CCB1FB68D6B767CE8D55590346F19 (BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float countdown = 5f;
		__this->___countdown_18 = (5.0f);
		BossController__ctor_mC4C9EEC35858E3E8D6475F9C844D40EF8F2E537A(__this, NULL);
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
// System.Void BlueBossController/<Wait>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__8__ctor_m4063F634DA83029AEA773E95C2B13E7CC7DEF332 (U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BlueBossController/<Wait>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__8_System_IDisposable_Dispose_m44DA9AD10D5B3AC4BA39A51BA09364154887C7CA (U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BlueBossController/<Wait>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitU3Ed__8_MoveNext_m0FB33213BE94D41316470944B5E3642E3B5C7850 (U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// pull.enabled = false;
		BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* L_5 = V_1;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_6 = L_5->___pull_19;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// push.enabled = false;
		BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* L_7 = V_1;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_8 = L_7->___push_20;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// value = Random.Range(0, 2);
		BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* L_9 = V_1;
		int32_t L_10;
		L_10 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		L_9->___value_17 = ((float)L_10);
		// timeRemaining = countdown;
		BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* L_11 = V_1;
		BlueBossController_tF269A43B26B185D1C33F5C9972E07D18FCF8BEAF* L_12 = V_1;
		float L_13 = L_12->___countdown_18;
		L_11->___timeRemaining_21 = L_13;
		// }
		return (bool)0;
	}
}
// System.Object BlueBossController/<Wait>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53A48E267F99092B0494F872B500B05AB7DE8187 (U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BlueBossController/<Wait>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__8_System_Collections_IEnumerator_Reset_m475365F25E7CC5FF565300ED08CD1FD8A8B9A2CD (U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitU3Ed__8_System_Collections_IEnumerator_Reset_m475365F25E7CC5FF565300ED08CD1FD8A8B9A2CD_RuntimeMethod_var)));
	}
}
// System.Object BlueBossController/<Wait>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__8_System_Collections_IEnumerator_get_Current_mCC3519022EF0DF3A9CE1A470E13EAB69D5F2C5A4 (U3CWaitU3Ed__8_tDF70B5D493817782D65ED8ABF7C85CC4A9C98084* __this, const RuntimeMethod* method) 
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
// System.Void BossController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossController_Start_m2FDB8A10CDAD8C1FF2DF71D58D7DA7A1DCA66481 (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, const RuntimeMethod* method) 
{
	{
		// uiGM.SetBossMaxHealth(health);
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_0 = __this->___uiGM_16;
		float L_1 = __this->___health_4;
		UIGameManager_SetBossMaxHealth_mD7718E930255F8DE75F1CA03A379E294908F25CA(L_0, L_1, NULL);
		// uiGM.SetBossHealth(health);
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_2 = __this->___uiGM_16;
		float L_3 = __this->___health_4;
		UIGameManager_SetBossHealth_m936355881B46A1A12E2686EDDAB50E42D3C8258D(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void BossController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossController_Update_mAA580799CF6D2B3F2AB709AA6492E720872A4EB2 (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (health <= 0)
		float L_0 = __this->___health_4;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// player.victorySound.Play();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___player_14;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = L_1->___victorySound_41;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// player.anim.Play("Victory");
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = __this->___player_14;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = L_3->___anim_6;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_4, _stringLiteral81780E315BB6868D5DF20A1B91E71DE937EB3042, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void BossController::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossController_TakeDamage_mECD12B0A883B0831410593DE6BEFEBA03C5646DB (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, int32_t ___damage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mA2ABAD61A554C16F10736E226A126B7F3509EE3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2776195C4C4F2BC3F8D02FCDD6712FE6681E5B17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA75E8EC7E883621D2CF7F39D2D368045B61C9C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health -= damage;
		float L_0 = __this->___health_4;
		int32_t L_1 = ___damage0;
		__this->___health_4 = ((float)il2cpp_codegen_subtract(L_0, ((float)L_1)));
		// uiGM.SetBossHealth(health);
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_2 = __this->___uiGM_16;
		float L_3 = __this->___health_4;
		UIGameManager_SetBossHealth_m936355881B46A1A12E2686EDDAB50E42D3C8258D(L_2, L_3, NULL);
		// if (gameObject.name == "Orange Bowl"){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralFA75E8EC7E883621D2CF7F39D2D368045B61C9C9, NULL);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		// healthbar = GameObject.Find("OrangeBowlHealthBar");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral2776195C4C4F2BC3F8D02FCDD6712FE6681E5B17, NULL);
		__this->___healthbar_13 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthbar_13), (void*)L_7);
		// healthbar.GetComponent<HealthBar>().SetHealth(health);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___healthbar_13;
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_9;
		L_9 = GameObject_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mA2ABAD61A554C16F10736E226A126B7F3509EE3F(L_8, GameObject_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_mA2ABAD61A554C16F10736E226A126B7F3509EE3F_RuntimeMethod_var);
		float L_10 = __this->___health_4;
		HealthBar_SetHealth_mED8850BF31377EAB417D2DE07E3659B1CBF6D50B(L_9, L_10, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Single BossController::getHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BossController_getHealth_mF528BC0852BD83C576BBD068BC923E64388BA408 (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, const RuntimeMethod* method) 
{
	{
		// return health;
		float L_0 = __this->___health_4;
		return L_0;
	}
}
// System.Void BossController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossController__ctor_mC4C9EEC35858E3E8D6475F9C844D40EF8F2E537A (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] protected float health = 500f;
		__this->___health_4 = (500.0f);
		// [SerializeField] protected float shootCooldown = 3f;
		__this->___shootCooldown_5 = (3.0f);
		// [SerializeField] protected float countdown = 5f;
		__this->___countdown_6 = (5.0f);
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
// System.Void BossProjectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProjectile_Start_m9EB4020ECBDBEAAA975484767F6E9A56ECC1F46C (BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coll = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		__this->___coll_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coll_10), (void*)L_0);
		// initialRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		__this->___initialRotation_12 = L_2;
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_11), (void*)L_3);
		// startPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___startPos_13 = L_5;
		// targetPos = GetRandomTarget();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = BossProjectile_GetRandomTarget_m970AE505FCFB8FD7BB53B523E98E91495C2DE98D(__this, NULL);
		__this->___targetPos_4 = L_6;
		// if(data.halfDamageBought == false){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_7 = __this->___data_9;
		bool L_8 = L_7->___halfDamageBought_11;
		if (L_8)
		{
			goto IL_005a;
		}
	}
	{
		// dam = 2;
		__this->___dam_8 = 2;
	}

IL_005a:
	{
		// if(data.halfDamageBought == true){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_9 = __this->___data_9;
		bool L_10 = L_9->___halfDamageBought_11;
		if (!L_10)
		{
			goto IL_006e;
		}
	}
	{
		// dam = 1;
		__this->___dam_8 = 1;
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void BossProjectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProjectile_Update_m07AD224CD357100B6896AE960F06272BF79E6EEA (BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94FB5026E82CFB24A91F741A2E6802C7F1C2D3FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2BBD00347753849E9E98918FEA07AE95D51F7C8);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// float x0 = startPos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___startPos_13);
		float L_1 = L_0->___x_2;
		V_0 = L_1;
		// float x1 = targetPos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___targetPos_4);
		float L_3 = L_2->___x_2;
		V_1 = L_3;
		// float dist = (x1 - x0); //Calculates distance between current position and target position
		float L_4 = V_1;
		float L_5 = V_0;
		V_2 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// float nextX = Mathf.MoveTowards(transform.position.x, x1, projectileSpeed * Time.deltaTime); //Moves towards the target
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = V_1;
		float L_10 = __this->___projectileSpeed_6;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12;
		L_12 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		V_3 = L_12;
		// float baseY = Mathf.Lerp(startPos.y, targetPos.y, (nextX - x0) / dist);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___startPos_13);
		float L_14 = L_13->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___targetPos_4);
		float L_16 = L_15->___y_3;
		float L_17 = V_3;
		float L_18 = V_0;
		float L_19 = V_2;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_14, L_16, ((float)(((float)il2cpp_codegen_subtract(L_17, L_18))/L_19)), NULL);
		V_4 = L_20;
		// float arc = arcHeight * (nextX - x0) * (nextX - x1) / (-0.25f * dist * dist); //Funny equation to calculate the arc
		float L_21 = __this->___arcHeight_7;
		float L_22 = V_3;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = V_1;
		float L_26 = V_2;
		float L_27 = V_2;
		V_5 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_21, ((float)il2cpp_codegen_subtract(L_22, L_23)))), ((float)il2cpp_codegen_subtract(L_24, L_25))))/((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-0.25f), L_26)), L_27))));
		// nextPos = new Vector3(nextX, baseY + arc, transform.position.z);
		float L_28 = V_3;
		float L_29 = V_4;
		float L_30 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = L_32.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), L_28, ((float)il2cpp_codegen_add(L_29, L_30)), L_33, /*hidden argument*/NULL);
		__this->___nextPos_14 = L_34;
		// transform.rotation = LookAt2D(nextPos - transform.position) * initialRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___nextPos_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_36, L_38, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_39, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = BossProjectile_LookAt2D_m624C74774B585CE131AF4E1F689EF546E1177C4F(L_40, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = __this->___initialRotation_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_41, L_42, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_35, L_43, NULL);
		// transform.position = nextPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = __this->___nextPos_14;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_44, L_45, NULL);
		// if (nextPos == targetPos) //Projectile destroys itself once the target is reached.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___nextPos_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->___targetPos_4;
		bool L_48;
		L_48 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_46, L_47, NULL);
		if (!L_48)
		{
			goto IL_0154;
		}
	}
	{
		// if (gameObject.tag == "Ice Shard")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_50;
		L_50 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_49, NULL);
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral94FB5026E82CFB24A91F741A2E6802C7F1C2D3FF, NULL);
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		// anim.Play("IceShatter");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_52 = __this->___anim_11;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_52, _stringLiteralE2BBD00347753849E9E98918FEA07AE95D51F7C8, NULL);
		// transform.rotation = Quaternion.Euler(0, 0, -386);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (-386.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_53, L_54, NULL);
		// coll.isTrigger = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_55 = __this->___coll_10;
		Collider2D_set_isTrigger_m19D5227BAB5D41F212D515C1E2CA433C2FEF7A48(L_55, (bool)1, NULL);
		return;
	}

IL_0149:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_56, NULL);
	}

IL_0154:
	{
		// }
		return;
	}
}
// System.Void BossProjectile::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProjectile_Destroy_m6D3984662D2421FA56DCF9F370BFCCD8A49E46DC (BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* __this, const RuntimeMethod* method) 
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
// UnityEngine.Quaternion BossProjectile::LookAt2D(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BossProjectile_LookAt2D_m624C74774B585CE131AF4E1F689EF546E1177C4F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___forward0, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Euler(0, 0, Mathf.Atan2(forward.y, forward.x) * Mathf.Rad2Deg);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___forward0;
		float L_1 = L_0.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___forward0;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_4, (57.2957802f))), NULL);
		return L_5;
	}
}
// System.Void BossProjectile::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProjectile_OnCollisionEnter2D_mC31960F339B210D52E9EE4228AF7AF12C2AB372D (BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( collision.transform.tag == "Player")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// collision.gameObject.GetComponent<PlayerController>().TakeDamage(dam);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_4, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_5, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		int32_t L_7 = __this->___dam_8;
		PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80(L_6, L_7, NULL);
	}

IL_002d:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 BossProjectile::GetRandomTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BossProjectile_GetRandomTarget_m970AE505FCFB8FD7BB53B523E98E91495C2DE98D (BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int randomIndex = Random.Range(0, targets.Count);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___targets_5;
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_1, NULL);
		V_0 = L_2;
		// return targets[randomIndex];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___targets_5;
		int32_t L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_3, L_4, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void BossProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProjectile__ctor_mE4DE1DE3269D2D4AB7B09A07515C092C8D4F68A7 (BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public float projectileSpeed = 10;
		__this->___projectileSpeed_6 = (10.0f);
		// [SerializeField] public float arcHeight = 1;
		__this->___arcHeight_7 = (1.0f);
		// [SerializeField] public int dam = 2;
		__this->___dam_8 = 2;
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
// System.Void BossTeleport::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTeleport_Start_mCA39EB484D59275AE8DD30D1E34E992401473361 (BossTeleport_tAA5678D9783D1BB22785E3DEEB97DC250A75A342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_8), (void*)L_0);
		// originalScale = gameObject.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		__this->___originalScale_9 = L_3;
		// }
		return;
	}
}
// System.Void BossTeleport::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTeleport_Update_m08CE29C376566D23C8A621E31687BBEC9170899F (BossTeleport_tAA5678D9783D1BB22785E3DEEB97DC250A75A342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544174D37FE3259B941ABBD96A451AE19AAEE7F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral742A9132E922EC557467DECBB44584FD820EED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A8B3270291AA5F18FFA97453A2963119A236F74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3BCFDA0DDB86CAEE85E05C79A8B5CD9F2B17AEF);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// countdown -= Time.deltaTime;
		float L_0 = __this->___countdown_5;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___countdown_5 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if(countdown <= 1)
		float L_2 = __this->___countdown_5;
		if ((!(((float)L_2) <= ((float)(1.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		// if (gameObject.tag == "Enemy")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_4;
		L_4 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// anim.Play("PinkRetreat");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___anim_8;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_6, _stringLiteral544174D37FE3259B941ABBD96A451AE19AAEE7F3, NULL);
	}

IL_0046:
	{
		// if (countdown <= 0)
		float L_7 = __this->___countdown_5;
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_01bd;
		}
	}
	{
		// spawnTargetPos = GetRandomTarget();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = BossTeleport_GetRandomTarget_m1A536990CCA695D587BE53972CC7C3BAB444C936(__this, NULL);
		__this->___spawnTargetPos_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnTargetPos_7), (void*)L_8);
		// if (spawnTargetPos.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___spawnTargetPos_7;
		int32_t L_10;
		L_10 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		// spawnTargetPos = GetRandomTarget();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = BossTeleport_GetRandomTarget_m1A536990CCA695D587BE53972CC7C3BAB444C936(__this, NULL);
		__this->___spawnTargetPos_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnTargetPos_7), (void*)L_11);
		return;
	}

IL_007d:
	{
		// transform.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_12, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// if (gameObject.tag == "Enemy")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_14;
		L_14 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_15)
		{
			goto IL_0114;
		}
	}
	{
		// anim.Play("PinkEmerge");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___anim_8;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_16, _stringLiteralA3BCFDA0DDB86CAEE85E05C79A8B5CD9F2B17AEF, NULL);
		// transform.position = spawnTargetPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___spawnTargetPos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_19, NULL);
		// Vector3 newPos = new Vector3(transform.position.x + 0.3f, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		float L_22 = L_21.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25 = L_24.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_add(L_22, (0.300000012f))), L_25, L_28, NULL);
		// transform.position = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_30, NULL);
		goto IL_019a;
	}

IL_0114:
	{
		// if (gameObject.tag == "Vine")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_32;
		L_32 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_31, NULL);
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral9A8B3270291AA5F18FFA97453A2963119A236F74, NULL);
		if (!L_33)
		{
			goto IL_019a;
		}
	}
	{
		// anim.Play("VineStrike");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___anim_8;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_34, _stringLiteral742A9132E922EC557467DECBB44584FD820EED25, NULL);
		// transform.position = spawnTargetPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___spawnTargetPos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_37, NULL);
		// Vector3 newPos = new Vector3(transform.position.x + 0.3f, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		float L_40 = L_39.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		float L_43 = L_42.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		float L_46 = L_45.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)il2cpp_codegen_add(L_40, (0.300000012f))), L_43, L_46, NULL);
		// transform.position = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_47, L_48, NULL);
	}

IL_019a:
	{
		// gameObject.transform.SetParent(spawnTargetPos, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = __this->___spawnTargetPos_7;
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_50, L_51, (bool)1, NULL);
		// countdown = counter;
		float L_52 = __this->___counter_6;
		__this->___countdown_5 = L_52;
	}

IL_01bd:
	{
		// }
		return;
	}
}
// UnityEngine.Transform BossTeleport::GetRandomTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BossTeleport_GetRandomTarget_m1A536990CCA695D587BE53972CC7C3BAB444C936 (BossTeleport_tAA5678D9783D1BB22785E3DEEB97DC250A75A342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int randomIndex = Random.Range(0, spawnTarget.Count);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___spawnTarget_4;
		int32_t L_1;
		L_1 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_0, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_1, NULL);
		V_0 = L_2;
		// return spawnTarget[randomIndex];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3 = __this->___spawnTarget_4;
		int32_t L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_3, L_4, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void BossTeleport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTeleport__ctor_mA086AC1B4022585B4B681D3DA45C2E4A63768E69 (BossTeleport_tAA5678D9783D1BB22785E3DEEB97DC250A75A342* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float countdown = 10;
		__this->___countdown_5 = (10.0f);
		// [SerializeField] private float counter = 10;
		__this->___counter_6 = (10.0f);
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
// System.Void bounceScript::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bounceScript_OnCollisionEnter2D_m8DBA61AAED28384844515362567FEF9A8B8A8184 (bounceScript_t7AD2C1DF9E450B445AC5D30D50B2B162431C43A0* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = other.gameObject.GetComponent<Rigidbody2D>();
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
		L_2 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_1, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		__this->___rb_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_2);
		// if ( rb != null ){
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rb_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// rb.AddForce(Vector2.up * launchForce, ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___rb_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		float L_7 = __this->___launchForce_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_6, L_7, NULL);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_5, L_8, 1, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void bounceScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bounceScript__ctor_m162766756ECDA1886FBF4B1A860EAA92FD0DEB89 (bounceScript_t7AD2C1DF9E450B445AC5D30D50B2B162431C43A0* __this, const RuntimeMethod* method) 
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
// System.Void ButtonBehavior::OnButtonPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBehavior_OnButtonPress_mED1C39EDF5D5F5311E60D000FE16D45FA77086E5 (ButtonBehavior_tDECF56CD32D4F44DD297CDB3DD4E76E6670D3070* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A1E743152441D5897B17BC48E995CFD54CC6D39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Coliseum");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral8A1E743152441D5897B17BC48E995CFD54CC6D39, NULL);
		// }
		return;
	}
}
// System.Void ButtonBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBehavior__ctor_mD5FCC1CD720C7A699588B2678E76843B3F0274EB (ButtonBehavior_tDECF56CD32D4F44DD297CDB3DD4E76E6670D3070* __this, const RuntimeMethod* method) 
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
// System.Void DamageOnImpact::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageOnImpact_OnCollisionEnter2D_m87B1BF95DCDBE62D7A464D91BC742555A7F978DD (DamageOnImpact_t511854547F4E77E86C7D5C42C3D8D3E41996FC72* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Player") // According to all known laws of aviation, there is no way a bee should be able to fly. Its wings are too small to get its fat little body off the ground. The bee, of course, flies anyway because bees don't care what humans think is impossible. Yellow, black. Yellow, black. Yellow, black. Yellow, black. Ooh, black and yellow! Let's shake it up a little. Barry! Breakfast is ready! Ooming! Hang on a second. Hello? - Barry? - Adam? - Oan you believe this is happening? - I can't. I'll pick you up. Looking sharp. Use the stairs.
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// collision.gameObject.GetComponent<PlayerController>().TakeDamage(damage);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_4, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_5, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		int32_t L_7 = __this->___damage_4;
		PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80(L_6, L_7, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void DamageOnImpact::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageOnImpact__ctor_m42971987FC45D616184E5EBE74FB7DB59B00360A (DamageOnImpact_t511854547F4E77E86C7D5C42C3D8D3E41996FC72* __this, const RuntimeMethod* method) 
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
// System.Void DestroySelf::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf_Update_m592BA0A7E2729D64498E4D6BB058491EA0A8683F (DestroySelf_t7C174F6201045F5FE6F7AE315CB98D6E00D013E0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroySelf::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf_Destroy_m7AA3BAC031597E045488A44BB4044E79582AC473 (DestroySelf_t7C174F6201045F5FE6F7AE315CB98D6E00D013E0* __this, const RuntimeMethod* method) 
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
// System.Void DestroySelf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf__ctor_mEB826102144C06B321478180EF2FD2F8630EF99E (DestroySelf_t7C174F6201045F5FE6F7AE315CB98D6E00D013E0* __this, const RuntimeMethod* method) 
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
// System.Void DoorTriggerButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorTriggerButton_Update_m6FC31079CD4CFD6EF93DED2B3C5E18B49F7462DC (DoorTriggerButton_t9617BD78405FFDD62BDB460484B2BA883FBE8DC3* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.J))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)106), NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// if (isInRange)
		bool L_1 = __this->___isInRange_5;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// uiGM.OpenDoor();
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_2 = __this->___uiGM_4;
		UIGameManager_OpenDoor_mA4B4CA067A331AB54C8E9A687CB35514B8753968(L_2, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void DoorTriggerButton::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorTriggerButton_OnTriggerEnter2D_mADF024F5DEE7E0B83409284C5BC5CA26527A390D (DoorTriggerButton_t9617BD78405FFDD62BDB460484B2BA883FBE8DC3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// isInRange = true;
		__this->___isInRange_5 = (bool)1;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void DoorTriggerButton::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorTriggerButton_OnTriggerExit2D_mE282D01D50F414D70DF5CEA319C4FCF4DB6360D6 (DoorTriggerButton_t9617BD78405FFDD62BDB460484B2BA883FBE8DC3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// isInRange = false;
		__this->___isInRange_5 = (bool)0;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void DoorTriggerButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorTriggerButton__ctor_m7E43120A1B51D5B09E25271328C5AD0557EC0A1C (DoorTriggerButton_t9617BD78405FFDD62BDB460484B2BA883FBE8DC3* __this, const RuntimeMethod* method) 
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
// System.Void FlashOnHit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashOnHit_Start_m4C91EACAC5E8DACFF394397881A4C7C0BC219A51 (FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sprite = GetComponent<SpriteRenderer>(); //Gets the player's current sprite
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___sprite_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprite_8), (void*)L_0);
		// originalMaterial = sprite.material;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___sprite_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___originalMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalMaterial_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void FlashOnHit::Flash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashOnHit_Flash_m4326F199E62AA8BF6685E22720C5DAC6AF9CA094 (FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* __this, const RuntimeMethod* method) 
{
	{
		// if (flashRoutine != null) //If currently flashing, stop the flash routine if this function is called again
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___flashRoutine_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(flashRoutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___flashRoutine_10;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		// flashRoutine = StartCoroutine(FlashRoutine());
		RuntimeObject* L_2;
		L_2 = FlashOnHit_FlashRoutine_mCF497E51A8AA389B08130AA15E02317254DEF0A3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		__this->___flashRoutine_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___flashRoutine_10), (void*)L_3);
		// }
		return;
	}
}
// System.Void FlashOnHit::MultiFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashOnHit_MultiFlash_m495219C276D62FBA5B58C55E6D26E73F05F74AC7 (FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* __this, const RuntimeMethod* method) 
{
	{
		// if (flashRoutine != null) //If currently flashing, stop the flash routine if this function is called again
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___flashRoutine_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(flashRoutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___flashRoutine_10;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		// flashRoutine = StartCoroutine(BlueFlashRoutine());
		RuntimeObject* L_2;
		L_2 = FlashOnHit_BlueFlashRoutine_m61FC413AE676BF056F7C8E2AB5E905194BBA9E19(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		__this->___flashRoutine_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___flashRoutine_10), (void*)L_3);
		// }
		return;
	}
}
// System.Collections.IEnumerator FlashOnHit::FlashRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlashOnHit_FlashRoutine_mCF497E51A8AA389B08130AA15E02317254DEF0A3 (FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B* L_0 = (U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B*)il2cpp_codegen_object_new(U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B_il2cpp_TypeInfo_var);
		U3CFlashRoutineU3Ed__10__ctor_m0C1E7497B4BE99FA2BD42B95E424AB06FC3563E2(L_0, 0, NULL);
		U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator FlashOnHit::BlueFlashRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlashOnHit_BlueFlashRoutine_m61FC413AE676BF056F7C8E2AB5E905194BBA9E19 (FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A* L_0 = (U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A*)il2cpp_codegen_object_new(U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A_il2cpp_TypeInfo_var);
		U3CBlueFlashRoutineU3Ed__11__ctor_m62A17CF5EF40576FB565D450885760B44A5DF77D(L_0, 0, NULL);
		U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void FlashOnHit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashOnHit__ctor_m651924489E93474B857C5209099C5A792661373E (FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* __this, const RuntimeMethod* method) 
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
// System.Void FlashOnHit/<FlashRoutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashRoutineU3Ed__10__ctor_m0C1E7497B4BE99FA2BD42B95E424AB06FC3563E2 (U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FlashOnHit/<FlashRoutine>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashRoutineU3Ed__10_System_IDisposable_Dispose_mBD242BCEBB25A5D277CA11F6F1DCEA79694FF3A1 (U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FlashOnHit/<FlashRoutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFlashRoutineU3Ed__10_MoveNext_m04C79DDCD45365A03118C3597A4B37CC1E3E9ABE (U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// sprite.material = flashMaterial;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_4 = V_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = L_4->___sprite_8;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_6 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6->___flashMaterial_4;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_7, NULL);
		// yield return new WaitForSeconds(duration);
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_8 = V_1;
		float L_9 = L_8->___duration_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// sprite.material = originalMaterial;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_11 = V_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = L_11->___sprite_8;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_13 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = L_13->___originalMaterial_9;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_12, L_14, NULL);
		// flashRoutine = null;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_15 = V_1;
		L_15->___flashRoutine_10 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___flashRoutine_10), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object FlashOnHit/<FlashRoutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlashRoutineU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA427A045BDE7959116EAD3B92417A03818F6D7F6 (U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FlashOnHit/<FlashRoutine>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashRoutineU3Ed__10_System_Collections_IEnumerator_Reset_m58D177F05618AFA4850D7EE4CB9653A019CCEA47 (U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFlashRoutineU3Ed__10_System_Collections_IEnumerator_Reset_m58D177F05618AFA4850D7EE4CB9653A019CCEA47_RuntimeMethod_var)));
	}
}
// System.Object FlashOnHit/<FlashRoutine>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlashRoutineU3Ed__10_System_Collections_IEnumerator_get_Current_mEDDD23F413E7386E6A67FB9BDA5FF2B6EBB75646 (U3CFlashRoutineU3Ed__10_t4F6B5E9F4CE18669C348C7889E1FE8A3C107431B* __this, const RuntimeMethod* method) 
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
// System.Void FlashOnHit/<BlueFlashRoutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlueFlashRoutineU3Ed__11__ctor_m62A17CF5EF40576FB565D450885760B44A5DF77D (U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FlashOnHit/<BlueFlashRoutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlueFlashRoutineU3Ed__11_System_IDisposable_Dispose_m908694D05FD19CD3EA78ABBD7BF0F8787A46B352 (U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FlashOnHit/<BlueFlashRoutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBlueFlashRoutineU3Ed__11_MoveNext_m35ABEF40528B9387718024DFFEE526D07EA768A6 (U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// sprite.material = blueFlashMaterial;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_4 = V_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = L_4->___sprite_8;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_6 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6->___blueFlashMaterial_7;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_7, NULL);
		// yield return new WaitForSeconds(blueDuration);
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_8 = V_1;
		float L_9 = L_8->___blueDuration_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// sprite.material = originalMaterial;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_11 = V_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = L_11->___sprite_8;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_13 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = L_13->___originalMaterial_9;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_12, L_14, NULL);
		// flashRoutine = null;
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_15 = V_1;
		L_15->___flashRoutine_10 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___flashRoutine_10), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object FlashOnHit/<BlueFlashRoutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBlueFlashRoutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEE0426F96DEBCA5482A652D19B6962A4F754D80A (U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FlashOnHit/<BlueFlashRoutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlueFlashRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mDB5B0A6CECB2B62B0AD46A825B7354364BE57D75 (U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBlueFlashRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mDB5B0A6CECB2B62B0AD46A825B7354364BE57D75_RuntimeMethod_var)));
	}
}
// System.Object FlashOnHit/<BlueFlashRoutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBlueFlashRoutineU3Ed__11_System_Collections_IEnumerator_get_Current_m5B7B4453E9795963F15434C218A856C507EDAD5D (U3CBlueFlashRoutineU3Ed__11_tC95009D50F83BCEA08C3AAA0F0B3CD0BD5FF6E6A* __this, const RuntimeMethod* method) 
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
// System.Void IcePuddleShot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IcePuddleShot_Start_mDF3763173CF2EE8C53E85BD409EE387DA8BCC45F (IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coll = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		__this->___coll_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coll_10), (void*)L_0);
		// initialRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		__this->___initialRotation_12 = L_2;
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_11), (void*)L_3);
		// startPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___startPos_13 = L_5;
		// if (data.halfDamageBought == false)
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_9;
		bool L_7 = L_6->___halfDamageBought_11;
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		// dam = 2;
		__this->___dam_7 = 2;
	}

IL_004e:
	{
		// if (data.halfDamageBought == true)
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_9;
		bool L_9 = L_8->___halfDamageBought_11;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// dam = 1;
		__this->___dam_7 = 1;
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void IcePuddleShot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IcePuddleShot_Update_mD869409E6BE23B842CCA9B533A924469F1A5D780 (IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisPuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6_m02F06B5A7068C362A8782B76DE72CAF4FCD1E799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// float x0 = startPos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___startPos_13);
		float L_1 = L_0->___x_2;
		V_0 = L_1;
		// float x1 = targetPos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___targetPos_4);
		float L_3 = L_2->___x_2;
		V_1 = L_3;
		// float dist = (x1 - x0); //Calculates distance between current position and target position
		float L_4 = V_1;
		float L_5 = V_0;
		V_2 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// float nextX = Mathf.MoveTowards(transform.position.x, x1, projectileSpeed * Time.deltaTime); //Moves towards the target
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = V_1;
		float L_10 = __this->___projectileSpeed_5;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12;
		L_12 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		V_3 = L_12;
		// float baseY = Mathf.Lerp(startPos.y, targetPos.y, (nextX - x0) / dist);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___startPos_13);
		float L_14 = L_13->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___targetPos_4);
		float L_16 = L_15->___y_3;
		float L_17 = V_3;
		float L_18 = V_0;
		float L_19 = V_2;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_14, L_16, ((float)(((float)il2cpp_codegen_subtract(L_17, L_18))/L_19)), NULL);
		V_4 = L_20;
		// float arc = arcHeight * (nextX - x0) * (nextX - x1) / (-0.25f * dist * dist); //Funny equation to calculate the arc
		float L_21 = __this->___arcHeight_6;
		float L_22 = V_3;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = V_1;
		float L_26 = V_2;
		float L_27 = V_2;
		V_5 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_21, ((float)il2cpp_codegen_subtract(L_22, L_23)))), ((float)il2cpp_codegen_subtract(L_24, L_25))))/((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-0.25f), L_26)), L_27))));
		// nextPos = new Vector3(nextX, baseY + arc, transform.position.z);
		float L_28 = V_3;
		float L_29 = V_4;
		float L_30 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = L_32.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), L_28, ((float)il2cpp_codegen_add(L_29, L_30)), L_33, /*hidden argument*/NULL);
		__this->___nextPos_14 = L_34;
		// transform.rotation = LookAt2D(nextPos - transform.position) * initialRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___nextPos_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_36, L_38, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_39, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = IcePuddleShot_LookAt2D_m277B5D334E5368FB76D0E46BB96FE3B15AE8B2B6(L_40, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = __this->___initialRotation_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_41, L_42, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_35, L_43, NULL);
		// transform.position = nextPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = __this->___nextPos_14;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_44, L_45, NULL);
		// if (nextPos == targetPos) //Projectile destroys itself once the target is reached.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___nextPos_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->___targetPos_4;
		bool L_48;
		L_48 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_46, L_47, NULL);
		if (!L_48)
		{
			goto IL_0118;
		}
	}
	{
		// PuddleSlide puddle = Instantiate(puddlePrefab, targetPos, Quaternion.identity);
		PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* L_49 = __this->___puddlePrefab_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = __this->___targetPos_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* L_52;
		L_52 = Object_Instantiate_TisPuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6_m02F06B5A7068C362A8782B76DE72CAF4FCD1E799(L_49, L_50, L_51, Object_Instantiate_TisPuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6_m02F06B5A7068C362A8782B76DE72CAF4FCD1E799_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_53, NULL);
	}

IL_0118:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion IcePuddleShot::LookAt2D(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 IcePuddleShot_LookAt2D_m277B5D334E5368FB76D0E46BB96FE3B15AE8B2B6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___forward0, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Euler(0, 0, Mathf.Atan2(forward.y, forward.x) * Mathf.Rad2Deg);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___forward0;
		float L_1 = L_0.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___forward0;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_4, (57.2957802f))), NULL);
		return L_5;
	}
}
// System.Void IcePuddleShot::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IcePuddleShot_OnCollisionEnter2D_m4041E871A546D771E3C205E0FAA452FDD07E552C (IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Player")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// collision.gameObject.GetComponent<PlayerController>().TakeDamage(dam);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_4, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_5, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		int32_t L_7 = __this->___dam_7;
		PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80(L_6, L_7, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void IcePuddleShot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IcePuddleShot__ctor_m28F49F79D73664E047094E327790F08090EB2B4C (IcePuddleShot_t56F2A2D4C6004578F787EE771D7B01F19D45489A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public float projectileSpeed = 10;
		__this->___projectileSpeed_5 = (10.0f);
		// [SerializeField] public float arcHeight = 1;
		__this->___arcHeight_6 = (1.0f);
		// [SerializeField] public int dam = 2;
		__this->___dam_7 = 2;
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
// System.Void LevelLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader__ctor_mB1812BC658449839C948710AC302F1483F380107 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
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
// System.Void OrangeBossController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBossController_Start_mFB3113730C2541A4AB0C568B2683FF8F52E8E5A3 (OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisOrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE_m98D45300E9E35EEF33EE805EC7FE5A9F4C8F99B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mustPatrol = true;
		__this->___mustPatrol_18 = (bool)1;
		// OrangeBowlBallProjectile ball = Instantiate(ballPrefab, ballOffset.position, transform.rotation);
		OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* L_0 = __this->___ballPrefab_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___ballOffset_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* L_5;
		L_5 = Object_Instantiate_TisOrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE_m98D45300E9E35EEF33EE805EC7FE5A9F4C8F99B2(L_0, L_2, L_4, Object_Instantiate_TisOrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE_m98D45300E9E35EEF33EE805EC7FE5A9F4C8F99B2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void OrangeBossController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBossController_Update_m4E18C8E4B633A456EB6BC0E384613555357C465D (OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		BossController_Update_mAA580799CF6D2B3F2AB709AA6492E720872A4EB2(__this, NULL);
		// if (mustPatrol)
		bool L_0 = __this->___mustPatrol_18;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Patrol();
		OrangeBossController_Patrol_m50A29340E9D157F81265DBA359268E99ADE06DC5(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void OrangeBossController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBossController_FixedUpdate_m85DA2E9B5AAC76EB252607967BF57036E85B8505 (OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mustPatrol)
		bool L_0 = __this->___mustPatrol_18;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// mustTurn = Physics2D.OverlapCircle(wallCheckPos.position, 0.1f, groundLayer); //If the overlap circle hits a wall then Orange Bowl will change directions
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___wallCheckPos_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___groundLayer_22;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6;
		L_6 = Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18(L_3, (0.100000001f), L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		__this->___mustTurn_19 = L_7;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void OrangeBossController::Patrol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBossController_Patrol_m50A29340E9D157F81265DBA359268E99ADE06DC5 (OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C* __this, const RuntimeMethod* method) 
{
	{
		// if(mustTurn)
		bool L_0 = __this->___mustTurn_19;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Flip();
		OrangeBossController_Flip_m592C536F10FEBC6DA6549DF39E845D68D28A1D90(__this, NULL);
	}

IL_000e:
	{
		// rb.velocity = new Vector2(walkSpeed * Time.fixedDeltaTime, rb.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rb_20;
		float L_2 = __this->___walkSpeed_17;
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_4, NULL);
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((float)il2cpp_codegen_multiply(L_2, L_3)), L_6, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Void OrangeBossController::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBossController_Flip_m592C536F10FEBC6DA6549DF39E845D68D28A1D90 (OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C* __this, const RuntimeMethod* method) 
{
	{
		// mustPatrol = false;
		__this->___mustPatrol_18 = (bool)0;
		// transform.localScale = new Vector2(transform.localScale.x * -1, transform.localScale.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		float L_6 = L_5.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((float)il2cpp_codegen_multiply(L_3, (-1.0f))), L_6, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_7, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_8, NULL);
		// walkSpeed *= -1;
		float L_9 = __this->___walkSpeed_17;
		__this->___walkSpeed_17 = ((float)il2cpp_codegen_multiply(L_9, (-1.0f)));
		// mustPatrol = true;
		__this->___mustPatrol_18 = (bool)1;
		// }
		return;
	}
}
// System.Void OrangeBossController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBossController__ctor_mF25A42646DD29C49FF33D721552701D76D67F15C (OrangeBossController_t0AFCCE2BECAF1CC06014B31A6DBF1079FA46498C* __this, const RuntimeMethod* method) 
{
	{
		BossController__ctor_mC4C9EEC35858E3E8D6475F9C844D40EF8F2E537A(__this, NULL);
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
// System.Void OrangeBowlBallProjectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBowlBallProjectile_Start_m6DD8C1729D7E5986583C85470E97E7124200F49E (OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coll = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		__this->___coll_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coll_8), (void*)L_0);
		// initialRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		__this->___initialRotation_9 = L_2;
		// startPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___startPos_10 = L_4;
		// if (data.halfDamageBought == false)
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_7;
		bool L_6 = L_5->___halfDamageBought_11;
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		// dam = 2;
		__this->___dam_6 = 2;
	}

IL_0042:
	{
		// if (data.halfDamageBought == true)
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_7 = __this->___data_7;
		bool L_8 = L_7->___halfDamageBought_11;
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// dam = 1;
		__this->___dam_6 = 1;
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void OrangeBowlBallProjectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBowlBallProjectile_Update_mB4E78194124C40E16E96E52516DF5177E8DE3DE8 (OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// float x0 = startPos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___startPos_10);
		float L_1 = L_0->___x_2;
		V_0 = L_1;
		// float x1 = transform.position.x + 10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_1 = ((float)il2cpp_codegen_add(L_4, (10.0f)));
		// float dist = (x1 - x0); //Calculates distance between current position and target position
		float L_5 = V_1;
		float L_6 = V_0;
		V_2 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		// float nextX = Mathf.MoveTowards(transform.position.x, x1, projectileSpeed * Time.deltaTime); //Moves towards the target
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10 = V_1;
		float L_11 = __this->___projectileSpeed_4;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_13;
		L_13 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_9, L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		V_3 = L_13;
		// float baseY = Mathf.Lerp(startPos.y, transform.position.y, (nextX - x0) / dist);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___startPos_10);
		float L_15 = L_14->___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		float L_19 = V_3;
		float L_20 = V_0;
		float L_21 = V_2;
		float L_22;
		L_22 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_15, L_18, ((float)(((float)il2cpp_codegen_subtract(L_19, L_20))/L_21)), NULL);
		V_4 = L_22;
		// float arc = arcHeight * (nextX - x0) * (nextX - x1) / (-0.25f * dist * dist); //Funny equation to calculate the arc
		float L_23 = __this->___arcHeight_5;
		float L_24 = V_3;
		float L_25 = V_0;
		float L_26 = V_3;
		float L_27 = V_1;
		float L_28 = V_2;
		float L_29 = V_2;
		V_5 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_23, ((float)il2cpp_codegen_subtract(L_24, L_25)))), ((float)il2cpp_codegen_subtract(L_26, L_27))))/((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-0.25f), L_28)), L_29))));
		// nextPos = new Vector3(nextX, baseY + arc, transform.position.z);
		float L_30 = V_3;
		float L_31 = V_4;
		float L_32 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), L_30, ((float)il2cpp_codegen_add(L_31, L_32)), L_35, /*hidden argument*/NULL);
		__this->___nextPos_11 = L_36;
		// transform.rotation = LookAt2D(nextPos - transform.position) * initialRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___nextPos_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_40, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_41, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = OrangeBowlBallProjectile_LookAt2D_mB20E3A3559FCAEC438AF48BBAC999C93E3709224(L_42, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = __this->___initialRotation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_43, L_44, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_37, L_45, NULL);
		// transform.position = nextPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->___nextPos_11;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_46, L_47, NULL);
		// }
		return;
	}
}
// System.Void OrangeBowlBallProjectile::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBowlBallProjectile_Destroy_m39B51269060E840A4C1BA4FE5578219DD5B7322E (OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* __this, const RuntimeMethod* method) 
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
// UnityEngine.Quaternion OrangeBowlBallProjectile::LookAt2D(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 OrangeBowlBallProjectile_LookAt2D_mB20E3A3559FCAEC438AF48BBAC999C93E3709224 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___forward0, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Euler(0, 0, Mathf.Atan2(forward.y, forward.x) * Mathf.Rad2Deg);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___forward0;
		float L_1 = L_0.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___forward0;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_4, (57.2957802f))), NULL);
		return L_5;
	}
}
// System.Void OrangeBowlBallProjectile::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBowlBallProjectile_OnCollisionEnter2D_m5D5CA8524203FFEFF95212D442FD7F6138E2E82D (OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Player")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// collision.gameObject.GetComponent<PlayerController>().TakeDamage(dam);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_4, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_5, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		int32_t L_7 = __this->___dam_6;
		PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80(L_6, L_7, NULL);
	}

IL_002d:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// }
		return;
	}
}
// System.Void OrangeBowlBallProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrangeBowlBallProjectile__ctor_m61089A904D87BE24AFFD71C8043C070ED91348D9 (OrangeBowlBallProjectile_t912402FB00C81FF1F7BBB44493E1CD2FCEBF9EEE* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public float projectileSpeed = 10;
		__this->___projectileSpeed_4 = (10.0f);
		// [SerializeField] public float arcHeight = 1;
		__this->___arcHeight_5 = (1.0f);
		// [SerializeField] public int dam = 2;
		__this->___dam_6 = 2;
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
// System.Void PauseMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Start_m4BBF1E67B42A2E936C792E83778ADCD87DE3C80E (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// pauseMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuUI_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m5097E74BFD4385B73BA9EF7198886DCEC7DF9A83 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if (GameIsPaused)
		bool L_1 = ((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___GameIsPaused_9;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Resume();
		PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831(__this, NULL);
		return;
	}

IL_0017:
	{
		// Pause();
		PauseMenu_Pause_m5C6B949CB19184E7227C891FF3C8AF707689AAF0(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuUI_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// GameIsPaused = false;
		((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___GameIsPaused_9 = (bool)0;
		// playerObject.GetComponent<PlayerController>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___playerObject_7;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_1, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// bossObject.GetComponent<PullTowards>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___bossObject_8;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_4;
		L_4 = GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81(L_3, GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		// bossObject.GetComponent<PushAway>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___bossObject_8;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_6;
		L_6 = GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE(L_5, GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_m5C6B949CB19184E7227C891FF3C8AF707689AAF0 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuUI_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// GameIsPaused = true;
		((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___GameIsPaused_9 = (bool)1;
		// playerObject.GetComponent<PlayerController>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___playerObject_7;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_1, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// bossObject.GetComponent<PullTowards>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___bossObject_8;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_4;
		L_4 = GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81(L_3, GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// bossObject.GetComponent<PushAway>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___bossObject_8;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_6;
		L_6 = GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE(L_5, GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// EventSystem.current.SetSelectedGameObject(null);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_7;
		L_7 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_7, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// EventSystem.current.SetSelectedGameObject(pauseFirstButton);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_8;
		L_8 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___pauseFirstButton_6;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::LoadMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_LoadMainMenu_m8A82B5BCBE2B8527057631EC49A09338CF10FEDF (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// StartCoroutine(LoadLevel("Main Menu"));
		RuntimeObject* L_0;
		L_0 = PauseMenu_LoadLevel_mDDA94B8E23CE001F40E4399465449C73F2AA4A32(__this, _stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_QuitGame_m699C16B5AE66C12C48F4D7B4821169679C5FF760 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Back_mE8BF9FE1496D39D84FD49595FC0E13456C035E68 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D55B47531F63746B8E5A7B9B459605F08C5F89B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Resume(); //i just made it so this button unpauses the game for now
		PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831(__this, NULL);
		// Debug.Log("I am the back button ~> still in progress");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7D55B47531F63746B8E5A7B9B459605F08C5F89B, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PauseMenu::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PauseMenu_LoadLevel_mDDA94B8E23CE001F40E4399465449C73F2AA4A32 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, String_t* ___levelIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* L_0 = (U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4*)il2cpp_codegen_object_new(U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4_il2cpp_TypeInfo_var);
		U3CLoadLevelU3Ed__14__ctor_m078A2D5C0B1D1CA802097D8FC4BA696B236FF9D8(L_0, 0, NULL);
		U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* L_2 = L_1;
		String_t* L_3 = ___levelIndex0;
		L_2->___levelIndex_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___levelIndex_3), (void*)L_3);
		return L_2;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// public float trasitionTime = 1f; //transition time for menus
		__this->___trasitionTime_4 = (1.0f);
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
// System.Void PauseMenu/<LoadLevel>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__14__ctor_m078A2D5C0B1D1CA802097D8FC4BA696B236FF9D8 (U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PauseMenu/<LoadLevel>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__14_System_IDisposable_Dispose_m743E98B5B738D1462CBB9B784F18A70CDC6F3F34 (U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PauseMenu/<LoadLevel>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadLevelU3Ed__14_MoveNext_mCD768D625E198308D3D4880EE34803118681E45A (U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// transition.SetTrigger("Start");
		PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* L_4 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___transition_5;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		// yield return new WaitForSeconds(trasitionTime);
		PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* L_6 = V_1;
		float L_7 = L_6->___trasitionTime_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(levelIndex);
		String_t* L_9 = __this->___levelIndex_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PauseMenu/<LoadLevel>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadLevelU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1457685F6A7FAB15E7C09ED53D3E00DC52913C1E (U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PauseMenu/<LoadLevel>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__14_System_Collections_IEnumerator_Reset_m2300DA281C84066EDF9B6784986E762A7FEA06CF (U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadLevelU3Ed__14_System_Collections_IEnumerator_Reset_m2300DA281C84066EDF9B6784986E762A7FEA06CF_RuntimeMethod_var)));
	}
}
// System.Object PauseMenu/<LoadLevel>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadLevelU3Ed__14_System_Collections_IEnumerator_get_Current_m38B916B3327C25C78DE1C8D12FCA8FE2E6537D98 (U3CLoadLevelU3Ed__14_tD5879CF2A9A80ECD7CBB5F35C90ADA9DD83367F4* __this, const RuntimeMethod* method) 
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
// System.Void PinkVaseBossController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinkVaseBossController_Start_mDA921D23B4DC7399C7BCB5433E95BEAC0FDDD0D9 (PinkVaseBossController_t499FA5EFF4679F30B9584330654B3FA5588F5E4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB816DF4AAD3D58B7C2D0C8BD626E58C5753D024);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.position = startPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___startPoint_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// Vector3 newPos = new Vector3(transform.position.x + 0.3f, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_add(L_5, (0.300000012f))), L_8, L_11, NULL);
		// transform.position = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
		// gameObject.transform.parent = startPoint.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___startPoint_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_15, L_17, NULL);
		// firstBreakpoint = health - (health * 0.25);
		float L_18 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___health_4;
		float L_19 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___health_4;
		__this->___firstBreakpoint_18 = ((double)il2cpp_codegen_subtract(((double)L_18), ((double)il2cpp_codegen_multiply(((double)L_19), (0.25)))));
		// secondBreakpoint = health - (health * 0.75);
		float L_20 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___health_4;
		float L_21 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___health_4;
		__this->___secondBreakpoint_19 = ((double)il2cpp_codegen_subtract(((double)L_20), ((double)il2cpp_codegen_multiply(((double)L_21), (0.75)))));
		// shootCooldown = 1;
		((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___shootCooldown_5 = (1.0f);
		// anim.Play("PinkIdle");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->___anim_24;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_22, _stringLiteralBB816DF4AAD3D58B7C2D0C8BD626E58C5753D024, NULL);
		// }
		return;
	}
}
// System.Void PinkVaseBossController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinkVaseBossController_Update_m09BAF2BF5EDBA80253C4322E3C780C4D597528D8 (PinkVaseBossController_t499FA5EFF4679F30B9584330654B3FA5588F5E4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisBossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213_m24D0E41D4A8C084152E0F4F36CBA2A386495A98B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Update();
		BossController_Update_mAA580799CF6D2B3F2AB709AA6492E720872A4EB2(__this, NULL);
		// if (currentCooldown <= 0)
		float L_0 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___currentCooldown_11;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_003d;
		}
	}
	{
		// currentCooldown = shootCooldown;
		float L_1 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___shootCooldown_5;
		((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___currentCooldown_11 = L_1;
		// BossProjectile bullet = Instantiate(bulletPrefab, fireOffset.position, Quaternion.identity);
		BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* L_2 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___bulletPrefab_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___fireOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213* L_6;
		L_6 = Object_Instantiate_TisBossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213_m24D0E41D4A8C084152E0F4F36CBA2A386495A98B(L_2, L_4, L_5, Object_Instantiate_TisBossProjectile_t2F8372D47C827930E9407C5E1518EE8BC86E4213_m24D0E41D4A8C084152E0F4F36CBA2A386495A98B_RuntimeMethod_var);
		goto IL_004f;
	}

IL_003d:
	{
		// currentCooldown -= Time.deltaTime;
		float L_7 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___currentCooldown_11;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___currentCooldown_11 = ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_004f:
	{
		// if (health == firstBreakpoint && vinesSpawned == 0)
		float L_9 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___health_4;
		double L_10 = __this->___firstBreakpoint_18;
		if ((!(((double)((double)L_9)) == ((double)L_10))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_11 = __this->___vinesSpawned_20;
		if (L_11)
		{
			goto IL_0080;
		}
	}
	{
		// vinesSpawned++;
		int32_t L_12 = __this->___vinesSpawned_20;
		__this->___vinesSpawned_20 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// firstVineArm.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___firstVineArm_21;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
	}

IL_0080:
	{
		// if (health == secondBreakpoint && vinesSpawned == 1)
		float L_14 = ((BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A*)__this)->___health_4;
		double L_15 = __this->___secondBreakpoint_19;
		if ((!(((double)((double)L_14)) == ((double)L_15))))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_16 = __this->___vinesSpawned_20;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_00b2;
		}
	}
	{
		// vinesSpawned++;
		int32_t L_17 = __this->___vinesSpawned_20;
		__this->___vinesSpawned_20 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// secondVineArm.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___secondVineArm_22;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void PinkVaseBossController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinkVaseBossController__ctor_m915754055FC37E374FE3E80775A543F0A67079DB (PinkVaseBossController_t499FA5EFF4679F30B9584330654B3FA5588F5E4A* __this, const RuntimeMethod* method) 
{
	{
		BossController__ctor_mC4C9EEC35858E3E8D6475F9C844D40EF8F2E537A(__this, NULL);
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
// System.Void PlatformMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformMovement_Start_m4DC9AD3C98F445C7C8CF12039F0FA9159A92AC51 (PlatformMovement_tE792223D032209ACC1AB4D9C252AF86BE07443DA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlatformMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformMovement_Update_m62C2F7C20E5E1FF00A418F4A3C72F0B6BBF971C0 (PlatformMovement_tE792223D032209ACC1AB4D9C252AF86BE07443DA* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Vector3.MoveTowards(transform.position, target.position, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___target_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = __this->___speed_4;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_2, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_7, NULL);
		// UpdateTargetDestination();
		PlatformMovement_UpdateTargetDestination_m08060A2D7BC48F95FB393C71DA5D6FF99EB5E22D(__this, NULL);
		// }
		return;
	}
}
// System.Void PlatformMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformMovement_OnCollisionEnter2D_mCAB360CECD5CC445A4962DD207FD7A1CA6BF7EDC (PlatformMovement_tE792223D032209ACC1AB4D9C252AF86BE07443DA* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	{
		// collision.collider.transform.SetParent(transform);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlatformMovement::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformMovement_OnCollisionExit2D_m35EF32F811C7F33260E05B5FD2926A21208FB32C (PlatformMovement_tE792223D032209ACC1AB4D9C252AF86BE07443DA* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	{
		// collision.collider.transform.SetParent(null);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_2, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// }
		return;
	}
}
// System.Void PlatformMovement::UpdateTargetDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformMovement_UpdateTargetDestination_m08060A2D7BC48F95FB393C71DA5D6FF99EB5E22D (PlatformMovement_tE792223D032209ACC1AB4D9C252AF86BE07443DA* __this, const RuntimeMethod* method) 
{
	{
		// if(transform.position == startPoint.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___startPoint_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		bool L_4;
		L_4 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// target = endPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___endPoint_6;
		__this->___target_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_7), (void*)L_5);
		return;
	}

IL_002a:
	{
		// else if (transform.position == endPoint.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___endPoint_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		bool L_10;
		L_10 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// target = startPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___startPoint_5;
		__this->___target_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_7), (void*)L_11);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void PlatformMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformMovement__ctor_mAEF09AB64F5F2CF14FACD2ECE9C3160A90D7A6D7 (PlatformMovement_tE792223D032209ACC1AB4D9C252AF86BE07443DA* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trail = GetComponent<TrailRenderer>();
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_0;
		L_0 = Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962(__this, Component_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_mBAC4300374CB2A91D86B674F10BF8BC568FB9962_RuntimeMethod_var);
		__this->___trail_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trail_36), (void*)L_0);
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_6), (void*)L_1);
		// col = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2;
		L_2 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		__this->___col_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___col_21), (void*)L_2);
		// standingSize = col.size;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_3 = __this->___col_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_3, NULL);
		__this->___standingSize_16 = L_4;
		// col.size = standingSize;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_5 = __this->___col_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___standingSize_16;
		BoxCollider2D_set_size_mA69E48F639FFB614B5FC083D3FEED3DF78A9FF46(L_5, L_6, NULL);
		// maxHealth = health + data.healthMod;
		float L_7 = __this->___health_24;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_52;
		float L_9 = L_8->___healthMod_6;
		__this->___maxHealth_50 = ((float)il2cpp_codegen_add(L_7, L_9));
		// currentHealth = maxHealth;
		float L_10 = __this->___maxHealth_50;
		__this->___currentHealth_55 = L_10;
		// uiGM.SetMaxHealth(maxHealth);
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_11 = __this->___uiGM_53;
		float L_12 = __this->___maxHealth_50;
		UIGameManager_SetMaxHealth_mBA9C9DE5A921DF05DDDA9B3D2F7232F1C9F712CF(L_11, L_12, NULL);
		// uiGM.SetHealth(maxHealth);
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_13 = __this->___uiGM_53;
		float L_14 = __this->___maxHealth_50;
		UIGameManager_SetHealth_m6379E9B7292A9A82A4E173A4BB1CA814590E550D(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisPlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF_m16192BF0693C610F436CD6F1882AA800CCCC7C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isDashing)
		bool L_0 = __this->___isDashing_35;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Move();
		PlayerController_Move_m68BFC8B882D42955A212B23E7D1DDD56CC87DB09(__this, NULL);
		// if (Input.GetKey(KeyCode.J) && currentCooldown <= 0) //If J is pressed while shooting isn't on cooldown...
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)106), NULL);
		if (!L_1)
		{
			goto IL_00d2;
		}
	}
	{
		float L_2 = __this->___currentCooldown_14;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_00d2;
		}
	}
	{
		// bubbleSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___bubbleSound_42;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// if (grounded && state == State.idle)
		bool L_4 = __this->___grounded_28;
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_5 = __this->___state_4;
		if (L_5)
		{
			goto IL_005a;
		}
	}
	{
		// counter = 0.4f;
		__this->___counter_54 = (0.400000006f);
		// state = State.shooting;
		__this->___state_4 = 3;
		goto IL_00a2;
	}

IL_005a:
	{
		// else if (state == State.jumping || state == State.jumpshooting || state == State.doublejump)
		int32_t L_6 = __this->___state_4;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_7 = __this->___state_4;
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_8 = __this->___state_4;
		if ((!(((uint32_t)L_8) == ((uint32_t)7))))
		{
			goto IL_007e;
		}
	}

IL_0075:
	{
		// state = State.jumpshooting;
		__this->___state_4 = 4;
		goto IL_00a2;
	}

IL_007e:
	{
		// else if (grounded && state == State.crouching  /*|| state == State.crouchshooting || state == State.shooting*/)
		bool L_9 = __this->___grounded_28;
		if (!L_9)
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_10 = __this->___state_4;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_00a2;
		}
	}
	{
		// counter = 0.4f;
		__this->___counter_54 = (0.400000006f);
		// state = State.crouchshooting;
		__this->___state_4 = ((int32_t)9);
	}

IL_00a2:
	{
		// currentCooldown = shootCooldown;
		float L_11 = __this->___shootCooldown_31;
		__this->___currentCooldown_14 = L_11;
		// PlayerProjectile bullet = Instantiate(projectilePrefab, fireOffset.position, transform.rotation); //Spawns a bullet prefab using the fire offset object's position and player character's rotation.
		PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* L_12 = __this->___projectilePrefab_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___fireOffset_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* L_17;
		L_17 = Object_Instantiate_TisPlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF_m16192BF0693C610F436CD6F1882AA800CCCC7C40(L_12, L_14, L_16, Object_Instantiate_TisPlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF_m16192BF0693C610F436CD6F1882AA800CCCC7C40_RuntimeMethod_var);
		goto IL_00e4;
	}

IL_00d2:
	{
		// currentCooldown -= Time.deltaTime;
		float L_18 = __this->___currentCooldown_14;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___currentCooldown_14 = ((float)il2cpp_codegen_subtract(L_18, L_19));
	}

IL_00e4:
	{
		// if (Input.GetKeyDown(KeyCode.K) && data.heldElementalPowers > 0)
		bool L_20;
		L_20 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)107), NULL);
		if (!L_20)
		{
			goto IL_013b;
		}
	}
	{
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_21 = __this->___data_52;
		int32_t L_22 = L_21->___heldElementalPowers_14;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_013b;
		}
	}
	{
		// bubbleSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->___bubbleSound_42;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_23, NULL);
		// PlayerProjectile bullet = Instantiate(superProjectilePrefab, fireOffset.position, transform.rotation);
		PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* L_24 = __this->___superProjectilePrefab_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___fireOffset_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* L_29;
		L_29 = Object_Instantiate_TisPlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF_m16192BF0693C610F436CD6F1882AA800CCCC7C40(L_24, L_26, L_28, Object_Instantiate_TisPlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF_m16192BF0693C610F436CD6F1882AA800CCCC7C40_RuntimeMethod_var);
		// data.heldElementalPowers--;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_30 = __this->___data_52;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_31 = L_30;
		int32_t L_32 = L_31->___heldElementalPowers_14;
		L_31->___heldElementalPowers_14 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
	}

IL_013b:
	{
		// grounded = Physics2D.OverlapCircle(rb.position, groundRadius, ground); //Draws a circle around the player taking in the player's position and ground radius as input. The circle checks to see if a LayerMask of type ground is touching it.
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_33 = __this->___rb_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_33, NULL);
		float L_35 = __this->___groundRadius_26;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_36 = __this->___ground_27;
		int32_t L_37;
		L_37 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_38;
		L_38 = Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18(L_34, L_35, L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_38, NULL);
		__this->___grounded_28 = L_39;
		// if (grounded)
		bool L_40 = __this->___grounded_28;
		if (!L_40)
		{
			goto IL_018a;
		}
	}
	{
		// if (Input.GetButtonDown("Jump")) //If grounded and inputting the jump, then jump.
		bool L_41;
		L_41 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_41)
		{
			goto IL_01ca;
		}
	}
	{
		// Jump();
		PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908(__this, NULL);
		// canDoubleJump = true;
		__this->___canDoubleJump_30 = (bool)1;
		goto IL_01ca;
	}

IL_018a:
	{
		// else if (Input.GetButtonDown("Jump") && canDoubleJump && data.doubleJumpBought == true) //If inputting jump and already in the air then go ahead and break the laws of physics and jump again.
		bool L_42;
		L_42 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_42)
		{
			goto IL_01ca;
		}
	}
	{
		bool L_43 = __this->___canDoubleJump_30;
		if (!L_43)
		{
			goto IL_01ca;
		}
	}
	{
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_44 = __this->___data_52;
		bool L_45 = L_44->___doubleJumpBought_10;
		if (!L_45)
		{
			goto IL_01ca;
		}
	}
	{
		// Jump();
		PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908(__this, NULL);
		// doubleJumpSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_46 = __this->___doubleJumpSound_39;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_46, NULL);
		// state = State.doublejump;
		__this->___state_4 = 7;
		// canDoubleJump = false;
		__this->___canDoubleJump_30 = (bool)0;
	}

IL_01ca:
	{
		// if (Input.GetKey(KeyCode.S) && grounded && state != State.jumping && state != State.doublejump && state != State.crouchshooting) //Crouches when S button is held
		bool L_47;
		L_47 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (!L_47)
		{
			goto IL_0264;
		}
	}
	{
		bool L_48 = __this->___grounded_28;
		if (!L_48)
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_49 = __this->___state_4;
		if ((((int32_t)L_49) == ((int32_t)2)))
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_50 = __this->___state_4;
		if ((((int32_t)L_50) == ((int32_t)7)))
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_51 = __this->___state_4;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)9))))
		{
			goto IL_0264;
		}
	}
	{
		// state = State.crouching;
		__this->___state_4 = 8;
		// crouchSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_52 = __this->___crouchSound_43;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_52, NULL);
		// rb.velocity = new Vector2(0,0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_53 = __this->___rb_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_54), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_53, L_54, NULL);
		// transform.position = new Vector2(transform.position.x, -3.55f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		float L_58 = L_57.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_59), L_58, (-3.54999995f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_59, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_55, L_60, NULL);
		// col.size = crouchingSize;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_61 = __this->___col_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = __this->___crouchingSize_17;
		BoxCollider2D_set_size_mA69E48F639FFB614B5FC083D3FEED3DF78A9FF46(L_61, L_62, NULL);
	}

IL_0264:
	{
		// if (Input.GetKeyUp(KeyCode.S)) //Uncrouches when S is no longer held who would have thought.
		bool L_63;
		L_63 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)115), NULL);
		if (!L_63)
		{
			goto IL_02c2;
		}
	}
	{
		// if(state == State.crouching || state == State.crouchshooting)
		int32_t L_64 = __this->___state_4;
		if ((((int32_t)L_64) == ((int32_t)8)))
		{
			goto IL_0280;
		}
	}
	{
		int32_t L_65 = __this->___state_4;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_02c2;
		}
	}

IL_0280:
	{
		// state = State.idle;
		__this->___state_4 = 0;
		// transform.position = new Vector2(transform.position.x, -3.17f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		float L_69 = L_68.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_70), L_69, (-3.17000008f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_70, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_66, L_71, NULL);
		// col.size = standingSize;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_72 = __this->___col_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73 = __this->___standingSize_16;
		BoxCollider2D_set_size_mA69E48F639FFB614B5FC083D3FEED3DF78A9FF46(L_72, L_73, NULL);
	}

IL_02c2:
	{
		// if (knockback == true)
		bool L_74 = __this->___knockback_32;
		if (!L_74)
		{
			goto IL_02e7;
		}
	}
	{
		// rb.AddForce(dir * pushForce, ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_75 = __this->___rb_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = __this->___dir_51;
		float L_77 = __this->___pushForce_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78;
		L_78 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_76, L_77, NULL);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_75, L_78, 1, NULL);
	}

IL_02e7:
	{
		// Flip();
		PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E(__this, NULL);
		// if (Input.GetKeyDown(KeyCode.O) && data.heldElementalPowers > 0)
		bool L_79;
		L_79 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)111), NULL);
		if (!L_79)
		{
			goto IL_0324;
		}
	}
	{
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_80 = __this->___data_52;
		int32_t L_81 = L_80->___heldElementalPowers_14;
		if ((((int32_t)L_81) <= ((int32_t)0)))
		{
			goto IL_0324;
		}
	}
	{
		// data.heldElementalPowers--;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_82 = __this->___data_52;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_83 = L_82;
		int32_t L_84 = L_83->___heldElementalPowers_14;
		L_83->___heldElementalPowers_14 = ((int32_t)il2cpp_codegen_subtract(L_84, 1));
		// StartCoroutine(Defend());
		RuntimeObject* L_85;
		L_85 = PlayerController_Defend_m075D9383C1F48486D6961E1D550FC0E1A1C68A16(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_86;
		L_86 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_85, NULL);
	}

IL_0324:
	{
		// if (Input.GetKeyDown(KeyCode.N) || Input.GetKeyDown(KeyCode.M)){
		bool L_87;
		L_87 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)110), NULL);
		if (L_87)
		{
			goto IL_0336;
		}
	}
	{
		bool L_88;
		L_88 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)109), NULL);
		if (!L_88)
		{
			goto IL_0373;
		}
	}

IL_0336:
	{
		// if(data.healingEssence > 0){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_89 = __this->___data_52;
		int32_t L_90 = L_89->___healingEssence_15;
		if ((((int32_t)L_90) <= ((int32_t)0)))
		{
			goto IL_0373;
		}
	}
	{
		// healEssence();
		PlayerController_healEssence_m3CBC0E7E52622DB98160249C48CF06B957DDD51A(__this, NULL);
		// currentHealth = health + data.healthMod;
		float L_91 = __this->___health_24;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_92 = __this->___data_52;
		float L_93 = L_92->___healthMod_6;
		__this->___currentHealth_55 = ((float)il2cpp_codegen_add(L_91, L_93));
		// uiGM.SetHealth(currentHealth);
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_94 = __this->___uiGM_53;
		float L_95 = __this->___currentHealth_55;
		UIGameManager_SetHealth_m6379E9B7292A9A82A4E173A4BB1CA814590E550D(L_94, L_95, NULL);
	}

IL_0373:
	{
		// StateChange();
		PlayerController_StateChange_mA0EBC3DE3A9F67F550A2AA66A6B3BD3A353056A4(__this, NULL);
		// anim.SetInteger("state", (int)state);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_96 = __this->___anim_6;
		int32_t L_97 = __this->___state_4;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_96, _stringLiteralCA0AA89382EC9FBF76CB9BBEAB1872B5A701BEAA, L_97, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m68BFC8B882D42955A212B23E7D1DDD56CC87DB09 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// horizontal = Input.GetAxisRaw("Horizontal"); //Returns -1 if the input is A and 1 if the input is D
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___horizontal_8 = L_0;
		// if(state != State.crouching && state != State.crouchshooting)
		int32_t L_1 = __this->___state_4;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_2 = __this->___state_4;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)9))))
		{
			goto IL_005d;
		}
	}
	{
		// rb.velocity = new Vector2(horizontal * (speed + data.speedMod), rb.velocity.y); // Moves the player on the x-axis by taking a keyboard input and multipying it by the speed variable.
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rb_23;
		float L_4 = __this->___horizontal_8;
		float L_5 = __this->___speed_25;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_52;
		int32_t L_7 = L_6->___speedMod_7;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = __this->___rb_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_8, NULL);
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_multiply(L_4, ((float)il2cpp_codegen_add(L_5, ((float)L_7))))), L_10, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_3, L_11, NULL);
	}

IL_005d:
	{
		// if (Input.GetKeyDown(KeyCode.RightShift) && canDash)
		bool L_12;
		L_12 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)303), NULL);
		if (!L_12)
		{
			goto IL_0085;
		}
	}
	{
		bool L_13 = __this->___canDash_19;
		if (!L_13)
		{
			goto IL_0085;
		}
	}
	{
		// state = State.idle;
		__this->___state_4 = 0;
		// StartCoroutine(Dash());
		RuntimeObject* L_14;
		L_14 = PlayerController_Dash_m938DABEFCA1784F1F5783713E48D31AD457FAE7B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15;
		L_15 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_14, NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// grounded = false;
		__this->___grounded_28 = (bool)0;
		// jumpSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___jumpSound_38;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// rb.velocity = new Vector2(rb.velocity.x, jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rb_23;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_2, NULL);
		float L_4 = L_3.___x_0;
		float L_5 = __this->___jumpForce_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_4, L_5, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (isFacingRight && horizontal < 0f || !isFacingRight && horizontal > 0f) // Rotates the character's rotation by 180 degrees based on if the character is looking left or right
		bool L_0 = __this->___isFacingRight_13;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = __this->___horizontal_8;
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_002a;
		}
	}

IL_0015:
	{
		bool L_2 = __this->___isFacingRight_13;
		if (L_2)
		{
			goto IL_0053;
		}
	}
	{
		float L_3 = __this->___horizontal_8;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0053;
		}
	}

IL_002a:
	{
		// isFacingRight = !isFacingRight;
		bool L_4 = __this->___isFacingRight_13;
		__this->___isFacingRight_13 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		// transform.Rotate(0, -180f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_5, (0.0f), (-180.0f), (0.0f), NULL);
	}

IL_0053:
	{
		// transform.Rotate(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_6, (0.0f), (0.0f), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void PlayerController::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TakeDamage_m41351BE79FCE25287FB0A5D21FC6FDD4C9D6FE80 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, int32_t ___damage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject damagePoof = Instantiate(poof, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___poof_46;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// hurtSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___hurtSound_40;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// if (isInvincible == false)
		bool L_7 = __this->___isInvincible_33;
		if (L_7)
		{
			goto IL_0073;
		}
	}
	{
		// if (isDefending)
		bool L_8 = __this->___isDefending_34;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// health -= damage - 3;
		float L_9 = __this->___health_24;
		int32_t L_10 = ___damage0;
		__this->___health_24 = ((float)il2cpp_codegen_subtract(L_9, ((float)((int32_t)il2cpp_codegen_subtract(L_10, 3)))));
		goto IL_0066;
	}

IL_0050:
	{
		// health -= damage;
		float L_11 = __this->___health_24;
		int32_t L_12 = ___damage0;
		__this->___health_24 = ((float)il2cpp_codegen_subtract(L_11, ((float)L_12)));
		// state = State.hurt;
		__this->___state_4 = 6;
	}

IL_0066:
	{
		// StartCoroutine(Invincible());
		RuntimeObject* L_13;
		L_13 = PlayerController_Invincible_mD27DA051AAB9E69017732921F2EA7BE873E2CF2E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_0073:
	{
		// currentHealth = health + data.healthMod;
		float L_15 = __this->___health_24;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_16 = __this->___data_52;
		float L_17 = L_16->___healthMod_6;
		__this->___currentHealth_55 = ((float)il2cpp_codegen_add(L_15, L_17));
		// uiGM.SetHealth(currentHealth);
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_18 = __this->___uiGM_53;
		float L_19 = __this->___currentHealth_55;
		UIGameManager_SetHealth_m6379E9B7292A9A82A4E173A4BB1CA814590E550D(L_18, L_19, NULL);
		// if (currentHealth <= 0)
		float L_20 = __this->___currentHealth_55;
		if ((!(((float)L_20) <= ((float)(0.0f)))))
		{
			goto IL_00cf;
		}
	}
	{
		// boss.defeatSound.Play();
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_21 = __this->___boss_47;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = L_21->___defeatSound_15;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_22, NULL);
		// StopMovement();
		PlayerController_StopMovement_mA788659B3AD2F959DB0D37EDEB0B44CE77263922(__this, NULL);
		// anim.Play("Death");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___anim_6;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_23, _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Death_m192038221F40E89AF6336C97B6E2C417EB1D0B25 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::StopMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StopMovement_mA788659B3AD2F959DB0D37EDEB0B44CE77263922 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// col.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___col_21;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// if (grounded)
		bool L_1 = __this->___grounded_28;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(rb);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m28C67E4361403BA9990C1E6D9526F78362591667 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201E005A9C0DA581E3EDB697752C743ABAB5ADD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Damaging Entity")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral201E005A9C0DA581E3EDB697752C743ABAB5ADD0, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// Knockback(collision);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collision0;
		PlayerController_Knockback_m8CA12607988A44981D62608D162AB89D72DE2865(__this, L_4, NULL);
		return;
	}

IL_001f:
	{
		// else if(collision.gameObject.tag == "Enemy")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_5 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_5, NULL);
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		// Knockback(collision);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_9 = ___collision0;
		PlayerController_Knockback_m8CA12607988A44981D62608D162AB89D72DE2865(__this, L_9, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Knockback(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Knockback_m8CA12607988A44981D62608D162AB89D72DE2865 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	{
		// dir = (transform.position - collision.gameObject.transform.position); //Boy howdy programming a solution for this took way longer than it should have. do yall even read this? well if yall do i hope you're having a nice day/night whatever. Also uh this function basically calculates the direction the player should be knocked back into and pushes them in that direction
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_2 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		__this->___dir_51 = L_7;
		// dir.y = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___dir_51);
		L_8->___y_1 = (0.0f);
		// StartCoroutine(Knockback());
		RuntimeObject* L_9;
		L_9 = PlayerController_Knockback_mFA49CDDD72BC512DF20D78BD39A19249B50300E6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Footstep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Footstep_mC574863AF1846F477748B15106D762BDBC7AB6C8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (grounded)
		bool L_0 = __this->___grounded_28;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// footsteps.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___footsteps_37;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean PlayerController::isPlaying(UnityEngine.Animator,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_isPlaying_m6E93DFB3FDB302EACAC1CBD7829F56A9BDF6524B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim0, String_t* ___stateName1, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (anim.GetCurrentAnimatorStateInfo(animLayer).IsName(stateName) &&
		//         anim.GetCurrentAnimatorStateInfo(animLayer).normalizedTime < 1.0f)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___anim0;
		int32_t L_1 = __this->___animLayer_5;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2;
		L_2 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___stateName1;
		bool L_4;
		L_4 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = ___anim0;
		int32_t L_6 = __this->___animLayer_5;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_7;
		L_7 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_5, L_6, NULL);
		V_0 = L_7;
		float L_8;
		L_8 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_0), NULL);
		if ((!(((float)L_8) < ((float)(1.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0034:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void PlayerController::StateChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StateChange_mA0EBC3DE3A9F67F550A2AA66A6B3BD3A353056A4 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (state == State.hurt)
		int32_t L_0 = __this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0030;
		}
	}
	{
		// if (Mathf.Abs(rb.velocity.x) < .1f)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rb_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_1, NULL);
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = fabsf(L_3);
		if ((!(((float)L_4) < ((float)(0.100000001f)))))
		{
			goto IL_01e7;
		}
	}
	{
		// state = State.idle;
		__this->___state_4 = 0;
		return;
	}

IL_0030:
	{
		// else  if (!grounded && state != State.jumpshooting && state !=State.doublejump)
		bool L_5 = __this->___grounded_28;
		if (L_5)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_6 = __this->___state_4;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_7 = __this->___state_4;
		if ((((int32_t)L_7) == ((int32_t)7)))
		{
			goto IL_0052;
		}
	}
	{
		// state = State.jumping;
		__this->___state_4 = 2;
		return;
	}

IL_0052:
	{
		// else if (state == State.jumpshooting || state == State.jumping || state == State.doublejump)
		int32_t L_8 = __this->___state_4;
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_9 = __this->___state_4;
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_10 = __this->___state_4;
		if ((!(((uint32_t)L_10) == ((uint32_t)7))))
		{
			goto IL_0090;
		}
	}

IL_006d:
	{
		// if (grounded)
		bool L_11 = __this->___grounded_28;
		if (!L_11)
		{
			goto IL_01e7;
		}
	}
	{
		// if (Input.GetKey(KeyCode.J))
		bool L_12;
		L_12 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)106), NULL);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		// state = State.shooting;
		__this->___state_4 = 3;
	}

IL_0088:
	{
		// state = State.idle;
		__this->___state_4 = 0;
		return;
	}

IL_0090:
	{
		// else if (Mathf.Abs(rb.velocity.x) > 2f && state != State.jumpshooting && state != State.runshooting && state != State.crouching && grounded == true)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_13 = __this->___rb_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_13, NULL);
		float L_15 = L_14.___x_0;
		float L_16;
		L_16 = fabsf(L_15);
		if ((!(((float)L_16) > ((float)(2.0f)))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_17 = __this->___state_4;
		if ((((int32_t)L_17) == ((int32_t)4)))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_18 = __this->___state_4;
		if ((((int32_t)L_18) == ((int32_t)5)))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_19 = __this->___state_4;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_0122;
		}
	}
	{
		bool L_20 = __this->___grounded_28;
		if (!L_20)
		{
			goto IL_0122;
		}
	}
	{
		// state = State.walking;
		__this->___state_4 = 1;
		// if (state == State.walking && Input.GetKey(KeyCode.J) && grounded)
		int32_t L_21 = __this->___state_4;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_00f7;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)106), NULL);
		if (!L_22)
		{
			goto IL_00f7;
		}
	}
	{
		bool L_23 = __this->___grounded_28;
		if (!L_23)
		{
			goto IL_00f7;
		}
	}
	{
		// state = State.runshooting;
		__this->___state_4 = 5;
	}

IL_00f7:
	{
		// if (state == State.shooting && Input.GetKey(KeyCode.J) && grounded)
		int32_t L_24 = __this->___state_4;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_01e7;
		}
	}
	{
		bool L_25;
		L_25 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)106), NULL);
		if (!L_25)
		{
			goto IL_01e7;
		}
	}
	{
		bool L_26 = __this->___grounded_28;
		if (!L_26)
		{
			goto IL_01e7;
		}
	}
	{
		// state = State.runshooting;
		__this->___state_4 = 5;
		return;
	}

IL_0122:
	{
		// else if(state == State.walking)
		int32_t L_27 = __this->___state_4;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_015e;
		}
	}
	{
		// if(Mathf.Abs(rb.velocity.x) < 2f && state != State.crouching)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_28 = __this->___rb_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_28, NULL);
		float L_30 = L_29.___x_0;
		float L_31;
		L_31 = fabsf(L_30);
		if ((!(((float)L_31) < ((float)(2.0f)))))
		{
			goto IL_01e7;
		}
	}
	{
		int32_t L_32 = __this->___state_4;
		if ((((int32_t)L_32) == ((int32_t)8)))
		{
			goto IL_01e7;
		}
	}
	{
		// state = State.idle;
		__this->___state_4 = 0;
		return;
	}

IL_015e:
	{
		// else if (state == State.runshooting)
		int32_t L_33 = __this->___state_4;
		if ((!(((uint32_t)L_33) == ((uint32_t)5))))
		{
			goto IL_0186;
		}
	}
	{
		// if (rb.velocity.x == 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_34 = __this->___rb_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_34, NULL);
		float L_36 = L_35.___x_0;
		if ((!(((float)L_36) == ((float)(0.0f)))))
		{
			goto IL_01e7;
		}
	}
	{
		// state = State.idle;
		__this->___state_4 = 0;
		return;
	}

IL_0186:
	{
		// else if(state == State.shooting || state == State.crouchshooting)
		int32_t L_37 = __this->___state_4;
		if ((((int32_t)L_37) == ((int32_t)3)))
		{
			goto IL_0199;
		}
	}
	{
		int32_t L_38 = __this->___state_4;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_01e7;
		}
	}

IL_0199:
	{
		// counter -= Time.deltaTime;
		float L_39 = __this->___counter_54;
		float L_40;
		L_40 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___counter_54 = ((float)il2cpp_codegen_subtract(L_39, L_40));
		// if(counter <= 0 && state == State.shooting)
		float L_41 = __this->___counter_54;
		if ((!(((float)L_41) <= ((float)(0.0f)))))
		{
			goto IL_01c9;
		}
	}
	{
		int32_t L_42 = __this->___state_4;
		if ((!(((uint32_t)L_42) == ((uint32_t)3))))
		{
			goto IL_01c9;
		}
	}
	{
		// state = State.idle;
		__this->___state_4 = 0;
		return;
	}

IL_01c9:
	{
		// else if(counter <= 0 && state == State.crouchshooting)
		float L_43 = __this->___counter_54;
		if ((!(((float)L_43) <= ((float)(0.0f)))))
		{
			goto IL_01e7;
		}
	}
	{
		int32_t L_44 = __this->___state_4;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_01e7;
		}
	}
	{
		// state = State.crouching;
		__this->___state_4 = 8;
	}

IL_01e7:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::Knockback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Knockback_mFA49CDDD72BC512DF20D78BD39A19249B50300E6 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB* L_0 = (U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB*)il2cpp_codegen_object_new(U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB_il2cpp_TypeInfo_var);
		U3CKnockbackU3Ed__66__ctor_m8D2364FE21CB5991C4EE0BE26754BA232D5717FC(L_0, 0, NULL);
		U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::Invincible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Invincible_mD27DA051AAB9E69017732921F2EA7BE873E2CF2E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525* L_0 = (U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525*)il2cpp_codegen_object_new(U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525_il2cpp_TypeInfo_var);
		U3CInvincibleU3Ed__67__ctor_m7CF6963B9EBAD66AB1ED6916ACA21905D2CCA729(L_0, 0, NULL);
		U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::Dash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Dash_m938DABEFCA1784F1F5783713E48D31AD457FAE7B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228* L_0 = (U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228*)il2cpp_codegen_object_new(U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228_il2cpp_TypeInfo_var);
		U3CDashU3Ed__68__ctor_m0C5B5200B9EB557CFCD75EB0772828F0B53624C5(L_0, 0, NULL);
		U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::Defend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Defend_m075D9383C1F48486D6961E1D550FC0E1A1C68A16 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00* L_0 = (U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00*)il2cpp_codegen_object_new(U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00_il2cpp_TypeInfo_var);
		U3CDefendU3Ed__69__ctor_m315BF37A229FAD491966BC9023FC73966AE839F2(L_0, 0, NULL);
		U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerController::healEssence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_healEssence_m3CBC0E7E52622DB98160249C48CF06B957DDD51A (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if((maxHealth - health) < 6){
		float L_0 = __this->___maxHealth_50;
		float L_1 = __this->___health_24;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) < ((float)(6.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// healAmount = maxHealth - health;
		float L_2 = __this->___maxHealth_50;
		float L_3 = __this->___health_24;
		__this->___healAmount_15 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		goto IL_0034;
	}

IL_0029:
	{
		// healAmount = 6;
		__this->___healAmount_15 = (6.0f);
	}

IL_0034:
	{
		// health += healAmount;
		float L_4 = __this->___health_24;
		float L_5 = __this->___healAmount_15;
		__this->___health_24 = ((float)il2cpp_codegen_add(L_4, L_5));
		// data.healingEssence -= 1;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_52;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_7 = L_6;
		int32_t L_8 = L_7->___healingEssence_15;
		L_7->___healingEssence_15 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		// }
		return;
	}
}
// System.Single PlayerController::getHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_getHealth_m712A29BFED0BED37C19EFBCB7E456F291AF3C3C8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// return currentHealth + data.healthMod;
		float L_0 = __this->___currentHealth_55;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_1 = __this->___data_52;
		float L_2 = L_1->___healthMod_6;
		return ((float)il2cpp_codegen_add(L_0, L_2));
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// int superAttackCount = 1;
		__this->___superAttackCount_12 = 1;
		// private bool isFacingRight = true;
		__this->___isFacingRight_13 = (bool)1;
		// private bool canDash = true;
		__this->___canDash_19 = (bool)1;
		// private float defendCount = 1;
		__this->___defendCount_20 = (1.0f);
		// [SerializeField] private float pushForce = 3f;
		__this->___pushForce_22 = (3.0f);
		// [SerializeField] public float health = 6f;
		__this->___health_24 = (6.0f);
		// [SerializeField] private float speed = 500f;
		__this->___speed_25 = (500.0f);
		// [SerializeField] public bool grounded = true;
		__this->___grounded_28 = (bool)1;
		// [SerializeField] private float shootCooldown = 0.5f;
		__this->___shootCooldown_31 = (0.5f);
		// [SerializeField] private float dashingPower = 5f;
		__this->___dashingPower_45 = (5.0f);
		// private float dashingTime = 0.2f;
		__this->___dashingTime_48 = (0.200000003f);
		// private float dashingCooldown = 1f;
		__this->___dashingCooldown_49 = (1.0f);
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
// System.Void PlayerController/<Knockback>d__66::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKnockbackU3Ed__66__ctor_m8D2364FE21CB5991C4EE0BE26754BA232D5717FC (U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Knockback>d__66::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKnockbackU3Ed__66_System_IDisposable_Dispose_mE1B85DEF00E1A727673C2F97490A53F3B2F2AA0A (U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Knockback>d__66::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CKnockbackU3Ed__66_MoveNext_mF5BDD856C473CB96A234FC41BF85E82359B051F8 (U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// knockback = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		L_4->___knockback_32 = (bool)1;
		// yield return new WaitForSecondsRealtime(0.3f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_5 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_5, (0.300000012f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// knockback = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		L_6->___knockback_32 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Knockback>d__66::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKnockbackU3Ed__66_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8F50D658F4B29CF3B758E24E6B11FF032D34A321 (U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Knockback>d__66::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKnockbackU3Ed__66_System_Collections_IEnumerator_Reset_mD292D438D8715F06BD543B4BC0C99FC63EE72F64 (U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CKnockbackU3Ed__66_System_Collections_IEnumerator_Reset_mD292D438D8715F06BD543B4BC0C99FC63EE72F64_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Knockback>d__66::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKnockbackU3Ed__66_System_Collections_IEnumerator_get_Current_m1DDFBB1485F60935D6B65EE848F4A23636DEA86D (U3CKnockbackU3Ed__66_t959D2D595540FDFD240C52800D69FFBB63F61AEB* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<Invincible>d__67::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvincibleU3Ed__67__ctor_m7CF6963B9EBAD66AB1ED6916ACA21905D2CCA729 (U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Invincible>d__67::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvincibleU3Ed__67_System_IDisposable_Dispose_mF595245EDDA6BB95EBEE7356946BDB2185C02DE1 (U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Invincible>d__67::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInvincibleU3Ed__67_MoveNext_m79FDD5A88622CE6B7C2CCA2B3471941D5A05802B (U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isInvincible = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		L_4->___isInvincible_33 = (bool)1;
		// yield return new WaitForSecondsRealtime(0.5f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_5 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_5, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isInvincible = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		L_6->___isInvincible_33 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Invincible>d__67::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInvincibleU3Ed__67_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43CE228B43C45ACD49A574B9D31EE149B4186A3B (U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Invincible>d__67::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvincibleU3Ed__67_System_Collections_IEnumerator_Reset_mCF2AD58A0438ADF9B1351F117279C6BA9F023BBD (U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInvincibleU3Ed__67_System_Collections_IEnumerator_Reset_mCF2AD58A0438ADF9B1351F117279C6BA9F023BBD_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Invincible>d__67::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInvincibleU3Ed__67_System_Collections_IEnumerator_get_Current_m980FB8EA59AEBCDBCCC50686C306E294A55685DF (U3CInvincibleU3Ed__67_t826A09B0C957F36BF28BC7A779E22474B66DE525* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<Dash>d__68::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDashU3Ed__68__ctor_m0C5B5200B9EB557CFCD75EB0772828F0B53624C5 (U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Dash>d__68::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDashU3Ed__68_System_IDisposable_Dispose_m06C8058EB844225CC817D64E66D3FE15B63392D4 (U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Dash>d__68::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDashU3Ed__68_MoveNext_m0D09451E5DA0D6616C52A1972F48EDD5A0D18C3F (U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0114;
			}
			case 2:
			{
				goto IL_0165;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(data.dashBought == true){
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = V_1;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = L_3->___data_52;
		bool L_5 = L_4->___dashBought_9;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		// canDash = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		L_6->___canDash_19 = (bool)0;
		// dashSound.Play();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = L_7->___dashSound_44;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_8, NULL);
		// isDashing = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9 = V_1;
		L_9->___isDashing_35 = (bool)1;
		// float originalGravity = rb.gravityScale;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_11 = L_10->___rb_23;
		float L_12;
		L_12 = Rigidbody2D_get_gravityScale_mCFA8E159F51B876E16EEF634A63415F7051AFF44(L_11, NULL);
		__this->___U3CoriginalGravityU3E5__2_3 = L_12;
		// rb.gravityScale = 0f; //Makes it so gravity doesnt affect GlassCannon while dashing.
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_13 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_14 = L_13->___rb_23;
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_14, (0.0f), NULL);
		// if (isFacingRight)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_15 = V_1;
		bool L_16 = L_15->___isFacingRight_13;
		if (!L_16)
		{
			goto IL_00b5;
		}
	}
	{
		// rb.isKinematic = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_17 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18 = L_17->___rb_23;
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_18, (bool)0, NULL);
		// rb.velocity = new Vector2(transform.localScale.x * dashingPower, 0f);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_19 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_20 = L_19->___rb_23;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_21 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		float L_24 = L_23.___x_2;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_25 = V_1;
		float L_26 = L_25->___dashingPower_45;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), ((float)il2cpp_codegen_multiply(L_24, L_26)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_20, L_27, NULL);
		goto IL_00ee;
	}

IL_00b5:
	{
		// rb.isKinematic = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_28 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_29 = L_28->___rb_23;
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_29, (bool)0, NULL);
		// rb.velocity = new Vector2(-transform.localScale.x * dashingPower, 0f);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_30 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_31 = L_30->___rb_23;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_32 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_33, NULL);
		float L_35 = L_34.___x_2;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_36 = V_1;
		float L_37 = L_36->___dashingPower_45;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), ((float)il2cpp_codegen_multiply(((-L_35)), L_37)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_31, L_38, NULL);
	}

IL_00ee:
	{
		// trail.emitting = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_39 = V_1;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_40 = L_39->___trail_36;
		TrailRenderer_set_emitting_m16F5AF286796F5A3525EC91EAC427D61302A098B(L_40, (bool)1, NULL);
		// yield return new WaitForSeconds(dashingTime);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_41 = V_1;
		float L_42 = L_41->___dashingTime_48;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_43 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_43, L_42, NULL);
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0114:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// trail.emitting = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_44 = V_1;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_45 = L_44->___trail_36;
		TrailRenderer_set_emitting_m16F5AF286796F5A3525EC91EAC427D61302A098B(L_45, (bool)0, NULL);
		// rb.isKinematic = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_46 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_47 = L_46->___rb_23;
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_47, (bool)0, NULL);
		// rb.gravityScale = originalGravity;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_48 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_49 = L_48->___rb_23;
		float L_50 = __this->___U3CoriginalGravityU3E5__2_3;
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_49, L_50, NULL);
		// isDashing = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_51 = V_1;
		L_51->___isDashing_35 = (bool)0;
		// yield return new WaitForSeconds(dashingCooldown);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_52 = V_1;
		float L_53 = L_52->___dashingCooldown_49;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_54 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_54, L_53, NULL);
		__this->___U3CU3E2__current_1 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_54);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0165:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// canDash = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_55 = V_1;
		L_55->___canDash_19 = (bool)1;
	}

IL_0173:
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Dash>d__68::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDashU3Ed__68_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD8C3033858EF23D0B9F9ED6945248529FB521192 (U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Dash>d__68::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDashU3Ed__68_System_Collections_IEnumerator_Reset_mF4FD27291DFA9C60CEC577C26BC30F75CC2B0CF9 (U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDashU3Ed__68_System_Collections_IEnumerator_Reset_mF4FD27291DFA9C60CEC577C26BC30F75CC2B0CF9_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Dash>d__68::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDashU3Ed__68_System_Collections_IEnumerator_get_Current_mAC8F517465B20B0742B4587F805968242DF15041 (U3CDashU3Ed__68_tB76A00293C4D18D158BDD89CCFA6CF59F1E70228* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<Defend>d__69::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefendU3Ed__69__ctor_m315BF37A229FAD491966BC9023FC73966AE839F2 (U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Defend>d__69::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefendU3Ed__69_System_IDisposable_Dispose_mDDD4CC5EF7511FB4A09D2109C0C1E5AAA12147D3 (U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Defend>d__69::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDefendU3Ed__69_MoveNext_m0A4EFD85028FA3438D44BAFF81E8338B0C1C47A5 (U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4_mC1FEC140467A24786989EF9991C556868E02CBBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isDefending = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		L_4->___isDefending_34 = (bool)1;
		// gameObject.GetComponent<FlashOnHit>().MultiFlash();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		FlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4* L_7;
		L_7 = GameObject_GetComponent_TisFlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4_mC1FEC140467A24786989EF9991C556868E02CBBC(L_6, GameObject_GetComponent_TisFlashOnHit_t3849A138530A6CB05F18D1A88CAED1FB31A043E4_mC1FEC140467A24786989EF9991C556868E02CBBC_RuntimeMethod_var);
		FlashOnHit_MultiFlash_m495219C276D62FBA5B58C55E6D26E73F05F74AC7(L_7, NULL);
		// yield return new WaitForSecondsRealtime(2f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_8 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_8, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isDefending = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9 = V_1;
		L_9->___isDefending_34 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Defend>d__69::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefendU3Ed__69_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8132CB338C7913326DC6D887B4C8CDC9648F6E18 (U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Defend>d__69::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefendU3Ed__69_System_Collections_IEnumerator_Reset_m9A4FDE4495772B07BD9E9B28CD0922CFF4068BF6 (U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDefendU3Ed__69_System_Collections_IEnumerator_Reset_m9A4FDE4495772B07BD9E9B28CD0922CFF4068BF6_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Defend>d__69::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefendU3Ed__69_System_Collections_IEnumerator_get_Current_mF06A00838064EFEE4E2D6EA99E66A3DDA108E15D (U3CDefendU3Ed__69_tCAB5B943D3DF47BF65C872C785A85BE172C47C00* __this, const RuntimeMethod* method) 
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
// System.Void PlayerProjectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProjectile_Update_m6996C5F84FCBD90BF31C170E68DC66F2DE26630B (PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* __this, const RuntimeMethod* method) 
{
	{
		// transform.position += transform.right * Time.deltaTime * speed; //Shoots the projectile forward based on player position.
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_3, NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		float L_7 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_8, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_9, NULL);
		// }
		return;
	}
}
// System.Void PlayerProjectile::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProjectile_OnCollisionEnter2D_mBC8CD213F30ABBFBDB8D5FC8B15C1C77736817BF (PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A_mD17749A3B8E062EA0F31C2E564890A39074364DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCEED6F48A1F4B605BC5637D10D8B2730CBB04B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( collision.transform.tag == "Enemy")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_0081;
		}
	}
	{
		// if(data.doubAttBought == false){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_6;
		bool L_5 = L_4->___doubAttBought_12;
		if (L_5)
		{
			goto IL_0050;
		}
	}
	{
		// collision.gameObject.GetComponent<BossController>().TakeDamage(damage + data.attackMod);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_6 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_6, NULL);
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_8;
		L_8 = GameObject_GetComponent_TisBossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A_mD17749A3B8E062EA0F31C2E564890A39074364DF(L_7, GameObject_GetComponent_TisBossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A_mD17749A3B8E062EA0F31C2E564890A39074364DF_RuntimeMethod_var);
		int32_t L_9 = __this->___damage_5;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_10 = __this->___data_6;
		int32_t L_11 = L_10->___attackMod_8;
		BossController_TakeDamage_mECD12B0A883B0831410593DE6BEFEBA03C5646DB(L_8, ((int32_t)il2cpp_codegen_add(L_9, L_11)), NULL);
		// Debug.Log("should do it");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFCEED6F48A1F4B605BC5637D10D8B2730CBB04B2, NULL);
	}

IL_0050:
	{
		// if (data.doubAttBought == true){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_12 = __this->___data_6;
		bool L_13 = L_12->___doubAttBought_12;
		if (!L_13)
		{
			goto IL_0081;
		}
	}
	{
		// collision.gameObject.GetComponent<BossController>().TakeDamage(2*(damage + data.attackMod));
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_14 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_14, NULL);
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_16;
		L_16 = GameObject_GetComponent_TisBossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A_mD17749A3B8E062EA0F31C2E564890A39074364DF(L_15, GameObject_GetComponent_TisBossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A_mD17749A3B8E062EA0F31C2E564890A39074364DF_RuntimeMethod_var);
		int32_t L_17 = __this->___damage_5;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_18 = __this->___data_6;
		int32_t L_19 = L_18->___attackMod_8;
		BossController_TakeDamage_mECD12B0A883B0831410593DE6BEFEBA03C5646DB(L_16, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(L_17, L_19)))), NULL);
	}

IL_0081:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_20, NULL);
		// }
		return;
	}
}
// System.Void PlayerProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProjectile__ctor_m521DC3076D456C51A6685D36DA94A1590C1A2516 (PlayerProjectile_t5B124968B29665E520A7EEDA83111A25EAFFC0BF* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 8f;
		__this->___speed_4 = (8.0f);
		// public int damage = 1;
		__this->___damage_5 = 1;
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
// System.Void PuddleSlide::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuddleSlide_Start_mB7C6F1A4B6A6A52FD9C1F4F4205101D6A8293EAA (PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer = 3;
		__this->___timer_8 = (3.0f);
		// playerRB = player.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_5;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_0, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		__this->___playerRB_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRB_4), (void*)L_1);
		// dir = transform.position - player.gameObject.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___player_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		__this->___dir_7 = L_9;
		// dir.y = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___dir_7);
		L_10->___y_1 = (0.0f);
		// }
		return;
	}
}
// System.Void PuddleSlide::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuddleSlide_Update_m7664C3A899107BBE98D352225ABEF38E13D2398D (PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer -= Time.deltaTime;
		float L_0 = __this->___timer_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if(timer <= 0)
		float L_2 = __this->___timer_8;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void PuddleSlide::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuddleSlide_OnTriggerEnter2D_mDAE54DFED013A98765ACCBAB849A96AB22BB4618 (PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// collision.gameObject.GetComponent<PlayerController>().jumpForce = 0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_5, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		L_6->___jumpForce_29 = (0.0f);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void PuddleSlide::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuddleSlide_OnTriggerExit2D_mF23E0FFFE11BF9EDD40BD21469F5F43E02BD1DAB (PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// collision.gameObject.GetComponent<PlayerController>().jumpForce = 5;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_5, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		L_6->___jumpForce_29 = (5.0f);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void PuddleSlide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuddleSlide__ctor_mFE726A0E228633F45C3CEA551A3CE0002F97DBF2 (PuddleSlide_tB05E11FD096D3C2BE66972B9789AD1CC9C8C5BD6* __this, const RuntimeMethod* method) 
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
// System.Void PullTowards::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTowards_Start_mA1B998AA59F353C38756CE53ABAAFD7DAE82FE77 (PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerRB = player.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_0, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		__this->___playerRB_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRB_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void PullTowards::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTowards_Update_mD1643DA3CC6B6D12227B8864C04A95D635597DE6 (PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* __this, const RuntimeMethod* method) 
{
	{
		// dir = transform.position - player.gameObject.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		__this->___dir_7 = L_7;
		// dir.y = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___dir_7);
		L_8->___y_1 = (0.0f);
		// playerRB.AddForce(dir.normalized * windSpeed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___playerRB_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___dir_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_10, NULL);
		float L_12 = __this->___windSpeed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_11, L_12, NULL);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_9, L_13, NULL);
		// }
		return;
	}
}
// System.Void PullTowards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTowards__ctor_m031BCA5CB21F90D26BC167F6C69CB8687F6656CF (PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float windSpeed = 3;
		__this->___windSpeed_4 = (3.0f);
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
// System.Void PushAway::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushAway_Start_m489371F5A6BCA5E38B9A1FB979C68C12640EB555 (PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerRB = player.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_0, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		__this->___playerRB_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRB_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void PushAway::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushAway_Update_m51584A8DBAE45F2C57DDFE80B57613496F8A6A15 (PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* __this, const RuntimeMethod* method) 
{
	{
		// dir = player.gameObject.transform.position - transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		__this->___dir_7 = L_7;
		// dir.y = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___dir_7);
		L_8->___y_1 = (0.0f);
		// playerRB.AddForce(dir.normalized * windSpeed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___playerRB_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___dir_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_10, NULL);
		float L_12 = __this->___windSpeed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_11, L_12, NULL);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_9, L_13, NULL);
		// }
		return;
	}
}
// System.Void PushAway::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushAway__ctor_m30ECE465FC0AE3B79275FED8727CE5BFCC19F608 (PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float windSpeed = 3;
		__this->___windSpeed_4 = (3.0f);
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
// System.Void TimerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript_Start_mC066FA62F50E6D58B359518C642CE9005E3344D0 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, const RuntimeMethod* method) 
{
	{
		// TimerOn = true;
		__this->___TimerOn_6 = (bool)1;
		// if (data.timeBought == false){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_4;
		bool L_1 = L_0->___timeBought_13;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// TimeLeft = 60;
		__this->___TimeLeft_5 = (60.0f);
	}

IL_001f:
	{
		// if (data.timeBought == true){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_4;
		bool L_3 = L_2->___timeBought_13;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// TimeLeft = 120;
		__this->___TimeLeft_5 = (120.0f);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void TimerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript_Update_m45499011F7FDAC924A920E475712C081C0E00133 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, const RuntimeMethod* method) 
{
	{
		// if(TimerOn){
		bool L_0 = __this->___TimerOn_6;
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		// if(TimeLeft > 0){
		float L_1 = __this->___TimeLeft_5;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// TimeLeft -= Time.deltaTime;
		float L_2 = __this->___TimeLeft_5;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___TimeLeft_5 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// updateTimer(TimeLeft);
		float L_4 = __this->___TimeLeft_5;
		TimerScript_updateTimer_mE5554D2DACC992570416C538810EF95681E360A9(__this, L_4, NULL);
		return;
	}

IL_0034:
	{
		// TimeLeft = 0;
		__this->___TimeLeft_5 = (0.0f);
		// TimerOn = false;
		__this->___TimerOn_6 = (bool)0;
		// TimerText.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___TimerText_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void TimerScript::updateTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript_updateTimer_mE5554D2DACC992570416C538810EF95681E360A9 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, float ___currentTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE7F174AA19633DF63A75D4720838FD9898B55C);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// currentTime += 1;
		float L_0 = ___currentTime0;
		___currentTime0 = ((float)il2cpp_codegen_add(L_0, (1.0f)));
		// float minutes = Mathf.FloorToInt(currentTime / 60);
		float L_1 = ___currentTime0;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_1/(60.0f))), NULL);
		V_0 = ((float)L_2);
		// float seconds = Mathf.FloorToInt(currentTime % 60);
		float L_3 = ___currentTime0;
		int32_t L_4;
		L_4 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline((fmodf(L_3, (60.0f))), NULL);
		V_1 = ((float)L_4);
		// TimerText.text = string.Format("{0:00} : {1:00}", minutes, seconds);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___TimerText_7;
		float L_6 = V_0;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		float L_9 = V_1;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralCCE7F174AA19633DF63A75D4720838FD9898B55C, L_8, L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_12);
		// }
		return;
	}
}
// System.Void TimerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript__ctor_m5341AAB8DB0EEC08CC13E3AFC70E88E04F577ADC (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, const RuntimeMethod* method) 
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
// System.Void TreeHollowScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeHollowScript_OnTriggerEnter2D_mF38EBD181E2B2BE187E6F80E514C473D4EDE8607 (TreeHollowScript_t83302A45C06F8270823C949D0D4BC12BB97D3AAE* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A8B3270291AA5F18FFA97453A2963119A236F74);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Vine" || collision.gameObject.tag == "Enemy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral9A8B3270291AA5F18FFA97453A2963119A236F74, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}

IL_002e:
	{
		// if(vineArms[0] == null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___vineArms_4;
		int32_t L_9 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// vineArms[0] = collision.gameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___vineArms_4;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_14);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void TreeHollowScript::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeHollowScript_OnTriggerExit2D_mC766A924414C34E71004A0FB9906CA19F81FA01B (TreeHollowScript_t83302A45C06F8270823C949D0D4BC12BB97D3AAE* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// vineArms[0] = null;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___vineArms_4;
		ArrayElementTypeCheck (L_0, NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void TreeHollowScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeHollowScript__ctor_m1CDBF2B774935D2581403DDE68269551F4D26632 (TreeHollowScript_t83302A45C06F8270823C949D0D4BC12BB97D3AAE* __this, const RuntimeMethod* method) 
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
// System.Void UIGameManager::mouseOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOff_mB49393F53A6252DD6E956157F10571B1631949BC (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// darkScabbardTextBox.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverAttack_m8DFEA5572628931D6344A0D244087210CF0AC769 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EFB2A43C07F788ACAB38D6B805BE9AC4DB21D6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "One extra point of attack costs "+ data.attackPrice+ " Renown.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t* L_3 = (&L_2->___attackPrice_17);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0EFB2A43C07F788ACAB38D6B805BE9AC4DB21D6C, L_4, _stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverHealth_m34A49BA4F823FF2F39B6100D9724EC394949F403 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A001925EC5635C455EF4564A5EBEFBA2C3694E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "One extra point of health costs "+ data.healthPrice+ " Renown.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t* L_3 = (&L_2->___healthPrice_18);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral2A001925EC5635C455EF4564A5EBEFBA2C3694E2, L_4, _stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverSpeed_mE585CBC516313C8F4A5048C5D9DAD3554932C307 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC85A896B09DF1D7F4CFA8D4C0E876AF2206E0067);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "One extra point of speed costs "+ data.speedPrice+ " Renown.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t* L_3 = (&L_2->___speedPrice_19);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC85A896B09DF1D7F4CFA8D4C0E876AF2206E0067, L_4, _stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverDash_m0EE12CB3BC7A71CA4930A1C9A2A56D06A193C2F6 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033CD9E91437D67E4FEEEDA8A193F4E789B16FA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "The ability to dash costs "+ data.dashPrice+ " Renown.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t* L_3 = (&L_2->___dashPrice_20);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral033CD9E91437D67E4FEEEDA8A193F4E789B16FA9, L_4, _stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverTime_m46C43D500CB88BE6D5755C70F021BE8D40D71F8C (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF00B5237C1FC0463231E9D2E6CE7A6F568851F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "Extra time costs "+ data.timePrice+ " Renown.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t* L_3 = (&L_2->___timePrice_24);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7EF00B5237C1FC0463231E9D2E6CE7A6F568851F, L_4, _stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverDoubleJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverDoubleJump_mC449F67FCE27D7E7439D4910C22D3510E35CF63C (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9E04E9DA5E464CE47859C54C13A147DE41779A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "The ability to double jump costs "+ data.doublePrice+ " Renown.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t* L_3 = (&L_2->___doublePrice_21);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralE9E04E9DA5E464CE47859C54C13A147DE41779A9, L_4, _stringLiteralC687AE2ECDABE0E88D47C3C71B8D941955A5A11A, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverHealing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverHealing_m05F778A5879A6C4568747A7880E3407C238B726F (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068B22ACF600ECBE7F98BDF7FE088B8AD7177F46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70563BEAFCFFDECDB57126E6D40EEFB8A850F340);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "A Healing Essence costs "+ data.healingPrice+ " Essence and can be used in battle to heal yourself.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t* L_3 = (&L_2->___healingPrice_26);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral068B22ACF600ECBE7F98BDF7FE088B8AD7177F46, L_4, _stringLiteral70563BEAFCFFDECDB57126E6D40EEFB8A850F340, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverHalfDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverHalfDamage_mAA77527C6CBDEF166DCA184138BBDF742D12AA11 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55EE082EF68CBD803E91FC0BC7B669804C08292B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC35F4C5697E9D6D7CED8930E06BC60CBF73C1E76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "It costs "+ data.halfDamagePrice+ " Renown to make bosses do 1/2 damage.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t* L_3 = (&L_2->___halfDamagePrice_23);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral55EE082EF68CBD803E91FC0BC7B669804C08292B, L_4, _stringLiteralC35F4C5697E9D6D7CED8930E06BC60CBF73C1E76, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverElementalPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverElementalPower_m22DC52D6169E2F4102D1C398D15DFF7A2584D0B6 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83EE4C7004342DC2EEEC76B50778E6943B193786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AC397301FEA3378118DB7745630BD325E9D6E1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC1718851612D10ED675D84468FA7CD9A079512);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "An Elemental Power costs "+ data.elementalPowerPrice+ " Renown and "+ data.elementalPowerPrice+ " Essence for extra damage to bosses.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral83EE4C7004342DC2EEEC76B50778E6943B193786);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral83EE4C7004342DC2EEEC76B50778E6943B193786);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_15;
		int32_t* L_6 = (&L_5->___elementalPowerPrice_25);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_4;
		ArrayElementTypeCheck (L_8, _stringLiteralCDC1718851612D10ED675D84468FA7CD9A079512);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralCDC1718851612D10ED675D84468FA7CD9A079512);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_10 = __this->___data_15;
		int32_t* L_11 = (&L_10->___elementalPowerPrice_25);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_9;
		ArrayElementTypeCheck (L_13, _stringLiteral8AC397301FEA3378118DB7745630BD325E9D6E1F);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8AC397301FEA3378118DB7745630BD325E9D6E1F);
		String_t* L_14;
		L_14 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_14);
		// }
		return;
	}
}
// System.Void UIGameManager::mouseOverDoubleAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_mouseOverDoubleAttack_m54BB41F473FFC38555CE8D83E2D3F63B0DBC0825 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02C0BF0F9E328EC681A030927F523A58B74FB3CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55EE082EF68CBD803E91FC0BC7B669804C08292B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// darkScabbardTextBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___darkScabbardTextBox_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// darkScabbardText.text = "It costs "+ data.doubAttPrice+ " Renown to double your attack.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___darkScabbardText_14;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t* L_3 = (&L_2->___doubAttPrice_22);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral55EE082EF68CBD803E91FC0BC7B669804C08292B, L_4, _stringLiteral02C0BF0F9E328EC681A030927F523A58B74FB3CE, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void UIGameManager::buyAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buyAttack_m18E07D0436905E35732E229D93A0FDF672565E04 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if(data.renown >= data.attackPrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___attackPrice_17;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0056;
		}
	}
	{
		// data.increaseDamage();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		KeptData_increaseDamage_m672F84B3FA0A20BAFDB742881F9B890BF940BA3D(L_4, NULL);
		// data.loseRenown(data.attackPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_15;
		int32_t L_7 = L_6->___attackPrice_17;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// data.attackPrice += data.attackPrice;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_9 = L_8;
		int32_t L_10 = L_9->___attackPrice_17;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_15;
		int32_t L_12 = L_11->___attackPrice_17;
		L_9->___attackPrice_17 = ((int32_t)il2cpp_codegen_add(L_10, L_12));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::buyHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buyHealth_mF688E96A6B647D9CDAADB51AEEB74E603D05B0AB (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float GChealth = pc.getHealth();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = __this->___pc_16;
		float L_1;
		L_1 = PlayerController_getHealth_m712A29BFED0BED37C19EFBCB7E456F291AF3C3C8(L_0, NULL);
		V_0 = L_1;
		// if(data.renown >= data.healthPrice && ((GChealth + data.healthMod) < 18)){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		int32_t L_5 = L_4->___healthPrice_18;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_006d;
		}
	}
	{
		float L_6 = V_0;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_7 = __this->___data_15;
		float L_8 = L_7->___healthMod_6;
		if ((!(((float)((float)il2cpp_codegen_add(L_6, L_8))) < ((float)(18.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		// data.increaseHealth();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_9 = __this->___data_15;
		KeptData_increaseHealth_m6D8A91515241B0551D28BC27AA3AABC3187AA80B(L_9, NULL);
		// data.loseRenown(data.healthPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_10 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_15;
		int32_t L_12 = L_11->___healthPrice_18;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_10, L_12, NULL);
		// data.healthPrice += 10;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_13 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_14 = L_13;
		int32_t L_15 = L_14->___healthPrice_18;
		L_14->___healthPrice_18 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)10)));
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::buySpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buySpeed_m421C183CAB54D6B9B0D299C5D7013F4A1F95AAD6 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if(data.renown >= data.speedPrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___speedPrice_19;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0056;
		}
	}
	{
		// data.increaseSpeed();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		KeptData_increaseSpeed_m4F874E5ABF5BB56A0930647B97821698E40B4B7D(L_4, NULL);
		// data.loseRenown(data.speedPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_15;
		int32_t L_7 = L_6->___speedPrice_19;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// data.speedPrice += data.speedPrice;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_9 = L_8;
		int32_t L_10 = L_9->___speedPrice_19;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_15;
		int32_t L_12 = L_11->___speedPrice_19;
		L_9->___speedPrice_19 = ((int32_t)il2cpp_codegen_add(L_10, L_12));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::buyDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buyDash_m1DEDA48094212C05580FB16AB296E56CAC988B1F (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if (data.renown >= data.dashPrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___dashPrice_20;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0045;
		}
	}
	{
		// data.unlockDash();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		KeptData_unlockDash_mA22B56A55F872610B0A9D45A2CF498EB04A9DD79(L_4, NULL);
		// data.loseRenown(data.dashPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_15;
		int32_t L_7 = L_6->___dashPrice_20;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// dashButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___dashButton_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::buyDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buyDouble_m936D8B6C0CDB0E5A187ABABF855B9091FC328838 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if (data.renown >= data.doublePrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___doublePrice_21;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0045;
		}
	}
	{
		// data.unlockDouble();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		KeptData_unlockDouble_mED43CAE64B61820F35088102680F5FE33F99EC43(L_4, NULL);
		// data.loseRenown(data.doublePrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_15;
		int32_t L_7 = L_6->___doublePrice_21;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// doubleButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___doubleButton_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::buyTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buyTime_mAE53F297DE6D4D33A60E431AB2CD923AB4A89A8E (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if (data.renown >= data.timePrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___timePrice_24;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0056;
		}
	}
	{
		// data.buyTime();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		KeptData_buyTime_m172EADFB4AD7D6FDE91006E9E13E73EDF9A6A2EA(L_4, NULL);
		// data.loseRenown(data.timePrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_15;
		int32_t L_7 = L_6->___timePrice_24;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// data.timePrice += data.timePrice;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_9 = L_8;
		int32_t L_10 = L_9->___timePrice_24;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_15;
		int32_t L_12 = L_11->___timePrice_24;
		L_9->___timePrice_24 = ((int32_t)il2cpp_codegen_add(L_10, L_12));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::buyHalfDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buyHalfDamage_mF836571009BD69675F7E8CF1A6F2E78707F5ED61 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if (data.renown >= data.halfDamagePrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___halfDamagePrice_23;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0045;
		}
	}
	{
		// data.halfDamageUnlock();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		KeptData_halfDamageUnlock_m4017532285B004F617E1C8891FC36E97A6635641(L_4, NULL);
		// data.loseRenown(data.halfDamagePrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_15;
		int32_t L_7 = L_6->___halfDamagePrice_23;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// halfDamageButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___halfDamageButton_11;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::buyDoubAtt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buyDoubAtt_m66DAEDDF1867FFFDF084D89775B9983EDAAA6ED9 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if (data.renown >= data.doubAttPrice){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___doubAttPrice_22;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0045;
		}
	}
	{
		// data.buyDoubAtt();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		KeptData_buyDoubAtt_m1E285C89EBDABEB305C74987DC41A32E0A4AB757(L_4, NULL);
		// data.loseRenown(data.doubAttPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_5 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_15;
		int32_t L_7 = L_6->___doubAttPrice_22;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_5, L_7, NULL);
		// doubAttButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___doubAttButton_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::buyElementPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buyElementPower_mB840B03FE27B61FCFAED600D9B7817EBB442A8B0 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if(data.renown >= data.elementalPowerPrice && data.essences >= data.elementalPowerPrice && data.heldElementalPowers < 5){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___renown_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___elementalPowerPrice_25;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0075;
		}
	}
	{
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		int32_t L_5 = L_4->___essences_5;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_15;
		int32_t L_7 = L_6->___elementalPowerPrice_25;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0075;
		}
	}
	{
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_15;
		int32_t L_9 = L_8->___heldElementalPowers_14;
		if ((((int32_t)L_9) >= ((int32_t)5)))
		{
			goto IL_0075;
		}
	}
	{
		// data.buyElementalPower();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_10 = __this->___data_15;
		KeptData_buyElementalPower_m067BC18AF5C83CEF833E3DA22728588C82402CD3(L_10, NULL);
		// data.loseRenown(data.elementalPowerPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_12 = __this->___data_15;
		int32_t L_13 = L_12->___elementalPowerPrice_25;
		KeptData_loseRenown_m3F15D492463CF4036D4B1FBB5DBDA4919F846C9F(L_11, L_13, NULL);
		// data.loseEssence(data.elementalPowerPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_14 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_15 = __this->___data_15;
		int32_t L_16 = L_15->___elementalPowerPrice_25;
		KeptData_loseEssence_m7969D0D5927F40591AE9A68A1AA1048AFBC70D02(L_14, L_16, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::buyHealing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_buyHealing_m4536311FABBFC8328886F5DEFB3E4751FE809923 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if(data.essences >= data.healingPrice && data.healingEssence < 5){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___essences_5;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___healingPrice_26;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0047;
		}
	}
	{
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_4 = __this->___data_15;
		int32_t L_5 = L_4->___healingEssence_15;
		if ((((int32_t)L_5) >= ((int32_t)5)))
		{
			goto IL_0047;
		}
	}
	{
		// data.buyHealing();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_6 = __this->___data_15;
		KeptData_buyHealing_m930AFE1A84B8D569F263C25BBE48BE438E938153(L_6, NULL);
		// data.loseEssence(data.healingPrice);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_7 = __this->___data_15;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_8 = __this->___data_15;
		int32_t L_9 = L_8->___healingPrice_26;
		KeptData_loseEssence_m7969D0D5927F40591AE9A68A1AA1048AFBC70D02(L_7, L_9, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::toggleOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_toggleOff_mF5A80FACD343648F8DAFF26E8B298BC3C0B59871 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// shopMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shopMenu_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::beginBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_beginBattle_m3E273232C7B9DACDBBDDADB4FBC5CE2315F9ECF0 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3543B1B7A1251000EA83C627F81556C12C006E57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// if(data.defeatedBossNumber == 0){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_0 = __this->___data_15;
		int32_t L_1 = L_0->___defeatedBossNumber_16;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		// SceneManager.LoadScene("SampleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
	}

IL_0021:
	{
		// if(data.defeatedBossNumber == 1){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_2 = __this->___data_15;
		int32_t L_3 = L_2->___defeatedBossNumber_16;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		// SceneManager.LoadScene("OrangeLevel");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3543B1B7A1251000EA83C627F81556C12C006E57, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::SetMaxHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_SetMaxHealth_mBA9C9DE5A921DF05DDDA9B3D2F7232F1C9F712CF (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, float ___health0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(slider != null){
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// slider.maxValue = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___slider_18;
		float L_3 = ___health0;
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_2, L_3, NULL);
		// slider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_18;
		float L_5 = ___health0;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_5);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::SetHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_SetHealth_m6379E9B7292A9A82A4E173A4BB1CA814590E550D (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, float ___health0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(slider != null){
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// slider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___slider_18;
		float L_3 = ___health0;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_3);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::SetBossMaxHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_SetBossMaxHealth_mD7718E930255F8DE75F1CA03A379E294908F25CA (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, float ___health0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(bossSlider != null){
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___bossSlider_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// bossSlider.maxValue = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___bossSlider_19;
		float L_3 = ___health0;
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_2, L_3, NULL);
		// bossSlider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___bossSlider_19;
		float L_5 = ___health0;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_5);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::SetBossHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_SetBossHealth_m936355881B46A1A12E2686EDDAB50E42D3C8258D (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, float ___health0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(bossSlider != null){
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___bossSlider_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// bossSlider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___bossSlider_19;
		float L_3 = ___health0;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_3);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::OpenDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_OpenDoor_mA4B4CA067A331AB54C8E9A687CB35514B8753968 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(equipMenu != null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___equipMenu_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// equipMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___equipMenu_22;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::Play_Button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Play_Button_m880E8376811AC18B0D7A5C4D9AE7A7BCAC5F9D56 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A1E743152441D5897B17BC48E995CFD54CC6D39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(LoadLevel("Coliseum"));
		RuntimeObject* L_0;
		L_0 = UIGameManager_LoadLevel_m5A7E2B2D8FC3406EA96B452B05BA8DE423B75DB2(__this, _stringLiteral8A1E743152441D5897B17BC48E995CFD54CC6D39, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::openControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_openControls_m1320A7676B07107611D96C29D5465593E938B7AC (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// if(!controlsOpen){
		bool L_0 = __this->___controlsOpen_26;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// controlsImage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___controlsImage_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// controlsOpen = true;
		__this->___controlsOpen_26 = (bool)1;
		return;
	}

IL_001c:
	{
		// controlsImage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___controlsImage_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// controlsOpen = false;
		__this->___controlsOpen_26 = (bool)0;
		// }
		return;
	}
}
// System.Collections.IEnumerator UIGameManager::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIGameManager_LoadLevel_m5A7E2B2D8FC3406EA96B452B05BA8DE423B75DB2 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, String_t* ___levelIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* L_0 = (U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114*)il2cpp_codegen_object_new(U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114_il2cpp_TypeInfo_var);
		U3CLoadLevelU3Ed__53__ctor_mFA6FD2E44AD62191DD83477D2534E395499B0309(L_0, 0, NULL);
		U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* L_2 = L_1;
		String_t* L_3 = ___levelIndex0;
		L_2->___levelIndex_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___levelIndex_3), (void*)L_3);
		return L_2;
	}
}
// System.Void UIGameManager::hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_hide_mB9AF58A79E1D867C29EC2F1587068924BD4DA17C (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// vicScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___vicScreen_32;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_show_mD844CF589998EC733E987A125C644C83EABE9E6C (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// vicScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___vicScreen_32;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::victory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_victory_m4AFC7F03360BED8604750D90FE84D50C8C17382B (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// victoryObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___victoryObj_35;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::defeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_defeat_m500B82808AD451AF263AC67FD364037E8AB02D67 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// defeatObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___defeatObj_36;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Resume_m5A3D918E6E74A66AF2C608FB056057932DEFFDE9 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuUI_49;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// GameIsPaused = false;
		((UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_StaticFields*)il2cpp_codegen_static_fields_for(UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_il2cpp_TypeInfo_var))->___GameIsPaused_48 = (bool)0;
		// playerObject.GetComponent<PlayerController>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___playerObject_46;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_1, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// if(bossObject.GetComponent<PullTowards>() != null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___bossObject_47;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_4;
		L_4 = GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81(L_3, GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// bossObject.GetComponent<PullTowards>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___bossObject_47;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_7;
		L_7 = GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81(L_6, GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
	}

IL_0051:
	{
		// if(bossObject.GetComponent<PushAway>() != null ){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___bossObject_47;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_9;
		L_9 = GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE(L_8, GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		// bossObject.GetComponent<PushAway>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___bossObject_47;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_12;
		L_12 = GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE(L_11, GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)1, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Pause_m95364418C17541B7F5F26162A2043B7C5A814A6A (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuUI_49;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// GameIsPaused = true;
		((UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_StaticFields*)il2cpp_codegen_static_fields_for(UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_il2cpp_TypeInfo_var))->___GameIsPaused_48 = (bool)1;
		// playerObject.GetComponent<PlayerController>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___playerObject_46;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_1, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// if(bossObject.GetComponent<PullTowards>() != null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___bossObject_47;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_4;
		L_4 = GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81(L_3, GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// bossObject.GetComponent<PullTowards>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___bossObject_47;
		PullTowards_t769B328782574CF6B034060DB4255A4F9B51038B* L_7;
		L_7 = GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81(L_6, GameObject_GetComponent_TisPullTowards_t769B328782574CF6B034060DB4255A4F9B51038B_mB682CFBE787DEE4F18D0C4AB637DA174DC7A1A81_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
	}

IL_0051:
	{
		// if(bossObject.GetComponent<PushAway>() != null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___bossObject_47;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_9;
		L_9 = GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE(L_8, GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		// bossObject.GetComponent<PushAway>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___bossObject_47;
		PushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75* L_12;
		L_12 = GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE(L_11, GameObject_GetComponent_TisPushAway_tC004F8AF88045C08B40F0497DDB19FE8451CBD75_m8555ABE22A72084ADF339F39B766296077CA63CE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)0, NULL);
	}

IL_0075:
	{
		// EventSystem.current.SetSelectedGameObject(null);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_13;
		L_13 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_13, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// EventSystem.current.SetSelectedGameObject(pauseFirstButton);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_14;
		L_14 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pauseFirstButton_45;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::LoadMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_LoadMainMenu_m5EDF5C169250F4E1B160918C2876BB035D7167C6 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// StartCoroutine(LoadLevel("Main Menu"));
		RuntimeObject* L_0;
		L_0 = UIGameManager_LoadLevel_m5A7E2B2D8FC3406EA96B452B05BA8DE423B75DB2(__this, _stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_QuitGame_mA8CE373B35C906EE1E4364072F513B140640C871 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Back_m4E843CFAF16F605D611BB2FCC45DF3200E6E096F (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D55B47531F63746B8E5A7B9B459605F08C5F89B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Resume(); //i just made it so this button unpauses the game for now
		UIGameManager_Resume_m5A3D918E6E74A66AF2C608FB056057932DEFFDE9(__this, NULL);
		// Debug.Log("I am the back button ~> still in progress");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7D55B47531F63746B8E5A7B9B459605F08C5F89B, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Start_m991FC4B830510F6D2F06B50F7CC82A8B505B9343 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(script != null && script2 != null){
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = __this->___script_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_2 = __this->___script2_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// initBoss = script2.getHealth(); //Sets current boss health
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_4 = __this->___script2_31;
		float L_5;
		L_5 = BossController_getHealth_mF528BC0852BD83C576BBD068BC923E64388BA408_inline(L_4, NULL);
		__this->___initBoss_42 = L_5;
		// run = true;
		__this->___run_44 = (bool)1;
	}

IL_0034:
	{
		// pauseMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___pauseMenuUI_49;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIGameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Update_m181B5D522476CC7DDD9637210C6F0DFC5C8D96ED (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2059F61430BFD2694C34433FE0D030CA76CA718B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A57470536163F266B2FDEA5764C64DBB0DB7E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral666CE8017D86620669CA0B096CF4432FC11637E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE967F23A1FD47B62C21D80FF127DA08D38BA445);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5F1C416E1B575C17CDC503EEDA793AA9263BAAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7BEE7F10A24BD13BAB78BC2758506E1366A7A19);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(buyAttackText != null && buyHealthText != null && buySpeedText != null && renownTextShop != null && essenceTextShop.text != null){
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___buyAttackText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_010d;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___buyHealthText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_010d;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___buySpeedText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_010d;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___renownTextShop_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_010d;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___essenceTextShop_8;
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_8);
		if (!L_9)
		{
			goto IL_010d;
		}
	}
	{
		// buyAttackText.text = "Buy Attack: "+data.attackPrice;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___buyAttackText_4;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_11 = __this->___data_15;
		int32_t* L_12 = (&L_11->___attackPrice_17);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2059F61430BFD2694C34433FE0D030CA76CA718B, L_13, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_14);
		// buyHealthText.text = "Buy Health: "+data.healthPrice;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___buyHealthText_5;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_16 = __this->___data_15;
		int32_t* L_17 = (&L_16->___healthPrice_18);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral64A57470536163F266B2FDEA5764C64DBB0DB7E1, L_18, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_19);
		// buySpeedText.text = "Buy Speed: "+data.speedPrice ;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___buySpeedText_6;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_21 = __this->___data_15;
		int32_t* L_22 = (&L_21->___speedPrice_19);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE5F1C416E1B575C17CDC503EEDA793AA9263BAAD, L_23, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_24);
		// renownTextShop.text = "Renown: " + data.renown;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___renownTextShop_7;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_26 = __this->___data_15;
		int32_t* L_27 = (&L_26->___renown_4);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF7BEE7F10A24BD13BAB78BC2758506E1366A7A19, L_28, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_29);
		// essenceTextShop.text = "Essences: " + data.essences;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___essenceTextShop_8;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_31 = __this->___data_15;
		int32_t* L_32 = (&L_31->___essences_5);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAE967F23A1FD47B62C21D80FF127DA08D38BA445, L_33, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_34);
	}

IL_010d:
	{
		// if(data.dashBought == true){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_35 = __this->___data_15;
		bool L_36 = L_35->___dashBought_9;
		if (!L_36)
		{
			goto IL_0126;
		}
	}
	{
		// dashButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___dashButton_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
	}

IL_0126:
	{
		// if(data.doubleJumpBought == true){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_38 = __this->___data_15;
		bool L_39 = L_38->___doubleJumpBought_10;
		if (!L_39)
		{
			goto IL_013f;
		}
	}
	{
		// doubleButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___doubleButton_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
	}

IL_013f:
	{
		// if(data.halfDamageBought == true){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_41 = __this->___data_15;
		bool L_42 = L_41->___halfDamageBought_11;
		if (!L_42)
		{
			goto IL_0158;
		}
	}
	{
		// doubleButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___doubleButton_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
	}

IL_0158:
	{
		// if(data.doubAttBought == true){
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_44 = __this->___data_15;
		bool L_45 = L_44->___doubAttBought_12;
		if (!L_45)
		{
			goto IL_0171;
		}
	}
	{
		// halfDamageButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___halfDamageButton_11;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
	}

IL_0171:
	{
		// if(script != null && script2 != null && victoryObj != null && defeatObj != null){
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_47 = __this->___script_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_47, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_48)
		{
			goto IL_042a;
		}
	}
	{
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_49 = __this->___script2_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_042a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___victoryObj_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_042a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___defeatObj_36;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_53, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_54)
		{
			goto IL_042a;
		}
	}
	{
		// health = script.getHealth();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_55 = __this->___script_30;
		float L_56;
		L_56 = PlayerController_getHealth_m712A29BFED0BED37C19EFBCB7E456F291AF3C3C8(L_55, NULL);
		__this->___health_40 = L_56;
		// bossHealth = script2.getHealth();
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_57 = __this->___script2_31;
		float L_58;
		L_58 = BossController_getHealth_mF528BC0852BD83C576BBD068BC923E64388BA408_inline(L_57, NULL);
		__this->___bossHealth_41 = L_58;
		// checker = (initBoss - bossHealth)/initBoss; //value to check for percent of boss health depleted
		float L_59 = __this->___initBoss_42;
		float L_60 = __this->___bossHealth_41;
		float L_61 = __this->___initBoss_42;
		__this->___checker_43 = ((float)(((float)il2cpp_codegen_subtract(L_59, L_60))/L_61));
		// if(checker >= 0.25 && checker < 0.5){
		float L_62 = __this->___checker_43;
		if ((!(((double)((double)L_62)) >= ((double)(0.25)))))
		{
			goto IL_0228;
		}
	}
	{
		float L_63 = __this->___checker_43;
		if ((!(((double)((double)L_63)) < ((double)(0.5)))))
		{
			goto IL_0228;
		}
	}
	{
		// essenceVal = 1;
		__this->___essenceVal_37 = 1;
		// renown = 1;
		__this->___renown_39 = 1;
		goto IL_02b6;
	}

IL_0228:
	{
		// else if(checker >= 0.5 && checker < 0.75){
		float L_64 = __this->___checker_43;
		if ((!(((double)((double)L_64)) >= ((double)(0.5)))))
		{
			goto IL_025c;
		}
	}
	{
		float L_65 = __this->___checker_43;
		if ((!(((double)((double)L_65)) < ((double)(0.75)))))
		{
			goto IL_025c;
		}
	}
	{
		// essenceVal = 2;
		__this->___essenceVal_37 = 2;
		// renown = 2;
		__this->___renown_39 = 2;
		goto IL_02b6;
	}

IL_025c:
	{
		// else if(checker >= 0.75 && checker < 1){
		float L_66 = __this->___checker_43;
		if ((!(((double)((double)L_66)) >= ((double)(0.75)))))
		{
			goto IL_028b;
		}
	}
	{
		float L_67 = __this->___checker_43;
		if ((!(((float)L_67) < ((float)(1.0f)))))
		{
			goto IL_028b;
		}
	}
	{
		// essenceVal = 3;
		__this->___essenceVal_37 = 3;
		// renown = 3;
		__this->___renown_39 = 3;
		goto IL_02b6;
	}

IL_028b:
	{
		// else if(checker >= 1){
		float L_68 = __this->___checker_43;
		if ((!(((float)L_68) >= ((float)(1.0f)))))
		{
			goto IL_02a8;
		}
	}
	{
		// essenceVal = 5;
		__this->___essenceVal_37 = 5;
		// renown = 5;
		__this->___renown_39 = 5;
		goto IL_02b6;
	}

IL_02a8:
	{
		// essenceVal = 0;
		__this->___essenceVal_37 = 0;
		// renown = 0;
		__this->___renown_39 = 0;
	}

IL_02b6:
	{
		// int elementals = data.heldElementalPowers;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_69 = __this->___data_15;
		int32_t L_70 = L_69->___heldElementalPowers_14;
		V_0 = L_70;
		// int healingtxt = data.healingEssence;
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_71 = __this->___data_15;
		int32_t L_72 = L_71->___healingEssence_15;
		V_1 = L_72;
		// elemPowers.text = "x"+elementals.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_73 = __this->___elemPowers_20;
		String_t* L_74;
		L_74 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_75;
		L_75 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_74, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_73, L_75);
		// healing.text = "x"+healingtxt.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_76 = __this->___healing_21;
		String_t* L_77;
		L_77 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_78;
		L_78 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_77, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_76, L_78);
		// essenceTextResult.text = "Essence: " + essenceVal.ToString(); //Strings for End Screen
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_79 = __this->___essenceTextResult_27;
		int32_t* L_80 = (&__this->___essenceVal_37);
		String_t* L_81;
		L_81 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_80, NULL);
		String_t* L_82;
		L_82 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral666CE8017D86620669CA0B096CF4432FC11637E1, L_81, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_79, L_82);
		// renownTextResult.text = "Renown: " + renown.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_83 = __this->___renownTextResult_28;
		int32_t* L_84 = (&__this->___renown_39);
		String_t* L_85;
		L_85 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_84, NULL);
		String_t* L_86;
		L_86 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF7BEE7F10A24BD13BAB78BC2758506E1366A7A19, L_85, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_83, L_86);
		// if(health <= 0 || bossHealth <= 0 || timer.TimeLeft <= 0){
		float L_87 = __this->___health_40;
		if ((((float)L_87) <= ((float)(0.0f))))
		{
			goto IL_0372;
		}
	}
	{
		float L_88 = __this->___bossHealth_41;
		if ((((float)L_88) <= ((float)(0.0f))))
		{
			goto IL_0372;
		}
	}
	{
		TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* L_89 = __this->___timer_34;
		float L_90 = L_89->___TimeLeft_5;
		if ((!(((float)L_90) <= ((float)(0.0f)))))
		{
			goto IL_03e1;
		}
	}

IL_0372:
	{
		// show();
		UIGameManager_show_mD844CF589998EC733E987A125C644C83EABE9E6C(__this, NULL);
		// if (script == null && script2 == null)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_91 = __this->___script_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_91, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_92)
		{
			goto IL_03ae;
		}
	}
	{
		BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* L_93 = __this->___script2_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_93, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_94)
		{
			goto IL_03ae;
		}
	}
	{
		// if(run == true)
		bool L_95 = __this->___run_44;
		if (!L_95)
		{
			goto IL_03ae;
		}
	}
	{
		// Calculate(renown, essenceVal);
		int32_t L_96 = __this->___renown_39;
		int32_t L_97 = __this->___essenceVal_37;
		UIGameManager_Calculate_m0812B3C1DB13CF715E76B5D46FC52DD26F6227FD(__this, L_96, L_97, NULL);
	}

IL_03ae:
	{
		// if (run == true){
		bool L_98 = __this->___run_44;
		if (!L_98)
		{
			goto IL_03e7;
		}
	}
	{
		// data.addRenown(renown);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_99 = __this->___data_15;
		int32_t L_100 = __this->___renown_39;
		KeptData_addRenown_mC41662C0A130FF83F54A013FB3041EEF8B3DEA45(L_99, L_100, NULL);
		// data.addEssence(essenceVal);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_101 = __this->___data_15;
		int32_t L_102 = __this->___essenceVal_37;
		KeptData_addEssence_m904F3856242F8BB6AD0659EE5929F3461D71ACF9(L_101, L_102, NULL);
		// run = false;
		__this->___run_44 = (bool)0;
		goto IL_03e7;
	}

IL_03e1:
	{
		// hide();
		UIGameManager_hide_mB9AF58A79E1D867C29EC2F1587068924BD4DA17C(__this, NULL);
	}

IL_03e7:
	{
		// if (bossHealth == 0){
		float L_103 = __this->___bossHealth_41;
		if ((!(((float)L_103) == ((float)(0.0f)))))
		{
			goto IL_0405;
		}
	}
	{
		// victory();
		UIGameManager_victory_m4AFC7F03360BED8604750D90FE84D50C8C17382B(__this, NULL);
		// data.bossDefeat();
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_104 = __this->___data_15;
		KeptData_bossDefeat_m178C4F0A288C75F97523C6AC56A667A61A9DA557(L_104, NULL);
	}

IL_0405:
	{
		// if (health <= 0 || timer.TimeLeft == 0){
		float L_105 = __this->___health_40;
		if ((((float)L_105) <= ((float)(0.0f))))
		{
			goto IL_0424;
		}
	}
	{
		TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* L_106 = __this->___timer_34;
		float L_107 = L_106->___TimeLeft_5;
		if ((!(((float)L_107) == ((float)(0.0f)))))
		{
			goto IL_042a;
		}
	}

IL_0424:
	{
		// defeat();
		UIGameManager_defeat_m500B82808AD451AF263AC67FD364037E8AB02D67(__this, NULL);
	}

IL_042a:
	{
		// if(playerObject != null && pauseFirstButton != null &&  pauseMenuUI != null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108 = __this->___playerObject_46;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_109;
		L_109 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_108, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_109)
		{
			goto IL_0471;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = __this->___pauseFirstButton_45;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_110, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_111)
		{
			goto IL_0471;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112 = __this->___pauseMenuUI_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_113;
		L_113 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_112, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_113)
		{
			goto IL_0471;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.Escape))
		bool L_114;
		L_114 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_114)
		{
			goto IL_0471;
		}
	}
	{
		// if (GameIsPaused)
		bool L_115 = ((UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_StaticFields*)il2cpp_codegen_static_fields_for(UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445_il2cpp_TypeInfo_var))->___GameIsPaused_48;
		if (!L_115)
		{
			goto IL_046b;
		}
	}
	{
		// Resume();
		UIGameManager_Resume_m5A3D918E6E74A66AF2C608FB056057932DEFFDE9(__this, NULL);
		return;
	}

IL_046b:
	{
		// Pause();
		UIGameManager_Pause_m95364418C17541B7F5F26162A2043B7C5A814A6A(__this, NULL);
	}

IL_0471:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::Calculate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager_Calculate_m0812B3C1DB13CF715E76B5D46FC52DD26F6227FD (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, int32_t ___renown0, int32_t ___essenceVal1, const RuntimeMethod* method) 
{
	{
		// if(run == true)
		bool L_0 = __this->___run_44;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// data.addRenown(renown);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_1 = __this->___data_15;
		int32_t L_2 = ___renown0;
		KeptData_addRenown_mC41662C0A130FF83F54A013FB3041EEF8B3DEA45(L_1, L_2, NULL);
		// data.addEssence(essenceVal);
		KeptData_tCF0FAD49E10EFE38DEB2DC7B6F0BFA1043F9D95E* L_3 = __this->___data_15;
		int32_t L_4 = ___essenceVal1;
		KeptData_addEssence_m904F3856242F8BB6AD0659EE5929F3461D71ACF9(L_3, L_4, NULL);
		// gc.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___gc_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// run = false;
		__this->___run_44 = (bool)0;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void UIGameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameManager__ctor_m4FF605AC5513D8186D8076806B5744AC466EF556 (UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* __this, const RuntimeMethod* method) 
{
	{
		// public float trasitionTime = 1f;
		__this->___trasitionTime_24 = (1.0f);
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
// System.Void UIGameManager/<LoadLevel>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__53__ctor_mFA6FD2E44AD62191DD83477D2534E395499B0309 (U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UIGameManager/<LoadLevel>d__53::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__53_System_IDisposable_Dispose_m5D57DA4F1D6772B88537498AAB5267123FCA6C9E (U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UIGameManager/<LoadLevel>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadLevelU3Ed__53_MoveNext_mEDA4D94503C1BCFD923755CE2E2CC62C91B72625 (U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// transition.SetTrigger("Start");
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_4 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___transition_23;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		// yield return new WaitForSeconds(trasitionTime);
		UIGameManager_t129A5A9D0F94410488BC1562A31974FBC9467445* L_6 = V_1;
		float L_7 = L_6->___trasitionTime_24;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(levelIndex);
		String_t* L_9 = __this->___levelIndex_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object UIGameManager/<LoadLevel>d__53::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadLevelU3Ed__53_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m78ECAA64CB4843F3F1CCD5E45EE4E97DD668007C (U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UIGameManager/<LoadLevel>d__53::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelU3Ed__53_System_Collections_IEnumerator_Reset_mF988023BD0F11FCA2AA0C6ABE5E2E458B91779DE (U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadLevelU3Ed__53_System_Collections_IEnumerator_Reset_mF988023BD0F11FCA2AA0C6ABE5E2E458B91779DE_RuntimeMethod_var)));
	}
}
// System.Object UIGameManager/<LoadLevel>d__53::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadLevelU3Ed__53_System_Collections_IEnumerator_get_Current_mFF8FDF2C9DFCB60BFC24D51D305DFCA7B29CCD96 (U3CLoadLevelU3Ed__53_t09003F788D7B44C15DBA4470C7CE583778A7E114* __this, const RuntimeMethod* method) 
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
// System.Void VineArmController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VineArmController_Start_m19423B433BE7859568D8EAB19D759A8F656AE8A5 (VineArmController_t03E4D9647EABCF92D0BD3035BEC6832ED1DCE504* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.position = startPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___startPoint_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// Vector3 newPos = new Vector3(transform.position.x + 0.3f, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_add(L_5, (0.300000012f))), L_8, L_11, NULL);
		// transform.position = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
		// gameObject.transform.parent = startPoint.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___startPoint_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_15, L_17, NULL);
		// }
		return;
	}
}
// System.Void VineArmController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VineArmController_FixedUpdate_m3C9BE1EC33480E5A1C31A3361D96E2752D6E72BA (VineArmController_t03E4D9647EABCF92D0BD3035BEC6832ED1DCE504* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (player != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0080;
		}
	}
	{
		// Vector3 vectorToTarget = player.transform.position - transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_6, NULL);
		V_0 = L_7;
		// float angle = Mathf.Atan2(vectorToTarget.y, vectorToTarget.x) * Mathf.Rad2Deg - rotationModifier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___x_2;
		float L_12;
		L_12 = atan2f(L_9, L_11);
		float L_13 = __this->___rotationModifier_8;
		// Quaternion q = Quaternion.AngleAxis(angle, Vector3.forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_12, (57.2957802f))), L_13)), L_14, NULL);
		V_1 = L_15;
		// transform.rotation = Quaternion.Slerp(transform.rotation, q, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_1;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_21 = __this->___speed_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_22, NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void VineArmController::RotateTowardsTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VineArmController_RotateTowardsTarget_m709DBE2D8465A792CD5E0B2458AFCFC6205BBEA0 (VineArmController_t03E4D9647EABCF92D0BD3035BEC6832ED1DCE504* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var offset = 90f;
		V_0 = (90.0f);
		// direction.Normalize();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___direction_6);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_0, NULL);
		// float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___direction_6);
		float L_2 = L_1->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___direction_6);
		float L_4 = L_3->___x_0;
		float L_5;
		L_5 = atan2f(L_2, L_4);
		V_1 = ((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		// transform.rotation = Quaternion.Euler(Vector3.forward * (angle + offset));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_8 = V_1;
		float L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, ((float)il2cpp_codegen_add(L_8, L_9)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_10, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_11, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion VineArmController::LookAt2D(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 VineArmController_LookAt2D_m10B81B0D897C1041C58680DBE4C24F961046A007 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___forward0, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Euler(0, 0, Mathf.Atan2(forward.y, forward.x) * Mathf.Rad2Deg);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___forward0;
		float L_1 = L_0.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___forward0;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_4, (57.2957802f))), NULL);
		return L_5;
	}
}
// System.Void VineArmController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VineArmController__ctor_m77F6D3FABCDD236F4323C6020C982BEFFAD9E76C (VineArmController_t03E4D9647EABCF92D0BD3035BEC6832ED1DCE504* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BossController_getHealth_mF528BC0852BD83C576BBD068BC923E64388BA408_inline (BossController_t5890E9FFA3F9B4C1075FC9611214B340B108F65A* __this, const RuntimeMethod* method) 
{
	{
		// return health;
		float L_0 = __this->___health_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
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
