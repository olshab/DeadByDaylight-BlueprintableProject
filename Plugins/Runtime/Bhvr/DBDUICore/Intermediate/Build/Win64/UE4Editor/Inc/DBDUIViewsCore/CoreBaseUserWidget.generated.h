// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidgetAnimation;
enum class EControlMode : uint8;
#ifdef DBDUIVIEWSCORE_CoreBaseUserWidget_generated_h
#error "CoreBaseUserWidget.generated.h already included, missing '#pragma once' in CoreBaseUserWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreBaseUserWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_RPC_WRAPPERS \
	virtual void UpdateScale_Implementation(float scale); \
 \
	DECLARE_FUNCTION(execDeregisterFromInput); \
	DECLARE_FUNCTION(execGetAnimationByName); \
	DECLARE_FUNCTION(execPlayAnimationByName); \
	DECLARE_FUNCTION(execRegisterForInput); \
	DECLARE_FUNCTION(execStopAnimationByName); \
	DECLARE_FUNCTION(execUpdateScale);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateScale_Implementation(float scale); \
 \
	DECLARE_FUNCTION(execDeregisterFromInput); \
	DECLARE_FUNCTION(execGetAnimationByName); \
	DECLARE_FUNCTION(execPlayAnimationByName); \
	DECLARE_FUNCTION(execRegisterForInput); \
	DECLARE_FUNCTION(execStopAnimationByName); \
	DECLARE_FUNCTION(execUpdateScale);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_EVENT_PARMS \
	struct CoreBaseUserWidget_eventOnControlModeChangedBP_Parms \
	{ \
		EControlMode controlMode; \
	}; \
	struct CoreBaseUserWidget_eventUpdateScale_Parms \
	{ \
		float scale; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreBaseUserWidget(); \
	friend struct Z_Construct_UClass_UCoreBaseUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreBaseUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreBaseUserWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreBaseUserWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreBaseUserWidget(); \
	friend struct Z_Construct_UClass_UCoreBaseUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreBaseUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreBaseUserWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreBaseUserWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreBaseUserWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreBaseUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreBaseUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreBaseUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreBaseUserWidget(UCoreBaseUserWidget&&); \
	NO_API UCoreBaseUserWidget(const UCoreBaseUserWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreBaseUserWidget(UCoreBaseUserWidget&&); \
	NO_API UCoreBaseUserWidget(const UCoreBaseUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreBaseUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreBaseUserWidget); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCoreBaseUserWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScaleContainer() { return STRUCT_OFFSET(UCoreBaseUserWidget, ScaleContainer); } \
	FORCEINLINE static uint32 __PPO__IsInteractive() { return STRUCT_OFFSET(UCoreBaseUserWidget, IsInteractive); } \
	FORCEINLINE static uint32 __PPO___controlMode() { return STRUCT_OFFSET(UCoreBaseUserWidget, _controlMode); } \
	FORCEINLINE static uint32 __PPO__ScaleType() { return STRUCT_OFFSET(UCoreBaseUserWidget, ScaleType); } \
	FORCEINLINE static uint32 __PPO___inputManager() { return STRUCT_OFFSET(UCoreBaseUserWidget, _inputManager); } \
	FORCEINLINE static uint32 __PPO___animationMap() { return STRUCT_OFFSET(UCoreBaseUserWidget, _animationMap); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreBaseUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
