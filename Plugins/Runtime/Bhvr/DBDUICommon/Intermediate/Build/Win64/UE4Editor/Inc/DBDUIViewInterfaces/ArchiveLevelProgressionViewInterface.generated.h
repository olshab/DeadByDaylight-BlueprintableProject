// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArchiveStoryLevelViewData;
struct FRewardWrapperViewData;
enum class EArchivesStoryLevelStatus : uint8;
#ifdef DBDUIVIEWINTERFACES_ArchiveLevelProgressionViewInterface_generated_h
#error "ArchiveLevelProgressionViewInterface.generated.h already included, missing '#pragma once' in ArchiveLevelProgressionViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveLevelProgressionViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_RPC_WRAPPERS \
	virtual void GoToNextLevel_Implementation(int32 levelIndex) {}; \
	virtual void PlayRewardsAnimation_Implementation() {}; \
	virtual void SetActiveLevel_Implementation(int32 levelIndex, bool performAction) {}; \
	virtual void SetLevelSelectorEnabled_Implementation(bool enabled) {}; \
	virtual void SetLevelSelectorVisibility_Implementation(bool isVisible) {}; \
	virtual void SetRewardsContainerVisibility_Implementation(bool isVisible) {}; \
	virtual void SetTomeLevelsData_Implementation(TArray<UArchiveStoryLevelViewData*> const& levelsData, int32 selectedLevel) {}; \
	virtual void SetTomeRewardsData_Implementation(TArray<FRewardWrapperViewData> const& rewardsData, bool areLocked) {}; \
	virtual void UpdateLevelStatus_Implementation(int32 level, EArchivesStoryLevelStatus status) {}; \
 \
	DECLARE_FUNCTION(execGoToNextLevel); \
	DECLARE_FUNCTION(execPlayRewardsAnimation); \
	DECLARE_FUNCTION(execSetActiveLevel); \
	DECLARE_FUNCTION(execSetLevelSelectorEnabled); \
	DECLARE_FUNCTION(execSetLevelSelectorVisibility); \
	DECLARE_FUNCTION(execSetRewardsContainerVisibility); \
	DECLARE_FUNCTION(execSetTomeLevelsData); \
	DECLARE_FUNCTION(execSetTomeRewardsData); \
	DECLARE_FUNCTION(execUpdateLevelStatus);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GoToNextLevel_Implementation(int32 levelIndex) {}; \
	virtual void PlayRewardsAnimation_Implementation() {}; \
	virtual void SetActiveLevel_Implementation(int32 levelIndex, bool performAction) {}; \
	virtual void SetLevelSelectorEnabled_Implementation(bool enabled) {}; \
	virtual void SetLevelSelectorVisibility_Implementation(bool isVisible) {}; \
	virtual void SetRewardsContainerVisibility_Implementation(bool isVisible) {}; \
	virtual void SetTomeLevelsData_Implementation(TArray<UArchiveStoryLevelViewData*> const& levelsData, int32 selectedLevel) {}; \
	virtual void SetTomeRewardsData_Implementation(TArray<FRewardWrapperViewData> const& rewardsData, bool areLocked) {}; \
	virtual void UpdateLevelStatus_Implementation(int32 level, EArchivesStoryLevelStatus status) {}; \
 \
	DECLARE_FUNCTION(execGoToNextLevel); \
	DECLARE_FUNCTION(execPlayRewardsAnimation); \
	DECLARE_FUNCTION(execSetActiveLevel); \
	DECLARE_FUNCTION(execSetLevelSelectorEnabled); \
	DECLARE_FUNCTION(execSetLevelSelectorVisibility); \
	DECLARE_FUNCTION(execSetRewardsContainerVisibility); \
	DECLARE_FUNCTION(execSetTomeLevelsData); \
	DECLARE_FUNCTION(execSetTomeRewardsData); \
	DECLARE_FUNCTION(execUpdateLevelStatus);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_EVENT_PARMS \
	struct ArchiveLevelProgressionViewInterface_eventGoToNextLevel_Parms \
	{ \
		int32 levelIndex; \
	}; \
	struct ArchiveLevelProgressionViewInterface_eventSetActiveLevel_Parms \
	{ \
		int32 levelIndex; \
		bool performAction; \
	}; \
	struct ArchiveLevelProgressionViewInterface_eventSetLevelSelectorEnabled_Parms \
	{ \
		bool enabled; \
	}; \
	struct ArchiveLevelProgressionViewInterface_eventSetLevelSelectorVisibility_Parms \
	{ \
		bool isVisible; \
	}; \
	struct ArchiveLevelProgressionViewInterface_eventSetRewardsContainerVisibility_Parms \
	{ \
		bool isVisible; \
	}; \
	struct ArchiveLevelProgressionViewInterface_eventSetTomeLevelsData_Parms \
	{ \
		TArray<UArchiveStoryLevelViewData*> levelsData; \
		int32 selectedLevel; \
	}; \
	struct ArchiveLevelProgressionViewInterface_eventSetTomeRewardsData_Parms \
	{ \
		TArray<FRewardWrapperViewData> rewardsData; \
		bool areLocked; \
	}; \
	struct ArchiveLevelProgressionViewInterface_eventUpdateLevelStatus_Parms \
	{ \
		int32 level; \
		EArchivesStoryLevelStatus status; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveLevelProgressionViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveLevelProgressionViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveLevelProgressionViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveLevelProgressionViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveLevelProgressionViewInterface(UArchiveLevelProgressionViewInterface&&); \
	NO_API UArchiveLevelProgressionViewInterface(const UArchiveLevelProgressionViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveLevelProgressionViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveLevelProgressionViewInterface(UArchiveLevelProgressionViewInterface&&); \
	NO_API UArchiveLevelProgressionViewInterface(const UArchiveLevelProgressionViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveLevelProgressionViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveLevelProgressionViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveLevelProgressionViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArchiveLevelProgressionViewInterface(); \
	friend struct Z_Construct_UClass_UArchiveLevelProgressionViewInterface_Statics; \
public: \
	DECLARE_CLASS(UArchiveLevelProgressionViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UArchiveLevelProgressionViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArchiveLevelProgressionViewInterface() {} \
public: \
	typedef UArchiveLevelProgressionViewInterface UClassType; \
	typedef IArchiveLevelProgressionViewInterface ThisClass; \
	static void Execute_GoToNextLevel(UObject* O, int32 levelIndex); \
	static void Execute_PlayRewardsAnimation(UObject* O); \
	static void Execute_SetActiveLevel(UObject* O, int32 levelIndex, bool performAction); \
	static void Execute_SetLevelSelectorEnabled(UObject* O, bool enabled); \
	static void Execute_SetLevelSelectorVisibility(UObject* O, bool isVisible); \
	static void Execute_SetRewardsContainerVisibility(UObject* O, bool isVisible); \
	static void Execute_SetTomeLevelsData(UObject* O, TArray<UArchiveStoryLevelViewData*> const& levelsData, int32 selectedLevel); \
	static void Execute_SetTomeRewardsData(UObject* O, TArray<FRewardWrapperViewData> const& rewardsData, bool areLocked); \
	static void Execute_UpdateLevelStatus(UObject* O, int32 level, EArchivesStoryLevelStatus status); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IArchiveLevelProgressionViewInterface() {} \
public: \
	typedef UArchiveLevelProgressionViewInterface UClassType; \
	typedef IArchiveLevelProgressionViewInterface ThisClass; \
	static void Execute_GoToNextLevel(UObject* O, int32 levelIndex); \
	static void Execute_PlayRewardsAnimation(UObject* O); \
	static void Execute_SetActiveLevel(UObject* O, int32 levelIndex, bool performAction); \
	static void Execute_SetLevelSelectorEnabled(UObject* O, bool enabled); \
	static void Execute_SetLevelSelectorVisibility(UObject* O, bool isVisible); \
	static void Execute_SetRewardsContainerVisibility(UObject* O, bool isVisible); \
	static void Execute_SetTomeLevelsData(UObject* O, TArray<UArchiveStoryLevelViewData*> const& levelsData, int32 selectedLevel); \
	static void Execute_SetTomeRewardsData(UObject* O, TArray<FRewardWrapperViewData> const& rewardsData, bool areLocked); \
	static void Execute_UpdateLevelStatus(UObject* O, int32 level, EArchivesStoryLevelStatus status); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_11_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UArchiveLevelProgressionViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveLevelProgressionViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
