// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IStoreCharactersFilterViewInterface;
struct FStoreCharactersCustomizationsViewData;
#ifdef DBDUIVIEWINTERFACES_StoreCharactersCustomizationsViewInterface_generated_h
#error "StoreCharactersCustomizationsViewInterface.generated.h already included, missing '#pragma once' in StoreCharactersCustomizationsViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreCharactersCustomizationsViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_RPC_WRAPPERS \
	virtual TScriptInterface<IStoreCharactersFilterViewInterface> GetStoreCharactersFilterInterface_Implementation() const { return NULL; }; \
	virtual void SetData_Implementation(FStoreCharactersCustomizationsViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execGetStoreCharactersFilterInterface); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IStoreCharactersFilterViewInterface> GetStoreCharactersFilterInterface_Implementation() const { return NULL; }; \
	virtual void SetData_Implementation(FStoreCharactersCustomizationsViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execGetStoreCharactersFilterInterface); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_EVENT_PARMS \
	struct StoreCharactersCustomizationsViewInterface_eventGetStoreCharactersFilterInterface_Parms \
	{ \
		TScriptInterface<IStoreCharactersFilterViewInterface> ReturnValue; \
	}; \
	struct StoreCharactersCustomizationsViewInterface_eventSetData_Parms \
	{ \
		FStoreCharactersCustomizationsViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCharactersCustomizationsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCharactersCustomizationsViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersCustomizationsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersCustomizationsViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersCustomizationsViewInterface(UStoreCharactersCustomizationsViewInterface&&); \
	NO_API UStoreCharactersCustomizationsViewInterface(const UStoreCharactersCustomizationsViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCharactersCustomizationsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersCustomizationsViewInterface(UStoreCharactersCustomizationsViewInterface&&); \
	NO_API UStoreCharactersCustomizationsViewInterface(const UStoreCharactersCustomizationsViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersCustomizationsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersCustomizationsViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCharactersCustomizationsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreCharactersCustomizationsViewInterface(); \
	friend struct Z_Construct_UClass_UStoreCharactersCustomizationsViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreCharactersCustomizationsViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreCharactersCustomizationsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreCharactersCustomizationsViewInterface() {} \
public: \
	typedef UStoreCharactersCustomizationsViewInterface UClassType; \
	typedef IStoreCharactersCustomizationsViewInterface ThisClass; \
	static TScriptInterface<IStoreCharactersFilterViewInterface> Execute_GetStoreCharactersFilterInterface(const UObject* O); \
	static void Execute_SetData(UObject* O, FStoreCharactersCustomizationsViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreCharactersCustomizationsViewInterface() {} \
public: \
	typedef UStoreCharactersCustomizationsViewInterface UClassType; \
	typedef IStoreCharactersCustomizationsViewInterface ThisClass; \
	static TScriptInterface<IStoreCharactersFilterViewInterface> Execute_GetStoreCharactersFilterInterface(const UObject* O); \
	static void Execute_SetData(UObject* O, FStoreCharactersCustomizationsViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_11_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreCharactersCustomizationsViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersCustomizationsViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
