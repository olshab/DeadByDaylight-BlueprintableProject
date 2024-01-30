// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_GenericRefreshingPopupViewInterface_generated_h
#error "GenericRefreshingPopupViewInterface.generated.h already included, missing '#pragma once' in GenericRefreshingPopupViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_GenericRefreshingPopupViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_RPC_WRAPPERS \
	virtual void Refresh_Implementation(float remainingTime) {}; \
 \
	DECLARE_FUNCTION(execRefresh);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Refresh_Implementation(float remainingTime) {}; \
 \
	DECLARE_FUNCTION(execRefresh);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_EVENT_PARMS \
	struct GenericRefreshingPopupViewInterface_eventRefresh_Parms \
	{ \
		float remainingTime; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericRefreshingPopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericRefreshingPopupViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericRefreshingPopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericRefreshingPopupViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericRefreshingPopupViewInterface(UGenericRefreshingPopupViewInterface&&); \
	NO_API UGenericRefreshingPopupViewInterface(const UGenericRefreshingPopupViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericRefreshingPopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericRefreshingPopupViewInterface(UGenericRefreshingPopupViewInterface&&); \
	NO_API UGenericRefreshingPopupViewInterface(const UGenericRefreshingPopupViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericRefreshingPopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericRefreshingPopupViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericRefreshingPopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGenericRefreshingPopupViewInterface(); \
	friend struct Z_Construct_UClass_UGenericRefreshingPopupViewInterface_Statics; \
public: \
	DECLARE_CLASS(UGenericRefreshingPopupViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UGenericRefreshingPopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGenericRefreshingPopupViewInterface() {} \
public: \
	typedef UGenericRefreshingPopupViewInterface UClassType; \
	typedef IGenericRefreshingPopupViewInterface ThisClass; \
	static void Execute_Refresh(UObject* O, float remainingTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IGenericRefreshingPopupViewInterface() {} \
public: \
	typedef UGenericRefreshingPopupViewInterface UClassType; \
	typedef IGenericRefreshingPopupViewInterface ThisClass; \
	static void Execute_Refresh(UObject* O, float remainingTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_7_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UGenericRefreshingPopupViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GenericRefreshingPopupViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
