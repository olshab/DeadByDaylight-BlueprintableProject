// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETestBuildType : uint8;
enum class ETestBuildFlagPosition : uint8;
#ifdef DBDUIVIEWINTERFACES_TestBuildFlagViewInterface_generated_h
#error "TestBuildFlagViewInterface.generated.h already included, missing '#pragma once' in TestBuildFlagViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_TestBuildFlagViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_RPC_WRAPPERS \
	virtual void UpdateWidget_Implementation(ETestBuildType testBuildType, ETestBuildFlagPosition testBuildFlagPosition) {}; \
 \
	DECLARE_FUNCTION(execUpdateWidget);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateWidget_Implementation(ETestBuildType testBuildType, ETestBuildFlagPosition testBuildFlagPosition) {}; \
 \
	DECLARE_FUNCTION(execUpdateWidget);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_EVENT_PARMS \
	struct TestBuildFlagViewInterface_eventUpdateWidget_Parms \
	{ \
		ETestBuildType testBuildType; \
		ETestBuildFlagPosition testBuildFlagPosition; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBuildFlagViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBuildFlagViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBuildFlagViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBuildFlagViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestBuildFlagViewInterface(UTestBuildFlagViewInterface&&); \
	NO_API UTestBuildFlagViewInterface(const UTestBuildFlagViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBuildFlagViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestBuildFlagViewInterface(UTestBuildFlagViewInterface&&); \
	NO_API UTestBuildFlagViewInterface(const UTestBuildFlagViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBuildFlagViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBuildFlagViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBuildFlagViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTestBuildFlagViewInterface(); \
	friend struct Z_Construct_UClass_UTestBuildFlagViewInterface_Statics; \
public: \
	DECLARE_CLASS(UTestBuildFlagViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UTestBuildFlagViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITestBuildFlagViewInterface() {} \
public: \
	typedef UTestBuildFlagViewInterface UClassType; \
	typedef ITestBuildFlagViewInterface ThisClass; \
	static void Execute_UpdateWidget(UObject* O, ETestBuildType testBuildType, ETestBuildFlagPosition testBuildFlagPosition); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~ITestBuildFlagViewInterface() {} \
public: \
	typedef UTestBuildFlagViewInterface UClassType; \
	typedef ITestBuildFlagViewInterface ThisClass; \
	static void Execute_UpdateWidget(UObject* O, ETestBuildType testBuildType, ETestBuildFlagPosition testBuildFlagPosition); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UTestBuildFlagViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TestBuildFlagViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
