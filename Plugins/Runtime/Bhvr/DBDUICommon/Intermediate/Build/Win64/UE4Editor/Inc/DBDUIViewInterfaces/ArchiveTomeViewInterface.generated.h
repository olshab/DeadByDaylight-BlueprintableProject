// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEditorInterfaces;
class IArchiveJournalViewInterface;
class IArchiveLevelProgressionViewInterface;
class IArchiveQuestMapViewInterface;
enum class EArchiveTomeMenuState : uint8;
struct FTabWidgetData;
class UMaterialInterface;
#ifdef DBDUIVIEWINTERFACES_ArchiveTomeViewInterface_generated_h
#error "ArchiveTomeViewInterface.generated.h already included, missing '#pragma once' in ArchiveTomeViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveTomeViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_RPC_WRAPPERS \
	virtual FEditorInterfaces GetArchiveEditorInterface_Implementation() const { return FEditorInterfaces(); }; \
	virtual TScriptInterface<IArchiveJournalViewInterface> GetArchiveJournalInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IArchiveLevelProgressionViewInterface> GetArchiveLevelProgressionInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IArchiveQuestMapViewInterface> GetArchiveQuestMapInterface_Implementation() const { return NULL; }; \
	virtual EArchiveTomeMenuState GetMenuState_Implementation() const { return (EArchiveTomeMenuState)0; }; \
	virtual void SetMenuState_Implementation(EArchiveTomeMenuState menuState) {}; \
	virtual void SetNotificationVisibility_Implementation(int32 key, bool hasNotification) {}; \
	virtual void SetSideNavTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, int32 selectedKey) {}; \
	virtual void SetSideNavTabsEnabled_Implementation(int32 key, bool isEnabled) {}; \
	virtual void SetSideNavTabsVisibility_Implementation(int32 key, bool isVisible) {}; \
	virtual void SetUiTakeoverActive_Implementation(bool isActive) {}; \
	virtual void ToggleEditor_Implementation(bool isEnabled) {}; \
	virtual void UpdateBackgroundSkin_Implementation(int32 key, UMaterialInterface* skinMaterail) {}; \
 \
	DECLARE_FUNCTION(execGetArchiveEditorInterface); \
	DECLARE_FUNCTION(execGetArchiveJournalInterface); \
	DECLARE_FUNCTION(execGetArchiveLevelProgressionInterface); \
	DECLARE_FUNCTION(execGetArchiveQuestMapInterface); \
	DECLARE_FUNCTION(execGetMenuState); \
	DECLARE_FUNCTION(execSetMenuState); \
	DECLARE_FUNCTION(execSetNotificationVisibility); \
	DECLARE_FUNCTION(execSetSideNavTabsData); \
	DECLARE_FUNCTION(execSetSideNavTabsEnabled); \
	DECLARE_FUNCTION(execSetSideNavTabsVisibility); \
	DECLARE_FUNCTION(execSetUiTakeoverActive); \
	DECLARE_FUNCTION(execToggleEditor); \
	DECLARE_FUNCTION(execUpdateBackgroundSkin);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FEditorInterfaces GetArchiveEditorInterface_Implementation() const { return FEditorInterfaces(); }; \
	virtual TScriptInterface<IArchiveJournalViewInterface> GetArchiveJournalInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IArchiveLevelProgressionViewInterface> GetArchiveLevelProgressionInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IArchiveQuestMapViewInterface> GetArchiveQuestMapInterface_Implementation() const { return NULL; }; \
	virtual EArchiveTomeMenuState GetMenuState_Implementation() const { return (EArchiveTomeMenuState)0; }; \
	virtual void SetMenuState_Implementation(EArchiveTomeMenuState menuState) {}; \
	virtual void SetNotificationVisibility_Implementation(int32 key, bool hasNotification) {}; \
	virtual void SetSideNavTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, int32 selectedKey) {}; \
	virtual void SetSideNavTabsEnabled_Implementation(int32 key, bool isEnabled) {}; \
	virtual void SetSideNavTabsVisibility_Implementation(int32 key, bool isVisible) {}; \
	virtual void SetUiTakeoverActive_Implementation(bool isActive) {}; \
	virtual void ToggleEditor_Implementation(bool isEnabled) {}; \
	virtual void UpdateBackgroundSkin_Implementation(int32 key, UMaterialInterface* skinMaterail) {}; \
 \
	DECLARE_FUNCTION(execGetArchiveEditorInterface); \
	DECLARE_FUNCTION(execGetArchiveJournalInterface); \
	DECLARE_FUNCTION(execGetArchiveLevelProgressionInterface); \
	DECLARE_FUNCTION(execGetArchiveQuestMapInterface); \
	DECLARE_FUNCTION(execGetMenuState); \
	DECLARE_FUNCTION(execSetMenuState); \
	DECLARE_FUNCTION(execSetNotificationVisibility); \
	DECLARE_FUNCTION(execSetSideNavTabsData); \
	DECLARE_FUNCTION(execSetSideNavTabsEnabled); \
	DECLARE_FUNCTION(execSetSideNavTabsVisibility); \
	DECLARE_FUNCTION(execSetUiTakeoverActive); \
	DECLARE_FUNCTION(execToggleEditor); \
	DECLARE_FUNCTION(execUpdateBackgroundSkin);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_EVENT_PARMS \
	struct ArchiveTomeViewInterface_eventGetArchiveEditorInterface_Parms \
	{ \
		FEditorInterfaces ReturnValue; \
	}; \
	struct ArchiveTomeViewInterface_eventGetArchiveJournalInterface_Parms \
	{ \
		TScriptInterface<IArchiveJournalViewInterface> ReturnValue; \
	}; \
	struct ArchiveTomeViewInterface_eventGetArchiveLevelProgressionInterface_Parms \
	{ \
		TScriptInterface<IArchiveLevelProgressionViewInterface> ReturnValue; \
	}; \
	struct ArchiveTomeViewInterface_eventGetArchiveQuestMapInterface_Parms \
	{ \
		TScriptInterface<IArchiveQuestMapViewInterface> ReturnValue; \
	}; \
	struct ArchiveTomeViewInterface_eventGetMenuState_Parms \
	{ \
		EArchiveTomeMenuState ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ArchiveTomeViewInterface_eventGetMenuState_Parms() \
			: ReturnValue((EArchiveTomeMenuState)0) \
		{ \
		} \
	}; \
	struct ArchiveTomeViewInterface_eventSetMenuState_Parms \
	{ \
		EArchiveTomeMenuState menuState; \
	}; \
	struct ArchiveTomeViewInterface_eventSetNotificationVisibility_Parms \
	{ \
		int32 key; \
		bool hasNotification; \
	}; \
	struct ArchiveTomeViewInterface_eventSetSideNavTabsData_Parms \
	{ \
		TArray<FTabWidgetData> tabsData; \
		int32 selectedKey; \
	}; \
	struct ArchiveTomeViewInterface_eventSetSideNavTabsEnabled_Parms \
	{ \
		int32 key; \
		bool isEnabled; \
	}; \
	struct ArchiveTomeViewInterface_eventSetSideNavTabsVisibility_Parms \
	{ \
		int32 key; \
		bool isVisible; \
	}; \
	struct ArchiveTomeViewInterface_eventSetUiTakeoverActive_Parms \
	{ \
		bool isActive; \
	}; \
	struct ArchiveTomeViewInterface_eventToggleEditor_Parms \
	{ \
		bool isEnabled; \
	}; \
	struct ArchiveTomeViewInterface_eventUpdateBackgroundSkin_Parms \
	{ \
		int32 key; \
		UMaterialInterface* skinMaterail; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveTomeViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveTomeViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveTomeViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveTomeViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveTomeViewInterface(UArchiveTomeViewInterface&&); \
	NO_API UArchiveTomeViewInterface(const UArchiveTomeViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveTomeViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveTomeViewInterface(UArchiveTomeViewInterface&&); \
	NO_API UArchiveTomeViewInterface(const UArchiveTomeViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveTomeViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveTomeViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveTomeViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArchiveTomeViewInterface(); \
	friend struct Z_Construct_UClass_UArchiveTomeViewInterface_Statics; \
public: \
	DECLARE_CLASS(UArchiveTomeViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UArchiveTomeViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArchiveTomeViewInterface() {} \
public: \
	typedef UArchiveTomeViewInterface UClassType; \
	typedef IArchiveTomeViewInterface ThisClass; \
	static FEditorInterfaces Execute_GetArchiveEditorInterface(const UObject* O); \
	static TScriptInterface<IArchiveJournalViewInterface> Execute_GetArchiveJournalInterface(const UObject* O); \
	static TScriptInterface<IArchiveLevelProgressionViewInterface> Execute_GetArchiveLevelProgressionInterface(const UObject* O); \
	static TScriptInterface<IArchiveQuestMapViewInterface> Execute_GetArchiveQuestMapInterface(const UObject* O); \
	static EArchiveTomeMenuState Execute_GetMenuState(const UObject* O); \
	static void Execute_SetMenuState(UObject* O, EArchiveTomeMenuState menuState); \
	static void Execute_SetNotificationVisibility(UObject* O, int32 key, bool hasNotification); \
	static void Execute_SetSideNavTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey); \
	static void Execute_SetSideNavTabsEnabled(UObject* O, int32 key, bool isEnabled); \
	static void Execute_SetSideNavTabsVisibility(UObject* O, int32 key, bool isVisible); \
	static void Execute_SetUiTakeoverActive(UObject* O, bool isActive); \
	static void Execute_ToggleEditor(UObject* O, bool isEnabled); \
	static void Execute_UpdateBackgroundSkin(UObject* O, int32 key, UMaterialInterface* skinMaterail); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IArchiveTomeViewInterface() {} \
public: \
	typedef UArchiveTomeViewInterface UClassType; \
	typedef IArchiveTomeViewInterface ThisClass; \
	static FEditorInterfaces Execute_GetArchiveEditorInterface(const UObject* O); \
	static TScriptInterface<IArchiveJournalViewInterface> Execute_GetArchiveJournalInterface(const UObject* O); \
	static TScriptInterface<IArchiveLevelProgressionViewInterface> Execute_GetArchiveLevelProgressionInterface(const UObject* O); \
	static TScriptInterface<IArchiveQuestMapViewInterface> Execute_GetArchiveQuestMapInterface(const UObject* O); \
	static EArchiveTomeMenuState Execute_GetMenuState(const UObject* O); \
	static void Execute_SetMenuState(UObject* O, EArchiveTomeMenuState menuState); \
	static void Execute_SetNotificationVisibility(UObject* O, int32 key, bool hasNotification); \
	static void Execute_SetSideNavTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey); \
	static void Execute_SetSideNavTabsEnabled(UObject* O, int32 key, bool isEnabled); \
	static void Execute_SetSideNavTabsVisibility(UObject* O, int32 key, bool isVisible); \
	static void Execute_SetUiTakeoverActive(UObject* O, bool isActive); \
	static void Execute_ToggleEditor(UObject* O, bool isEnabled); \
	static void Execute_UpdateBackgroundSkin(UObject* O, int32 key, UMaterialInterface* skinMaterail); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_16_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UArchiveTomeViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveTomeViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
