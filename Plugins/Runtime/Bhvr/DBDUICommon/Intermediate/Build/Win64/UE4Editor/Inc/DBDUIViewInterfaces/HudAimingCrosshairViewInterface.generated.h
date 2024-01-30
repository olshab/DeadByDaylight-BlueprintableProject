// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAimingCrosshairState : uint8;
#ifdef DBDUIVIEWINTERFACES_HudAimingCrosshairViewInterface_generated_h
#error "HudAimingCrosshairViewInterface.generated.h already included, missing '#pragma once' in HudAimingCrosshairViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_HudAimingCrosshairViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_RPC_WRAPPERS \
	virtual void SetProgress_Implementation(const float progress) {}; \
	virtual void SetState_Implementation(const EAimingCrosshairState newState) {}; \
 \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execSetState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetProgress_Implementation(const float progress) {}; \
	virtual void SetState_Implementation(const EAimingCrosshairState newState) {}; \
 \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execSetState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_EVENT_PARMS \
	struct HudAimingCrosshairViewInterface_eventSetProgress_Parms \
	{ \
		float progress; \
	}; \
	struct HudAimingCrosshairViewInterface_eventSetState_Parms \
	{ \
		EAimingCrosshairState newState; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudAimingCrosshairViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudAimingCrosshairViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudAimingCrosshairViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudAimingCrosshairViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudAimingCrosshairViewInterface(UHudAimingCrosshairViewInterface&&); \
	NO_API UHudAimingCrosshairViewInterface(const UHudAimingCrosshairViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudAimingCrosshairViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudAimingCrosshairViewInterface(UHudAimingCrosshairViewInterface&&); \
	NO_API UHudAimingCrosshairViewInterface(const UHudAimingCrosshairViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudAimingCrosshairViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudAimingCrosshairViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudAimingCrosshairViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHudAimingCrosshairViewInterface(); \
	friend struct Z_Construct_UClass_UHudAimingCrosshairViewInterface_Statics; \
public: \
	DECLARE_CLASS(UHudAimingCrosshairViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UHudAimingCrosshairViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHudAimingCrosshairViewInterface() {} \
public: \
	typedef UHudAimingCrosshairViewInterface UClassType; \
	typedef IHudAimingCrosshairViewInterface ThisClass; \
	static void Execute_SetProgress(UObject* O, const float progress); \
	static void Execute_SetState(UObject* O, const EAimingCrosshairState newState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IHudAimingCrosshairViewInterface() {} \
public: \
	typedef UHudAimingCrosshairViewInterface UClassType; \
	typedef IHudAimingCrosshairViewInterface ThisClass; \
	static void Execute_SetProgress(UObject* O, const float progress); \
	static void Execute_SetState(UObject* O, const EAimingCrosshairState newState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UHudAimingCrosshairViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAimingCrosshairViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
