// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECurrencyType : uint8;
class UTexture2D;
enum class EItemRarity : uint8;
class UMaterialInterface;
#ifdef DBDUIMANAGERS_UIDataManager_generated_h
#error "UIDataManager.generated.h already included, missing '#pragma once' in UIDataManager.h"
#endif
#define DBDUIMANAGERS_UIDataManager_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrencyIcon); \
	DECLARE_FUNCTION(execGetCustomizationRarityMaterial); \
	DECLARE_FUNCTION(execGetLoadoutPartRarityMaterial); \
	DECLARE_FUNCTION(execGetTooltipEventHeader); \
	DECLARE_FUNCTION(execGetTooltipRarityMaterial);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrencyIcon); \
	DECLARE_FUNCTION(execGetCustomizationRarityMaterial); \
	DECLARE_FUNCTION(execGetLoadoutPartRarityMaterial); \
	DECLARE_FUNCTION(execGetTooltipEventHeader); \
	DECLARE_FUNCTION(execGetTooltipRarityMaterial);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIDataManager(); \
	friend struct Z_Construct_UClass_UUIDataManager_Statics; \
public: \
	DECLARE_CLASS(UUIDataManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIManagers"), NO_API) \
	DECLARE_SERIALIZER(UUIDataManager)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUUIDataManager(); \
	friend struct Z_Construct_UClass_UUIDataManager_Statics; \
public: \
	DECLARE_CLASS(UUIDataManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIManagers"), NO_API) \
	DECLARE_SERIALIZER(UUIDataManager)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIDataManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIDataManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIDataManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIDataManager(UUIDataManager&&); \
	NO_API UUIDataManager(const UUIDataManager&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIDataManager(UUIDataManager&&); \
	NO_API UUIDataManager(const UUIDataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIDataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIDataManager)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_19_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIMANAGERS_API UClass* StaticClass<class UUIDataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_UIDataManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
