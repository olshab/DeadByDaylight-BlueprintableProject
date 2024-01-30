// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStoreItemLayout : uint8;
class UCoreButtonWidget;
class UCoreSelectableButtonWidget;
class UStoreItemViewData;
#ifdef DBDUIVIEWSCORE_CoreStoreItemWidget_generated_h
#error "CoreStoreItemWidget.generated.h already included, missing '#pragma once' in CoreStoreItemWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreItemWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_RPC_WRAPPERS \
	virtual void SetStoreItemData_Implementation(UStoreItemViewData* data); \
 \
	DECLARE_FUNCTION(execIsTagVisible); \
	DECLARE_FUNCTION(execOnButtonHovered); \
	DECLARE_FUNCTION(execOnButtonSelectedChanged); \
	DECLARE_FUNCTION(execOnButtonUnhovered); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execSetStoreItemData); \
	DECLARE_FUNCTION(execSetStoreItemLayout);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetStoreItemData_Implementation(UStoreItemViewData* data); \
 \
	DECLARE_FUNCTION(execIsTagVisible); \
	DECLARE_FUNCTION(execOnButtonHovered); \
	DECLARE_FUNCTION(execOnButtonSelectedChanged); \
	DECLARE_FUNCTION(execOnButtonUnhovered); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execSetStoreItemData); \
	DECLARE_FUNCTION(execSetStoreItemLayout);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_EVENT_PARMS \
	struct CoreStoreItemWidget_eventSetSmallTemplate_Parms \
	{ \
		bool useSmallTemplate; \
	}; \
	struct CoreStoreItemWidget_eventSetStoreItemData_Parms \
	{ \
		UStoreItemViewData* data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreItemWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreItemWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreItemWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreItemWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreItemWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreItemWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreItemWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreItemWidget(UCoreStoreItemWidget&&); \
	NO_API UCoreStoreItemWidget(const UCoreStoreItemWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreItemWidget(UCoreStoreItemWidget&&); \
	NO_API UCoreStoreItemWidget(const UCoreStoreItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreItemWidget); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___layoutMask() { return STRUCT_OFFSET(UCoreStoreItemWidget, _layoutMask); } \
	FORCEINLINE static uint32 __PPO___priceTagPadding() { return STRUCT_OFFSET(UCoreStoreItemWidget, _priceTagPadding); } \
	FORCEINLINE static uint32 __PPO___priceTagWidgetClass() { return STRUCT_OFFSET(UCoreStoreItemWidget, _priceTagWidgetClass); } \
	FORCEINLINE static uint32 __PPO___tooltipHorizontalAlignment() { return STRUCT_OFFSET(UCoreStoreItemWidget, _tooltipHorizontalAlignment); } \
	FORCEINLINE static uint32 __PPO___tooltipVerticalAlignment() { return STRUCT_OFFSET(UCoreStoreItemWidget, _tooltipVerticalAlignment); } \
	FORCEINLINE static uint32 __PPO__ItemIcon() { return STRUCT_OFFSET(UCoreStoreItemWidget, ItemIcon); } \
	FORCEINLINE static uint32 __PPO__LayoutScale() { return STRUCT_OFFSET(UCoreStoreItemWidget, LayoutScale); } \
	FORCEINLINE static uint32 __PPO__SelectedOverlay() { return STRUCT_OFFSET(UCoreStoreItemWidget, SelectedOverlay); } \
	FORCEINLINE static uint32 __PPO__OnHoverBorder() { return STRUCT_OFFSET(UCoreStoreItemWidget, OnHoverBorder); } \
	FORCEINLINE static uint32 __PPO__PriceTagsVerticalBox() { return STRUCT_OFFSET(UCoreStoreItemWidget, PriceTagsVerticalBox); } \
	FORCEINLINE static uint32 __PPO__OwnedTagText() { return STRUCT_OFFSET(UCoreStoreItemWidget, OwnedTagText); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_22_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
