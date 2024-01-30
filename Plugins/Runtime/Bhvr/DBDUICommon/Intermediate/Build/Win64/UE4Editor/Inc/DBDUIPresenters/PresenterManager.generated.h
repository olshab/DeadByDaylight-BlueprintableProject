// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELoadingTransitionType : uint8;
class APlayerState;
#ifdef DBDUIPRESENTERS_PresenterManager_generated_h
#error "PresenterManager.generated.h already included, missing '#pragma once' in PresenterManager.h"
#endif
#define DBDUIPRESENTERS_PresenterManager_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLoadingTransition); \
	DECLARE_FUNCTION(execOnPlayerStateChanged); \
	DECLARE_FUNCTION(execOnViewportCreated);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLoadingTransition); \
	DECLARE_FUNCTION(execOnPlayerStateChanged); \
	DECLARE_FUNCTION(execOnViewportCreated);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPresenterManager(); \
	friend struct Z_Construct_UClass_UPresenterManager_Statics; \
public: \
	DECLARE_CLASS(UPresenterManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPresenterManager)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPresenterManager(); \
	friend struct Z_Construct_UClass_UPresenterManager_Statics; \
public: \
	DECLARE_CLASS(UPresenterManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPresenterManager)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPresenterManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPresenterManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPresenterManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPresenterManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPresenterManager(UPresenterManager&&); \
	NO_API UPresenterManager(const UPresenterManager&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPresenterManager(UPresenterManager&&); \
	NO_API UPresenterManager(const UPresenterManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPresenterManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPresenterManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPresenterManager)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___persistentPresenterGroups() { return STRUCT_OFFSET(UPresenterManager, _persistentPresenterGroups); } \
	FORCEINLINE static uint32 __PPO___transientPresenterGroups() { return STRUCT_OFFSET(UPresenterManager, _transientPresenterGroups); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_11_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UPresenterManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PresenterManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
