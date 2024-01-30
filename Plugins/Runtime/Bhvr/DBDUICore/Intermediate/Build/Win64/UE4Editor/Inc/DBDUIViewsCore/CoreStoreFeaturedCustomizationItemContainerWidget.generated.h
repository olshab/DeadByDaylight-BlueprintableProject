// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
class UStoreCustomizationItemViewData;
#ifdef DBDUIVIEWSCORE_CoreStoreFeaturedCustomizationItemContainerWidget_generated_h
#error "CoreStoreFeaturedCustomizationItemContainerWidget.generated.h already included, missing '#pragma once' in CoreStoreFeaturedCustomizationItemContainerWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreFeaturedCustomizationItemContainerWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_RPC_WRAPPERS \
	virtual void InitItemContainer_Implementation(); \
	virtual void SetItems_Implementation(TArray<UStoreCustomizationItemViewData*> const& viewDataArray); \
 \
	DECLARE_FUNCTION(execInitItemContainer); \
	DECLARE_FUNCTION(execMoveNext); \
	DECLARE_FUNCTION(execMovePrevious); \
	DECLARE_FUNCTION(execOnMoveCompleted); \
	DECLARE_FUNCTION(execOnSelectedItemChanged); \
	DECLARE_FUNCTION(execSetItems);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitItemContainer_Implementation(); \
	virtual void SetItems_Implementation(TArray<UStoreCustomizationItemViewData*> const& viewDataArray); \
 \
	DECLARE_FUNCTION(execInitItemContainer); \
	DECLARE_FUNCTION(execMoveNext); \
	DECLARE_FUNCTION(execMovePrevious); \
	DECLARE_FUNCTION(execOnMoveCompleted); \
	DECLARE_FUNCTION(execOnSelectedItemChanged); \
	DECLARE_FUNCTION(execSetItems);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_EVENT_PARMS \
	struct CoreStoreFeaturedCustomizationItemContainerWidget_eventSetItems_Parms \
	{ \
		TArray<UStoreCustomizationItemViewData*> viewDataArray; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreFeaturedCustomizationItemContainerWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreFeaturedCustomizationItemContainerWidget, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreFeaturedCustomizationItemContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreFeaturedCustomizationItemContainerWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreFeaturedCustomizationItemContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreFeaturedCustomizationItemContainerWidget, UCoreButtonSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreFeaturedCustomizationItemContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreFeaturedCustomizationItemContainerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreFeaturedCustomizationItemContainerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreFeaturedCustomizationItemContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreFeaturedCustomizationItemContainerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreFeaturedCustomizationItemContainerWidget(UCoreStoreFeaturedCustomizationItemContainerWidget&&); \
	NO_API UCoreStoreFeaturedCustomizationItemContainerWidget(const UCoreStoreFeaturedCustomizationItemContainerWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreFeaturedCustomizationItemContainerWidget(UCoreStoreFeaturedCustomizationItemContainerWidget&&); \
	NO_API UCoreStoreFeaturedCustomizationItemContainerWidget(const UCoreStoreFeaturedCustomizationItemContainerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreFeaturedCustomizationItemContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreFeaturedCustomizationItemContainerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreFeaturedCustomizationItemContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemTileClass() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, ItemTileClass); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, Root); } \
	FORCEINLINE static uint32 __PPO__LeftArrow() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, LeftArrow); } \
	FORCEINLINE static uint32 __PPO__RightArrow() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, RightArrow); } \
	FORCEINLINE static uint32 __PPO__MaxVisibleTiles() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, MaxVisibleTiles); } \
	FORCEINLINE static uint32 __PPO__TileHeight() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, TileHeight); } \
	FORCEINLINE static uint32 __PPO__SmallTileWidth() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, SmallTileWidth); } \
	FORCEINLINE static uint32 __PPO__BigTileWidth() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, BigTileWidth); } \
	FORCEINLINE static uint32 __PPO__TileSpacing() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, TileSpacing); } \
	FORCEINLINE static uint32 __PPO__TranslationDuration() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, TranslationDuration); } \
	FORCEINLINE static uint32 __PPO__TranslationEasingType() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, TranslationEasingType); } \
	FORCEINLINE static uint32 __PPO___cachedData() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, _cachedData); } \
	FORCEINLINE static uint32 __PPO___usedTilePool() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, _usedTilePool); } \
	FORCEINLINE static uint32 __PPO___availableTilePool() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, _availableTilePool); } \
	FORCEINLINE static uint32 __PPO___positionToWidgetMap() { return STRUCT_OFFSET(UCoreStoreFeaturedCustomizationItemContainerWidget, _positionToWidgetMap); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_15_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreFeaturedCustomizationItemContainerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreFeaturedCustomizationItemContainerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
