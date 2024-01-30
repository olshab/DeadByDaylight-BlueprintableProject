// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef DBDUIPRESENTERS_HudPresenter_generated_h
#error "HudPresenter.generated.h already included, missing '#pragma once' in HudPresenter.h"
#endif
#define DBDUIPRESENTERS_HudPresenter_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHudReady); \
	DECLARE_FUNCTION(execIsPendingPawnReady); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnPawnPossessed); \
	DECLARE_FUNCTION(execOnPawnUnpossessed);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHudReady); \
	DECLARE_FUNCTION(execIsPendingPawnReady); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnPawnPossessed); \
	DECLARE_FUNCTION(execOnPawnUnpossessed);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHudPresenter(); \
	friend struct Z_Construct_UClass_UHudPresenter_Statics; \
public: \
	DECLARE_CLASS(UHudPresenter, UPresenter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UHudPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHudPresenter(); \
	friend struct Z_Construct_UClass_UHudPresenter_Statics; \
public: \
	DECLARE_CLASS(UHudPresenter, UPresenter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UHudPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudPresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudPresenter(UHudPresenter&&); \
	NO_API UHudPresenter(const UHudPresenter&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudPresenter(UHudPresenter&&); \
	NO_API UHudPresenter(const UHudPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudPresenter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UHudPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HudParentContainer() { return STRUCT_OFFSET(UHudPresenter, HudParentContainer); } \
	FORCEINLINE static uint32 __PPO___pendingCharacter() { return STRUCT_OFFSET(UHudPresenter, _pendingCharacter); } \
	FORCEINLINE static uint32 __PPO___presentedCharacter() { return STRUCT_OFFSET(UHudPresenter, _presentedCharacter); } \
	FORCEINLINE static uint32 __PPO___spectatorPawn() { return STRUCT_OFFSET(UHudPresenter, _spectatorPawn); } \
	FORCEINLINE static uint32 __PPO___hudScreen() { return STRUCT_OFFSET(UHudPresenter, _hudScreen); } \
	FORCEINLINE static uint32 __PPO___rootWidget() { return STRUCT_OFFSET(UHudPresenter, _rootWidget); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_14_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UHudPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
