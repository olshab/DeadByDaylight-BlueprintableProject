// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDisplayStandViewData;
#ifdef DBDUIVIEWINTERFACES_DisplayStandViewInterface_generated_h
#error "DisplayStandViewInterface.generated.h already included, missing '#pragma once' in DisplayStandViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_DisplayStandViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_RPC_WRAPPERS \
	virtual void SetDragZone_Implementation(FDisplayStandViewData const& layoutData) {}; \
 \
	DECLARE_FUNCTION(execSetDragZone);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetDragZone_Implementation(FDisplayStandViewData const& layoutData) {}; \
 \
	DECLARE_FUNCTION(execSetDragZone);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_EVENT_PARMS \
	struct DisplayStandViewInterface_eventSetDragZone_Parms \
	{ \
		FDisplayStandViewData layoutData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayStandViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayStandViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayStandViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayStandViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayStandViewInterface(UDisplayStandViewInterface&&); \
	NO_API UDisplayStandViewInterface(const UDisplayStandViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayStandViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayStandViewInterface(UDisplayStandViewInterface&&); \
	NO_API UDisplayStandViewInterface(const UDisplayStandViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayStandViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayStandViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayStandViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDisplayStandViewInterface(); \
	friend struct Z_Construct_UClass_UDisplayStandViewInterface_Statics; \
public: \
	DECLARE_CLASS(UDisplayStandViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UDisplayStandViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDisplayStandViewInterface() {} \
public: \
	typedef UDisplayStandViewInterface UClassType; \
	typedef IDisplayStandViewInterface ThisClass; \
	static void Execute_SetDragZone(UObject* O, FDisplayStandViewData const& layoutData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IDisplayStandViewInterface() {} \
public: \
	typedef UDisplayStandViewInterface UClassType; \
	typedef IDisplayStandViewInterface ThisClass; \
	static void Execute_SetDragZone(UObject* O, FDisplayStandViewData const& layoutData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UDisplayStandViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DisplayStandViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
