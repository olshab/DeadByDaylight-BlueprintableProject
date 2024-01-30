// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHudEventProgression2023ViewData;
#ifdef DBDUIVIEWINTERFACES_HudEventProgression2023ViewInterface_generated_h
#error "HudEventProgression2023ViewInterface.generated.h already included, missing '#pragma once' in HudEventProgression2023ViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_HudEventProgression2023ViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_RPC_WRAPPERS \
	virtual void EnableEventProgression_Implementation(bool isEnabled) {}; \
	virtual void InitEventProgression_Implementation(FHudEventProgression2023ViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateEnergyProgress_Implementation(FHudEventProgression2023ViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateHauntTarget_Implementation(FHudEventProgression2023ViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateVoidZoneState_Implementation(FHudEventProgression2023ViewData const& hudEventProgressionViewData) {}; \
 \
	DECLARE_FUNCTION(execEnableEventProgression); \
	DECLARE_FUNCTION(execInitEventProgression); \
	DECLARE_FUNCTION(execUpdateEnergyProgress); \
	DECLARE_FUNCTION(execUpdateHauntTarget); \
	DECLARE_FUNCTION(execUpdateVoidZoneState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EnableEventProgression_Implementation(bool isEnabled) {}; \
	virtual void InitEventProgression_Implementation(FHudEventProgression2023ViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateEnergyProgress_Implementation(FHudEventProgression2023ViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateHauntTarget_Implementation(FHudEventProgression2023ViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateVoidZoneState_Implementation(FHudEventProgression2023ViewData const& hudEventProgressionViewData) {}; \
 \
	DECLARE_FUNCTION(execEnableEventProgression); \
	DECLARE_FUNCTION(execInitEventProgression); \
	DECLARE_FUNCTION(execUpdateEnergyProgress); \
	DECLARE_FUNCTION(execUpdateHauntTarget); \
	DECLARE_FUNCTION(execUpdateVoidZoneState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_EVENT_PARMS \
	struct HudEventProgression2023ViewInterface_eventEnableEventProgression_Parms \
	{ \
		bool isEnabled; \
	}; \
	struct HudEventProgression2023ViewInterface_eventInitEventProgression_Parms \
	{ \
		FHudEventProgression2023ViewData hudEventProgressionViewData; \
	}; \
	struct HudEventProgression2023ViewInterface_eventUpdateEnergyProgress_Parms \
	{ \
		FHudEventProgression2023ViewData hudEventProgressionViewData; \
	}; \
	struct HudEventProgression2023ViewInterface_eventUpdateHauntTarget_Parms \
	{ \
		FHudEventProgression2023ViewData hudEventProgressionViewData; \
	}; \
	struct HudEventProgression2023ViewInterface_eventUpdateVoidZoneState_Parms \
	{ \
		FHudEventProgression2023ViewData hudEventProgressionViewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudEventProgression2023ViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudEventProgression2023ViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudEventProgression2023ViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudEventProgression2023ViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudEventProgression2023ViewInterface(UHudEventProgression2023ViewInterface&&); \
	NO_API UHudEventProgression2023ViewInterface(const UHudEventProgression2023ViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudEventProgression2023ViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudEventProgression2023ViewInterface(UHudEventProgression2023ViewInterface&&); \
	NO_API UHudEventProgression2023ViewInterface(const UHudEventProgression2023ViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudEventProgression2023ViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudEventProgression2023ViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudEventProgression2023ViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHudEventProgression2023ViewInterface(); \
	friend struct Z_Construct_UClass_UHudEventProgression2023ViewInterface_Statics; \
public: \
	DECLARE_CLASS(UHudEventProgression2023ViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UHudEventProgression2023ViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHudEventProgression2023ViewInterface() {} \
public: \
	typedef UHudEventProgression2023ViewInterface UClassType; \
	typedef IHudEventProgression2023ViewInterface ThisClass; \
	static void Execute_EnableEventProgression(UObject* O, bool isEnabled); \
	static void Execute_InitEventProgression(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateEnergyProgress(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateHauntTarget(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateVoidZoneState(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IHudEventProgression2023ViewInterface() {} \
public: \
	typedef UHudEventProgression2023ViewInterface UClassType; \
	typedef IHudEventProgression2023ViewInterface ThisClass; \
	static void Execute_EnableEventProgression(UObject* O, bool isEnabled); \
	static void Execute_InitEventProgression(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateEnergyProgress(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateHauntTarget(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateVoidZoneState(UObject* O, FHudEventProgression2023ViewData const& hudEventProgressionViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UHudEventProgression2023ViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgression2023ViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
