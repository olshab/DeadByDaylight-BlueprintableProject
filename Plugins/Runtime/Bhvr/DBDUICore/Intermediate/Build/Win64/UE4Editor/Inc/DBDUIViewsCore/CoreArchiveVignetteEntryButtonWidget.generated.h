// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_CoreArchiveVignetteEntryButtonWidget_generated_h
#error "CoreArchiveVignetteEntryButtonWidget.generated.h already included, missing '#pragma once' in CoreArchiveVignetteEntryButtonWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreArchiveVignetteEntryButtonWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEntryNumber); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEntryNumber); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_EVENT_PARMS \
	struct CoreArchiveVignetteEntryButtonWidget_eventSetVisualData_Parms \
	{ \
		int32 entryNumber; \
		bool isRead; \
		FText unreadIndicatorText; \
		bool isImage; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreArchiveVignetteEntryButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveVignetteEntryButtonWidget, UCoreTabWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveVignetteEntryButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCoreArchiveVignetteEntryButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreArchiveVignetteEntryButtonWidget, UCoreTabWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreArchiveVignetteEntryButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreArchiveVignetteEntryButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreArchiveVignetteEntryButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveVignetteEntryButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveVignetteEntryButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveVignetteEntryButtonWidget(UCoreArchiveVignetteEntryButtonWidget&&); \
	NO_API UCoreArchiveVignetteEntryButtonWidget(const UCoreArchiveVignetteEntryButtonWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreArchiveVignetteEntryButtonWidget(UCoreArchiveVignetteEntryButtonWidget&&); \
	NO_API UCoreArchiveVignetteEntryButtonWidget(const UCoreArchiveVignetteEntryButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreArchiveVignetteEntryButtonWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreArchiveVignetteEntryButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreArchiveVignetteEntryButtonWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TextIconLocked() { return STRUCT_OFFSET(UCoreArchiveVignetteEntryButtonWidget, TextIconLocked); } \
	FORCEINLINE static uint32 __PPO__TextIconUnlocked() { return STRUCT_OFFSET(UCoreArchiveVignetteEntryButtonWidget, TextIconUnlocked); } \
	FORCEINLINE static uint32 __PPO__ImageIconLocked() { return STRUCT_OFFSET(UCoreArchiveVignetteEntryButtonWidget, ImageIconLocked); } \
	FORCEINLINE static uint32 __PPO__ImageIconUnlocked() { return STRUCT_OFFSET(UCoreArchiveVignetteEntryButtonWidget, ImageIconUnlocked); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreArchiveVignetteEntryButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreArchiveVignetteEntryButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
