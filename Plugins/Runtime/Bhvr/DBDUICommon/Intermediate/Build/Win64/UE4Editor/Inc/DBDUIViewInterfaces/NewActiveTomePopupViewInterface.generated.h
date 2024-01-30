// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_NewActiveTomePopupViewInterface_generated_h
#error "NewActiveTomePopupViewInterface.generated.h already included, missing '#pragma once' in NewActiveTomePopupViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_NewActiveTomePopupViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_RPC_WRAPPERS \
	virtual void SetRemainingTime_Implementation(const FString& remainingTime) {}; \
	virtual void SetRiftEnabled_Implementation(bool isEnabled) {}; \
 \
	DECLARE_FUNCTION(execSetRemainingTime); \
	DECLARE_FUNCTION(execSetRiftEnabled);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetRemainingTime_Implementation(const FString& remainingTime) {}; \
	virtual void SetRiftEnabled_Implementation(bool isEnabled) {}; \
 \
	DECLARE_FUNCTION(execSetRemainingTime); \
	DECLARE_FUNCTION(execSetRiftEnabled);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_EVENT_PARMS \
	struct NewActiveTomePopupViewInterface_eventSetRemainingTime_Parms \
	{ \
		FString remainingTime; \
	}; \
	struct NewActiveTomePopupViewInterface_eventSetRiftEnabled_Parms \
	{ \
		bool isEnabled; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNewActiveTomePopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNewActiveTomePopupViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewActiveTomePopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewActiveTomePopupViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewActiveTomePopupViewInterface(UNewActiveTomePopupViewInterface&&); \
	NO_API UNewActiveTomePopupViewInterface(const UNewActiveTomePopupViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNewActiveTomePopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewActiveTomePopupViewInterface(UNewActiveTomePopupViewInterface&&); \
	NO_API UNewActiveTomePopupViewInterface(const UNewActiveTomePopupViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewActiveTomePopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewActiveTomePopupViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNewActiveTomePopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNewActiveTomePopupViewInterface(); \
	friend struct Z_Construct_UClass_UNewActiveTomePopupViewInterface_Statics; \
public: \
	DECLARE_CLASS(UNewActiveTomePopupViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UNewActiveTomePopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INewActiveTomePopupViewInterface() {} \
public: \
	typedef UNewActiveTomePopupViewInterface UClassType; \
	typedef INewActiveTomePopupViewInterface ThisClass; \
	static void Execute_SetRemainingTime(UObject* O, const FString& remainingTime); \
	static void Execute_SetRiftEnabled(UObject* O, bool isEnabled); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~INewActiveTomePopupViewInterface() {} \
public: \
	typedef UNewActiveTomePopupViewInterface UClassType; \
	typedef INewActiveTomePopupViewInterface ThisClass; \
	static void Execute_SetRemainingTime(UObject* O, const FString& remainingTime); \
	static void Execute_SetRiftEnabled(UObject* O, bool isEnabled); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_7_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UNewActiveTomePopupViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_NewActiveTomePopupViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
