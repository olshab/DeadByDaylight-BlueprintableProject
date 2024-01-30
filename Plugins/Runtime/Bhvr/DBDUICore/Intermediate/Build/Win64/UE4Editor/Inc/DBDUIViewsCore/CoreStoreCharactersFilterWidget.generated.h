// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
enum class EItemFilterOption : uint8;
#ifdef DBDUIVIEWSCORE_CoreStoreCharactersFilterWidget_generated_h
#error "CoreStoreCharactersFilterWidget.generated.h already included, missing '#pragma once' in CoreStoreCharactersFilterWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreCharactersFilterWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClearFiltersClicked); \
	DECLARE_FUNCTION(execOnFilterOptionCheckBoxToggled);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClearFiltersClicked); \
	DECLARE_FUNCTION(execOnFilterOptionCheckBoxToggled);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_EVENT_PARMS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreCharactersFilterWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCharactersFilterWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCharactersFilterWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCharactersFilterWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreCharactersFilterWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreCharactersFilterWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCharactersFilterWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCharactersFilterWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCharactersFilterWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreCharactersFilterWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreCharactersFilterWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreCharactersFilterWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCharactersFilterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCharactersFilterWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCharactersFilterWidget(UCoreStoreCharactersFilterWidget&&); \
	NO_API UCoreStoreCharactersFilterWidget(const UCoreStoreCharactersFilterWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCharactersFilterWidget(UCoreStoreCharactersFilterWidget&&); \
	NO_API UCoreStoreCharactersFilterWidget(const UCoreStoreCharactersFilterWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCharactersFilterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCharactersFilterWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreCharactersFilterWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ClearFiltersButton() { return STRUCT_OFFSET(UCoreStoreCharactersFilterWidget, ClearFiltersButton); } \
	FORCEINLINE static uint32 __PPO__CheckBoxesContainer() { return STRUCT_OFFSET(UCoreStoreCharactersFilterWidget, CheckBoxesContainer); } \
	FORCEINLINE static uint32 __PPO__FiltersCheckBoxArray() { return STRUCT_OFFSET(UCoreStoreCharactersFilterWidget, FiltersCheckBoxArray); } \
	FORCEINLINE static uint32 __PPO___onClearFiltersClicked() { return STRUCT_OFFSET(UCoreStoreCharactersFilterWidget, _onClearFiltersClicked); } \
	FORCEINLINE static uint32 __PPO___onFiltersChanged() { return STRUCT_OFFSET(UCoreStoreCharactersFilterWidget, _onFiltersChanged); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_15_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreCharactersFilterWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharactersFilterWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
