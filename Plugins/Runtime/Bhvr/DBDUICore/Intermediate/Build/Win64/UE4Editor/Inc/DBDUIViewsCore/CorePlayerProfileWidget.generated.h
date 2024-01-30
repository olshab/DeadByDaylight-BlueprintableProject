// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
class UTexture2D;
struct FPlayerCardViewData;
#ifdef DBDUIVIEWSCORE_CorePlayerProfileWidget_generated_h
#error "CorePlayerProfileWidget.generated.h already included, missing '#pragma once' in CorePlayerProfileWidget.h"
#endif
#define DBDUIVIEWSCORE_CorePlayerProfileWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPlayerCardEnabled); \
	DECLARE_FUNCTION(execOnPlayerCardButtonHovered); \
	DECLARE_FUNCTION(execOnPlayerCardButtonUnhovered); \
	DECLARE_FUNCTION(execOnPlayerProfileClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPlayerCardEnabled); \
	DECLARE_FUNCTION(execOnPlayerCardButtonHovered); \
	DECLARE_FUNCTION(execOnPlayerCardButtonUnhovered); \
	DECLARE_FUNCTION(execOnPlayerProfileClicked);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_EVENT_PARMS \
	struct CorePlayerProfileWidget_eventSetBadgeBannerData_Parms \
	{ \
		TSoftObjectPtr<UTexture2D> badge; \
		FPlayerCardViewData banner; \
		bool showBanner; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorePlayerProfileWidget(); \
	friend struct Z_Construct_UClass_UCorePlayerProfileWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerProfileWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerProfileWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCorePlayerProfileWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCorePlayerProfileWidget(); \
	friend struct Z_Construct_UClass_UCorePlayerProfileWidget_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerProfileWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerProfileWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCorePlayerProfileWidget*>(this); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCorePlayerProfileWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePlayerProfileWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerProfileWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerProfileWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerProfileWidget(UCorePlayerProfileWidget&&); \
	NO_API UCorePlayerProfileWidget(const UCorePlayerProfileWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerProfileWidget(UCorePlayerProfileWidget&&); \
	NO_API UCorePlayerProfileWidget(const UCorePlayerProfileWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerProfileWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerProfileWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCorePlayerProfileWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCardButton() { return STRUCT_OFFSET(UCorePlayerProfileWidget, PlayerCardButton); } \
	FORCEINLINE static uint32 __PPO__Wallet() { return STRUCT_OFFSET(UCorePlayerProfileWidget, Wallet); } \
	FORCEINLINE static uint32 __PPO__PlayerName() { return STRUCT_OFFSET(UCorePlayerProfileWidget, PlayerName); } \
	FORCEINLINE static uint32 __PPO___onPlayerProfileClickedDelegate() { return STRUCT_OFFSET(UCorePlayerProfileWidget, _onPlayerProfileClickedDelegate); } \
	FORCEINLINE static uint32 __PPO___playerCardEnabledOpacity() { return STRUCT_OFFSET(UCorePlayerProfileWidget, _playerCardEnabledOpacity); } \
	FORCEINLINE static uint32 __PPO___playerCardDisabledOpacity() { return STRUCT_OFFSET(UCorePlayerProfileWidget, _playerCardDisabledOpacity); } \
	FORCEINLINE static uint32 __PPO___playerProfileFocusOpacity() { return STRUCT_OFFSET(UCorePlayerProfileWidget, _playerProfileFocusOpacity); } \
	FORCEINLINE static uint32 __PPO___playerProfileUnfocusOpacity() { return STRUCT_OFFSET(UCorePlayerProfileWidget, _playerProfileUnfocusOpacity); } \
	FORCEINLINE static uint32 __PPO___isProfileMenuContextEntered() { return STRUCT_OFFSET(UCorePlayerProfileWidget, _isProfileMenuContextEntered); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_16_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCorePlayerProfileWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CorePlayerProfileWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
