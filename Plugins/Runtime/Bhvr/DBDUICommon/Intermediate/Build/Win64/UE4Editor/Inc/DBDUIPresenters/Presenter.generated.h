// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EContext : uint8;
#ifdef DBDUIPRESENTERS_Presenter_generated_h
#error "Presenter.generated.h already included, missing '#pragma once' in Presenter.h"
#endif
#define DBDUIPRESENTERS_Presenter_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsContextReady); \
	DECLARE_FUNCTION(execIsGameStateReady); \
	DECLARE_FUNCTION(execIsPlayerStateReady); \
	DECLARE_FUNCTION(execOnContextChanged); \
	DECLARE_FUNCTION(execOnContextFocus); \
	DECLARE_FUNCTION(execOnContextUnfocus); \
	DECLARE_FUNCTION(execShouldPresent);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsContextReady); \
	DECLARE_FUNCTION(execIsGameStateReady); \
	DECLARE_FUNCTION(execIsPlayerStateReady); \
	DECLARE_FUNCTION(execOnContextChanged); \
	DECLARE_FUNCTION(execOnContextFocus); \
	DECLARE_FUNCTION(execOnContextUnfocus); \
	DECLARE_FUNCTION(execShouldPresent);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPresenter(); \
	friend struct Z_Construct_UClass_UPresenter_Statics; \
public: \
	DECLARE_CLASS(UPresenter, UUIComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPresenter(); \
	friend struct Z_Construct_UClass_UPresenter_Statics; \
public: \
	DECLARE_CLASS(UPresenter, UUIComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPresenter(UPresenter&&); \
	NO_API UPresenter(const UPresenter&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPresenter(UPresenter&&); \
	NO_API UPresenter(const UPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPresenter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___overrideWidgetInstantiationPhase() { return STRUCT_OFFSET(UPresenter, _overrideWidgetInstantiationPhase); } \
	FORCEINLINE static uint32 __PPO___widgetInstantiationPhase() { return STRUCT_OFFSET(UPresenter, _widgetInstantiationPhase); } \
	FORCEINLINE static uint32 __PPO__RequestPresentationAtBeginPlay() { return STRUCT_OFFSET(UPresenter, RequestPresentationAtBeginPlay); } \
	FORCEINLINE static uint32 __PPO__InitialVisibility() { return STRUCT_OFFSET(UPresenter, InitialVisibility); } \
	FORCEINLINE static uint32 __PPO___widgetZOrder() { return STRUCT_OFFSET(UPresenter, _widgetZOrder); } \
	FORCEINLINE static uint32 __PPO___widget() { return STRUCT_OFFSET(UPresenter, _widget); } \
	FORCEINLINE static uint32 __PPO___parentInfo() { return STRUCT_OFFSET(UPresenter, _parentInfo); } \
	FORCEINLINE static uint32 __PPO___ignoredPresentationRequirementFunctions() { return STRUCT_OFFSET(UPresenter, _ignoredPresentationRequirementFunctions); } \
	FORCEINLINE static uint32 __PPO___presentationRequirementFunctions() { return STRUCT_OFFSET(UPresenter, _presentationRequirementFunctions); } \
	FORCEINLINE static uint32 __PPO___filter() { return STRUCT_OFFSET(UPresenter, _filter); } \
	FORCEINLINE static uint32 __PPO___currencyFilter() { return STRUCT_OFFSET(UPresenter, _currencyFilter); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_14_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_Presenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
