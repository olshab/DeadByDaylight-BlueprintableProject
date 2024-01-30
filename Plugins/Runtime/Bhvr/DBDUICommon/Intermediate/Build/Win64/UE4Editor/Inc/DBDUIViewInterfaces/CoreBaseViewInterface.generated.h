// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_CoreBaseViewInterface_generated_h
#error "CoreBaseViewInterface.generated.h already included, missing '#pragma once' in CoreBaseViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_CoreBaseViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_RPC_WRAPPERS \
	virtual void OnStartAsyncOperation_Implementation() {}; \
	virtual void OnStopAsyncOperation_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnStartAsyncOperation); \
	DECLARE_FUNCTION(execOnStopAsyncOperation);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStartAsyncOperation_Implementation() {}; \
	virtual void OnStopAsyncOperation_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnStartAsyncOperation); \
	DECLARE_FUNCTION(execOnStopAsyncOperation);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_EVENT_PARMS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreBaseViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreBaseViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreBaseViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreBaseViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreBaseViewInterface(UCoreBaseViewInterface&&); \
	NO_API UCoreBaseViewInterface(const UCoreBaseViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreBaseViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreBaseViewInterface(UCoreBaseViewInterface&&); \
	NO_API UCoreBaseViewInterface(const UCoreBaseViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreBaseViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreBaseViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreBaseViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCoreBaseViewInterface(); \
	friend struct Z_Construct_UClass_UCoreBaseViewInterface_Statics; \
public: \
	DECLARE_CLASS(UCoreBaseViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UCoreBaseViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICoreBaseViewInterface() {} \
public: \
	typedef UCoreBaseViewInterface UClassType; \
	typedef ICoreBaseViewInterface ThisClass; \
	static void Execute_OnStartAsyncOperation(UObject* O); \
	static void Execute_OnStopAsyncOperation(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ICoreBaseViewInterface() {} \
public: \
	typedef UCoreBaseViewInterface UClassType; \
	typedef ICoreBaseViewInterface ThisClass; \
	static void Execute_OnStartAsyncOperation(UObject* O); \
	static void Execute_OnStopAsyncOperation(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_7_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UCoreBaseViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CoreBaseViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
