// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreArchiveCompendiumButtonWidget;
class UCoreButtonWidget;
class UGridSlot;
#ifdef DBDUIVIEWSCORE_CoreArchiveCompendiumWidget_generated_h
#error "CoreArchiveCompendiumWidget.generated.h already included, missing '#pragma once' in CoreArchiveCompendiumWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveCompendiumWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateAndAddButtonToGrid); \
	DECLARE_FUNCTION(execCreateGhostStories); \
	DECLARE_FUNCTION(execOnPastStoryClicked); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetScroll); \
	DECLARE_FUNCTION(execSetGridSlot);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateAndAddButtonToGrid); \
	DECLARE_FUNCTION(execCreateGhostStories); \
	DECLARE_FUNCTION(execOnPastStoryClicked); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetScroll); \
	DECLARE_FUNCTION(execSetGridSlot);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveCompendiumWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveCompendiumWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveCompendiumWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveCompendiumWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveCompendiumWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveCompendiumWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveCompendiumWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveCompendiumWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreArchiveCompendiumWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveCompendiumWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveCompendiumWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveCompendiumWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveCompendiumWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveCompendiumWidget(UCoreArchiveCompendiumWidget&&); \
	NO_API UCoreArchiveCompendiumWidget(const UCoreArchiveCompendiumWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveCompendiumWidget(UCoreArchiveCompendiumWidget&&); \
	NO_API UCoreArchiveCompendiumWidget(const UCoreArchiveCompendiumWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveCompendiumWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveCompendiumWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveCompendiumWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___compendiumButtonWidgetClass() { return STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _compendiumButtonWidgetClass); } \
	FORCEINLINE static uint32 __PPO___onCompendiumClickedDelegate() { return STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _onCompendiumClickedDelegate); } \
	FORCEINLINE static uint32 __PPO__CompendiumGrid() { return STRUCT_OFFSET(UCoreArchiveCompendiumWidget, CompendiumGrid); } \
	FORCEINLINE static uint32 __PPO__CompendiumScroll() { return STRUCT_OFFSET(UCoreArchiveCompendiumWidget, CompendiumScroll); } \
	FORCEINLINE static uint32 __PPO___cellsPerRow() { return STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _cellsPerRow); } \
	FORCEINLINE static uint32 __PPO___compendiumButtonWidgetPool() { return STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _compendiumButtonWidgetPool); } \
	FORCEINLINE static uint32 __PPO___compendiumButtonWidgetList() { return STRUCT_OFFSET(UCoreArchiveCompendiumWidget, _compendiumButtonWidgetList); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_16_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveCompendiumWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveCompendiumWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
