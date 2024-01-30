// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerStatusViewData;
class UDataTable;
class UCorePlayerStatusKillerEffectWidget;
enum class EPlayerStateChangeType : uint8;
enum class EObsessionUIState : uint8;
enum class EPlayerStatus : uint8;
enum class ESleepingUIState : uint8;
#ifdef DBDUIVIEWSCORE_CorePlayerStatusWidget_generated_h
#error "CorePlayerStatusWidget.generated.h already included, missing '#pragma once' in CorePlayerStatusWidget.h"
#endif
#define DBDUIVIEWSCORE_CorePlayerStatusWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCacheViewData); \
	DECLARE_FUNCTION(execGetKillerStatusDataMappingDB); \
	DECLARE_FUNCTION(execGetKillerStatusEffectWidget); \
	DECLARE_FUNCTION(execGetPlayerStateChangeType); \
	DECLARE_FUNCTION(execHasKillerStatusDataChanged); \
	DECLARE_FUNCTION(execHasObsessionStateChanged); \
	DECLARE_FUNCTION(execHasPlayerStateChanged); \
	DECLARE_FUNCTION(execHasPlayerStatusDataChanged); \
	DECLARE_FUNCTION(execHasTimerProgressChanged); \
	DECLARE_FUNCTION(execShouldPlaySleepAnimation);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCacheViewData); \
	DECLARE_FUNCTION(execGetKillerStatusDataMappingDB); \
	DECLARE_FUNCTION(execGetKillerStatusEffectWidget); \
	DECLARE_FUNCTION(execGetPlayerStateChangeType); \
	DECLARE_FUNCTION(execHasKillerStatusDataChanged); \
	DECLARE_FUNCTION(execHasObsessionStateChanged); \
	DECLARE_FUNCTION(execHasPlayerStateChanged); \
	DECLARE_FUNCTION(execHasPlayerStatusDataChanged); \
	DECLARE_FUNCTION(execHasTimerProgressChanged); \
	DECLARE_FUNCTION(execShouldPlaySleepAnimation);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorePlayerStatusWidget(); \
	friend struct Z_Construct_UClass_UCorePlayerStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerStatusWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerStatusWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCorePlayerStatusWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCorePlayerStatusWidget(); \
	friend struct Z_Construct_UClass_UCorePlayerStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerStatusWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerStatusWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCorePlayerStatusWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCorePlayerStatusWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePlayerStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerStatusWidget(UCorePlayerStatusWidget&&); \
	NO_API UCorePlayerStatusWidget(const UCorePlayerStatusWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerStatusWidget(UCorePlayerStatusWidget&&); \
	NO_API UCorePlayerStatusWidget(const UCorePlayerStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerStatusWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCorePlayerStatusWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxNameLength() { return STRUCT_OFFSET(UCorePlayerStatusWidget, MaxNameLength); } \
	FORCEINLINE static uint32 __PPO__PlayerStatusAssets() { return STRUCT_OFFSET(UCorePlayerStatusWidget, PlayerStatusAssets); } \
	FORCEINLINE static uint32 __PPO__ObsessionSfx() { return STRUCT_OFFSET(UCorePlayerStatusWidget, ObsessionSfx); } \
	FORCEINLINE static uint32 __PPO__PlayerNameTextfield() { return STRUCT_OFFSET(UCorePlayerStatusWidget, PlayerNameTextfield); } \
	FORCEINLINE static uint32 __PPO__KillerStatusContainer() { return STRUCT_OFFSET(UCorePlayerStatusWidget, KillerStatusContainer); } \
	FORCEINLINE static uint32 __PPO___cachedViewData() { return STRUCT_OFFSET(UCorePlayerStatusWidget, _cachedViewData); } \
	FORCEINLINE static uint32 __PPO___killerStatusEffectWidget() { return STRUCT_OFFSET(UCorePlayerStatusWidget, _killerStatusEffectWidget); } \
	FORCEINLINE static uint32 __PPO___killerStatusDataMappingDB() { return STRUCT_OFFSET(UCorePlayerStatusWidget, _killerStatusDataMappingDB); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_20_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCorePlayerStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
