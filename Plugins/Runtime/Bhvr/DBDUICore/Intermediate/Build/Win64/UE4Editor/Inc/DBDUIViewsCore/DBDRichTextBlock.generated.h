// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_DBDRichTextBlock_generated_h
#error "DBDRichTextBlock.generated.h already included, missing '#pragma once' in DBDRichTextBlock.h"
#endif
#define DBDUIVIEWSCORE_DBDRichTextBlock_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsUpperCase); \
	DECLARE_FUNCTION(execOnLargeTextSettingsChanged); \
	DECLARE_FUNCTION(execOnSwitchDockStateChanged); \
	DECLARE_FUNCTION(execPreviewHTMLText); \
	DECLARE_FUNCTION(execPreviewLargeText); \
	DECLARE_FUNCTION(execPreviewUndocked); \
	DECLARE_FUNCTION(execSetHTMLText); \
	DECLARE_FUNCTION(execSetIsUpperCase);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsUpperCase); \
	DECLARE_FUNCTION(execOnLargeTextSettingsChanged); \
	DECLARE_FUNCTION(execOnSwitchDockStateChanged); \
	DECLARE_FUNCTION(execPreviewHTMLText); \
	DECLARE_FUNCTION(execPreviewLargeText); \
	DECLARE_FUNCTION(execPreviewUndocked); \
	DECLARE_FUNCTION(execSetHTMLText); \
	DECLARE_FUNCTION(execSetIsUpperCase);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDRichTextBlock(); \
	friend struct Z_Construct_UClass_UDBDRichTextBlock_Statics; \
public: \
	DECLARE_CLASS(UDBDRichTextBlock, URichTextBlock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDRichTextBlock)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDBDRichTextBlock(); \
	friend struct Z_Construct_UClass_UDBDRichTextBlock_Statics; \
public: \
	DECLARE_CLASS(UDBDRichTextBlock, URichTextBlock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDRichTextBlock)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDRichTextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDRichTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDRichTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDRichTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDRichTextBlock(UDBDRichTextBlock&&); \
	NO_API UDBDRichTextBlock(const UDBDRichTextBlock&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDRichTextBlock(UDBDRichTextBlock&&); \
	NO_API UDBDRichTextBlock(const UDBDRichTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDRichTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDRichTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDRichTextBlock)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___switchDockStateManager() { return STRUCT_OFFSET(UDBDRichTextBlock, _switchDockStateManager); } \
	FORCEINLINE static uint32 __PPO___textManager() { return STRUCT_OFFSET(UDBDRichTextBlock, _textManager); } \
	FORCEINLINE static uint32 __PPO___characterLimit() { return STRUCT_OFFSET(UDBDRichTextBlock, _characterLimit); } \
	FORCEINLINE static uint32 __PPO___isUpperCase() { return STRUCT_OFFSET(UDBDRichTextBlock, _isUpperCase); } \
	FORCEINLINE static uint32 __PPO___hasLargeText() { return STRUCT_OFFSET(UDBDRichTextBlock, _hasLargeText); } \
	FORCEINLINE static uint32 __PPO___largeTextProperties() { return STRUCT_OFFSET(UDBDRichTextBlock, _largeTextProperties); } \
	FORCEINLINE static uint32 __PPO___overrideUndockedPropertiesWithLargeText() { return STRUCT_OFFSET(UDBDRichTextBlock, _overrideUndockedPropertiesWithLargeText); } \
	FORCEINLINE static uint32 __PPO___hasUndocking() { return STRUCT_OFFSET(UDBDRichTextBlock, _hasUndocking); } \
	FORCEINLINE static uint32 __PPO___undockedProperties() { return STRUCT_OFFSET(UDBDRichTextBlock, _undockedProperties); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_11_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UDBDRichTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDRichTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
