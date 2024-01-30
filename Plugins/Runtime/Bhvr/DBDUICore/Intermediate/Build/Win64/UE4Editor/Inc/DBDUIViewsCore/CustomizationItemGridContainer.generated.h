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
class UCoreKeyListenerInputPromptWidget;
#ifdef DBDUIVIEWSCORE_CustomizationItemGridContainer_generated_h
#error "CustomizationItemGridContainer.generated.h already included, missing '#pragma once' in CustomizationItemGridContainer.h"
#endif
#define DBDUIVIEWSCORE_CustomizationItemGridContainer_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_22_DELEGATE \
struct CustomizationItemGridContainer_eventOnItemClickedDelegate_Parms \
{ \
	int32 selectedIndex; \
}; \
static inline void FOnItemClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnItemClickedDelegate, const int32 selectedIndex) \
{ \
	CustomizationItemGridContainer_eventOnItemClickedDelegate_Parms Parms; \
	Parms.selectedIndex=selectedIndex; \
	OnItemClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearGrid); \
	DECLARE_FUNCTION(execOnItemClicked); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetItemsLayout); \
	DECLARE_FUNCTION(execSetScrollPrompt); \
	DECLARE_FUNCTION(execSetSelectedItem);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearGrid); \
	DECLARE_FUNCTION(execOnItemClicked); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetItemsLayout); \
	DECLARE_FUNCTION(execSetScrollPrompt); \
	DECLARE_FUNCTION(execSetSelectedItem);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizationItemGridContainer(); \
	friend struct Z_Construct_UClass_UCustomizationItemGridContainer_Statics; \
public: \
	DECLARE_CLASS(UCustomizationItemGridContainer, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCustomizationItemGridContainer)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCustomizationItemGridContainer(); \
	friend struct Z_Construct_UClass_UCustomizationItemGridContainer_Statics; \
public: \
	DECLARE_CLASS(UCustomizationItemGridContainer, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCustomizationItemGridContainer)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizationItemGridContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizationItemGridContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizationItemGridContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizationItemGridContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizationItemGridContainer(UCustomizationItemGridContainer&&); \
	NO_API UCustomizationItemGridContainer(const UCustomizationItemGridContainer&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizationItemGridContainer(UCustomizationItemGridContainer&&); \
	NO_API UCustomizationItemGridContainer(const UCustomizationItemGridContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizationItemGridContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizationItemGridContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizationItemGridContainer)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___customizationRewardWidgetClass() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _customizationRewardWidgetClass); } \
	FORCEINLINE static uint32 __PPO___emptyRewardWidgetClass() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _emptyRewardWidgetClass); } \
	FORCEINLINE static uint32 __PPO___setSmallTemplate() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _setSmallTemplate); } \
	FORCEINLINE static uint32 __PPO___columnCountInGrid() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _columnCountInGrid); } \
	FORCEINLINE static uint32 __PPO___customizationTileScale() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _customizationTileScale); } \
	FORCEINLINE static uint32 __PPO___layoutMask() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _layoutMask); } \
	FORCEINLINE static uint32 __PPO___rowCountToShowScrollBar() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _rowCountToShowScrollBar); } \
	FORCEINLINE static uint32 __PPO___fillGridWithEmptyItems() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _fillGridWithEmptyItems); } \
	FORCEINLINE static uint32 __PPO__GridContainer() { return STRUCT_OFFSET(UCustomizationItemGridContainer, GridContainer); } \
	FORCEINLINE static uint32 __PPO__ScrollBox() { return STRUCT_OFFSET(UCustomizationItemGridContainer, ScrollBox); } \
	FORCEINLINE static uint32 __PPO___scrollLabelText() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _scrollLabelText); } \
	FORCEINLINE static uint32 __PPO___customizationRewards() { return STRUCT_OFFSET(UCustomizationItemGridContainer, _customizationRewards); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_16_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCustomizationItemGridContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CustomizationItemGridContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
