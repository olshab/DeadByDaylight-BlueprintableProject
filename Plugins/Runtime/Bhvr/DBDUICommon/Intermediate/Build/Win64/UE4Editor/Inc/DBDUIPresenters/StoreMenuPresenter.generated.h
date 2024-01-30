// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStoreMenuState : uint8;
class USubPresenter;
#ifdef DBDUIPRESENTERS_StoreMenuPresenter_generated_h
#error "StoreMenuPresenter.generated.h already included, missing '#pragma once' in StoreMenuPresenter.h"
#endif
#define DBDUIPRESENTERS_StoreMenuPresenter_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAllStoreDataLoadComplete); \
	DECLARE_FUNCTION(execOnBackAction); \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMoveToCharactersPageRequested); \
	DECLARE_FUNCTION(execOnStartSubPresenterAsyncOperation); \
	DECLARE_FUNCTION(execOnStopSubPresenterAsyncOperation); \
	DECLARE_FUNCTION(execOpenAuricCellsOverlay); \
	DECLARE_FUNCTION(execOpenRedeemCodePopup);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAllStoreDataLoadComplete); \
	DECLARE_FUNCTION(execOnBackAction); \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMoveToCharactersPageRequested); \
	DECLARE_FUNCTION(execOnStartSubPresenterAsyncOperation); \
	DECLARE_FUNCTION(execOnStopSubPresenterAsyncOperation); \
	DECLARE_FUNCTION(execOpenAuricCellsOverlay); \
	DECLARE_FUNCTION(execOpenRedeemCodePopup);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoreMenuPresenter(); \
	friend struct Z_Construct_UClass_UStoreMenuPresenter_Statics; \
public: \
	DECLARE_CLASS(UStoreMenuPresenter, UPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UStoreMenuPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUStoreMenuPresenter(); \
	friend struct Z_Construct_UClass_UStoreMenuPresenter_Statics; \
public: \
	DECLARE_CLASS(UStoreMenuPresenter, UPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UStoreMenuPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreMenuPresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreMenuPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreMenuPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreMenuPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreMenuPresenter(UStoreMenuPresenter&&); \
	NO_API UStoreMenuPresenter(const UStoreMenuPresenter&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreMenuPresenter(UStoreMenuPresenter&&); \
	NO_API UStoreMenuPresenter(const UStoreMenuPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreMenuPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreMenuPresenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStoreMenuPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___storeFeaturedSubPresenter() { return STRUCT_OFFSET(UStoreMenuPresenter, _storeFeaturedSubPresenter); } \
	FORCEINLINE static uint32 __PPO___storeSpecialsSubPresenter() { return STRUCT_OFFSET(UStoreMenuPresenter, _storeSpecialsSubPresenter); } \
	FORCEINLINE static uint32 __PPO___storeCollectionsSubPresenter() { return STRUCT_OFFSET(UStoreMenuPresenter, _storeCollectionsSubPresenter); } \
	FORCEINLINE static uint32 __PPO___storeSpecialPacksSubPresenter() { return STRUCT_OFFSET(UStoreMenuPresenter, _storeSpecialPacksSubPresenter); } \
	FORCEINLINE static uint32 __PPO___storeCharactersSubPresenter() { return STRUCT_OFFSET(UStoreMenuPresenter, _storeCharactersSubPresenter); } \
	FORCEINLINE static uint32 __PPO___activeSubPresenter() { return STRUCT_OFFSET(UStoreMenuPresenter, _activeSubPresenter); } \
	FORCEINLINE static uint32 __PPO___shopManager() { return STRUCT_OFFSET(UStoreMenuPresenter, _shopManager); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_19_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UStoreMenuPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreMenuPresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
