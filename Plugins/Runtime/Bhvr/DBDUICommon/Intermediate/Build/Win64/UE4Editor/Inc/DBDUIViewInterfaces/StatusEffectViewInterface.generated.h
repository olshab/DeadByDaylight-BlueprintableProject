// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStatusEffectViewData;
#ifdef DBDUIVIEWINTERFACES_StatusEffectViewInterface_generated_h
#error "StatusEffectViewInterface.generated.h already included, missing '#pragma once' in StatusEffectViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StatusEffectViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_RPC_WRAPPERS \
	virtual void RemoveExistingStatusEffect_Implementation(FName const& statusEffectId) {}; \
	virtual void ShowActiveStatusEffect_Implementation(FStatusEffectViewData const& statusEffectData) {}; \
 \
	DECLARE_FUNCTION(execRemoveExistingStatusEffect); \
	DECLARE_FUNCTION(execShowActiveStatusEffect);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemoveExistingStatusEffect_Implementation(FName const& statusEffectId) {}; \
	virtual void ShowActiveStatusEffect_Implementation(FStatusEffectViewData const& statusEffectData) {}; \
 \
	DECLARE_FUNCTION(execRemoveExistingStatusEffect); \
	DECLARE_FUNCTION(execShowActiveStatusEffect);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_EVENT_PARMS \
	struct StatusEffectViewInterface_eventRemoveExistingStatusEffect_Parms \
	{ \
		FName statusEffectId; \
	}; \
	struct StatusEffectViewInterface_eventShowActiveStatusEffect_Parms \
	{ \
		FStatusEffectViewData statusEffectData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusEffectViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatusEffectViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusEffectViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusEffectViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatusEffectViewInterface(UStatusEffectViewInterface&&); \
	NO_API UStatusEffectViewInterface(const UStatusEffectViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusEffectViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatusEffectViewInterface(UStatusEffectViewInterface&&); \
	NO_API UStatusEffectViewInterface(const UStatusEffectViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusEffectViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusEffectViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatusEffectViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStatusEffectViewInterface(); \
	friend struct Z_Construct_UClass_UStatusEffectViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStatusEffectViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStatusEffectViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStatusEffectViewInterface() {} \
public: \
	typedef UStatusEffectViewInterface UClassType; \
	typedef IStatusEffectViewInterface ThisClass; \
	static void Execute_RemoveExistingStatusEffect(UObject* O, FName const& statusEffectId); \
	static void Execute_ShowActiveStatusEffect(UObject* O, FStatusEffectViewData const& statusEffectData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IStatusEffectViewInterface() {} \
public: \
	typedef UStatusEffectViewInterface UClassType; \
	typedef IStatusEffectViewInterface ThisClass; \
	static void Execute_RemoveExistingStatusEffect(UObject* O, FName const& statusEffectId); \
	static void Execute_ShowActiveStatusEffect(UObject* O, FStatusEffectViewData const& statusEffectData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStatusEffectViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StatusEffectViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
