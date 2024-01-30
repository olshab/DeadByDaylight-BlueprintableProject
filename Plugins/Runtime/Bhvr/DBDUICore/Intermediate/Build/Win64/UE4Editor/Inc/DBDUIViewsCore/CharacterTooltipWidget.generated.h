// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECharacterDifficulty : uint8;
struct FCharacterTooltipViewData;
#ifdef DBDUIVIEWSCORE_CharacterTooltipWidget_generated_h
#error "CharacterTooltipWidget.generated.h already included, missing '#pragma once' in CharacterTooltipWidget.h"
#endif
#define DBDUIVIEWSCORE_CharacterTooltipWidget_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDifficulty); \
	DECLARE_FUNCTION(execSetLevel); \
	DECLARE_FUNCTION(execSetLockDetails);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDifficulty); \
	DECLARE_FUNCTION(execSetLevel); \
	DECLARE_FUNCTION(execSetLockDetails);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_EVENT_PARMS \
	struct CharacterTooltipWidget_eventSetTooltipData_Parms \
	{ \
		FCharacterTooltipViewData characterViewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterTooltipWidget(); \
	friend struct Z_Construct_UClass_UCharacterTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UCharacterTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCharacterTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterTooltipWidget(); \
	friend struct Z_Construct_UClass_UCharacterTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UCharacterTooltipWidget, UTooltipWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCharacterTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterTooltipWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterTooltipWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterTooltipWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterTooltipWidget(UCharacterTooltipWidget&&); \
	NO_API UCharacterTooltipWidget(const UCharacterTooltipWidget&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterTooltipWidget(UCharacterTooltipWidget&&); \
	NO_API UCharacterTooltipWidget(const UCharacterTooltipWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterTooltipWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterTooltipWidget)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstructionTB() { return STRUCT_OFFSET(UCharacterTooltipWidget, InstructionTB); } \
	FORCEINLINE static uint32 __PPO__LevelTB() { return STRUCT_OFFSET(UCharacterTooltipWidget, LevelTB); } \
	FORCEINLINE static uint32 __PPO__LockDetailsTB() { return STRUCT_OFFSET(UCharacterTooltipWidget, LockDetailsTB); } \
	FORCEINLINE static uint32 __PPO__DifficultyRTB() { return STRUCT_OFFSET(UCharacterTooltipWidget, DifficultyRTB); }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_12_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCharacterTooltipWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CharacterTooltipWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
