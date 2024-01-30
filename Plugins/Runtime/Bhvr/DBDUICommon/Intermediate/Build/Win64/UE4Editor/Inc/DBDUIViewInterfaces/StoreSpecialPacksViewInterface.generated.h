// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IStoreChapterPacksListViewInterface;
class IStoreSpecialPacksHeritageViewInterface;
class IStoreSpecialPacksListViewInterface;
#ifdef DBDUIVIEWINTERFACES_StoreSpecialPacksViewInterface_generated_h
#error "StoreSpecialPacksViewInterface.generated.h already included, missing '#pragma once' in StoreSpecialPacksViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreSpecialPacksViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_RPC_WRAPPERS \
	virtual TScriptInterface<IStoreChapterPacksListViewInterface> GetTabChaptersInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreSpecialPacksHeritageViewInterface> GetTabHeritageInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreSpecialPacksListViewInterface> GetTabSpecialsInterface_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetTabChaptersInterface); \
	DECLARE_FUNCTION(execGetTabHeritageInterface); \
	DECLARE_FUNCTION(execGetTabSpecialsInterface);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IStoreChapterPacksListViewInterface> GetTabChaptersInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreSpecialPacksHeritageViewInterface> GetTabHeritageInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreSpecialPacksListViewInterface> GetTabSpecialsInterface_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetTabChaptersInterface); \
	DECLARE_FUNCTION(execGetTabHeritageInterface); \
	DECLARE_FUNCTION(execGetTabSpecialsInterface);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_EVENT_PARMS \
	struct StoreSpecialPacksViewInterface_eventGetTabChaptersInterface_Parms \
	{ \
		TScriptInterface<IStoreChapterPacksListViewInterface> ReturnValue; \
	}; \
	struct StoreSpecialPacksViewInterface_eventGetTabHeritageInterface_Parms \
	{ \
		TScriptInterface<IStoreSpecialPacksHeritageViewInterface> ReturnValue; \
	}; \
	struct StoreSpecialPacksViewInterface_eventGetTabSpecialsInterface_Parms \
	{ \
		TScriptInterface<IStoreSpecialPacksListViewInterface> ReturnValue; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreSpecialPacksViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreSpecialPacksViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreSpecialPacksViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreSpecialPacksViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreSpecialPacksViewInterface(UStoreSpecialPacksViewInterface&&); \
	NO_API UStoreSpecialPacksViewInterface(const UStoreSpecialPacksViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreSpecialPacksViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreSpecialPacksViewInterface(UStoreSpecialPacksViewInterface&&); \
	NO_API UStoreSpecialPacksViewInterface(const UStoreSpecialPacksViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreSpecialPacksViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreSpecialPacksViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreSpecialPacksViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreSpecialPacksViewInterface(); \
	friend struct Z_Construct_UClass_UStoreSpecialPacksViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreSpecialPacksViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreSpecialPacksViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreSpecialPacksViewInterface() {} \
public: \
	typedef UStoreSpecialPacksViewInterface UClassType; \
	typedef IStoreSpecialPacksViewInterface ThisClass; \
	static TScriptInterface<IStoreChapterPacksListViewInterface> Execute_GetTabChaptersInterface(const UObject* O); \
	static TScriptInterface<IStoreSpecialPacksHeritageViewInterface> Execute_GetTabHeritageInterface(const UObject* O); \
	static TScriptInterface<IStoreSpecialPacksListViewInterface> Execute_GetTabSpecialsInterface(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreSpecialPacksViewInterface() {} \
public: \
	typedef UStoreSpecialPacksViewInterface UClassType; \
	typedef IStoreSpecialPacksViewInterface ThisClass; \
	static TScriptInterface<IStoreChapterPacksListViewInterface> Execute_GetTabChaptersInterface(const UObject* O); \
	static TScriptInterface<IStoreSpecialPacksHeritageViewInterface> Execute_GetTabHeritageInterface(const UObject* O); \
	static TScriptInterface<IStoreSpecialPacksListViewInterface> Execute_GetTabSpecialsInterface(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_12_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreSpecialPacksViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialPacksViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
