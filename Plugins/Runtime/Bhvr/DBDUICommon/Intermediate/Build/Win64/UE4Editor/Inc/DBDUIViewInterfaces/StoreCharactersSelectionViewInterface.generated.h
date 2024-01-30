// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IStoreCharactersFilterViewInterface;
struct FStoreCharactersSelectionViewData;
#ifdef DBDUIVIEWINTERFACES_StoreCharactersSelectionViewInterface_generated_h
#error "StoreCharactersSelectionViewInterface.generated.h already included, missing '#pragma once' in StoreCharactersSelectionViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreCharactersSelectionViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_RPC_WRAPPERS \
	virtual TScriptInterface<IStoreCharactersFilterViewInterface> GetStoreCharactersFilterInterface_Implementation() const { return NULL; }; \
	virtual void SetData_Implementation(FStoreCharactersSelectionViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execGetStoreCharactersFilterInterface); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IStoreCharactersFilterViewInterface> GetStoreCharactersFilterInterface_Implementation() const { return NULL; }; \
	virtual void SetData_Implementation(FStoreCharactersSelectionViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execGetStoreCharactersFilterInterface); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_EVENT_PARMS \
	struct StoreCharactersSelectionViewInterface_eventGetStoreCharactersFilterInterface_Parms \
	{ \
		TScriptInterface<IStoreCharactersFilterViewInterface> ReturnValue; \
	}; \
	struct StoreCharactersSelectionViewInterface_eventSetData_Parms \
	{ \
		FStoreCharactersSelectionViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCharactersSelectionViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCharactersSelectionViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersSelectionViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersSelectionViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersSelectionViewInterface(UStoreCharactersSelectionViewInterface&&); \
	NO_API UStoreCharactersSelectionViewInterface(const UStoreCharactersSelectionViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCharactersSelectionViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersSelectionViewInterface(UStoreCharactersSelectionViewInterface&&); \
	NO_API UStoreCharactersSelectionViewInterface(const UStoreCharactersSelectionViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersSelectionViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersSelectionViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCharactersSelectionViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreCharactersSelectionViewInterface(); \
	friend struct Z_Construct_UClass_UStoreCharactersSelectionViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreCharactersSelectionViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreCharactersSelectionViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreCharactersSelectionViewInterface() {} \
public: \
	typedef UStoreCharactersSelectionViewInterface UClassType; \
	typedef IStoreCharactersSelectionViewInterface ThisClass; \
	static TScriptInterface<IStoreCharactersFilterViewInterface> Execute_GetStoreCharactersFilterInterface(const UObject* O); \
	static void Execute_SetData(UObject* O, FStoreCharactersSelectionViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreCharactersSelectionViewInterface() {} \
public: \
	typedef UStoreCharactersSelectionViewInterface UClassType; \
	typedef IStoreCharactersSelectionViewInterface ThisClass; \
	static TScriptInterface<IStoreCharactersFilterViewInterface> Execute_GetStoreCharactersFilterInterface(const UObject* O); \
	static void Execute_SetData(UObject* O, FStoreCharactersSelectionViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_11_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreCharactersSelectionViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersSelectionViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
