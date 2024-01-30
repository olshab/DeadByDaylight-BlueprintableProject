// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCompendiumButtonData;
enum class EArchivesStoryLevelStatus : uint8;
#ifdef DBDUIVIEWSCORE_CoreArchiveCompendiumButtonWidget_generated_h
#error "CoreArchiveCompendiumButtonWidget.generated.h already included, missing '#pragma once' in CoreArchiveCompendiumButtonWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveCompendiumButtonWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTomeId); \
	DECLARE_FUNCTION(execOnButtonHovered); \
	DECLARE_FUNCTION(execOnButtonUnhovered); \
	DECLARE_FUNCTION(execSetButtonData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTomeId); \
	DECLARE_FUNCTION(execOnButtonHovered); \
	DECLARE_FUNCTION(execOnButtonUnhovered); \
	DECLARE_FUNCTION(execSetButtonData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_EVENT_PARMS \
	struct CoreArchiveCompendiumButtonWidget_eventSetButtonVisual_Parms \
	{ \
		FCompendiumButtonData buttonData; \
	}; \
	struct CoreArchiveCompendiumButtonWidget_eventSetGhostStory_Parms \
	{ \
		bool isGhostStory; \
	}; \
	struct CoreArchiveCompendiumButtonWidget_eventSetLevelProgressionVisual_Parms \
	{ \
		int32 buttonLevel; \
		EArchivesStoryLevelStatus levelStatus; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveCompendiumButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveCompendiumButtonWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveCompendiumButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveCompendiumButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveCompendiumButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveCompendiumButtonWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveCompendiumButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveCompendiumButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveCompendiumButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveCompendiumButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveCompendiumButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveCompendiumButtonWidget(UCoreArchiveCompendiumButtonWidget&&); \
	NO_API UCoreArchiveCompendiumButtonWidget(const UCoreArchiveCompendiumButtonWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveCompendiumButtonWidget(UCoreArchiveCompendiumButtonWidget&&); \
	NO_API UCoreArchiveCompendiumButtonWidget(const UCoreArchiveCompendiumButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveCompendiumButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveCompendiumButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveCompendiumButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TomeProgressStyleTexture() { return STRUCT_OFFSET(UCoreArchiveCompendiumButtonWidget, TomeProgressStyleTexture); } \
	FORCEINLINE static uint32 __PPO__VolumeIndex() { return STRUCT_OFFSET(UCoreArchiveCompendiumButtonWidget, VolumeIndex); } \
	FORCEINLINE static uint32 __PPO___compendiumButtonData() { return STRUCT_OFFSET(UCoreArchiveCompendiumButtonWidget, _compendiumButtonData); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_14_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveCompendiumButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
