// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_DailyRitualsPopupWidget_generated_h
#error "DailyRitualsPopupWidget.generated.h already included, missing '#pragma once' in DailyRitualsPopupWidget.h"
#endif
#define DBDUIVIEWSCORE_DailyRitualsPopupWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDailyRitualClaimAllButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualClaimButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualRemoveButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDailyRitualClaimAllButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualClaimButtonClicked); \
	DECLARE_FUNCTION(execOnDailyRitualRemoveButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_EVENT_PARMS \
	struct DailyRitualsPopupWidget_eventSetVisuals_Parms \
	{ \
		bool isAfterTrial; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDailyRitualsPopupWidget(); \
	friend struct Z_Construct_UClass_UDailyRitualsPopupWidget_Statics; \
public: \
	DECLARE_CLASS(UDailyRitualsPopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDailyRitualsPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UDailyRitualsPopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDailyRitualsPopupWidget(); \
	friend struct Z_Construct_UClass_UDailyRitualsPopupWidget_Statics; \
public: \
	DECLARE_CLASS(UDailyRitualsPopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDailyRitualsPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UDailyRitualsPopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDailyRitualsPopupWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDailyRitualsPopupWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDailyRitualsPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDailyRitualsPopupWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDailyRitualsPopupWidget(UDailyRitualsPopupWidget&&); \
	NO_API UDailyRitualsPopupWidget(const UDailyRitualsPopupWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDailyRitualsPopupWidget(UDailyRitualsPopupWidget&&); \
	NO_API UDailyRitualsPopupWidget(const UDailyRitualsPopupWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDailyRitualsPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDailyRitualsPopupWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDailyRitualsPopupWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___onRemovedDailyRitualDelegate() { return STRUCT_OFFSET(UDailyRitualsPopupWidget, _onRemovedDailyRitualDelegate); } \
	FORCEINLINE static uint32 __PPO___onClaimedRitualDelegate() { return STRUCT_OFFSET(UDailyRitualsPopupWidget, _onClaimedRitualDelegate); } \
	FORCEINLINE static uint32 __PPO___onClaimedAllRitualsDelegate() { return STRUCT_OFFSET(UDailyRitualsPopupWidget, _onClaimedAllRitualsDelegate); } \
	FORCEINLINE static uint32 __PPO__BaseBG() { return STRUCT_OFFSET(UDailyRitualsPopupWidget, BaseBG); } \
	FORCEINLINE static uint32 __PPO__DailyRitualsDetails() { return STRUCT_OFFSET(UDailyRitualsPopupWidget, DailyRitualsDetails); } \
	FORCEINLINE static uint32 __PPO__DailyRitualsContainer() { return STRUCT_OFFSET(UDailyRitualsPopupWidget, DailyRitualsContainer); } \
	FORCEINLINE static uint32 __PPO__FooterText() { return STRUCT_OFFSET(UDailyRitualsPopupWidget, FooterText); } \
	FORCEINLINE static uint32 __PPO__DefaultBackgroundMaterialInstance() { return STRUCT_OFFSET(UDailyRitualsPopupWidget, DefaultBackgroundMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__AfterTrialBackgroundMaterialInstance() { return STRUCT_OFFSET(UDailyRitualsPopupWidget, AfterTrialBackgroundMaterialInstance); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_17_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UDailyRitualsPopupWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DailyRitualsPopupWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
