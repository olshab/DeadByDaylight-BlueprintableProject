// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AController;
#ifdef DBDUIPRESENTERS_PawnObserver_generated_h
#error "PawnObserver.generated.h already included, missing '#pragma once' in PawnObserver.h"
#endif
#define DBDUIPRESENTERS_PawnObserver_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnPawnControllerSet);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnPawnControllerSet);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnObserver(); \
	friend struct Z_Construct_UClass_UPawnObserver_Statics; \
public: \
	DECLARE_CLASS(UPawnObserver, UUIComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPawnObserver)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPawnObserver(); \
	friend struct Z_Construct_UClass_UPawnObserver_Statics; \
public: \
	DECLARE_CLASS(UPawnObserver, UUIComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPawnObserver)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnObserver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnObserver(UPawnObserver&&); \
	NO_API UPawnObserver(const UPawnObserver&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnObserver(UPawnObserver&&); \
	NO_API UPawnObserver(const UPawnObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnObserver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPawnObserver)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_PROLOG
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_INCLASS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UPawnObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
