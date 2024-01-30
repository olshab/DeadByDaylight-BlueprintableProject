// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreArchiveQuestNodeWidget;
class UCoreArchiveQuestPathWidget;
class UCoreButtonWidget;
struct FArchiveNodeGraphViewData;
struct FArchiveMapPathViewData;
#ifdef DBDUIVIEWSCORE_CoreArchiveQuestMapWidget_generated_h
#error "CoreArchiveQuestMapWidget.generated.h already included, missing '#pragma once' in CoreArchiveQuestMapWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveQuestMapWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindToNode); \
	DECLARE_FUNCTION(execBindToPath); \
	DECLARE_FUNCTION(execOnNodeClicked); \
	DECLARE_FUNCTION(execOnNodeHovered); \
	DECLARE_FUNCTION(execOnNodesRevealCompleted); \
	DECLARE_FUNCTION(execOnNodeUnhovered); \
	DECLARE_FUNCTION(execSetupNode); \
	DECLARE_FUNCTION(execSetupPath); \
	DECLARE_FUNCTION(execUnbindFromNode); \
	DECLARE_FUNCTION(execUnbindFromPath);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindToNode); \
	DECLARE_FUNCTION(execBindToPath); \
	DECLARE_FUNCTION(execOnNodeClicked); \
	DECLARE_FUNCTION(execOnNodeHovered); \
	DECLARE_FUNCTION(execOnNodesRevealCompleted); \
	DECLARE_FUNCTION(execOnNodeUnhovered); \
	DECLARE_FUNCTION(execSetupNode); \
	DECLARE_FUNCTION(execSetupPath); \
	DECLARE_FUNCTION(execUnbindFromNode); \
	DECLARE_FUNCTION(execUnbindFromPath);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveQuestMapWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveQuestMapWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveQuestMapWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveQuestMapWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveQuestMapWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveQuestMapWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveQuestMapWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveQuestMapWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveQuestMapWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveQuestMapWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveQuestMapWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveQuestMapWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveQuestMapWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveQuestMapWidget(UCoreArchiveQuestMapWidget&&); \
	NO_API UCoreArchiveQuestMapWidget(const UCoreArchiveQuestMapWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveQuestMapWidget(UCoreArchiveQuestMapWidget&&); \
	NO_API UCoreArchiveQuestMapWidget(const UCoreArchiveQuestMapWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveQuestMapWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveQuestMapWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveQuestMapWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChallengesContainer() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, ChallengesContainer); } \
	FORCEINLINE static uint32 __PPO__ArchiveQuestNodeWidgetClass() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, ArchiveQuestNodeWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ArchiveQuestPathWidgetClass() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, ArchiveQuestPathWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MaxDisplayedNodes() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, MaxDisplayedNodes); } \
	FORCEINLINE static uint32 __PPO__MaxDisplayedPaths() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, MaxDisplayedPaths); } \
	FORCEINLINE static uint32 __PPO__QuestMapRevealDuration() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, QuestMapRevealDuration); } \
	FORCEINLINE static uint32 __PPO__NodeRevealDuration() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, NodeRevealDuration); } \
	FORCEINLINE static uint32 __PPO__PathRevealDuration() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, PathRevealDuration); } \
	FORCEINLINE static uint32 __PPO__NodeRevealEasingType() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, NodeRevealEasingType); } \
	FORCEINLINE static uint32 __PPO__PathRevealEasingType() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, PathRevealEasingType); } \
	FORCEINLINE static uint32 __PPO__QuestMapGenerationSound() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, QuestMapGenerationSound); } \
	FORCEINLINE static uint32 __PPO___nodeGraphDataList() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _nodeGraphDataList); } \
	FORCEINLINE static uint32 __PPO___pathDataList() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _pathDataList); } \
	FORCEINLINE static uint32 __PPO___questMapCreatedDelegate() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _questMapCreatedDelegate); } \
	FORCEINLINE static uint32 __PPO___questNodeHoveredDelegate() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _questNodeHoveredDelegate); } \
	FORCEINLINE static uint32 __PPO___questNodeUnhoveredDelegate() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _questNodeUnhoveredDelegate); } \
	FORCEINLINE static uint32 __PPO___questNodeSelectedDelegate() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _questNodeSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___nodeDictionary() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _nodeDictionary); } \
	FORCEINLINE static uint32 __PPO___pathDictionary() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _pathDictionary); } \
	FORCEINLINE static uint32 __PPO___nodeWidgetPool() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _nodeWidgetPool); } \
	FORCEINLINE static uint32 __PPO___pathWidgetPool() { return STRUCT_OFFSET(UCoreArchiveQuestMapWidget, _pathWidgetPool); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_22_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveQuestMapWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveQuestMapWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
