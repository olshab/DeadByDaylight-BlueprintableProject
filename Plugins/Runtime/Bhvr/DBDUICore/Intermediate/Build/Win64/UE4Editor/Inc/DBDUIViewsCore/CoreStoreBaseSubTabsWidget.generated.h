// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreStoreBaseSubTabsWidget_generated_h
#error "CoreStoreBaseSubTabsWidget.generated.h already included, missing '#pragma once' in CoreStoreBaseSubTabsWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreBaseSubTabsWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_RPC_WRAPPERS \
	virtual UWidget* GetSubTabContentForTab_Implementation(int32 subTabId); \
 \
	DECLARE_FUNCTION(execGetSubTabContentForTab); \
	DECLARE_FUNCTION(execOnSubTabSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UWidget* GetSubTabContentForTab_Implementation(int32 subTabId); \
 \
	DECLARE_FUNCTION(execGetSubTabContentForTab); \
	DECLARE_FUNCTION(execOnSubTabSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_EVENT_PARMS \
	struct CoreStoreBaseSubTabsWidget_eventGetSubTabContentForTab_Parms \
	{ \
		int32 subTabId; \
		UWidget* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CoreStoreBaseSubTabsWidget_eventGetSubTabContentForTab_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreBaseSubTabsWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreBaseSubTabsWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreBaseSubTabsWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreBaseSubTabsWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreBaseSubTabsWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreBaseSubTabsWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreBaseSubTabsWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreBaseSubTabsWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStoreBaseSubTabsWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreBaseSubTabsWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreBaseSubTabsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreBaseSubTabsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreBaseSubTabsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreBaseSubTabsWidget(UCoreStoreBaseSubTabsWidget&&); \
	NO_API UCoreStoreBaseSubTabsWidget(const UCoreStoreBaseSubTabsWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreBaseSubTabsWidget(UCoreStoreBaseSubTabsWidget&&); \
	NO_API UCoreStoreBaseSubTabsWidget(const UCoreStoreBaseSubTabsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreBaseSubTabsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreBaseSubTabsWidget); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreBaseSubTabsWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___menuTabSelectedDelegate() { return STRUCT_OFFSET(UCoreStoreBaseSubTabsWidget, _menuTabSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO__SubTabsContainer() { return STRUCT_OFFSET(UCoreStoreBaseSubTabsWidget, SubTabsContainer); } \
	FORCEINLINE static uint32 __PPO__TabContentSwitcher() { return STRUCT_OFFSET(UCoreStoreBaseSubTabsWidget, TabContentSwitcher); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_14_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreBaseSubTabsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreBaseSubTabsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
