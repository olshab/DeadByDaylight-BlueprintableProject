// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
struct FVector2D;
#ifdef DBDUIPRESENTERS_ArchiveQuestMapSubPresenter_generated_h
#error "ArchiveQuestMapSubPresenter.generated.h already included, missing '#pragma once' in ArchiveQuestMapSubPresenter.h"
#endif
#define DBDUIPRESENTERS_ArchiveQuestMapSubPresenter_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentLevel); \
	DECLARE_FUNCTION(execNavigateToNextLevelAfterUnlock); \
	DECLARE_FUNCTION(execOnLevelSelected); \
	DECLARE_FUNCTION(execOnNodeSelected); \
	DECLARE_FUNCTION(execOnQuestNodeHovered); \
	DECLARE_FUNCTION(execOnQuestNodeUnhovered); \
	DECLARE_FUNCTION(execOnTomeLevelRewardAnimationDone); \
	DECLARE_FUNCTION(execOnTomeMapCreated); \
	DECLARE_FUNCTION(execUpdateTomeLevels);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentLevel); \
	DECLARE_FUNCTION(execNavigateToNextLevelAfterUnlock); \
	DECLARE_FUNCTION(execOnLevelSelected); \
	DECLARE_FUNCTION(execOnNodeSelected); \
	DECLARE_FUNCTION(execOnQuestNodeHovered); \
	DECLARE_FUNCTION(execOnQuestNodeUnhovered); \
	DECLARE_FUNCTION(execOnTomeLevelRewardAnimationDone); \
	DECLARE_FUNCTION(execOnTomeMapCreated); \
	DECLARE_FUNCTION(execUpdateTomeLevels);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchiveQuestMapSubPresenter(); \
	friend struct Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics; \
public: \
	DECLARE_CLASS(UArchiveQuestMapSubPresenter, USubPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UArchiveQuestMapSubPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUArchiveQuestMapSubPresenter(); \
	friend struct Z_Construct_UClass_UArchiveQuestMapSubPresenter_Statics; \
public: \
	DECLARE_CLASS(UArchiveQuestMapSubPresenter, USubPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UArchiveQuestMapSubPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveQuestMapSubPresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveQuestMapSubPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveQuestMapSubPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveQuestMapSubPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveQuestMapSubPresenter(UArchiveQuestMapSubPresenter&&); \
	NO_API UArchiveQuestMapSubPresenter(const UArchiveQuestMapSubPresenter&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveQuestMapSubPresenter(UArchiveQuestMapSubPresenter&&); \
	NO_API UArchiveQuestMapSubPresenter(const UArchiveQuestMapSubPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveQuestMapSubPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveQuestMapSubPresenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UArchiveQuestMapSubPresenter)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___archiveQuestMapWidget() { return STRUCT_OFFSET(UArchiveQuestMapSubPresenter, _archiveQuestMapWidget); } \
	FORCEINLINE static uint32 __PPO___archiveLevelProgressionWidget() { return STRUCT_OFFSET(UArchiveQuestMapSubPresenter, _archiveLevelProgressionWidget); } \
	FORCEINLINE static uint32 __PPO___storyLevelStatusCache() { return STRUCT_OFFSET(UArchiveQuestMapSubPresenter, _storyLevelStatusCache); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_14_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UArchiveQuestMapSubPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_ArchiveQuestMapSubPresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
