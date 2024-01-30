// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_EndGameCollapseBarViewInterface_generated_h
#error "EndGameCollapseBarViewInterface.generated.h already included, missing '#pragma once' in EndGameCollapseBarViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_EndGameCollapseBarViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_RPC_WRAPPERS \
	virtual void InitEndGameScenario_Implementation() {}; \
	virtual void SetEndGameScenarioProgressionMode_Implementation(bool isSlowMode) {}; \
	virtual void SetEndGameScenarioProgressionValue_Implementation(const float amount) {}; \
	virtual void StartEndGameScenario_Implementation() {}; \
 \
	DECLARE_FUNCTION(execInitEndGameScenario); \
	DECLARE_FUNCTION(execSetEndGameScenarioProgressionMode); \
	DECLARE_FUNCTION(execSetEndGameScenarioProgressionValue); \
	DECLARE_FUNCTION(execStartEndGameScenario);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitEndGameScenario_Implementation() {}; \
	virtual void SetEndGameScenarioProgressionMode_Implementation(bool isSlowMode) {}; \
	virtual void SetEndGameScenarioProgressionValue_Implementation(const float amount) {}; \
	virtual void StartEndGameScenario_Implementation() {}; \
 \
	DECLARE_FUNCTION(execInitEndGameScenario); \
	DECLARE_FUNCTION(execSetEndGameScenarioProgressionMode); \
	DECLARE_FUNCTION(execSetEndGameScenarioProgressionValue); \
	DECLARE_FUNCTION(execStartEndGameScenario);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_EVENT_PARMS \
	struct EndGameCollapseBarViewInterface_eventSetEndGameScenarioProgressionMode_Parms \
	{ \
		bool isSlowMode; \
	}; \
	struct EndGameCollapseBarViewInterface_eventSetEndGameScenarioProgressionValue_Parms \
	{ \
		float amount; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameCollapseBarViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameCollapseBarViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameCollapseBarViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameCollapseBarViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameCollapseBarViewInterface(UEndGameCollapseBarViewInterface&&); \
	NO_API UEndGameCollapseBarViewInterface(const UEndGameCollapseBarViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameCollapseBarViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameCollapseBarViewInterface(UEndGameCollapseBarViewInterface&&); \
	NO_API UEndGameCollapseBarViewInterface(const UEndGameCollapseBarViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameCollapseBarViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameCollapseBarViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameCollapseBarViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEndGameCollapseBarViewInterface(); \
	friend struct Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics; \
public: \
	DECLARE_CLASS(UEndGameCollapseBarViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UEndGameCollapseBarViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEndGameCollapseBarViewInterface() {} \
public: \
	typedef UEndGameCollapseBarViewInterface UClassType; \
	typedef IEndGameCollapseBarViewInterface ThisClass; \
	static void Execute_InitEndGameScenario(UObject* O); \
	static void Execute_SetEndGameScenarioProgressionMode(UObject* O, bool isSlowMode); \
	static void Execute_SetEndGameScenarioProgressionValue(UObject* O, const float amount); \
	static void Execute_StartEndGameScenario(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IEndGameCollapseBarViewInterface() {} \
public: \
	typedef UEndGameCollapseBarViewInterface UClassType; \
	typedef IEndGameCollapseBarViewInterface ThisClass; \
	static void Execute_InitEndGameScenario(UObject* O); \
	static void Execute_SetEndGameScenarioProgressionMode(UObject* O, bool isSlowMode); \
	static void Execute_SetEndGameScenarioProgressionValue(UObject* O, const float amount); \
	static void Execute_StartEndGameScenario(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_7_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UEndGameCollapseBarViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EndGameCollapseBarViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
