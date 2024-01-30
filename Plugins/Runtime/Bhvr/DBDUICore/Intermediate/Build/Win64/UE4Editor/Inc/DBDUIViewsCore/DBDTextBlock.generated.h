// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_DBDTextBlock_generated_h
#error "DBDTextBlock.generated.h already included, missing '#pragma once' in DBDTextBlock.h"
#endif
#define DBDUIVIEWSCORE_DBDTextBlock_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsUpperCase); \
	DECLARE_FUNCTION(execGetTextStyles); \
	DECLARE_FUNCTION(execOnLargeTextSettingsChanged); \
	DECLARE_FUNCTION(execOnSwitchDockStateChanged); \
	DECLARE_FUNCTION(execPopulateTextStyles); \
	DECLARE_FUNCTION(execPreviewLargeText); \
	DECLARE_FUNCTION(execPreviewUndocked); \
	DECLARE_FUNCTION(execSetIsUpperCase);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsUpperCase); \
	DECLARE_FUNCTION(execGetTextStyles); \
	DECLARE_FUNCTION(execOnLargeTextSettingsChanged); \
	DECLARE_FUNCTION(execOnSwitchDockStateChanged); \
	DECLARE_FUNCTION(execPopulateTextStyles); \
	DECLARE_FUNCTION(execPreviewLargeText); \
	DECLARE_FUNCTION(execPreviewUndocked); \
	DECLARE_FUNCTION(execSetIsUpperCase);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDTextBlock(); \
	friend struct Z_Construct_UClass_UDBDTextBlock_Statics; \
public: \
	DECLARE_CLASS(UDBDTextBlock, UTextBlock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDTextBlock)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDBDTextBlock(); \
	friend struct Z_Construct_UClass_UDBDTextBlock_Statics; \
public: \
	DECLARE_CLASS(UDBDTextBlock, UTextBlock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDTextBlock)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDTextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDTextBlock(UDBDTextBlock&&); \
	NO_API UDBDTextBlock(const UDBDTextBlock&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDTextBlock(UDBDTextBlock&&); \
	NO_API UDBDTextBlock(const UDBDTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDTextBlock)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___switchDockStateManager() { return STRUCT_OFFSET(UDBDTextBlock, _switchDockStateManager); } \
	FORCEINLINE static uint32 __PPO___textManager() { return STRUCT_OFFSET(UDBDTextBlock, _textManager); } \
	FORCEINLINE static uint32 __PPO___characterLimit() { return STRUCT_OFFSET(UDBDTextBlock, _characterLimit); } \
	FORCEINLINE static uint32 __PPO___isUpperCase() { return STRUCT_OFFSET(UDBDTextBlock, _isUpperCase); } \
	FORCEINLINE static uint32 __PPO___hasLargeText() { return STRUCT_OFFSET(UDBDTextBlock, _hasLargeText); } \
	FORCEINLINE static uint32 __PPO___largeTextProperties() { return STRUCT_OFFSET(UDBDTextBlock, _largeTextProperties); } \
	FORCEINLINE static uint32 __PPO___overrideUndockedPropertiesWithLargeText() { return STRUCT_OFFSET(UDBDTextBlock, _overrideUndockedPropertiesWithLargeText); } \
	FORCEINLINE static uint32 __PPO___hasUndocking() { return STRUCT_OFFSET(UDBDTextBlock, _hasUndocking); } \
	FORCEINLINE static uint32 __PPO___undockedProperties() { return STRUCT_OFFSET(UDBDTextBlock, _undockedProperties); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_11_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UDBDTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
