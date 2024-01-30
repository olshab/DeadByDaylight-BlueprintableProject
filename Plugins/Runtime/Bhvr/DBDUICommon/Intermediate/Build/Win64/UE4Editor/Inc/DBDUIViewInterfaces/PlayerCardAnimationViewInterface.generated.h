// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_PlayerCardAnimationViewInterface_generated_h
#error "PlayerCardAnimationViewInterface.generated.h already included, missing '#pragma once' in PlayerCardAnimationViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_PlayerCardAnimationViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_RPC_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_EVENT_PARMS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerCardAnimationViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerCardAnimationViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerCardAnimationViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerCardAnimationViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerCardAnimationViewInterface(UPlayerCardAnimationViewInterface&&); \
	NO_API UPlayerCardAnimationViewInterface(const UPlayerCardAnimationViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerCardAnimationViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerCardAnimationViewInterface(UPlayerCardAnimationViewInterface&&); \
	NO_API UPlayerCardAnimationViewInterface(const UPlayerCardAnimationViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerCardAnimationViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerCardAnimationViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerCardAnimationViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerCardAnimationViewInterface(); \
	friend struct Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerCardAnimationViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UPlayerCardAnimationViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerCardAnimationViewInterface() {} \
public: \
	typedef UPlayerCardAnimationViewInterface UClassType; \
	typedef IPlayerCardAnimationViewInterface ThisClass; \
	static void Execute_OnPlayAnimation(UObject* O); \
	static void Execute_OnStopAnimation(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IPlayerCardAnimationViewInterface() {} \
public: \
	typedef UPlayerCardAnimationViewInterface UClassType; \
	typedef IPlayerCardAnimationViewInterface ThisClass; \
	static void Execute_OnPlayAnimation(UObject* O); \
	static void Execute_OnStopAnimation(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_7_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UPlayerCardAnimationViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerCardAnimationViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
