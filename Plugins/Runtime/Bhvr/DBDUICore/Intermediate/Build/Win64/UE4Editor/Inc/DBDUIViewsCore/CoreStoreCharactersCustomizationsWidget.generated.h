// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreStoreCharactersCustomizationsWidget_generated_h
#error "CoreStoreCharactersCustomizationsWidget.generated.h already included, missing '#pragma once' in CoreStoreCharactersCustomizationsWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreCharactersCustomizationsWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCategorySelected); \
	DECLARE_FUNCTION(execOnCustomizationSelected); \
	DECLARE_FUNCTION(execOnCustomizationSelectedAgain);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCategorySelected); \
	DECLARE_FUNCTION(execOnCustomizationSelected); \
	DECLARE_FUNCTION(execOnCustomizationSelectedAgain);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreCharactersCustomizationsWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCharactersCustomizationsWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCharactersCustomizationsWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreCharactersCustomizationsWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreCharactersCustomizationsWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCharactersCustomizationsWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCharactersCustomizationsWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCharactersCustomizationsWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreCharactersCustomizationsWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreCharactersCustomizationsWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreCharactersCustomizationsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCharactersCustomizationsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCharactersCustomizationsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCharactersCustomizationsWidget(UCoreStoreCharactersCustomizationsWidget&&); \
	NO_API UCoreStoreCharactersCustomizationsWidget(const UCoreStoreCharactersCustomizationsWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCharactersCustomizationsWidget(UCoreStoreCharactersCustomizationsWidget&&); \
	NO_API UCoreStoreCharactersCustomizationsWidget(const UCoreStoreCharactersCustomizationsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCharactersCustomizationsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCharactersCustomizationsWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreCharactersCustomizationsWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___customizationSelectedDelegate() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _customizationSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___categorySelectedDelegate() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _categorySelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___customizationItemWidgetClass() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _customizationItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___categoryItemWidgetClass() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _categoryItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___numberOfColumns() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _numberOfColumns); } \
	FORCEINLINE static uint32 __PPO___customizationItemScale() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _customizationItemScale); } \
	FORCEINLINE static uint32 __PPO___layoutMask() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _layoutMask); } \
	FORCEINLINE static uint32 __PPO__CustomizationsScroll() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, CustomizationsScroll); } \
	FORCEINLINE static uint32 __PPO__CustomizationsContainer() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, CustomizationsContainer); } \
	FORCEINLINE static uint32 __PPO__CategoriesContainer() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, CategoriesContainer); } \
	FORCEINLINE static uint32 __PPO__FiltersWidget() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, FiltersWidget); } \
	FORCEINLINE static uint32 __PPO___selectedCustomizationItems() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _selectedCustomizationItems); } \
	FORCEINLINE static uint32 __PPO___maxSelectedItems() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _maxSelectedItems); } \
	FORCEINLINE static uint32 __PPO___selectedCategoryItem() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _selectedCategoryItem); } \
	FORCEINLINE static uint32 __PPO___preConstructedCategoriesCount() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _preConstructedCategoriesCount); } \
	FORCEINLINE static uint32 __PPO___preConstructedCustomizationsCount() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _preConstructedCustomizationsCount); } \
	FORCEINLINE static uint32 __PPO___categoryList() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _categoryList); } \
	FORCEINLINE static uint32 __PPO___customizationList() { return STRUCT_OFFSET(UCoreStoreCharactersCustomizationsWidget, _customizationList); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_19_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreCharactersCustomizationsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersCustomizationsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
