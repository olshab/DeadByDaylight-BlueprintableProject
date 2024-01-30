// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStoreCollectionViewData;
#ifdef DBDUIVIEWSCORE_CoreStoreCollectionsItemWidget_generated_h
#error "CoreStoreCollectionsItemWidget.generated.h already included, missing '#pragma once' in CoreStoreCollectionsItemWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreCollectionsItemWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_RPC_WRAPPERS \
	virtual void SetupView_Implementation(UStoreCollectionViewData* collectionViewData); \
 \
	DECLARE_FUNCTION(execSetupView);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupView_Implementation(UStoreCollectionViewData* collectionViewData); \
 \
	DECLARE_FUNCTION(execSetupView);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_EVENT_PARMS \
	struct CoreStoreCollectionsItemWidget_eventSetExpanded_Parms \
	{ \
		bool expanded; \
	}; \
	struct CoreStoreCollectionsItemWidget_eventSetupView_Parms \
	{ \
		UStoreCollectionViewData* collectionViewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreCollectionsItemWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCollectionsItemWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCollectionsItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreCollectionsItemWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCollectionsItemWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCollectionsItemWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCollectionsItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreCollectionsItemWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreCollectionsItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCollectionsItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCollectionsItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCollectionsItemWidget(UCoreStoreCollectionsItemWidget&&); \
	NO_API UCoreStoreCollectionsItemWidget(const UCoreStoreCollectionsItemWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCollectionsItemWidget(UCoreStoreCollectionsItemWidget&&); \
	NO_API UCoreStoreCollectionsItemWidget(const UCoreStoreCollectionsItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCollectionsItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCollectionsItemWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreCollectionsItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimerText() { return STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, TimerText); } \
	FORCEINLINE static uint32 __PPO__CountText() { return STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, CountText); } \
	FORCEINLINE static uint32 __PPO__StoreCustomizationListBox() { return STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, StoreCustomizationListBox); } \
	FORCEINLINE static uint32 __PPO___storeCustomizationItemWidgetClass() { return STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, _storeCustomizationItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___preConstructedItemsCount() { return STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, _preConstructedItemsCount); } \
	FORCEINLINE static uint32 __PPO___layoutMask() { return STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, _layoutMask); } \
	FORCEINLINE static uint32 __PPO___itemList() { return STRUCT_OFFSET(UCoreStoreCollectionsItemWidget, _itemList); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_14_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreCollectionsItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCollectionsItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
