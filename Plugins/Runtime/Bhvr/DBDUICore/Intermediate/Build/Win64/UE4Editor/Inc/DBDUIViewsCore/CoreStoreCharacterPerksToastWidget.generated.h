// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
struct FPointerEvent;
class UCharacterPerkViewData;
enum class EPlayerRole : uint8;
class UMenuPowerViewData;
class UCoreMenuPerkWidget;
#ifdef DBDUIVIEWSCORE_CoreStoreCharacterPerksToastWidget_generated_h
#error "CoreStoreCharacterPerksToastWidget.generated.h already included, missing '#pragma once' in CoreStoreCharacterPerksToastWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStoreCharacterPerksToastWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideTooltip); \
	DECLARE_FUNCTION(execOnPlayerClick); \
	DECLARE_FUNCTION(execSetCharacterData); \
	DECLARE_FUNCTION(execSetKillerPowerData); \
	DECLARE_FUNCTION(execSetPerkData); \
	DECLARE_FUNCTION(execShowTooltip);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideTooltip); \
	DECLARE_FUNCTION(execOnPlayerClick); \
	DECLARE_FUNCTION(execSetCharacterData); \
	DECLARE_FUNCTION(execSetKillerPowerData); \
	DECLARE_FUNCTION(execSetPerkData); \
	DECLARE_FUNCTION(execShowTooltip);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_EVENT_PARMS \
	struct CoreStoreCharacterPerksToastWidget_eventSetCharacterRole_Parms \
	{ \
		EPlayerRole role; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStoreCharacterPerksToastWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCharacterPerksToastWidget, UCoreKeyListenerButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCharacterPerksToastWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStoreCharacterPerksToastWidget(); \
	friend struct Z_Construct_UClass_UCoreStoreCharacterPerksToastWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStoreCharacterPerksToastWidget, UCoreKeyListenerButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStoreCharacterPerksToastWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStoreCharacterPerksToastWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStoreCharacterPerksToastWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCharacterPerksToastWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCharacterPerksToastWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCharacterPerksToastWidget(UCoreStoreCharacterPerksToastWidget&&); \
	NO_API UCoreStoreCharacterPerksToastWidget(const UCoreStoreCharacterPerksToastWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStoreCharacterPerksToastWidget(UCoreStoreCharacterPerksToastWidget&&); \
	NO_API UCoreStoreCharacterPerksToastWidget(const UCoreStoreCharacterPerksToastWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStoreCharacterPerksToastWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStoreCharacterPerksToastWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStoreCharacterPerksToastWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SafeArea() { return STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, SafeArea); } \
	FORCEINLINE static uint32 __PPO__isOpen() { return STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, isOpen); } \
	FORCEINLINE static uint32 __PPO__CoreKillerPower() { return STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, CoreKillerPower); } \
	FORCEINLINE static uint32 __PPO__CorePerk_1() { return STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, CorePerk_1); } \
	FORCEINLINE static uint32 __PPO__CorePerk_2() { return STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, CorePerk_2); } \
	FORCEINLINE static uint32 __PPO__CorePerk_3() { return STRUCT_OFFSET(UCoreStoreCharacterPerksToastWidget, CorePerk_3); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_16_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStoreCharacterPerksToastWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStoreCharacterPerksToastWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
