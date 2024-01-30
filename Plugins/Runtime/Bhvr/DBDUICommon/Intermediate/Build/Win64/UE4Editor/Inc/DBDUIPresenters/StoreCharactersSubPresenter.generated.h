// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECustomizationCategory : uint8;
struct FStoreCharactersFiltersData;
#ifdef DBDUIPRESENTERS_StoreCharactersSubPresenter_generated_h
#error "StoreCharactersSubPresenter.generated.h already included, missing '#pragma once' in StoreCharactersSubPresenter.h"
#endif
#define DBDUIPRESENTERS_StoreCharactersSubPresenter_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCategorySelected); \
	DECLARE_FUNCTION(execOnCharactersClearFiltersClicked); \
	DECLARE_FUNCTION(execOnCharacterSelected); \
	DECLARE_FUNCTION(execOnCharactersFiltersChanged); \
	DECLARE_FUNCTION(execOnCustomizationsClearFiltersClicked); \
	DECLARE_FUNCTION(execOnCustomizationSelected); \
	DECLARE_FUNCTION(execOnCustomizationsFiltersChanged); \
	DECLARE_FUNCTION(execOnDisplayStandPawnLoaded);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCategorySelected); \
	DECLARE_FUNCTION(execOnCharactersClearFiltersClicked); \
	DECLARE_FUNCTION(execOnCharacterSelected); \
	DECLARE_FUNCTION(execOnCharactersFiltersChanged); \
	DECLARE_FUNCTION(execOnCustomizationsClearFiltersClicked); \
	DECLARE_FUNCTION(execOnCustomizationSelected); \
	DECLARE_FUNCTION(execOnCustomizationsFiltersChanged); \
	DECLARE_FUNCTION(execOnDisplayStandPawnLoaded);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoreCharactersSubPresenter(); \
	friend struct Z_Construct_UClass_UStoreCharactersSubPresenter_Statics; \
public: \
	DECLARE_CLASS(UStoreCharactersSubPresenter, UStoreSubPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UStoreCharactersSubPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUStoreCharactersSubPresenter(); \
	friend struct Z_Construct_UClass_UStoreCharactersSubPresenter_Statics; \
public: \
	DECLARE_CLASS(UStoreCharactersSubPresenter, UStoreSubPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UStoreCharactersSubPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCharactersSubPresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCharactersSubPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersSubPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersSubPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersSubPresenter(UStoreCharactersSubPresenter&&); \
	NO_API UStoreCharactersSubPresenter(const UStoreCharactersSubPresenter&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersSubPresenter(UStoreCharactersSubPresenter&&); \
	NO_API UStoreCharactersSubPresenter(const UStoreCharactersSubPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersSubPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersSubPresenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStoreCharactersSubPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___availableCharacters() { return STRUCT_OFFSET(UStoreCharactersSubPresenter, _availableCharacters); } \
	FORCEINLINE static uint32 __PPO___selectedCharacter() { return STRUCT_OFFSET(UStoreCharactersSubPresenter, _selectedCharacter); } \
	FORCEINLINE static uint32 __PPO___availableCustomizations() { return STRUCT_OFFSET(UStoreCharactersSubPresenter, _availableCustomizations); } \
	FORCEINLINE static uint32 __PPO___filteredCustomizations() { return STRUCT_OFFSET(UStoreCharactersSubPresenter, _filteredCustomizations); } \
	FORCEINLINE static uint32 __PPO___availableCategories() { return STRUCT_OFFSET(UStoreCharactersSubPresenter, _availableCategories); } \
	FORCEINLINE static uint32 __PPO___charactersFilterData() { return STRUCT_OFFSET(UStoreCharactersSubPresenter, _charactersFilterData); } \
	FORCEINLINE static uint32 __PPO___customizationsFilterData() { return STRUCT_OFFSET(UStoreCharactersSubPresenter, _customizationsFilterData); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_15_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UStoreCharactersSubPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_StoreCharactersSubPresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
