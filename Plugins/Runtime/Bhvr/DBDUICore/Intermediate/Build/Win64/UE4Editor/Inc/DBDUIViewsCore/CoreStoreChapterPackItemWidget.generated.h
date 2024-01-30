// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
class UStoreChapterPackViewData;
#ifdef DBDUIVIEWSCORE_CoreStoreChapterPackItemWidget_generated_h
#error "CoreStoreChapterPackItemWidget.generated.h already included, missing '#pragma once' in CoreStoreChapterPackItemWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreChapterPackItemWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_RPC_WRAPPERS \
	virtual void SetData_Implementation(UStoreChapterPackViewData* data); \
 \
	DECLARE_FUNCTION(execOnPremiumBuyButtonClicked); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetData_Implementation(UStoreChapterPackViewData* data); \
 \
	DECLARE_FUNCTION(execOnPremiumBuyButtonClicked); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_EVENT_PARMS \
	struct CoreStoreChapterPackItemWidget_eventSetData_Parms \
	{ \
		UStoreChapterPackViewData* data; \
	}; \
	struct CoreStoreChapterPackItemWidget_eventSetExpanded_Parms \
	{ \
		bool expanded; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreChapterPackItemWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreChapterPackItemWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreChapterPackItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreChapterPackItemWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreChapterPackItemWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreChapterPackItemWidget, UCoreSelectableButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreChapterPackItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreChapterPackItemWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreChapterPackItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreChapterPackItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreChapterPackItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreChapterPackItemWidget(UCoreStoreChapterPackItemWidget&&); \
	NO_API UCoreStoreChapterPackItemWidget(const UCoreStoreChapterPackItemWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreChapterPackItemWidget(UCoreStoreChapterPackItemWidget&&); \
	NO_API UCoreStoreChapterPackItemWidget(const UCoreStoreChapterPackItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreChapterPackItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreChapterPackItemWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreChapterPackItemWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TitleText() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, TitleText); } \
	FORCEINLINE static uint32 __PPO__CharactersBox() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, CharactersBox); } \
	FORCEINLINE static uint32 __PPO__CustomizationsBox() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, CustomizationsBox); } \
	FORCEINLINE static uint32 __PPO__PremiumBuyButton() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, PremiumBuyButton); } \
	FORCEINLINE static uint32 __PPO___isExpanded() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _isExpanded); } \
	FORCEINLINE static uint32 __PPO___initialItemPoolSize() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _initialItemPoolSize); } \
	FORCEINLINE static uint32 __PPO___characterItemWidgetClass() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _characterItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___customizationItemWidgetClass() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _customizationItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___data() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _data); } \
	FORCEINLINE static uint32 __PPO___characterList() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _characterList); } \
	FORCEINLINE static uint32 __PPO___customizationList() { return STRUCT_OFFSET(UCoreStoreChapterPackItemWidget, _customizationList); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_18_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreChapterPackItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreChapterPackItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
