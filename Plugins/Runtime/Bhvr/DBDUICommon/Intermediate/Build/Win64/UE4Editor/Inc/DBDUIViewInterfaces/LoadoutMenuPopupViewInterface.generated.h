// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULoadoutMenuPopupViewData;
enum class ELoadoutSlot : uint8;
struct FTabWidgetData;
#ifdef DBDUIVIEWINTERFACES_LoadoutMenuPopupViewInterface_generated_h
#error "LoadoutMenuPopupViewInterface.generated.h already included, missing '#pragma once' in LoadoutMenuPopupViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_LoadoutMenuPopupViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_RPC_WRAPPERS \
	virtual void SetIsPerkSurfacingExperimentActive_Implementation(bool isPerkSurfacingExperimentActive) {}; \
	virtual void SetLoadoutMenuInventoryData_Implementation(TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData, const ELoadoutSlot slotSelected, bool isNextSlot) {}; \
	virtual void SetLoadoutMenuSlotData_Implementation(TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData) {}; \
	virtual void SetSelectableCharacters_Implementation(TArray<FTabWidgetData> const& selectableCharacters, const FTabWidgetData selectedCharacterData, const int32 botIndex) {}; \
	virtual void SetSelectedInventoryItem_Implementation(TArray<int32> const& selectedIndex, bool isUnequip) {}; \
	virtual void UpdatePresetData_Implementation(TArray<int32> const& presetData, const int32 selectedPreset) {}; \
 \
	DECLARE_FUNCTION(execSetIsPerkSurfacingExperimentActive); \
	DECLARE_FUNCTION(execSetLoadoutMenuInventoryData); \
	DECLARE_FUNCTION(execSetLoadoutMenuSlotData); \
	DECLARE_FUNCTION(execSetSelectableCharacters); \
	DECLARE_FUNCTION(execSetSelectedInventoryItem); \
	DECLARE_FUNCTION(execUpdatePresetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetIsPerkSurfacingExperimentActive_Implementation(bool isPerkSurfacingExperimentActive) {}; \
	virtual void SetLoadoutMenuInventoryData_Implementation(TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData, const ELoadoutSlot slotSelected, bool isNextSlot) {}; \
	virtual void SetLoadoutMenuSlotData_Implementation(TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData) {}; \
	virtual void SetSelectableCharacters_Implementation(TArray<FTabWidgetData> const& selectableCharacters, const FTabWidgetData selectedCharacterData, const int32 botIndex) {}; \
	virtual void SetSelectedInventoryItem_Implementation(TArray<int32> const& selectedIndex, bool isUnequip) {}; \
	virtual void UpdatePresetData_Implementation(TArray<int32> const& presetData, const int32 selectedPreset) {}; \
 \
	DECLARE_FUNCTION(execSetIsPerkSurfacingExperimentActive); \
	DECLARE_FUNCTION(execSetLoadoutMenuInventoryData); \
	DECLARE_FUNCTION(execSetLoadoutMenuSlotData); \
	DECLARE_FUNCTION(execSetSelectableCharacters); \
	DECLARE_FUNCTION(execSetSelectedInventoryItem); \
	DECLARE_FUNCTION(execUpdatePresetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_EVENT_PARMS \
	struct LoadoutMenuPopupViewInterface_eventSetIsPerkSurfacingExperimentActive_Parms \
	{ \
		bool isPerkSurfacingExperimentActive; \
	}; \
	struct LoadoutMenuPopupViewInterface_eventSetLoadoutMenuInventoryData_Parms \
	{ \
		TArray<ULoadoutMenuPopupViewData*> loadoutMenuSlotButtonData; \
		ELoadoutSlot slotSelected; \
		bool isNextSlot; \
	}; \
	struct LoadoutMenuPopupViewInterface_eventSetLoadoutMenuSlotData_Parms \
	{ \
		TArray<ULoadoutMenuPopupViewData*> loadoutMenuSlotButtonData; \
	}; \
	struct LoadoutMenuPopupViewInterface_eventSetSelectableCharacters_Parms \
	{ \
		TArray<FTabWidgetData> selectableCharacters; \
		FTabWidgetData selectedCharacterData; \
		int32 botIndex; \
	}; \
	struct LoadoutMenuPopupViewInterface_eventSetSelectedInventoryItem_Parms \
	{ \
		TArray<int32> selectedIndex; \
		bool isUnequip; \
	}; \
	struct LoadoutMenuPopupViewInterface_eventUpdatePresetData_Parms \
	{ \
		TArray<int32> presetData; \
		int32 selectedPreset; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadoutMenuPopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadoutMenuPopupViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadoutMenuPopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadoutMenuPopupViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadoutMenuPopupViewInterface(ULoadoutMenuPopupViewInterface&&); \
	NO_API ULoadoutMenuPopupViewInterface(const ULoadoutMenuPopupViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadoutMenuPopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadoutMenuPopupViewInterface(ULoadoutMenuPopupViewInterface&&); \
	NO_API ULoadoutMenuPopupViewInterface(const ULoadoutMenuPopupViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadoutMenuPopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadoutMenuPopupViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadoutMenuPopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULoadoutMenuPopupViewInterface(); \
	friend struct Z_Construct_UClass_ULoadoutMenuPopupViewInterface_Statics; \
public: \
	DECLARE_CLASS(ULoadoutMenuPopupViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(ULoadoutMenuPopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILoadoutMenuPopupViewInterface() {} \
public: \
	typedef ULoadoutMenuPopupViewInterface UClassType; \
	typedef ILoadoutMenuPopupViewInterface ThisClass; \
	static void Execute_SetIsPerkSurfacingExperimentActive(UObject* O, bool isPerkSurfacingExperimentActive); \
	static void Execute_SetLoadoutMenuInventoryData(UObject* O, TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData, const ELoadoutSlot slotSelected, bool isNextSlot); \
	static void Execute_SetLoadoutMenuSlotData(UObject* O, TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData); \
	static void Execute_SetSelectableCharacters(UObject* O, TArray<FTabWidgetData> const& selectableCharacters, const FTabWidgetData selectedCharacterData, const int32 botIndex); \
	static void Execute_SetSelectedInventoryItem(UObject* O, TArray<int32> const& selectedIndex, bool isUnequip); \
	static void Execute_UpdatePresetData(UObject* O, TArray<int32> const& presetData, const int32 selectedPreset); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ILoadoutMenuPopupViewInterface() {} \
public: \
	typedef ULoadoutMenuPopupViewInterface UClassType; \
	typedef ILoadoutMenuPopupViewInterface ThisClass; \
	static void Execute_SetIsPerkSurfacingExperimentActive(UObject* O, bool isPerkSurfacingExperimentActive); \
	static void Execute_SetLoadoutMenuInventoryData(UObject* O, TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData, const ELoadoutSlot slotSelected, bool isNextSlot); \
	static void Execute_SetLoadoutMenuSlotData(UObject* O, TArray<ULoadoutMenuPopupViewData*> const& loadoutMenuSlotButtonData); \
	static void Execute_SetSelectableCharacters(UObject* O, TArray<FTabWidgetData> const& selectableCharacters, const FTabWidgetData selectedCharacterData, const int32 botIndex); \
	static void Execute_SetSelectedInventoryItem(UObject* O, TArray<int32> const& selectedIndex, bool isUnequip); \
	static void Execute_UpdatePresetData(UObject* O, TArray<int32> const& presetData, const int32 selectedPreset); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_11_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class ULoadoutMenuPopupViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LoadoutMenuPopupViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
