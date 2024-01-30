// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IStoreCollectionsListViewInterface;
#ifdef DBDUIVIEWINTERFACES_StoreCollectionsViewInterface_generated_h
#error "StoreCollectionsViewInterface.generated.h already included, missing '#pragma once' in StoreCollectionsViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreCollectionsViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_RPC_WRAPPERS \
	virtual TScriptInterface<IStoreCollectionsListViewInterface> GetTabAllInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCollectionsListViewInterface> GetTabFeaturedInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCollectionsListViewInterface> GetTabSpecialInterface_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetTabAllInterface); \
	DECLARE_FUNCTION(execGetTabFeaturedInterface); \
	DECLARE_FUNCTION(execGetTabSpecialInterface);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IStoreCollectionsListViewInterface> GetTabAllInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCollectionsListViewInterface> GetTabFeaturedInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCollectionsListViewInterface> GetTabSpecialInterface_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetTabAllInterface); \
	DECLARE_FUNCTION(execGetTabFeaturedInterface); \
	DECLARE_FUNCTION(execGetTabSpecialInterface);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_EVENT_PARMS \
	struct StoreCollectionsViewInterface_eventGetTabAllInterface_Parms \
	{ \
		TScriptInterface<IStoreCollectionsListViewInterface> ReturnValue; \
	}; \
	struct StoreCollectionsViewInterface_eventGetTabFeaturedInterface_Parms \
	{ \
		TScriptInterface<IStoreCollectionsListViewInterface> ReturnValue; \
	}; \
	struct StoreCollectionsViewInterface_eventGetTabSpecialInterface_Parms \
	{ \
		TScriptInterface<IStoreCollectionsListViewInterface> ReturnValue; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCollectionsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCollectionsViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCollectionsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCollectionsViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCollectionsViewInterface(UStoreCollectionsViewInterface&&); \
	NO_API UStoreCollectionsViewInterface(const UStoreCollectionsViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCollectionsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCollectionsViewInterface(UStoreCollectionsViewInterface&&); \
	NO_API UStoreCollectionsViewInterface(const UStoreCollectionsViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCollectionsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCollectionsViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCollectionsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreCollectionsViewInterface(); \
	friend struct Z_Construct_UClass_UStoreCollectionsViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreCollectionsViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreCollectionsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreCollectionsViewInterface() {} \
public: \
	typedef UStoreCollectionsViewInterface UClassType; \
	typedef IStoreCollectionsViewInterface ThisClass; \
	static TScriptInterface<IStoreCollectionsListViewInterface> Execute_GetTabAllInterface(const UObject* O); \
	static TScriptInterface<IStoreCollectionsListViewInterface> Execute_GetTabFeaturedInterface(const UObject* O); \
	static TScriptInterface<IStoreCollectionsListViewInterface> Execute_GetTabSpecialInterface(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreCollectionsViewInterface() {} \
public: \
	typedef UStoreCollectionsViewInterface UClassType; \
	typedef IStoreCollectionsViewInterface ThisClass; \
	static TScriptInterface<IStoreCollectionsListViewInterface> Execute_GetTabAllInterface(const UObject* O); \
	static TScriptInterface<IStoreCollectionsListViewInterface> Execute_GetTabFeaturedInterface(const UObject* O); \
	static TScriptInterface<IStoreCollectionsListViewInterface> Execute_GetTabSpecialInterface(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreCollectionsViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCollectionsViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
