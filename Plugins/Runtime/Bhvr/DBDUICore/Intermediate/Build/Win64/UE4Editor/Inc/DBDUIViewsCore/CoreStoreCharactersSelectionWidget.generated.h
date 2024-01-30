// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreStoreCharactersSelectionWidget_generated_h
#error "CoreStoreCharactersSelectionWidget.generated.h already included, missing '#pragma once' in CoreStoreCharactersSelectionWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreCharactersSelectionWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCharacterSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCharacterSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreCharactersSelectionWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCharactersSelectionWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCharactersSelectionWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreCharactersSelectionWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreCharactersSelectionWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCharactersSelectionWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCharactersSelectionWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCharactersSelectionWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreCharactersSelectionWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreCharactersSelectionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreCharactersSelectionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCharactersSelectionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCharactersSelectionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCharactersSelectionWidget(UCoreStoreCharactersSelectionWidget&&); \
	NO_API UCoreStoreCharactersSelectionWidget(const UCoreStoreCharactersSelectionWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCharactersSelectionWidget(UCoreStoreCharactersSelectionWidget&&); \
	NO_API UCoreStoreCharactersSelectionWidget(const UCoreStoreCharactersSelectionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCharactersSelectionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCharactersSelectionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreCharactersSelectionWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___characterSelectedDelegate() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _characterSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___itemWidgetClass() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _itemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___numberOfColumns() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _numberOfColumns); } \
	FORCEINLINE static uint32 __PPO___itemScale() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _itemScale); } \
	FORCEINLINE static uint32 __PPO___layoutMask() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _layoutMask); } \
	FORCEINLINE static uint32 __PPO__Scroll() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, Scroll); } \
	FORCEINLINE static uint32 __PPO__Container() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, Container); } \
	FORCEINLINE static uint32 __PPO__FiltersWidget() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, FiltersWidget); } \
	FORCEINLINE static uint32 __PPO___preConstructedItemsCount() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _preConstructedItemsCount); } \
	FORCEINLINE static uint32 __PPO___selectedItem() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _selectedItem); } \
	FORCEINLINE static uint32 __PPO___characterList() { return STRUCT_OFFSET(UCoreStoreCharactersSelectionWidget, _characterList); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_17_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreCharactersSelectionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersSelectionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
