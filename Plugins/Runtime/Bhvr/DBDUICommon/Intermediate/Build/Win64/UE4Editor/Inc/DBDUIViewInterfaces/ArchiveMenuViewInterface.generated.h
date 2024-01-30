// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
class IArchiveCompendiumViewInterface;
class IArchiveRiftViewInterface;
class IArchiveTomeViewInterface;
struct FArchiveChallengeReminderViewData;
struct FVector2D;
enum class EArchiveMenuState : uint8;
struct FTabWidgetData;
struct FArchiveNodeViewData;
struct FArchiveTomeSkinData;
#ifdef DBDUIVIEWINTERFACES_ArchiveMenuViewInterface_generated_h
#error "ArchiveMenuViewInterface.generated.h already included, missing '#pragma once' in ArchiveMenuViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveMenuViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_RPC_WRAPPERS \
	virtual void ClearChallengeReminderData_Implementation(EPlayerRole role) {}; \
	virtual void CloseSlotSelector_Implementation() {}; \
	virtual TScriptInterface<IArchiveCompendiumViewInterface> GetArchiveCompendiumInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IArchiveRiftViewInterface> GetArchiveRiftInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IArchiveTomeViewInterface> GetArchiveTomeInterface_Implementation() const { return NULL; }; \
	virtual void HideUI_Implementation() {}; \
	virtual void Init_Implementation() {}; \
	virtual void SetChallengeReminderData_Implementation(FArchiveChallengeReminderViewData const& data, EPlayerRole role, bool needsAnimation, FVector2D const& animationOriginalPosition) {}; \
	virtual void SetChallengeReminderVisibility_Implementation(bool isVisible) {}; \
	virtual void SetControllerElementsEnabled_Implementation(bool enabled) {}; \
	virtual void SetEventLabel_Implementation(const FString& eventLabel) {}; \
	virtual void SetInfoButtonEnabled_Implementation(bool isEnabled) {}; \
	virtual void SetInfoButtonVisible_Implementation(bool isVisible) {}; \
	virtual void SetMenuState_Implementation(EArchiveMenuState menuState) {}; \
	virtual void SetQuestNodeHoverEffect_Implementation(EPlayerRole role, bool isHovered) {}; \
	virtual void SetRemainingTime_Implementation(const FString& remainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState) {}; \
	virtual void SetRemainingTimeVisible_Implementation(bool isVisible) {}; \
	virtual void SetReminderSlotsEnabled_Implementation(bool enabled) {}; \
	virtual void SetSubtitle_Implementation(FText const& subtitle) {}; \
	virtual void SetSubtitleVisible_Implementation(bool isVisible) {}; \
	virtual void SetTabEnabled_Implementation(int32 key, bool enabled) {}; \
	virtual void SetTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, int32 selectedKey) {}; \
	virtual void SetTabSelected_Implementation(int32 key) {}; \
	virtual void SetTabsInputsEnabled_Implementation(bool enabled) {}; \
	virtual void SetTitle_Implementation(FText const& title) {}; \
	virtual void ShowSlotSelector_Implementation(FArchiveNodeViewData const& data) {}; \
	virtual void ShowUI_Implementation() {}; \
	virtual void UpdateBackgroundSkin_Implementation(const int32 key, FArchiveTomeSkinData const& data) {}; \
 \
	DECLARE_FUNCTION(execClearChallengeReminderData); \
	DECLARE_FUNCTION(execCloseSlotSelector); \
	DECLARE_FUNCTION(execGetArchiveCompendiumInterface); \
	DECLARE_FUNCTION(execGetArchiveRiftInterface); \
	DECLARE_FUNCTION(execGetArchiveTomeInterface); \
	DECLARE_FUNCTION(execHideUI); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetChallengeReminderData); \
	DECLARE_FUNCTION(execSetChallengeReminderVisibility); \
	DECLARE_FUNCTION(execSetControllerElementsEnabled); \
	DECLARE_FUNCTION(execSetEventLabel); \
	DECLARE_FUNCTION(execSetInfoButtonEnabled); \
	DECLARE_FUNCTION(execSetInfoButtonVisible); \
	DECLARE_FUNCTION(execSetMenuState); \
	DECLARE_FUNCTION(execSetQuestNodeHoverEffect); \
	DECLARE_FUNCTION(execSetRemainingTime); \
	DECLARE_FUNCTION(execSetRemainingTimeVisible); \
	DECLARE_FUNCTION(execSetReminderSlotsEnabled); \
	DECLARE_FUNCTION(execSetSubtitle); \
	DECLARE_FUNCTION(execSetSubtitleVisible); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabsData); \
	DECLARE_FUNCTION(execSetTabSelected); \
	DECLARE_FUNCTION(execSetTabsInputsEnabled); \
	DECLARE_FUNCTION(execSetTitle); \
	DECLARE_FUNCTION(execShowSlotSelector); \
	DECLARE_FUNCTION(execShowUI); \
	DECLARE_FUNCTION(execUpdateBackgroundSkin);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearChallengeReminderData_Implementation(EPlayerRole role) {}; \
	virtual void CloseSlotSelector_Implementation() {}; \
	virtual TScriptInterface<IArchiveCompendiumViewInterface> GetArchiveCompendiumInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IArchiveRiftViewInterface> GetArchiveRiftInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IArchiveTomeViewInterface> GetArchiveTomeInterface_Implementation() const { return NULL; }; \
	virtual void HideUI_Implementation() {}; \
	virtual void Init_Implementation() {}; \
	virtual void SetChallengeReminderData_Implementation(FArchiveChallengeReminderViewData const& data, EPlayerRole role, bool needsAnimation, FVector2D const& animationOriginalPosition) {}; \
	virtual void SetChallengeReminderVisibility_Implementation(bool isVisible) {}; \
	virtual void SetControllerElementsEnabled_Implementation(bool enabled) {}; \
	virtual void SetEventLabel_Implementation(const FString& eventLabel) {}; \
	virtual void SetInfoButtonEnabled_Implementation(bool isEnabled) {}; \
	virtual void SetInfoButtonVisible_Implementation(bool isVisible) {}; \
	virtual void SetMenuState_Implementation(EArchiveMenuState menuState) {}; \
	virtual void SetQuestNodeHoverEffect_Implementation(EPlayerRole role, bool isHovered) {}; \
	virtual void SetRemainingTime_Implementation(const FString& remainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState) {}; \
	virtual void SetRemainingTimeVisible_Implementation(bool isVisible) {}; \
	virtual void SetReminderSlotsEnabled_Implementation(bool enabled) {}; \
	virtual void SetSubtitle_Implementation(FText const& subtitle) {}; \
	virtual void SetSubtitleVisible_Implementation(bool isVisible) {}; \
	virtual void SetTabEnabled_Implementation(int32 key, bool enabled) {}; \
	virtual void SetTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, int32 selectedKey) {}; \
	virtual void SetTabSelected_Implementation(int32 key) {}; \
	virtual void SetTabsInputsEnabled_Implementation(bool enabled) {}; \
	virtual void SetTitle_Implementation(FText const& title) {}; \
	virtual void ShowSlotSelector_Implementation(FArchiveNodeViewData const& data) {}; \
	virtual void ShowUI_Implementation() {}; \
	virtual void UpdateBackgroundSkin_Implementation(const int32 key, FArchiveTomeSkinData const& data) {}; \
 \
	DECLARE_FUNCTION(execClearChallengeReminderData); \
	DECLARE_FUNCTION(execCloseSlotSelector); \
	DECLARE_FUNCTION(execGetArchiveCompendiumInterface); \
	DECLARE_FUNCTION(execGetArchiveRiftInterface); \
	DECLARE_FUNCTION(execGetArchiveTomeInterface); \
	DECLARE_FUNCTION(execHideUI); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetChallengeReminderData); \
	DECLARE_FUNCTION(execSetChallengeReminderVisibility); \
	DECLARE_FUNCTION(execSetControllerElementsEnabled); \
	DECLARE_FUNCTION(execSetEventLabel); \
	DECLARE_FUNCTION(execSetInfoButtonEnabled); \
	DECLARE_FUNCTION(execSetInfoButtonVisible); \
	DECLARE_FUNCTION(execSetMenuState); \
	DECLARE_FUNCTION(execSetQuestNodeHoverEffect); \
	DECLARE_FUNCTION(execSetRemainingTime); \
	DECLARE_FUNCTION(execSetRemainingTimeVisible); \
	DECLARE_FUNCTION(execSetReminderSlotsEnabled); \
	DECLARE_FUNCTION(execSetSubtitle); \
	DECLARE_FUNCTION(execSetSubtitleVisible); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabsData); \
	DECLARE_FUNCTION(execSetTabSelected); \
	DECLARE_FUNCTION(execSetTabsInputsEnabled); \
	DECLARE_FUNCTION(execSetTitle); \
	DECLARE_FUNCTION(execShowSlotSelector); \
	DECLARE_FUNCTION(execShowUI); \
	DECLARE_FUNCTION(execUpdateBackgroundSkin);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_EVENT_PARMS \
	struct ArchiveMenuViewInterface_eventClearChallengeReminderData_Parms \
	{ \
		EPlayerRole role; \
	}; \
	struct ArchiveMenuViewInterface_eventGetArchiveCompendiumInterface_Parms \
	{ \
		TScriptInterface<IArchiveCompendiumViewInterface> ReturnValue; \
	}; \
	struct ArchiveMenuViewInterface_eventGetArchiveRiftInterface_Parms \
	{ \
		TScriptInterface<IArchiveRiftViewInterface> ReturnValue; \
	}; \
	struct ArchiveMenuViewInterface_eventGetArchiveTomeInterface_Parms \
	{ \
		TScriptInterface<IArchiveTomeViewInterface> ReturnValue; \
	}; \
	struct ArchiveMenuViewInterface_eventSetChallengeReminderData_Parms \
	{ \
		FArchiveChallengeReminderViewData data; \
		EPlayerRole role; \
		bool needsAnimation; \
		FVector2D animationOriginalPosition; \
	}; \
	struct ArchiveMenuViewInterface_eventSetChallengeReminderVisibility_Parms \
	{ \
		bool isVisible; \
	}; \
	struct ArchiveMenuViewInterface_eventSetControllerElementsEnabled_Parms \
	{ \
		bool enabled; \
	}; \
	struct ArchiveMenuViewInterface_eventSetEventLabel_Parms \
	{ \
		FString eventLabel; \
	}; \
	struct ArchiveMenuViewInterface_eventSetInfoButtonEnabled_Parms \
	{ \
		bool isEnabled; \
	}; \
	struct ArchiveMenuViewInterface_eventSetInfoButtonVisible_Parms \
	{ \
		bool isVisible; \
	}; \
	struct ArchiveMenuViewInterface_eventSetMenuState_Parms \
	{ \
		EArchiveMenuState menuState; \
	}; \
	struct ArchiveMenuViewInterface_eventSetQuestNodeHoverEffect_Parms \
	{ \
		EPlayerRole role; \
		bool isHovered; \
	}; \
	struct ArchiveMenuViewInterface_eventSetRemainingTime_Parms \
	{ \
		FString remainingTime; \
		bool isMoreThanWarningThreshold; \
		EArchiveMenuState menuState; \
	}; \
	struct ArchiveMenuViewInterface_eventSetRemainingTimeVisible_Parms \
	{ \
		bool isVisible; \
	}; \
	struct ArchiveMenuViewInterface_eventSetReminderSlotsEnabled_Parms \
	{ \
		bool enabled; \
	}; \
	struct ArchiveMenuViewInterface_eventSetSubtitle_Parms \
	{ \
		FText subtitle; \
	}; \
	struct ArchiveMenuViewInterface_eventSetSubtitleVisible_Parms \
	{ \
		bool isVisible; \
	}; \
	struct ArchiveMenuViewInterface_eventSetTabEnabled_Parms \
	{ \
		int32 key; \
		bool enabled; \
	}; \
	struct ArchiveMenuViewInterface_eventSetTabsData_Parms \
	{ \
		TArray<FTabWidgetData> tabsData; \
		int32 selectedKey; \
	}; \
	struct ArchiveMenuViewInterface_eventSetTabSelected_Parms \
	{ \
		int32 key; \
	}; \
	struct ArchiveMenuViewInterface_eventSetTabsInputsEnabled_Parms \
	{ \
		bool enabled; \
	}; \
	struct ArchiveMenuViewInterface_eventSetTitle_Parms \
	{ \
		FText title; \
	}; \
	struct ArchiveMenuViewInterface_eventShowSlotSelector_Parms \
	{ \
		FArchiveNodeViewData data; \
	}; \
	struct ArchiveMenuViewInterface_eventUpdateBackgroundSkin_Parms \
	{ \
		int32 key; \
		FArchiveTomeSkinData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveMenuViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveMenuViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveMenuViewInterface(UArchiveMenuViewInterface&&); \
	NO_API UArchiveMenuViewInterface(const UArchiveMenuViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveMenuViewInterface(UArchiveMenuViewInterface&&); \
	NO_API UArchiveMenuViewInterface(const UArchiveMenuViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveMenuViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArchiveMenuViewInterface(); \
	friend struct Z_Construct_UClass_UArchiveMenuViewInterface_Statics; \
public: \
	DECLARE_CLASS(UArchiveMenuViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UArchiveMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArchiveMenuViewInterface() {} \
public: \
	typedef UArchiveMenuViewInterface UClassType; \
	typedef IArchiveMenuViewInterface ThisClass; \
	static void Execute_ClearChallengeReminderData(UObject* O, EPlayerRole role); \
	static void Execute_CloseSlotSelector(UObject* O); \
	static TScriptInterface<IArchiveCompendiumViewInterface> Execute_GetArchiveCompendiumInterface(const UObject* O); \
	static TScriptInterface<IArchiveRiftViewInterface> Execute_GetArchiveRiftInterface(const UObject* O); \
	static TScriptInterface<IArchiveTomeViewInterface> Execute_GetArchiveTomeInterface(const UObject* O); \
	static void Execute_HideUI(UObject* O); \
	static void Execute_Init(UObject* O); \
	static void Execute_SetChallengeReminderData(UObject* O, FArchiveChallengeReminderViewData const& data, EPlayerRole role, bool needsAnimation, FVector2D const& animationOriginalPosition); \
	static void Execute_SetChallengeReminderVisibility(UObject* O, bool isVisible); \
	static void Execute_SetControllerElementsEnabled(UObject* O, bool enabled); \
	static void Execute_SetEventLabel(UObject* O, const FString& eventLabel); \
	static void Execute_SetInfoButtonEnabled(UObject* O, bool isEnabled); \
	static void Execute_SetInfoButtonVisible(UObject* O, bool isVisible); \
	static void Execute_SetMenuState(UObject* O, EArchiveMenuState menuState); \
	static void Execute_SetQuestNodeHoverEffect(UObject* O, EPlayerRole role, bool isHovered); \
	static void Execute_SetRemainingTime(UObject* O, const FString& remainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState); \
	static void Execute_SetRemainingTimeVisible(UObject* O, bool isVisible); \
	static void Execute_SetReminderSlotsEnabled(UObject* O, bool enabled); \
	static void Execute_SetSubtitle(UObject* O, FText const& subtitle); \
	static void Execute_SetSubtitleVisible(UObject* O, bool isVisible); \
	static void Execute_SetTabEnabled(UObject* O, int32 key, bool enabled); \
	static void Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey); \
	static void Execute_SetTabSelected(UObject* O, int32 key); \
	static void Execute_SetTabsInputsEnabled(UObject* O, bool enabled); \
	static void Execute_SetTitle(UObject* O, FText const& title); \
	static void Execute_ShowSlotSelector(UObject* O, FArchiveNodeViewData const& data); \
	static void Execute_ShowUI(UObject* O); \
	static void Execute_UpdateBackgroundSkin(UObject* O, const int32 key, FArchiveTomeSkinData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IArchiveMenuViewInterface() {} \
public: \
	typedef UArchiveMenuViewInterface UClassType; \
	typedef IArchiveMenuViewInterface ThisClass; \
	static void Execute_ClearChallengeReminderData(UObject* O, EPlayerRole role); \
	static void Execute_CloseSlotSelector(UObject* O); \
	static TScriptInterface<IArchiveCompendiumViewInterface> Execute_GetArchiveCompendiumInterface(const UObject* O); \
	static TScriptInterface<IArchiveRiftViewInterface> Execute_GetArchiveRiftInterface(const UObject* O); \
	static TScriptInterface<IArchiveTomeViewInterface> Execute_GetArchiveTomeInterface(const UObject* O); \
	static void Execute_HideUI(UObject* O); \
	static void Execute_Init(UObject* O); \
	static void Execute_SetChallengeReminderData(UObject* O, FArchiveChallengeReminderViewData const& data, EPlayerRole role, bool needsAnimation, FVector2D const& animationOriginalPosition); \
	static void Execute_SetChallengeReminderVisibility(UObject* O, bool isVisible); \
	static void Execute_SetControllerElementsEnabled(UObject* O, bool enabled); \
	static void Execute_SetEventLabel(UObject* O, const FString& eventLabel); \
	static void Execute_SetInfoButtonEnabled(UObject* O, bool isEnabled); \
	static void Execute_SetInfoButtonVisible(UObject* O, bool isVisible); \
	static void Execute_SetMenuState(UObject* O, EArchiveMenuState menuState); \
	static void Execute_SetQuestNodeHoverEffect(UObject* O, EPlayerRole role, bool isHovered); \
	static void Execute_SetRemainingTime(UObject* O, const FString& remainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState); \
	static void Execute_SetRemainingTimeVisible(UObject* O, bool isVisible); \
	static void Execute_SetReminderSlotsEnabled(UObject* O, bool enabled); \
	static void Execute_SetSubtitle(UObject* O, FText const& subtitle); \
	static void Execute_SetSubtitleVisible(UObject* O, bool isVisible); \
	static void Execute_SetTabEnabled(UObject* O, int32 key, bool enabled); \
	static void Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey); \
	static void Execute_SetTabSelected(UObject* O, int32 key); \
	static void Execute_SetTabsInputsEnabled(UObject* O, bool enabled); \
	static void Execute_SetTitle(UObject* O, FText const& title); \
	static void Execute_ShowSlotSelector(UObject* O, FArchiveNodeViewData const& data); \
	static void Execute_ShowUI(UObject* O); \
	static void Execute_UpdateBackgroundSkin(UObject* O, const int32 key, FArchiveTomeSkinData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_19_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UArchiveMenuViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveMenuViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
