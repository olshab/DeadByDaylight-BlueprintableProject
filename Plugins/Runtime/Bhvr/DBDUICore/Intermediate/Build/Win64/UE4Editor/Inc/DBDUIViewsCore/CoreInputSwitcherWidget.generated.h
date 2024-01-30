// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
class UCoreKeyListenerInputPromptWidget;
class UTexture2D;
class UMaterialInstance;
struct FKey;
class UCurveFloat;
enum class EUIActionType : uint8;
#ifdef DBDUIVIEWSCORE_CoreInputSwitcherWidget_generated_h
#error "CoreInputSwitcherWidget.generated.h already included, missing '#pragma once' in CoreInputSwitcherWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreInputSwitcherWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_RPC_WRAPPERS \
	virtual void OnAlignmentChanged_Implementation(ETextJustify::Type newAlignment); \
 \
	DECLARE_FUNCTION(execGetButton); \
	DECLARE_FUNCTION(execGetInputPrompt); \
	DECLARE_FUNCTION(execOnAlignmentChanged); \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execOnInputPromptTriggered); \
	DECLARE_FUNCTION(execSetAdditionalIcon); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execSetBackground); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetKeyOverride); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetRepeatable); \
	DECLARE_FUNCTION(execSetUIAction);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAlignmentChanged_Implementation(ETextJustify::Type newAlignment); \
 \
	DECLARE_FUNCTION(execGetButton); \
	DECLARE_FUNCTION(execGetInputPrompt); \
	DECLARE_FUNCTION(execOnAlignmentChanged); \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execOnInputPromptTriggered); \
	DECLARE_FUNCTION(execSetAdditionalIcon); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execSetBackground); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetKeyOverride); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetRepeatable); \
	DECLARE_FUNCTION(execSetUIAction);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_EVENT_PARMS \
	struct CoreInputSwitcherWidget_eventOnAlignmentChanged_Parms \
	{ \
		TEnumAsByte<ETextJustify::Type> newAlignment; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreInputSwitcherWidget(); \
	friend struct Z_Construct_UClass_UCoreInputSwitcherWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreInputSwitcherWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreInputSwitcherWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCoreInputSwitcherWidget(); \
	friend struct Z_Construct_UClass_UCoreInputSwitcherWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreInputSwitcherWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreInputSwitcherWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreInputSwitcherWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreInputSwitcherWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreInputSwitcherWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreInputSwitcherWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreInputSwitcherWidget(UCoreInputSwitcherWidget&&); \
	NO_API UCoreInputSwitcherWidget(const UCoreInputSwitcherWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreInputSwitcherWidget(UCoreInputSwitcherWidget&&); \
	NO_API UCoreInputSwitcherWidget(const UCoreInputSwitcherWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreInputSwitcherWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreInputSwitcherWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreInputSwitcherWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputPrompt() { return STRUCT_OFFSET(UCoreInputSwitcherWidget, InputPrompt); } \
	FORCEINLINE static uint32 __PPO__Button() { return STRUCT_OFFSET(UCoreInputSwitcherWidget, Button); } \
	FORCEINLINE static uint32 __PPO___shouldRegisterForInputInConstruct() { return STRUCT_OFFSET(UCoreInputSwitcherWidget, _shouldRegisterForInputInConstruct); } \
	FORCEINLINE static uint32 __PPO___alignment() { return STRUCT_OFFSET(UCoreInputSwitcherWidget, _alignment); } \
	FORCEINLINE static uint32 __PPO___isEnabled() { return STRUCT_OFFSET(UCoreInputSwitcherWidget, _isEnabled); } \
	FORCEINLINE static uint32 __PPO___onInputSwitcherTriggeredDelegate() { return STRUCT_OFFSET(UCoreInputSwitcherWidget, _onInputSwitcherTriggeredDelegate); } \
	FORCEINLINE static uint32 __PPO__SendAnalyticsData() { return STRUCT_OFFSET(UCoreInputSwitcherWidget, SendAnalyticsData); } \
	FORCEINLINE static uint32 __PPO__AnalyticsName() { return STRUCT_OFFSET(UCoreInputSwitcherWidget, AnalyticsName); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_20_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreInputSwitcherWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputSwitcherWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
