// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
struct FGeometry;
class UTexture2D;
class UMaterialInstance;
class UCurveFloat;
enum class EButtonWidgetVisibility : uint8;
#ifdef DBDUIVIEWSCORE_CoreButtonWidget_generated_h
#error "CoreButtonWidget.generated.h already included, missing '#pragma once' in CoreButtonWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreButtonWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_35_DELEGATE \
struct CoreButtonWidget_eventOnClickedDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FOnClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnClickedDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	CoreButtonWidget_eventOnClickedDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	OnClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_33_DELEGATE \
struct CoreButtonWidget_eventOnHoveredDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FOnHoveredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHoveredDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	CoreButtonWidget_eventOnHoveredDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	OnHoveredDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_31_DELEGATE \
struct CoreButtonWidget_eventOnPressedDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FOnPressedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPressedDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	CoreButtonWidget_eventOnPressedDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	OnPressedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_29_DELEGATE \
struct CoreButtonWidget_eventOnReleasedDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FOnReleasedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReleasedDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	CoreButtonWidget_eventOnReleasedDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	OnReleasedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_27_DELEGATE \
struct CoreButtonWidget_eventOnUnhoveredDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FOnUnhoveredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUnhoveredDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	CoreButtonWidget_eventOnUnhoveredDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	OnUnhoveredDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHitzonePaintSpaceGeometry); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execOnInternalClicked); \
	DECLARE_FUNCTION(execOnInternalHovered); \
	DECLARE_FUNCTION(execOnInternalLongPressed); \
	DECLARE_FUNCTION(execOnInternalPressed); \
	DECLARE_FUNCTION(execOnInternalReleased); \
	DECLARE_FUNCTION(execOnInternalUnhovered); \
	DECLARE_FUNCTION(execSetAdditionalIcon); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execSetBackground); \
	DECLARE_FUNCTION(execSetChargeable); \
	DECLARE_FUNCTION(execSetClickable); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetHoldable); \
	DECLARE_FUNCTION(execSetHoverable); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetPressable); \
	DECLARE_FUNCTION(execSetRepeatable); \
	DECLARE_FUNCTION(execSetVisible);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHitzonePaintSpaceGeometry); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execOnInternalClicked); \
	DECLARE_FUNCTION(execOnInternalHovered); \
	DECLARE_FUNCTION(execOnInternalLongPressed); \
	DECLARE_FUNCTION(execOnInternalPressed); \
	DECLARE_FUNCTION(execOnInternalReleased); \
	DECLARE_FUNCTION(execOnInternalUnhovered); \
	DECLARE_FUNCTION(execSetAdditionalIcon); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execSetBackground); \
	DECLARE_FUNCTION(execSetChargeable); \
	DECLARE_FUNCTION(execSetClickable); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetHoldable); \
	DECLARE_FUNCTION(execSetHoverable); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetPressable); \
	DECLARE_FUNCTION(execSetRepeatable); \
	DECLARE_FUNCTION(execSetVisible);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_EVENT_PARMS \
	struct CoreButtonWidget_eventOnAlignmentChanged_Parms \
	{ \
		TEnumAsByte<ETextJustify::Type> newAlignment; \
	}; \
	struct CoreButtonWidget_eventOnEnabledChanged_Parms \
	{ \
		bool isEnabled; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreButtonWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCoreButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreButtonWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreButtonWidget(UCoreButtonWidget&&); \
	NO_API UCoreButtonWidget(const UCoreButtonWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreButtonWidget(UCoreButtonWidget&&); \
	NO_API UCoreButtonWidget(const UCoreButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitzoneButton() { return STRUCT_OFFSET(UCoreButtonWidget, HitzoneButton); } \
	FORCEINLINE static uint32 __PPO__LabelTB() { return STRUCT_OFFSET(UCoreButtonWidget, LabelTB); } \
	FORCEINLINE static uint32 __PPO___alignment() { return STRUCT_OFFSET(UCoreButtonWidget, _alignment); } \
	FORCEINLINE static uint32 __PPO__SendAnalyticsData() { return STRUCT_OFFSET(UCoreButtonWidget, SendAnalyticsData); } \
	FORCEINLINE static uint32 __PPO__AnalyticsName() { return STRUCT_OFFSET(UCoreButtonWidget, AnalyticsName); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
