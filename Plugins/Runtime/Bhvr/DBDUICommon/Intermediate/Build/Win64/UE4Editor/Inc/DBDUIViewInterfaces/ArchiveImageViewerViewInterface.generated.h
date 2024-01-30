// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArchivesVignetteEntryViewData;
#ifdef DBDUIVIEWINTERFACES_ArchiveImageViewerViewInterface_generated_h
#error "ArchiveImageViewerViewInterface.generated.h already included, missing '#pragma once' in ArchiveImageViewerViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveImageViewerViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_RPC_WRAPPERS \
	virtual void SetTextVisibility_Implementation(bool visible) {}; \
	virtual void SetVoiceOverAutoplay_Implementation(bool voiceOverAutoplay) {}; \
	virtual void SetVoiceOverPlaying_Implementation(bool voiceOverPlaying) {}; \
	virtual void UpdateContent_Implementation(FArchivesVignetteEntryViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execSetTextVisibility); \
	DECLARE_FUNCTION(execSetVoiceOverAutoplay); \
	DECLARE_FUNCTION(execSetVoiceOverPlaying); \
	DECLARE_FUNCTION(execUpdateContent);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetTextVisibility_Implementation(bool visible) {}; \
	virtual void SetVoiceOverAutoplay_Implementation(bool voiceOverAutoplay) {}; \
	virtual void SetVoiceOverPlaying_Implementation(bool voiceOverPlaying) {}; \
	virtual void UpdateContent_Implementation(FArchivesVignetteEntryViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execSetTextVisibility); \
	DECLARE_FUNCTION(execSetVoiceOverAutoplay); \
	DECLARE_FUNCTION(execSetVoiceOverPlaying); \
	DECLARE_FUNCTION(execUpdateContent);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_EVENT_PARMS \
	struct ArchiveImageViewerViewInterface_eventSetTextVisibility_Parms \
	{ \
		bool visible; \
	}; \
	struct ArchiveImageViewerViewInterface_eventSetVoiceOverAutoplay_Parms \
	{ \
		bool voiceOverAutoplay; \
	}; \
	struct ArchiveImageViewerViewInterface_eventSetVoiceOverPlaying_Parms \
	{ \
		bool voiceOverPlaying; \
	}; \
	struct ArchiveImageViewerViewInterface_eventUpdateContent_Parms \
	{ \
		FArchivesVignetteEntryViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveImageViewerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveImageViewerViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveImageViewerViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveImageViewerViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveImageViewerViewInterface(UArchiveImageViewerViewInterface&&); \
	NO_API UArchiveImageViewerViewInterface(const UArchiveImageViewerViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveImageViewerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveImageViewerViewInterface(UArchiveImageViewerViewInterface&&); \
	NO_API UArchiveImageViewerViewInterface(const UArchiveImageViewerViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveImageViewerViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveImageViewerViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveImageViewerViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArchiveImageViewerViewInterface(); \
	friend struct Z_Construct_UClass_UArchiveImageViewerViewInterface_Statics; \
public: \
	DECLARE_CLASS(UArchiveImageViewerViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UArchiveImageViewerViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArchiveImageViewerViewInterface() {} \
public: \
	typedef UArchiveImageViewerViewInterface UClassType; \
	typedef IArchiveImageViewerViewInterface ThisClass; \
	static void Execute_SetTextVisibility(UObject* O, bool visible); \
	static void Execute_SetVoiceOverAutoplay(UObject* O, bool voiceOverAutoplay); \
	static void Execute_SetVoiceOverPlaying(UObject* O, bool voiceOverPlaying); \
	static void Execute_UpdateContent(UObject* O, FArchivesVignetteEntryViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IArchiveImageViewerViewInterface() {} \
public: \
	typedef UArchiveImageViewerViewInterface UClassType; \
	typedef IArchiveImageViewerViewInterface ThisClass; \
	static void Execute_SetTextVisibility(UObject* O, bool visible); \
	static void Execute_SetVoiceOverAutoplay(UObject* O, bool voiceOverAutoplay); \
	static void Execute_SetVoiceOverPlaying(UObject* O, bool voiceOverPlaying); \
	static void Execute_UpdateContent(UObject* O, FArchivesVignetteEntryViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UArchiveImageViewerViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveImageViewerViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
