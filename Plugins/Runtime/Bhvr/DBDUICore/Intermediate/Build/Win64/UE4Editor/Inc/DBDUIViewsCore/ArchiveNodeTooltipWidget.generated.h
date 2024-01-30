// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArchiveNodeViewData;
enum class EArchiveNodeType : uint8;
#ifdef DBDUIVIEWSCORE_ArchiveNodeTooltipWidget_generated_h
#error "ArchiveNodeTooltipWidget.generated.h already included, missing '#pragma once' in ArchiveNodeTooltipWidget.h"
#endif
#define DBDUIVIEWSCORE_ArchiveNodeTooltipWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetTooltipData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetTooltipData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_EVENT_PARMS \
	struct ArchiveNodeTooltipWidget_eventSetNodeType_Parms \
	{ \
		EArchiveNodeType type; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchiveNodeTooltipWidget(); \
	friend struct Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UArchiveNodeTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UArchiveNodeTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUArchiveNodeTooltipWidget(); \
	friend struct Z_Construct_UClass_UArchiveNodeTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UArchiveNodeTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UArchiveNodeTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveNodeTooltipWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveNodeTooltipWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveNodeTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveNodeTooltipWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveNodeTooltipWidget(UArchiveNodeTooltipWidget&&); \
	NO_API UArchiveNodeTooltipWidget(const UArchiveNodeTooltipWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveNodeTooltipWidget(UArchiveNodeTooltipWidget&&); \
	NO_API UArchiveNodeTooltipWidget(const UArchiveNodeTooltipWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveNodeTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveNodeTooltipWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UArchiveNodeTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BackgroundIMG() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, BackgroundIMG); } \
	FORCEINLINE static uint32 __PPO__RarityIMG() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, RarityIMG); } \
	FORCEINLINE static uint32 __PPO__NodeTitleTB() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, NodeTitleTB); } \
	FORCEINLINE static uint32 __PPO__SubtitleTB() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, SubtitleTB); } \
	FORCEINLINE static uint32 __PPO__NodeDescriptionRTB() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, NodeDescriptionRTB); } \
	FORCEINLINE static uint32 __PPO__ObjectiveWidgetClass() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, ObjectiveWidgetClass); } \
	FORCEINLINE static uint32 __PPO__RewardWidgetClass() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, RewardWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ArchiveObjectivesContainer() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, ArchiveObjectivesContainer); } \
	FORCEINLINE static uint32 __PPO__RewardsContainer() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, RewardsContainer); } \
	FORCEINLINE static uint32 __PPO__VignetteRTB() { return STRUCT_OFFSET(UArchiveNodeTooltipWidget, VignetteRTB); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_18_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UArchiveNodeTooltipWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ArchiveNodeTooltipWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
