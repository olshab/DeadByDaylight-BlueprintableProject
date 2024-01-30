// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_CoreInteractionPromptsContainerWidget_generated_h
#error "CoreInteractionPromptsContainerWidget.generated.h already included, missing '#pragma once' in CoreInteractionPromptsContainerWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreInteractionPromptsContainerWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_RPC_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreInteractionPromptsContainerWidget(); \
	friend struct Z_Construct_UClass_UCoreInteractionPromptsContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreInteractionPromptsContainerWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreInteractionPromptsContainerWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreInteractionPromptsContainerWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreInteractionPromptsContainerWidget(); \
	friend struct Z_Construct_UClass_UCoreInteractionPromptsContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreInteractionPromptsContainerWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreInteractionPromptsContainerWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreInteractionPromptsContainerWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreInteractionPromptsContainerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreInteractionPromptsContainerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreInteractionPromptsContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreInteractionPromptsContainerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreInteractionPromptsContainerWidget(UCoreInteractionPromptsContainerWidget&&); \
	NO_API UCoreInteractionPromptsContainerWidget(const UCoreInteractionPromptsContainerWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreInteractionPromptsContainerWidget(UCoreInteractionPromptsContainerWidget&&); \
	NO_API UCoreInteractionPromptsContainerWidget(const UCoreInteractionPromptsContainerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreInteractionPromptsContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreInteractionPromptsContainerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreInteractionPromptsContainerWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CenterContainerBox() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, CenterContainerBox); } \
	FORCEINLINE static uint32 __PPO__ContainerBox() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, ContainerBox); } \
	FORCEINLINE static uint32 __PPO__InteractionPromptWidgetClass() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, InteractionPromptWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MaxDisplayedPrompts() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, MaxDisplayedPrompts); } \
	FORCEINLINE static uint32 __PPO__MaxDisplayedCenterPrompts() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, MaxDisplayedCenterPrompts); } \
	FORCEINLINE static uint32 __PPO__SlotMargin() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, SlotMargin); } \
	FORCEINLINE static uint32 __PPO___promptViewDataList() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, _promptViewDataList); } \
	FORCEINLINE static uint32 __PPO___centerPromptViewDataList() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, _centerPromptViewDataList); } \
	FORCEINLINE static uint32 __PPO___promptWidgets() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, _promptWidgets); } \
	FORCEINLINE static uint32 __PPO___centerPromptWidgets() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, _centerPromptWidgets); } \
	FORCEINLINE static uint32 __PPO___displayedPromptsMap() { return STRUCT_OFFSET(UCoreInteractionPromptsContainerWidget, _displayedPromptsMap); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_15_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreInteractionPromptsContainerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptsContainerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
