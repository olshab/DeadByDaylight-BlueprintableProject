// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IEventCollectionViewInterface;
class IEventDetailsViewInterface;
class UDataTable;
class IEventInfoViewInterface;
struct FEventEntryPopupSkinUIData;
class UEventEntryViewData;
struct FMilestoneTrackerViewData;
enum class EEventEntryTabState : uint8;
struct FTabWidgetData;
#ifdef DBDUIVIEWINTERFACES_EventEntryViewInterface_generated_h
#error "EventEntryViewInterface.generated.h already included, missing '#pragma once' in EventEntryViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_EventEntryViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_RPC_WRAPPERS \
	virtual void ChangeSelectedTab_Implementation(const int32 key) {}; \
	virtual void DeselectMilestoneTrackerItems_Implementation() {}; \
	virtual TScriptInterface<IEventCollectionViewInterface> GetCollectionSubPresenterInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IEventDetailsViewInterface> GetDetailsSubPresenterInterface_Implementation() const { return NULL; }; \
	virtual UDataTable* GetEventSkinDataTable_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IEventInfoViewInterface> GetEventSubPresenterInterface_Implementation() const { return NULL; }; \
	virtual bool GetRowDataFromEventSkinDataTable_Implementation(FEventEntryPopupSkinUIData& skinData, FText const& eventFrameLabel) { return false; }; \
	virtual TScriptInterface<IEventCollectionViewInterface> GetStoreSubPresenterInterface_Implementation() const { return NULL; }; \
	virtual void InitializeOverlay_Implementation(UEventEntryViewData* viewData) {}; \
	virtual void RequestOverlayClosure_Implementation() {}; \
	virtual void SelectMilestoneTrackerItem_Implementation(FName itemId) {}; \
	virtual void SetMilestoneTrackerData_Implementation(FMilestoneTrackerViewData const& viewData) {}; \
	virtual void SetOverlayState_Implementation(EEventEntryTabState const& tabState) {}; \
	virtual void SetTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, const int32 selectedKey) {}; \
 \
	DECLARE_FUNCTION(execChangeSelectedTab); \
	DECLARE_FUNCTION(execDeselectMilestoneTrackerItems); \
	DECLARE_FUNCTION(execGetCollectionSubPresenterInterface); \
	DECLARE_FUNCTION(execGetDetailsSubPresenterInterface); \
	DECLARE_FUNCTION(execGetEventSkinDataTable); \
	DECLARE_FUNCTION(execGetEventSubPresenterInterface); \
	DECLARE_FUNCTION(execGetRowDataFromEventSkinDataTable); \
	DECLARE_FUNCTION(execGetStoreSubPresenterInterface); \
	DECLARE_FUNCTION(execInitializeOverlay); \
	DECLARE_FUNCTION(execRequestOverlayClosure); \
	DECLARE_FUNCTION(execSelectMilestoneTrackerItem); \
	DECLARE_FUNCTION(execSetMilestoneTrackerData); \
	DECLARE_FUNCTION(execSetOverlayState); \
	DECLARE_FUNCTION(execSetTabsData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ChangeSelectedTab_Implementation(const int32 key) {}; \
	virtual void DeselectMilestoneTrackerItems_Implementation() {}; \
	virtual TScriptInterface<IEventCollectionViewInterface> GetCollectionSubPresenterInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IEventDetailsViewInterface> GetDetailsSubPresenterInterface_Implementation() const { return NULL; }; \
	virtual UDataTable* GetEventSkinDataTable_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IEventInfoViewInterface> GetEventSubPresenterInterface_Implementation() const { return NULL; }; \
	virtual bool GetRowDataFromEventSkinDataTable_Implementation(FEventEntryPopupSkinUIData& skinData, FText const& eventFrameLabel) { return false; }; \
	virtual TScriptInterface<IEventCollectionViewInterface> GetStoreSubPresenterInterface_Implementation() const { return NULL; }; \
	virtual void InitializeOverlay_Implementation(UEventEntryViewData* viewData) {}; \
	virtual void RequestOverlayClosure_Implementation() {}; \
	virtual void SelectMilestoneTrackerItem_Implementation(FName itemId) {}; \
	virtual void SetMilestoneTrackerData_Implementation(FMilestoneTrackerViewData const& viewData) {}; \
	virtual void SetOverlayState_Implementation(EEventEntryTabState const& tabState) {}; \
	virtual void SetTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, const int32 selectedKey) {}; \
 \
	DECLARE_FUNCTION(execChangeSelectedTab); \
	DECLARE_FUNCTION(execDeselectMilestoneTrackerItems); \
	DECLARE_FUNCTION(execGetCollectionSubPresenterInterface); \
	DECLARE_FUNCTION(execGetDetailsSubPresenterInterface); \
	DECLARE_FUNCTION(execGetEventSkinDataTable); \
	DECLARE_FUNCTION(execGetEventSubPresenterInterface); \
	DECLARE_FUNCTION(execGetRowDataFromEventSkinDataTable); \
	DECLARE_FUNCTION(execGetStoreSubPresenterInterface); \
	DECLARE_FUNCTION(execInitializeOverlay); \
	DECLARE_FUNCTION(execRequestOverlayClosure); \
	DECLARE_FUNCTION(execSelectMilestoneTrackerItem); \
	DECLARE_FUNCTION(execSetMilestoneTrackerData); \
	DECLARE_FUNCTION(execSetOverlayState); \
	DECLARE_FUNCTION(execSetTabsData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_EVENT_PARMS \
	struct EventEntryViewInterface_eventChangeSelectedTab_Parms \
	{ \
		int32 key; \
	}; \
	struct EventEntryViewInterface_eventGetCollectionSubPresenterInterface_Parms \
	{ \
		TScriptInterface<IEventCollectionViewInterface> ReturnValue; \
	}; \
	struct EventEntryViewInterface_eventGetDetailsSubPresenterInterface_Parms \
	{ \
		TScriptInterface<IEventDetailsViewInterface> ReturnValue; \
	}; \
	struct EventEntryViewInterface_eventGetEventSkinDataTable_Parms \
	{ \
		UDataTable* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EventEntryViewInterface_eventGetEventSkinDataTable_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct EventEntryViewInterface_eventGetEventSubPresenterInterface_Parms \
	{ \
		TScriptInterface<IEventInfoViewInterface> ReturnValue; \
	}; \
	struct EventEntryViewInterface_eventGetRowDataFromEventSkinDataTable_Parms \
	{ \
		FEventEntryPopupSkinUIData skinData; \
		FText eventFrameLabel; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EventEntryViewInterface_eventGetRowDataFromEventSkinDataTable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EventEntryViewInterface_eventGetStoreSubPresenterInterface_Parms \
	{ \
		TScriptInterface<IEventCollectionViewInterface> ReturnValue; \
	}; \
	struct EventEntryViewInterface_eventInitializeOverlay_Parms \
	{ \
		UEventEntryViewData* viewData; \
	}; \
	struct EventEntryViewInterface_eventSelectMilestoneTrackerItem_Parms \
	{ \
		FName itemId; \
	}; \
	struct EventEntryViewInterface_eventSetMilestoneTrackerData_Parms \
	{ \
		FMilestoneTrackerViewData viewData; \
	}; \
	struct EventEntryViewInterface_eventSetOverlayState_Parms \
	{ \
		EEventEntryTabState tabState; \
	}; \
	struct EventEntryViewInterface_eventSetTabsData_Parms \
	{ \
		TArray<FTabWidgetData> tabsData; \
		int32 selectedKey; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventEntryViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventEntryViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventEntryViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventEntryViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventEntryViewInterface(UEventEntryViewInterface&&); \
	NO_API UEventEntryViewInterface(const UEventEntryViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventEntryViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventEntryViewInterface(UEventEntryViewInterface&&); \
	NO_API UEventEntryViewInterface(const UEventEntryViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventEntryViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventEntryViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventEntryViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEventEntryViewInterface(); \
	friend struct Z_Construct_UClass_UEventEntryViewInterface_Statics; \
public: \
	DECLARE_CLASS(UEventEntryViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UEventEntryViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEventEntryViewInterface() {} \
public: \
	typedef UEventEntryViewInterface UClassType; \
	typedef IEventEntryViewInterface ThisClass; \
	static void Execute_ChangeSelectedTab(UObject* O, const int32 key); \
	static void Execute_DeselectMilestoneTrackerItems(UObject* O); \
	static TScriptInterface<IEventCollectionViewInterface> Execute_GetCollectionSubPresenterInterface(const UObject* O); \
	static TScriptInterface<IEventDetailsViewInterface> Execute_GetDetailsSubPresenterInterface(const UObject* O); \
	static UDataTable* Execute_GetEventSkinDataTable(const UObject* O); \
	static TScriptInterface<IEventInfoViewInterface> Execute_GetEventSubPresenterInterface(const UObject* O); \
	static bool Execute_GetRowDataFromEventSkinDataTable(UObject* O, FEventEntryPopupSkinUIData& skinData, FText const& eventFrameLabel); \
	static TScriptInterface<IEventCollectionViewInterface> Execute_GetStoreSubPresenterInterface(const UObject* O); \
	static void Execute_InitializeOverlay(UObject* O, UEventEntryViewData* viewData); \
	static void Execute_RequestOverlayClosure(UObject* O); \
	static void Execute_SelectMilestoneTrackerItem(UObject* O, FName itemId); \
	static void Execute_SetMilestoneTrackerData(UObject* O, FMilestoneTrackerViewData const& viewData); \
	static void Execute_SetOverlayState(UObject* O, EEventEntryTabState const& tabState); \
	static void Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, const int32 selectedKey); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~IEventEntryViewInterface() {} \
public: \
	typedef UEventEntryViewInterface UClassType; \
	typedef IEventEntryViewInterface ThisClass; \
	static void Execute_ChangeSelectedTab(UObject* O, const int32 key); \
	static void Execute_DeselectMilestoneTrackerItems(UObject* O); \
	static TScriptInterface<IEventCollectionViewInterface> Execute_GetCollectionSubPresenterInterface(const UObject* O); \
	static TScriptInterface<IEventDetailsViewInterface> Execute_GetDetailsSubPresenterInterface(const UObject* O); \
	static UDataTable* Execute_GetEventSkinDataTable(const UObject* O); \
	static TScriptInterface<IEventInfoViewInterface> Execute_GetEventSubPresenterInterface(const UObject* O); \
	static bool Execute_GetRowDataFromEventSkinDataTable(UObject* O, FEventEntryPopupSkinUIData& skinData, FText const& eventFrameLabel); \
	static TScriptInterface<IEventCollectionViewInterface> Execute_GetStoreSubPresenterInterface(const UObject* O); \
	static void Execute_InitializeOverlay(UObject* O, UEventEntryViewData* viewData); \
	static void Execute_RequestOverlayClosure(UObject* O); \
	static void Execute_SelectMilestoneTrackerItem(UObject* O, FName itemId); \
	static void Execute_SetMilestoneTrackerData(UObject* O, FMilestoneTrackerViewData const& viewData); \
	static void Execute_SetOverlayState(UObject* O, EEventEntryTabState const& tabState); \
	static void Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, const int32 selectedKey); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_18_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UEventEntryViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventEntryViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
