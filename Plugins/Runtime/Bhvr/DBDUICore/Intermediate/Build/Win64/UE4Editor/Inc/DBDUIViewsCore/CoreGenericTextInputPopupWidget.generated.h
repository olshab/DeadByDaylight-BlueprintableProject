// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
enum class EPopupButtonType : uint8;
#ifdef DBDUIVIEWSCORE_CoreGenericTextInputPopupWidget_generated_h
#error "CoreGenericTextInputPopupWidget.generated.h already included, missing '#pragma once' in CoreGenericTextInputPopupWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreGenericTextInputPopupWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnButtonHovered); \
	DECLARE_FUNCTION(execOnButtonUnhovered); \
	DECLARE_FUNCTION(execOnKeyboardButtonClicked); \
	DECLARE_FUNCTION(execOnTextCommitted); \
	DECLARE_FUNCTION(execOnTextEntered); \
	DECLARE_FUNCTION(execOnTextInputChoiceSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnButtonHovered); \
	DECLARE_FUNCTION(execOnButtonUnhovered); \
	DECLARE_FUNCTION(execOnKeyboardButtonClicked); \
	DECLARE_FUNCTION(execOnTextCommitted); \
	DECLARE_FUNCTION(execOnTextEntered); \
	DECLARE_FUNCTION(execOnTextInputChoiceSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreGenericTextInputPopupWidget(); \
	friend struct Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreGenericTextInputPopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreGenericTextInputPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreGenericTextInputPopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCoreGenericTextInputPopupWidget(); \
	friend struct Z_Construct_UClass_UCoreGenericTextInputPopupWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreGenericTextInputPopupWidget, UCoreGenericPopupWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreGenericTextInputPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreGenericTextInputPopupWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreGenericTextInputPopupWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreGenericTextInputPopupWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGenericTextInputPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGenericTextInputPopupWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreGenericTextInputPopupWidget(UCoreGenericTextInputPopupWidget&&); \
	NO_API UCoreGenericTextInputPopupWidget(const UCoreGenericTextInputPopupWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreGenericTextInputPopupWidget(UCoreGenericTextInputPopupWidget&&); \
	NO_API UCoreGenericTextInputPopupWidget(const UCoreGenericTextInputPopupWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGenericTextInputPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGenericTextInputPopupWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreGenericTextInputPopupWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputTextBox() { return STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, InputTextBox); } \
	FORCEINLINE static uint32 __PPO__MessageScrollBox() { return STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, MessageScrollBox); } \
	FORCEINLINE static uint32 __PPO__ErrorIcon() { return STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, ErrorIcon); } \
	FORCEINLINE static uint32 __PPO__ErrorMessageTextBlock() { return STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, ErrorMessageTextBlock); } \
	FORCEINLINE static uint32 __PPO__KeyboardButton() { return STRUCT_OFFSET(UCoreGenericTextInputPopupWidget, KeyboardButton); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_17_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreGenericTextInputPopupWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGenericTextInputPopupWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
