// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_CoreBaseHudWidget_generated_h
#error "CoreBaseHudWidget.generated.h already included, missing '#pragma once' in CoreBaseHudWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreBaseHudWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_RPC_WRAPPERS \
	virtual void PlayFocusAnimation_Implementation(); \
	virtual bool ShouldPlayFocusAnimation_Implementation() const; \
 \
	DECLARE_FUNCTION(execPlayFocusAnimation); \
	DECLARE_FUNCTION(execShouldPlayFocusAnimation);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayFocusAnimation_Implementation(); \
	virtual bool ShouldPlayFocusAnimation_Implementation() const; \
 \
	DECLARE_FUNCTION(execPlayFocusAnimation); \
	DECLARE_FUNCTION(execShouldPlayFocusAnimation);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_EVENT_PARMS \
	struct CoreBaseHudWidget_eventShouldPlayFocusAnimation_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CoreBaseHudWidget_eventShouldPlayFocusAnimation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreBaseHudWidget(); \
	friend struct Z_Construct_UClass_UCoreBaseHudWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreBaseHudWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreBaseHudWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCoreBaseHudWidget(); \
	friend struct Z_Construct_UClass_UCoreBaseHudWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreBaseHudWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreBaseHudWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreBaseHudWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreBaseHudWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreBaseHudWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreBaseHudWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreBaseHudWidget(UCoreBaseHudWidget&&); \
	NO_API UCoreBaseHudWidget(const UCoreBaseHudWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreBaseHudWidget(UCoreBaseHudWidget&&); \
	NO_API UCoreBaseHudWidget(const UCoreBaseHudWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreBaseHudWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreBaseHudWidget); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCoreBaseHudWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FocusAnimationDuration() { return STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationDuration); } \
	FORCEINLINE static uint32 __PPO__FocusAnimationDelay() { return STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationDelay); } \
	FORCEINLINE static uint32 __PPO__FocusAnimationEasing() { return STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationEasing); } \
	FORCEINLINE static uint32 __PPO__FocusAnimationMaxOpacity() { return STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationMaxOpacity); } \
	FORCEINLINE static uint32 __PPO__FocusAnimationMinOpacity() { return STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationMinOpacity); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreBaseHudWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseHudWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
