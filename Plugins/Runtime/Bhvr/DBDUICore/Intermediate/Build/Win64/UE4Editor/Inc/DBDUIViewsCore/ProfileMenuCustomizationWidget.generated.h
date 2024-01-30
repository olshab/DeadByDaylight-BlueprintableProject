// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EItemSorting : uint8;
#ifdef DBDUIVIEWSCORE_ProfileMenuCustomizationWidget_generated_h
#error "ProfileMenuCustomizationWidget.generated.h already included, missing '#pragma once' in ProfileMenuCustomizationWidget.h"
#endif
#define DBDUIVIEWSCORE_ProfileMenuCustomizationWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCustomizationGridItemClicked); \
	DECLARE_FUNCTION(execOnCustomizationSortingChanged); \
	DECLARE_FUNCTION(execOnEquipButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCustomizationGridItemClicked); \
	DECLARE_FUNCTION(execOnCustomizationSortingChanged); \
	DECLARE_FUNCTION(execOnEquipButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProfileMenuCustomizationWidget(); \
	friend struct Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics; \
public: \
	DECLARE_CLASS(UProfileMenuCustomizationWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UProfileMenuCustomizationWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UProfileMenuCustomizationWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUProfileMenuCustomizationWidget(); \
	friend struct Z_Construct_UClass_UProfileMenuCustomizationWidget_Statics; \
public: \
	DECLARE_CLASS(UProfileMenuCustomizationWidget, UCoreTabContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UProfileMenuCustomizationWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UProfileMenuCustomizationWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProfileMenuCustomizationWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProfileMenuCustomizationWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProfileMenuCustomizationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProfileMenuCustomizationWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProfileMenuCustomizationWidget(UProfileMenuCustomizationWidget&&); \
	NO_API UProfileMenuCustomizationWidget(const UProfileMenuCustomizationWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProfileMenuCustomizationWidget(UProfileMenuCustomizationWidget&&); \
	NO_API UProfileMenuCustomizationWidget(const UProfileMenuCustomizationWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProfileMenuCustomizationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProfileMenuCustomizationWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProfileMenuCustomizationWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SortButton() { return STRUCT_OFFSET(UProfileMenuCustomizationWidget, SortButton); } \
	FORCEINLINE static uint32 __PPO__CustomizationGrid() { return STRUCT_OFFSET(UProfileMenuCustomizationWidget, CustomizationGrid); } \
	FORCEINLINE static uint32 __PPO__PreviewArea() { return STRUCT_OFFSET(UProfileMenuCustomizationWidget, PreviewArea); } \
	FORCEINLINE static uint32 __PPO__EquipInputSwitcher() { return STRUCT_OFFSET(UProfileMenuCustomizationWidget, EquipInputSwitcher); } \
	FORCEINLINE static uint32 __PPO___noBannerSelectedText() { return STRUCT_OFFSET(UProfileMenuCustomizationWidget, _noBannerSelectedText); } \
	FORCEINLINE static uint32 __PPO___noBadgeSelectedText() { return STRUCT_OFFSET(UProfileMenuCustomizationWidget, _noBadgeSelectedText); } \
	FORCEINLINE static uint32 __PPO___customizationCategory() { return STRUCT_OFFSET(UProfileMenuCustomizationWidget, _customizationCategory); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_15_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UProfileMenuCustomizationWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_ProfileMenuCustomizationWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
