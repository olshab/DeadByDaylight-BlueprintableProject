// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArchivesVignetteEntryViewData;
struct FArchivesVignetteViewData;
#ifdef DBDUIVIEWINTERFACES_ArchiveJournalViewInterface_generated_h
#error "ArchiveJournalViewInterface.generated.h already included, missing '#pragma once' in ArchiveJournalViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveJournalViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_RPC_WRAPPERS \
	virtual void OnImageViewerVoiceOverAutoplay_Implementation(bool autoplay) {}; \
	virtual void OnImageViewerVoiceOverPlayed_Implementation() {}; \
	virtual void SetArrowButtonEnabled_Implementation(bool isEnabled) {}; \
	virtual void SetCinematicButtonsEnabled_Implementation(bool enabled) {}; \
	virtual void SetEntryData_Implementation(FArchivesVignetteEntryViewData const& entryViewData) {}; \
	virtual void SetVignetteData_Implementation(FArchivesVignetteViewData const& vignetteViewData) {}; \
	virtual void SetVignetteInputsEnabled_Implementation(bool enabled) {}; \
	virtual void SetVignetteList_Implementation(TArray<FArchivesVignetteViewData> const& vignetteDataList) {}; \
	virtual void SetVoiceOverAutoplay_Implementation(bool voiceOverAutoplay) {}; \
	virtual void SetVoiceOverPlaying_Implementation(bool voiceOverPlaying) {}; \
 \
	DECLARE_FUNCTION(execOnImageViewerVoiceOverAutoplay); \
	DECLARE_FUNCTION(execOnImageViewerVoiceOverPlayed); \
	DECLARE_FUNCTION(execSetArrowButtonEnabled); \
	DECLARE_FUNCTION(execSetCinematicButtonsEnabled); \
	DECLARE_FUNCTION(execSetEntryData); \
	DECLARE_FUNCTION(execSetVignetteData); \
	DECLARE_FUNCTION(execSetVignetteInputsEnabled); \
	DECLARE_FUNCTION(execSetVignetteList); \
	DECLARE_FUNCTION(execSetVoiceOverAutoplay); \
	DECLARE_FUNCTION(execSetVoiceOverPlaying);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnImageViewerVoiceOverAutoplay_Implementation(bool autoplay) {}; \
	virtual void OnImageViewerVoiceOverPlayed_Implementation() {}; \
	virtual void SetArrowButtonEnabled_Implementation(bool isEnabled) {}; \
	virtual void SetCinematicButtonsEnabled_Implementation(bool enabled) {}; \
	virtual void SetEntryData_Implementation(FArchivesVignetteEntryViewData const& entryViewData) {}; \
	virtual void SetVignetteData_Implementation(FArchivesVignetteViewData const& vignetteViewData) {}; \
	virtual void SetVignetteInputsEnabled_Implementation(bool enabled) {}; \
	virtual void SetVignetteList_Implementation(TArray<FArchivesVignetteViewData> const& vignetteDataList) {}; \
	virtual void SetVoiceOverAutoplay_Implementation(bool voiceOverAutoplay) {}; \
	virtual void SetVoiceOverPlaying_Implementation(bool voiceOverPlaying) {}; \
 \
	DECLARE_FUNCTION(execOnImageViewerVoiceOverAutoplay); \
	DECLARE_FUNCTION(execOnImageViewerVoiceOverPlayed); \
	DECLARE_FUNCTION(execSetArrowButtonEnabled); \
	DECLARE_FUNCTION(execSetCinematicButtonsEnabled); \
	DECLARE_FUNCTION(execSetEntryData); \
	DECLARE_FUNCTION(execSetVignetteData); \
	DECLARE_FUNCTION(execSetVignetteInputsEnabled); \
	DECLARE_FUNCTION(execSetVignetteList); \
	DECLARE_FUNCTION(execSetVoiceOverAutoplay); \
	DECLARE_FUNCTION(execSetVoiceOverPlaying);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_EVENT_PARMS \
	struct ArchiveJournalViewInterface_eventOnImageViewerVoiceOverAutoplay_Parms \
	{ \
		bool autoplay; \
	}; \
	struct ArchiveJournalViewInterface_eventSetArrowButtonEnabled_Parms \
	{ \
		bool isEnabled; \
	}; \
	struct ArchiveJournalViewInterface_eventSetCinematicButtonsEnabled_Parms \
	{ \
		bool enabled; \
	}; \
	struct ArchiveJournalViewInterface_eventSetEntryData_Parms \
	{ \
		FArchivesVignetteEntryViewData entryViewData; \
	}; \
	struct ArchiveJournalViewInterface_eventSetVignetteData_Parms \
	{ \
		FArchivesVignetteViewData vignetteViewData; \
	}; \
	struct ArchiveJournalViewInterface_eventSetVignetteInputsEnabled_Parms \
	{ \
		bool enabled; \
	}; \
	struct ArchiveJournalViewInterface_eventSetVignetteList_Parms \
	{ \
		TArray<FArchivesVignetteViewData> vignetteDataList; \
	}; \
	struct ArchiveJournalViewInterface_eventSetVoiceOverAutoplay_Parms \
	{ \
		bool voiceOverAutoplay; \
	}; \
	struct ArchiveJournalViewInterface_eventSetVoiceOverPlaying_Parms \
	{ \
		bool voiceOverPlaying; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveJournalViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveJournalViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveJournalViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveJournalViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveJournalViewInterface(UArchiveJournalViewInterface&&); \
	NO_API UArchiveJournalViewInterface(const UArchiveJournalViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveJournalViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveJournalViewInterface(UArchiveJournalViewInterface&&); \
	NO_API UArchiveJournalViewInterface(const UArchiveJournalViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveJournalViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveJournalViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveJournalViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArchiveJournalViewInterface(); \
	friend struct Z_Construct_UClass_UArchiveJournalViewInterface_Statics; \
public: \
	DECLARE_CLASS(UArchiveJournalViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UArchiveJournalViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArchiveJournalViewInterface() {} \
public: \
	typedef UArchiveJournalViewInterface UClassType; \
	typedef IArchiveJournalViewInterface ThisClass; \
	static void Execute_OnImageViewerVoiceOverAutoplay(UObject* O, bool autoplay); \
	static void Execute_OnImageViewerVoiceOverPlayed(UObject* O); \
	static void Execute_SetArrowButtonEnabled(UObject* O, bool isEnabled); \
	static void Execute_SetCinematicButtonsEnabled(UObject* O, bool enabled); \
	static void Execute_SetEntryData(UObject* O, FArchivesVignetteEntryViewData const& entryViewData); \
	static void Execute_SetVignetteData(UObject* O, FArchivesVignetteViewData const& vignetteViewData); \
	static void Execute_SetVignetteInputsEnabled(UObject* O, bool enabled); \
	static void Execute_SetVignetteList(UObject* O, TArray<FArchivesVignetteViewData> const& vignetteDataList); \
	static void Execute_SetVoiceOverAutoplay(UObject* O, bool voiceOverAutoplay); \
	static void Execute_SetVoiceOverPlaying(UObject* O, bool voiceOverPlaying); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IArchiveJournalViewInterface() {} \
public: \
	typedef UArchiveJournalViewInterface UClassType; \
	typedef IArchiveJournalViewInterface ThisClass; \
	static void Execute_OnImageViewerVoiceOverAutoplay(UObject* O, bool autoplay); \
	static void Execute_OnImageViewerVoiceOverPlayed(UObject* O); \
	static void Execute_SetArrowButtonEnabled(UObject* O, bool isEnabled); \
	static void Execute_SetCinematicButtonsEnabled(UObject* O, bool enabled); \
	static void Execute_SetEntryData(UObject* O, FArchivesVignetteEntryViewData const& entryViewData); \
	static void Execute_SetVignetteData(UObject* O, FArchivesVignetteViewData const& vignetteViewData); \
	static void Execute_SetVignetteInputsEnabled(UObject* O, bool enabled); \
	static void Execute_SetVignetteList(UObject* O, TArray<FArchivesVignetteViewData> const& vignetteDataList); \
	static void Execute_SetVoiceOverAutoplay(UObject* O, bool voiceOverAutoplay); \
	static void Execute_SetVoiceOverPlaying(UObject* O, bool voiceOverPlaying); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UArchiveJournalViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveJournalViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
