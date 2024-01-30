// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArchivesVignetteEntryViewData;
#ifdef DBDUIVIEWSCORE_CoreArchiveJournalImageViewerWidget_generated_h
#error "CoreArchiveJournalImageViewerWidget.generated.h already included, missing '#pragma once' in CoreArchiveJournalImageViewerWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveJournalImageViewerWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTextVisibilityChanged); \
	DECLARE_FUNCTION(execOnVoiceOverAutoPlay); \
	DECLARE_FUNCTION(execOnVoiceOverPlay);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTextVisibilityChanged); \
	DECLARE_FUNCTION(execOnVoiceOverAutoPlay); \
	DECLARE_FUNCTION(execOnVoiceOverPlay);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_EVENT_PARMS \
	struct CoreArchiveJournalImageViewerWidget_eventSetData_Parms \
	{ \
		FArchivesVignetteEntryViewData data; \
		bool hasTitle; \
		bool hasDescription; \
	}; \
	struct CoreArchiveJournalImageViewerWidget_eventSetScrollData_Parms \
	{ \
		FText journalEntryScrollPromptText; \
	}; \
	struct CoreArchiveJournalImageViewerWidget_eventSetTextVisibilityInputText_Parms \
	{ \
		FText displayText; \
		FText hideText; \
	}; \
	struct CoreArchiveJournalImageViewerWidget_eventSetVoiceOverText_Parms \
	{ \
		FText playVoiceOverText; \
		FText stopVoiceOverText; \
		FText autoplayVoiceOverText; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveJournalImageViewerWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveJournalImageViewerWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveJournalImageViewerWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveJournalImageViewerWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveJournalImageViewerWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveJournalImageViewerWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveJournalImageViewerWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveJournalImageViewerWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveJournalImageViewerWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveJournalImageViewerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveJournalImageViewerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveJournalImageViewerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveJournalImageViewerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveJournalImageViewerWidget(UCoreArchiveJournalImageViewerWidget&&); \
	NO_API UCoreArchiveJournalImageViewerWidget(const UCoreArchiveJournalImageViewerWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveJournalImageViewerWidget(UCoreArchiveJournalImageViewerWidget&&); \
	NO_API UCoreArchiveJournalImageViewerWidget(const UCoreArchiveJournalImageViewerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveJournalImageViewerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveJournalImageViewerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveJournalImageViewerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___backActionDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, _backActionDelegate); } \
	FORCEINLINE static uint32 __PPO___imageViewerTextVisibilityActionDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, _imageViewerTextVisibilityActionDelegate); } \
	FORCEINLINE static uint32 __PPO___imageViewerVoiceOverPlayedDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, _imageViewerVoiceOverPlayedDelegate); } \
	FORCEINLINE static uint32 __PPO___imageViewerVoiceOverAutoplayDelegate() { return STRUCT_OFFSET(UCoreArchiveJournalImageViewerWidget, _imageViewerVoiceOverAutoplayDelegate); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_15_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveJournalImageViewerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveJournalImageViewerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
