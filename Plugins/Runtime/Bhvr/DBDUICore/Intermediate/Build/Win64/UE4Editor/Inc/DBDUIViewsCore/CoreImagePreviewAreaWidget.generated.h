// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCustomizationItemPreviewAreaViewData;
enum class ECustomizationCategory : uint8;
#ifdef DBDUIVIEWSCORE_CoreImagePreviewAreaWidget_generated_h
#error "CoreImagePreviewAreaWidget.generated.h already included, missing '#pragma once' in CoreImagePreviewAreaWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreImagePreviewAreaWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_RPC_WRAPPERS \
	virtual void ShowBGImage_Implementation(); \
 \
	DECLARE_FUNCTION(execOnItemClicked); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execShowBGImage);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShowBGImage_Implementation(); \
 \
	DECLARE_FUNCTION(execOnItemClicked); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execShowBGImage);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_EVENT_PARMS \
	struct CoreImagePreviewAreaWidget_eventSetPreviewContainerVisual_Parms \
	{ \
		ECustomizationCategory customizationCategory; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreImagePreviewAreaWidget(); \
	friend struct Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreImagePreviewAreaWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreImagePreviewAreaWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCoreImagePreviewAreaWidget(); \
	friend struct Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreImagePreviewAreaWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreImagePreviewAreaWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreImagePreviewAreaWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreImagePreviewAreaWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreImagePreviewAreaWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreImagePreviewAreaWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreImagePreviewAreaWidget(UCoreImagePreviewAreaWidget&&); \
	NO_API UCoreImagePreviewAreaWidget(const UCoreImagePreviewAreaWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreImagePreviewAreaWidget(UCoreImagePreviewAreaWidget&&); \
	NO_API UCoreImagePreviewAreaWidget(const UCoreImagePreviewAreaWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreImagePreviewAreaWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreImagePreviewAreaWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreImagePreviewAreaWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PreviewArea() { return STRUCT_OFFSET(UCoreImagePreviewAreaWidget, PreviewArea); } \
	FORCEINLINE static uint32 __PPO__PreviewAreaBG() { return STRUCT_OFFSET(UCoreImagePreviewAreaWidget, PreviewAreaBG); } \
	FORCEINLINE static uint32 __PPO__ItemContainerText() { return STRUCT_OFFSET(UCoreImagePreviewAreaWidget, ItemContainerText); } \
	FORCEINLINE static uint32 __PPO__ItemContainer() { return STRUCT_OFFSET(UCoreImagePreviewAreaWidget, ItemContainer); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_13_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreImagePreviewAreaWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreImagePreviewAreaWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
