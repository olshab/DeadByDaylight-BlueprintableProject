// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELoadoutSlot : uint8;
struct FInventorySlotData;
enum class EPlayerRole : uint8;
class ULoadoutMenuPopupViewData;
#ifdef DBDUIPRESENTERS_LoadoutMenuPopupPresenter_generated_h
#error "LoadoutMenuPopupPresenter.generated.h already included, missing '#pragma once' in LoadoutMenuPopupPresenter.h"
#endif
#define DBDUIPRESENTERS_LoadoutMenuPopupPresenter_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLoadoutMenuInventorySlotClick); \
	DECLARE_FUNCTION(execOnLoadoutMenuPresetClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuPresetSelected); \
	DECLARE_FUNCTION(execOnLoadoutMenuSlotIsSelected); \
	DECLARE_FUNCTION(execOnSelectedCharacterChanged); \
	DECLARE_FUNCTION(execSetLoadoutPopupViewData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLoadoutMenuInventorySlotClick); \
	DECLARE_FUNCTION(execOnLoadoutMenuPresetClicked); \
	DECLARE_FUNCTION(execOnLoadoutMenuPresetSelected); \
	DECLARE_FUNCTION(execOnLoadoutMenuSlotIsSelected); \
	DECLARE_FUNCTION(execOnSelectedCharacterChanged); \
	DECLARE_FUNCTION(execSetLoadoutPopupViewData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadoutMenuPopupPresenter(); \
	friend struct Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics; \
public: \
	DECLARE_CLASS(ULoadoutMenuPopupPresenter, UGenericPopupPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(ULoadoutMenuPopupPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULoadoutMenuPopupPresenter(); \
	friend struct Z_Construct_UClass_ULoadoutMenuPopupPresenter_Statics; \
public: \
	DECLARE_CLASS(ULoadoutMenuPopupPresenter, UGenericPopupPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(ULoadoutMenuPopupPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadoutMenuPopupPresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadoutMenuPopupPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadoutMenuPopupPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadoutMenuPopupPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadoutMenuPopupPresenter(ULoadoutMenuPopupPresenter&&); \
	NO_API ULoadoutMenuPopupPresenter(const ULoadoutMenuPopupPresenter&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadoutMenuPopupPresenter(ULoadoutMenuPopupPresenter&&); \
	NO_API ULoadoutMenuPopupPresenter(const ULoadoutMenuPopupPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadoutMenuPopupPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadoutMenuPopupPresenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadoutMenuPopupPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___loadoutPopupSlotData() { return STRUCT_OFFSET(ULoadoutMenuPopupPresenter, _loadoutPopupSlotData); } \
	FORCEINLINE static uint32 __PPO___loadoutPopupInventoryData() { return STRUCT_OFFSET(ULoadoutMenuPopupPresenter, _loadoutPopupInventoryData); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_12_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class ULoadoutMenuPopupPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_LoadoutMenuPopupPresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
