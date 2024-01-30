// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBasePopupViewData;
#ifdef DBDUIVIEWINTERFACES_BasePopupViewInterface_generated_h
#error "BasePopupViewInterface.generated.h already included, missing '#pragma once' in BasePopupViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_BasePopupViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_RPC_WRAPPERS \
	virtual void Enter_Implementation(UBasePopupViewData* data) {}; \
	virtual void Leave_Implementation() {}; \
 \
	DECLARE_FUNCTION(execEnter); \
	DECLARE_FUNCTION(execLeave);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Enter_Implementation(UBasePopupViewData* data) {}; \
	virtual void Leave_Implementation() {}; \
 \
	DECLARE_FUNCTION(execEnter); \
	DECLARE_FUNCTION(execLeave);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_EVENT_PARMS \
	struct BasePopupViewInterface_eventEnter_Parms \
	{ \
		UBasePopupViewData* data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasePopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasePopupViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePopupViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePopupViewInterface(UBasePopupViewInterface&&); \
	NO_API UBasePopupViewInterface(const UBasePopupViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasePopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePopupViewInterface(UBasePopupViewInterface&&); \
	NO_API UBasePopupViewInterface(const UBasePopupViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePopupViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasePopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBasePopupViewInterface(); \
	friend struct Z_Construct_UClass_UBasePopupViewInterface_Statics; \
public: \
	DECLARE_CLASS(UBasePopupViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UBasePopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBasePopupViewInterface() {} \
public: \
	typedef UBasePopupViewInterface UClassType; \
	typedef IBasePopupViewInterface ThisClass; \
	static void Execute_Enter(UObject* O, UBasePopupViewData* data); \
	static void Execute_Leave(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IBasePopupViewInterface() {} \
public: \
	typedef UBasePopupViewInterface UClassType; \
	typedef IBasePopupViewInterface ThisClass; \
	static void Execute_Enter(UObject* O, UBasePopupViewData* data); \
	static void Execute_Leave(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UBasePopupViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_BasePopupViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
