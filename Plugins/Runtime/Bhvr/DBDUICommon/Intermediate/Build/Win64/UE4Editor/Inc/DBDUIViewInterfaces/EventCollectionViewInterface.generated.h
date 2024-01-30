// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEventEntryPopupSkinUIData;
struct FCustomizationItemOriginViewData;
class UStoreCustomizationItemViewData;
struct FCustomizationItemPreviewAreaViewData;
#ifdef DBDUIVIEWINTERFACES_EventCollectionViewInterface_generated_h
#error "EventCollectionViewInterface.generated.h already included, missing '#pragma once' in EventCollectionViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_EventCollectionViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_RPC_WRAPPERS \
	virtual void Deinit_Implementation() {}; \
	virtual void DeselectReward_Implementation() {}; \
	virtual void DisableInstructionArchivesButton_Implementation() {}; \
	virtual void DisableInstructionCurrencyButton_Implementation() {}; \
	virtual void DisableInstructionInputs_Implementation() {}; \
	virtual void DisableInstructionStoreButton_Implementation() {}; \
	virtual void Init_Implementation(FEventEntryPopupSkinUIData const& skinData) {}; \
	virtual void SetInstructionWidgetData_Implementation(FCustomizationItemOriginViewData const& viewData) {}; \
	virtual void SetItemsData_Implementation(TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex) {}; \
	virtual void SetPreviewAreaData_Implementation(FCustomizationItemPreviewAreaViewData const& viewData) {}; \
	virtual void SetSelectedReward_Implementation(const int32 selectedIndex) {}; \
 \
	DECLARE_FUNCTION(execDeinit); \
	DECLARE_FUNCTION(execDeselectReward); \
	DECLARE_FUNCTION(execDisableInstructionArchivesButton); \
	DECLARE_FUNCTION(execDisableInstructionCurrencyButton); \
	DECLARE_FUNCTION(execDisableInstructionInputs); \
	DECLARE_FUNCTION(execDisableInstructionStoreButton); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetInstructionWidgetData); \
	DECLARE_FUNCTION(execSetItemsData); \
	DECLARE_FUNCTION(execSetPreviewAreaData); \
	DECLARE_FUNCTION(execSetSelectedReward);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Deinit_Implementation() {}; \
	virtual void DeselectReward_Implementation() {}; \
	virtual void DisableInstructionArchivesButton_Implementation() {}; \
	virtual void DisableInstructionCurrencyButton_Implementation() {}; \
	virtual void DisableInstructionInputs_Implementation() {}; \
	virtual void DisableInstructionStoreButton_Implementation() {}; \
	virtual void Init_Implementation(FEventEntryPopupSkinUIData const& skinData) {}; \
	virtual void SetInstructionWidgetData_Implementation(FCustomizationItemOriginViewData const& viewData) {}; \
	virtual void SetItemsData_Implementation(TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex) {}; \
	virtual void SetPreviewAreaData_Implementation(FCustomizationItemPreviewAreaViewData const& viewData) {}; \
	virtual void SetSelectedReward_Implementation(const int32 selectedIndex) {}; \
 \
	DECLARE_FUNCTION(execDeinit); \
	DECLARE_FUNCTION(execDeselectReward); \
	DECLARE_FUNCTION(execDisableInstructionArchivesButton); \
	DECLARE_FUNCTION(execDisableInstructionCurrencyButton); \
	DECLARE_FUNCTION(execDisableInstructionInputs); \
	DECLARE_FUNCTION(execDisableInstructionStoreButton); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetInstructionWidgetData); \
	DECLARE_FUNCTION(execSetItemsData); \
	DECLARE_FUNCTION(execSetPreviewAreaData); \
	DECLARE_FUNCTION(execSetSelectedReward);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_EVENT_PARMS \
	struct EventCollectionViewInterface_eventInit_Parms \
	{ \
		FEventEntryPopupSkinUIData skinData; \
	}; \
	struct EventCollectionViewInterface_eventSetInstructionWidgetData_Parms \
	{ \
		FCustomizationItemOriginViewData viewData; \
	}; \
	struct EventCollectionViewInterface_eventSetItemsData_Parms \
	{ \
		TArray<UStoreCustomizationItemViewData*> customizationRewardsData; \
		int32 selectedIndex; \
	}; \
	struct EventCollectionViewInterface_eventSetPreviewAreaData_Parms \
	{ \
		FCustomizationItemPreviewAreaViewData viewData; \
	}; \
	struct EventCollectionViewInterface_eventSetSelectedReward_Parms \
	{ \
		int32 selectedIndex; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventCollectionViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventCollectionViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventCollectionViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventCollectionViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventCollectionViewInterface(UEventCollectionViewInterface&&); \
	NO_API UEventCollectionViewInterface(const UEventCollectionViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventCollectionViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventCollectionViewInterface(UEventCollectionViewInterface&&); \
	NO_API UEventCollectionViewInterface(const UEventCollectionViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventCollectionViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventCollectionViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventCollectionViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEventCollectionViewInterface(); \
	friend struct Z_Construct_UClass_UEventCollectionViewInterface_Statics; \
public: \
	DECLARE_CLASS(UEventCollectionViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UEventCollectionViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEventCollectionViewInterface() {} \
public: \
	typedef UEventCollectionViewInterface UClassType; \
	typedef IEventCollectionViewInterface ThisClass; \
	static void Execute_Deinit(UObject* O); \
	static void Execute_DeselectReward(UObject* O); \
	static void Execute_DisableInstructionArchivesButton(UObject* O); \
	static void Execute_DisableInstructionCurrencyButton(UObject* O); \
	static void Execute_DisableInstructionInputs(UObject* O); \
	static void Execute_DisableInstructionStoreButton(UObject* O); \
	static void Execute_Init(UObject* O, FEventEntryPopupSkinUIData const& skinData); \
	static void Execute_SetInstructionWidgetData(UObject* O, FCustomizationItemOriginViewData const& viewData); \
	static void Execute_SetItemsData(UObject* O, TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex); \
	static void Execute_SetPreviewAreaData(UObject* O, FCustomizationItemPreviewAreaViewData const& viewData); \
	static void Execute_SetSelectedReward(UObject* O, const int32 selectedIndex); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IEventCollectionViewInterface() {} \
public: \
	typedef UEventCollectionViewInterface UClassType; \
	typedef IEventCollectionViewInterface ThisClass; \
	static void Execute_Deinit(UObject* O); \
	static void Execute_DeselectReward(UObject* O); \
	static void Execute_DisableInstructionArchivesButton(UObject* O); \
	static void Execute_DisableInstructionCurrencyButton(UObject* O); \
	static void Execute_DisableInstructionInputs(UObject* O); \
	static void Execute_DisableInstructionStoreButton(UObject* O); \
	static void Execute_Init(UObject* O, FEventEntryPopupSkinUIData const& skinData); \
	static void Execute_SetInstructionWidgetData(UObject* O, FCustomizationItemOriginViewData const& viewData); \
	static void Execute_SetItemsData(UObject* O, TArray<UStoreCustomizationItemViewData*> const& customizationRewardsData, const int32 selectedIndex); \
	static void Execute_SetPreviewAreaData(UObject* O, FCustomizationItemPreviewAreaViewData const& viewData); \
	static void Execute_SetSelectedReward(UObject* O, const int32 selectedIndex); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_12_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UEventCollectionViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventCollectionViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
