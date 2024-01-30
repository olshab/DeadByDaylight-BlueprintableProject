// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIPRESENTERS_CinematicPresenter_generated_h
#error "CinematicPresenter.generated.h already included, missing '#pragma once' in CinematicPresenter.h"
#endif
#define DBDUIPRESENTERS_CinematicPresenter_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_ChangeVideoPlaybackMode); \
	DECLARE_FUNCTION(execDBD_ChangeVideoVolume); \
	DECLARE_FUNCTION(execDBD_StopVideoPlayer); \
	DECLARE_FUNCTION(execMuteGameAudio); \
	DECLARE_FUNCTION(execOnPlaybackDone); \
	DECLARE_FUNCTION(execOnPlaybackStarted); \
	DECLARE_FUNCTION(execOnSubtitlesUpdated); \
	DECLARE_FUNCTION(execOnWidgetFadeInAnimationDone); \
	DECLARE_FUNCTION(execOnWidgetFadeOutAnimationDone);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_ChangeVideoPlaybackMode); \
	DECLARE_FUNCTION(execDBD_ChangeVideoVolume); \
	DECLARE_FUNCTION(execDBD_StopVideoPlayer); \
	DECLARE_FUNCTION(execMuteGameAudio); \
	DECLARE_FUNCTION(execOnPlaybackDone); \
	DECLARE_FUNCTION(execOnPlaybackStarted); \
	DECLARE_FUNCTION(execOnSubtitlesUpdated); \
	DECLARE_FUNCTION(execOnWidgetFadeInAnimationDone); \
	DECLARE_FUNCTION(execOnWidgetFadeOutAnimationDone);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCinematicPresenter(); \
	friend struct Z_Construct_UClass_UCinematicPresenter_Statics; \
public: \
	DECLARE_CLASS(UCinematicPresenter, UPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UCinematicPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCinematicPresenter(); \
	friend struct Z_Construct_UClass_UCinematicPresenter_Statics; \
public: \
	DECLARE_CLASS(UCinematicPresenter, UPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UCinematicPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCinematicPresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCinematicPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCinematicPresenter(UCinematicPresenter&&); \
	NO_API UCinematicPresenter(const UCinematicPresenter&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCinematicPresenter(UCinematicPresenter&&); \
	NO_API UCinematicPresenter(const UCinematicPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicPresenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCinematicPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___subtitlesManager() { return STRUCT_OFFSET(UCinematicPresenter, _subtitlesManager); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_11_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UCinematicPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_CinematicPresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
