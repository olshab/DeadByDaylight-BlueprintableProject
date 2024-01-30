// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCombinedSpecialEventData;
enum class ESpecialEventStatus : uint8;
enum class ECurrencyType : uint8;
struct FShopWalletUpdate;
#ifdef DBDUIPRESENTERS_PlayerProfilePresenter_generated_h
#error "PlayerProfilePresenter.generated.h already included, missing '#pragma once' in PlayerProfilePresenter.h"
#endif
#define DBDUIPRESENTERS_PlayerProfilePresenter_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFocusPlayerProfile); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execHidePlayerProfile); \
	DECLARE_FUNCTION(execOnCurrentSpecialEventChanged); \
	DECLARE_FUNCTION(execOnPlayerProfileClicked); \
	DECLARE_FUNCTION(execOnPlayerProfileCurrencyClicked); \
	DECLARE_FUNCTION(execOnResetPlayerProfileCurrencyFilter); \
	DECLARE_FUNCTION(execOnResetPlayerProfileFilter); \
	DECLARE_FUNCTION(execOnUpdatePlayerProfileCurrencyFilter); \
	DECLARE_FUNCTION(execOnUpdatePlayerProfileFilter); \
	DECLARE_FUNCTION(execOnWalletUpdated); \
	DECLARE_FUNCTION(execRefreshPlayerCard); \
	DECLARE_FUNCTION(execRefreshWallet); \
	DECLARE_FUNCTION(execSetSpecialEventCurrency); \
	DECLARE_FUNCTION(execShowPlayerProfile); \
	DECLARE_FUNCTION(execUnfocusPlayerProfile);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFocusPlayerProfile); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execHidePlayerProfile); \
	DECLARE_FUNCTION(execOnCurrentSpecialEventChanged); \
	DECLARE_FUNCTION(execOnPlayerProfileClicked); \
	DECLARE_FUNCTION(execOnPlayerProfileCurrencyClicked); \
	DECLARE_FUNCTION(execOnResetPlayerProfileCurrencyFilter); \
	DECLARE_FUNCTION(execOnResetPlayerProfileFilter); \
	DECLARE_FUNCTION(execOnUpdatePlayerProfileCurrencyFilter); \
	DECLARE_FUNCTION(execOnUpdatePlayerProfileFilter); \
	DECLARE_FUNCTION(execOnWalletUpdated); \
	DECLARE_FUNCTION(execRefreshPlayerCard); \
	DECLARE_FUNCTION(execRefreshWallet); \
	DECLARE_FUNCTION(execSetSpecialEventCurrency); \
	DECLARE_FUNCTION(execShowPlayerProfile); \
	DECLARE_FUNCTION(execUnfocusPlayerProfile);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerProfilePresenter(); \
	friend struct Z_Construct_UClass_UPlayerProfilePresenter_Statics; \
public: \
	DECLARE_CLASS(UPlayerProfilePresenter, UPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPlayerProfilePresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerProfilePresenter(); \
	friend struct Z_Construct_UClass_UPlayerProfilePresenter_Statics; \
public: \
	DECLARE_CLASS(UPlayerProfilePresenter, UPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPlayerProfilePresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerProfilePresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerProfilePresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerProfilePresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerProfilePresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerProfilePresenter(UPlayerProfilePresenter&&); \
	NO_API UPlayerProfilePresenter(const UPlayerProfilePresenter&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerProfilePresenter(UPlayerProfilePresenter&&); \
	NO_API UPlayerProfilePresenter(const UPlayerProfilePresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerProfilePresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerProfilePresenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerProfilePresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_14_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UPlayerProfilePresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PlayerProfilePresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
