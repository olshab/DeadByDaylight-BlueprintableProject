// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArchivesRiftUnlockSequenceData;
struct FArchivesRiftGenericViewData;
struct FCustomizationItemPreviewAreaViewData;
struct FArchiveRiftTierRewardsViewData;
struct FCurrencyProgressionTooltipViewData;
#ifdef DBDUIVIEWINTERFACES_ArchiveRiftViewInterface_generated_h
#error "ArchiveRiftViewInterface.generated.h already included, missing '#pragma once' in ArchiveRiftViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveRiftViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_RPC_WRAPPERS \
	virtual void PlayUnlockingAnimation_Implementation(FArchivesRiftUnlockSequenceData const& data) {}; \
	virtual void SetData_Implementation(FArchivesRiftGenericViewData const& data) {}; \
	virtual void SetImagePreviewAreaData_Implementation(FCustomizationItemPreviewAreaViewData const& viewData) {}; \
	virtual void SetMatchmakingSoftlockState_Implementation(bool isInMatchmakingSoftlock) {}; \
	virtual void SetRewardTiersData_Implementation(TArray<FArchiveRiftTierRewardsViewData> const& riftTiersData) {}; \
	virtual void SetRiftFragmentTooltipViewData_Implementation(FCurrencyProgressionTooltipViewData const& RiftFragmentTooltipViewData) {}; \
 \
	DECLARE_FUNCTION(execPlayUnlockingAnimation); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetImagePreviewAreaData); \
	DECLARE_FUNCTION(execSetMatchmakingSoftlockState); \
	DECLARE_FUNCTION(execSetRewardTiersData); \
	DECLARE_FUNCTION(execSetRiftFragmentTooltipViewData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayUnlockingAnimation_Implementation(FArchivesRiftUnlockSequenceData const& data) {}; \
	virtual void SetData_Implementation(FArchivesRiftGenericViewData const& data) {}; \
	virtual void SetImagePreviewAreaData_Implementation(FCustomizationItemPreviewAreaViewData const& viewData) {}; \
	virtual void SetMatchmakingSoftlockState_Implementation(bool isInMatchmakingSoftlock) {}; \
	virtual void SetRewardTiersData_Implementation(TArray<FArchiveRiftTierRewardsViewData> const& riftTiersData) {}; \
	virtual void SetRiftFragmentTooltipViewData_Implementation(FCurrencyProgressionTooltipViewData const& RiftFragmentTooltipViewData) {}; \
 \
	DECLARE_FUNCTION(execPlayUnlockingAnimation); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetImagePreviewAreaData); \
	DECLARE_FUNCTION(execSetMatchmakingSoftlockState); \
	DECLARE_FUNCTION(execSetRewardTiersData); \
	DECLARE_FUNCTION(execSetRiftFragmentTooltipViewData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_EVENT_PARMS \
	struct ArchiveRiftViewInterface_eventPlayUnlockingAnimation_Parms \
	{ \
		FArchivesRiftUnlockSequenceData data; \
	}; \
	struct ArchiveRiftViewInterface_eventSetData_Parms \
	{ \
		FArchivesRiftGenericViewData data; \
	}; \
	struct ArchiveRiftViewInterface_eventSetImagePreviewAreaData_Parms \
	{ \
		FCustomizationItemPreviewAreaViewData viewData; \
	}; \
	struct ArchiveRiftViewInterface_eventSetMatchmakingSoftlockState_Parms \
	{ \
		bool isInMatchmakingSoftlock; \
	}; \
	struct ArchiveRiftViewInterface_eventSetRewardTiersData_Parms \
	{ \
		TArray<FArchiveRiftTierRewardsViewData> riftTiersData; \
	}; \
	struct ArchiveRiftViewInterface_eventSetRiftFragmentTooltipViewData_Parms \
	{ \
		FCurrencyProgressionTooltipViewData RiftFragmentTooltipViewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveRiftViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveRiftViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveRiftViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveRiftViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveRiftViewInterface(UArchiveRiftViewInterface&&); \
	NO_API UArchiveRiftViewInterface(const UArchiveRiftViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveRiftViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveRiftViewInterface(UArchiveRiftViewInterface&&); \
	NO_API UArchiveRiftViewInterface(const UArchiveRiftViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveRiftViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveRiftViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveRiftViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArchiveRiftViewInterface(); \
	friend struct Z_Construct_UClass_UArchiveRiftViewInterface_Statics; \
public: \
	DECLARE_CLASS(UArchiveRiftViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UArchiveRiftViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArchiveRiftViewInterface() {} \
public: \
	typedef UArchiveRiftViewInterface UClassType; \
	typedef IArchiveRiftViewInterface ThisClass; \
	static void Execute_PlayUnlockingAnimation(UObject* O, FArchivesRiftUnlockSequenceData const& data); \
	static void Execute_SetData(UObject* O, FArchivesRiftGenericViewData const& data); \
	static void Execute_SetImagePreviewAreaData(UObject* O, FCustomizationItemPreviewAreaViewData const& viewData); \
	static void Execute_SetMatchmakingSoftlockState(UObject* O, bool isInMatchmakingSoftlock); \
	static void Execute_SetRewardTiersData(UObject* O, TArray<FArchiveRiftTierRewardsViewData> const& riftTiersData); \
	static void Execute_SetRiftFragmentTooltipViewData(UObject* O, FCurrencyProgressionTooltipViewData const& RiftFragmentTooltipViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IArchiveRiftViewInterface() {} \
public: \
	typedef UArchiveRiftViewInterface UClassType; \
	typedef IArchiveRiftViewInterface ThisClass; \
	static void Execute_PlayUnlockingAnimation(UObject* O, FArchivesRiftUnlockSequenceData const& data); \
	static void Execute_SetData(UObject* O, FArchivesRiftGenericViewData const& data); \
	static void Execute_SetImagePreviewAreaData(UObject* O, FCustomizationItemPreviewAreaViewData const& viewData); \
	static void Execute_SetMatchmakingSoftlockState(UObject* O, bool isInMatchmakingSoftlock); \
	static void Execute_SetRewardTiersData(UObject* O, TArray<FArchiveRiftTierRewardsViewData> const& riftTiersData); \
	static void Execute_SetRiftFragmentTooltipViewData(UObject* O, FCurrencyProgressionTooltipViewData const& RiftFragmentTooltipViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_12_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UArchiveRiftViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveRiftViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
