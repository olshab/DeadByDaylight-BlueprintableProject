// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_NewActiveTomePopupWidget_generated_h
#error "NewActiveTomePopupWidget.generated.h already included, missing '#pragma once' in NewActiveTomePopupWidget.h"
#endif
#define DBDUIVIEWSCORE_NewActiveTomePopupWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCurrentTomeButtonClicked); \
	DECLARE_FUNCTION(execOnRiftButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCurrentTomeButtonClicked); \
	DECLARE_FUNCTION(execOnRiftButtonClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNewActiveTomePopupWidget(); \
	friend struct Z_Construct_UClass_UNewActiveTomePopupWidget_Statics; \
public: \
	DECLARE_CLASS(UNewActiveTomePopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UNewActiveTomePopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UNewActiveTomePopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNewActiveTomePopupWidget(); \
	friend struct Z_Construct_UClass_UNewActiveTomePopupWidget_Statics; \
public: \
	DECLARE_CLASS(UNewActiveTomePopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UNewActiveTomePopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UNewActiveTomePopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNewActiveTomePopupWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNewActiveTomePopupWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewActiveTomePopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewActiveTomePopupWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewActiveTomePopupWidget(UNewActiveTomePopupWidget&&); \
	NO_API UNewActiveTomePopupWidget(const UNewActiveTomePopupWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewActiveTomePopupWidget(UNewActiveTomePopupWidget&&); \
	NO_API UNewActiveTomePopupWidget(const UNewActiveTomePopupWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewActiveTomePopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewActiveTomePopupWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNewActiveTomePopupWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BgImageContainer() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, BgImageContainer); } \
	FORCEINLINE static uint32 __PPO__RiftTimeLabel() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, RiftTimeLabel); } \
	FORCEINLINE static uint32 __PPO__TomeTitle() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, TomeTitle); } \
	FORCEINLINE static uint32 __PPO__TomeDescription() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, TomeDescription); } \
	FORCEINLINE static uint32 __PPO__TomeButton() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, TomeButton); } \
	FORCEINLINE static uint32 __PPO__RiftTitle() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, RiftTitle); } \
	FORCEINLINE static uint32 __PPO__RiftDescription() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, RiftDescription); } \
	FORCEINLINE static uint32 __PPO__RiftButton() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, RiftButton); } \
	FORCEINLINE static uint32 __PPO___currentTomeButtonClickedDelegate() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, _currentTomeButtonClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___riftButtonClickedDelegate() { return STRUCT_OFFSET(UNewActiveTomePopupWidget, _riftButtonClickedDelegate); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_13_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UNewActiveTomePopupWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_NewActiveTomePopupWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
