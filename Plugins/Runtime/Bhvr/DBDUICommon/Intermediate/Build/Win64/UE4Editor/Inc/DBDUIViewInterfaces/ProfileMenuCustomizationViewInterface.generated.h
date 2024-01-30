// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECustomizationCategory : uint8;
enum class EItemSorting : uint8;
class UStoreCustomizationItemViewData;
struct FCustomizationItemPreviewAreaViewData;
#ifdef DBDUIVIEWINTERFACES_ProfileMenuCustomizationViewInterface_generated_h
#error "ProfileMenuCustomizationViewInterface.generated.h already included, missing '#pragma once' in ProfileMenuCustomizationViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ProfileMenuCustomizationViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_RPC_WRAPPERS \
	virtual void Deinit_Implementation() {}; \
	virtual void DeselectItem_Implementation() {}; \
	virtual void EnableInputs_Implementation(bool enable) {}; \
	virtual void Init_Implementation(ECustomizationCategory customizationCategory, EItemSorting itemSortingType) {}; \
	virtual void SetEquipButtonText_Implementation(bool canEquip, bool isEquipped) {}; \
	virtual void SetItemsData_Implementation(TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex) {}; \
	virtual void SetPreviewAreaData_Implementation(FCustomizationItemPreviewAreaViewData const& viewData, bool noCustomizationEquipped) {}; \
	virtual void SetSelectedItem_Implementation(const int32 selectedIndex) {}; \
 \
	DECLARE_FUNCTION(execDeinit); \
	DECLARE_FUNCTION(execDeselectItem); \
	DECLARE_FUNCTION(execEnableInputs); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetEquipButtonText); \
	DECLARE_FUNCTION(execSetItemsData); \
	DECLARE_FUNCTION(execSetPreviewAreaData); \
	DECLARE_FUNCTION(execSetSelectedItem);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Deinit_Implementation() {}; \
	virtual void DeselectItem_Implementation() {}; \
	virtual void EnableInputs_Implementation(bool enable) {}; \
	virtual void Init_Implementation(ECustomizationCategory customizationCategory, EItemSorting itemSortingType) {}; \
	virtual void SetEquipButtonText_Implementation(bool canEquip, bool isEquipped) {}; \
	virtual void SetItemsData_Implementation(TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex) {}; \
	virtual void SetPreviewAreaData_Implementation(FCustomizationItemPreviewAreaViewData const& viewData, bool noCustomizationEquipped) {}; \
	virtual void SetSelectedItem_Implementation(const int32 selectedIndex) {}; \
 \
	DECLARE_FUNCTION(execDeinit); \
	DECLARE_FUNCTION(execDeselectItem); \
	DECLARE_FUNCTION(execEnableInputs); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetEquipButtonText); \
	DECLARE_FUNCTION(execSetItemsData); \
	DECLARE_FUNCTION(execSetPreviewAreaData); \
	DECLARE_FUNCTION(execSetSelectedItem);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_EVENT_PARMS \
	struct ProfileMenuCustomizationViewInterface_eventEnableInputs_Parms \
	{ \
		bool enable; \
	}; \
	struct ProfileMenuCustomizationViewInterface_eventInit_Parms \
	{ \
		ECustomizationCategory customizationCategory; \
		EItemSorting itemSortingType; \
	}; \
	struct ProfileMenuCustomizationViewInterface_eventSetEquipButtonText_Parms \
	{ \
		bool canEquip; \
		bool isEquipped; \
	}; \
	struct ProfileMenuCustomizationViewInterface_eventSetItemsData_Parms \
	{ \
		TArray<UStoreCustomizationItemViewData*> customizationRewardsData; \
		int32 selectedIndex; \
	}; \
	struct ProfileMenuCustomizationViewInterface_eventSetPreviewAreaData_Parms \
	{ \
		FCustomizationItemPreviewAreaViewData viewData; \
		bool noCustomizationEquipped; \
	}; \
	struct ProfileMenuCustomizationViewInterface_eventSetSelectedItem_Parms \
	{ \
		int32 selectedIndex; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProfileMenuCustomizationViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProfileMenuCustomizationViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProfileMenuCustomizationViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProfileMenuCustomizationViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProfileMenuCustomizationViewInterface(UProfileMenuCustomizationViewInterface&&); \
	NO_API UProfileMenuCustomizationViewInterface(const UProfileMenuCustomizationViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProfileMenuCustomizationViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProfileMenuCustomizationViewInterface(UProfileMenuCustomizationViewInterface&&); \
	NO_API UProfileMenuCustomizationViewInterface(const UProfileMenuCustomizationViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProfileMenuCustomizationViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProfileMenuCustomizationViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProfileMenuCustomizationViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUProfileMenuCustomizationViewInterface(); \
	friend struct Z_Construct_UClass_UProfileMenuCustomizationViewInterface_Statics; \
public: \
	DECLARE_CLASS(UProfileMenuCustomizationViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UProfileMenuCustomizationViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IProfileMenuCustomizationViewInterface() {} \
public: \
	typedef UProfileMenuCustomizationViewInterface UClassType; \
	typedef IProfileMenuCustomizationViewInterface ThisClass; \
	static void Execute_Deinit(UObject* O); \
	static void Execute_DeselectItem(UObject* O); \
	static void Execute_EnableInputs(UObject* O, bool enable); \
	static void Execute_Init(UObject* O, ECustomizationCategory customizationCategory, EItemSorting itemSortingType); \
	static void Execute_SetEquipButtonText(UObject* O, bool canEquip, bool isEquipped); \
	static void Execute_SetItemsData(UObject* O, TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex); \
	static void Execute_SetPreviewAreaData(UObject* O, FCustomizationItemPreviewAreaViewData const& viewData, bool noCustomizationEquipped); \
	static void Execute_SetSelectedItem(UObject* O, const int32 selectedIndex); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IProfileMenuCustomizationViewInterface() {} \
public: \
	typedef UProfileMenuCustomizationViewInterface UClassType; \
	typedef IProfileMenuCustomizationViewInterface ThisClass; \
	static void Execute_Deinit(UObject* O); \
	static void Execute_DeselectItem(UObject* O); \
	static void Execute_EnableInputs(UObject* O, bool enable); \
	static void Execute_Init(UObject* O, ECustomizationCategory customizationCategory, EItemSorting itemSortingType); \
	static void Execute_SetEquipButtonText(UObject* O, bool canEquip, bool isEquipped); \
	static void Execute_SetItemsData(UObject* O, TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex); \
	static void Execute_SetPreviewAreaData(UObject* O, FCustomizationItemPreviewAreaViewData const& viewData, bool noCustomizationEquipped); \
	static void Execute_SetSelectedItem(UObject* O, const int32 selectedIndex); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_12_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UProfileMenuCustomizationViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuCustomizationViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
