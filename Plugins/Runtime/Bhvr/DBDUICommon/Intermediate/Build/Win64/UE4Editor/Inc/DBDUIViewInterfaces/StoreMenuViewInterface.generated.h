// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IStoreCharactersViewInterface;
class IStoreCollectionsViewInterface;
class IStoreFeaturedViewInterface;
class IStoreSpecialPacksViewInterface;
class IStoreSpecialsViewInterface;
enum class EStoreMenuState : uint8;
struct FTabWidgetData;
#ifdef DBDUIVIEWINTERFACES_StoreMenuViewInterface_generated_h
#error "StoreMenuViewInterface.generated.h already included, missing '#pragma once' in StoreMenuViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreMenuViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_RPC_WRAPPERS \
	virtual TScriptInterface<IStoreCharactersViewInterface> GetStoreCharactersInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCollectionsViewInterface> GetStoreCollectionsInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreFeaturedViewInterface> GetStoreFeaturedInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreSpecialPacksViewInterface> GetStoreSpecialPacksInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreSpecialsViewInterface> GetStoreSpecialsInterface_Implementation() const { return NULL; }; \
	virtual void SetMenuState_Implementation(EStoreMenuState state) {}; \
	virtual void SetTabEnabled_Implementation(int32 key, bool enabled) {}; \
	virtual void SetTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, int32 selectedKey) {}; \
	virtual void SetTabSelected_Implementation(int32 key) {}; \
 \
	DECLARE_FUNCTION(execGetStoreCharactersInterface); \
	DECLARE_FUNCTION(execGetStoreCollectionsInterface); \
	DECLARE_FUNCTION(execGetStoreFeaturedInterface); \
	DECLARE_FUNCTION(execGetStoreSpecialPacksInterface); \
	DECLARE_FUNCTION(execGetStoreSpecialsInterface); \
	DECLARE_FUNCTION(execSetMenuState); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabsData); \
	DECLARE_FUNCTION(execSetTabSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IStoreCharactersViewInterface> GetStoreCharactersInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCollectionsViewInterface> GetStoreCollectionsInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreFeaturedViewInterface> GetStoreFeaturedInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreSpecialPacksViewInterface> GetStoreSpecialPacksInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreSpecialsViewInterface> GetStoreSpecialsInterface_Implementation() const { return NULL; }; \
	virtual void SetMenuState_Implementation(EStoreMenuState state) {}; \
	virtual void SetTabEnabled_Implementation(int32 key, bool enabled) {}; \
	virtual void SetTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, int32 selectedKey) {}; \
	virtual void SetTabSelected_Implementation(int32 key) {}; \
 \
	DECLARE_FUNCTION(execGetStoreCharactersInterface); \
	DECLARE_FUNCTION(execGetStoreCollectionsInterface); \
	DECLARE_FUNCTION(execGetStoreFeaturedInterface); \
	DECLARE_FUNCTION(execGetStoreSpecialPacksInterface); \
	DECLARE_FUNCTION(execGetStoreSpecialsInterface); \
	DECLARE_FUNCTION(execSetMenuState); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabsData); \
	DECLARE_FUNCTION(execSetTabSelected);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_EVENT_PARMS \
	struct StoreMenuViewInterface_eventGetStoreCharactersInterface_Parms \
	{ \
		TScriptInterface<IStoreCharactersViewInterface> ReturnValue; \
	}; \
	struct StoreMenuViewInterface_eventGetStoreCollectionsInterface_Parms \
	{ \
		TScriptInterface<IStoreCollectionsViewInterface> ReturnValue; \
	}; \
	struct StoreMenuViewInterface_eventGetStoreFeaturedInterface_Parms \
	{ \
		TScriptInterface<IStoreFeaturedViewInterface> ReturnValue; \
	}; \
	struct StoreMenuViewInterface_eventGetStoreSpecialPacksInterface_Parms \
	{ \
		TScriptInterface<IStoreSpecialPacksViewInterface> ReturnValue; \
	}; \
	struct StoreMenuViewInterface_eventGetStoreSpecialsInterface_Parms \
	{ \
		TScriptInterface<IStoreSpecialsViewInterface> ReturnValue; \
	}; \
	struct StoreMenuViewInterface_eventSetMenuState_Parms \
	{ \
		EStoreMenuState state; \
	}; \
	struct StoreMenuViewInterface_eventSetTabEnabled_Parms \
	{ \
		int32 key; \
		bool enabled; \
	}; \
	struct StoreMenuViewInterface_eventSetTabsData_Parms \
	{ \
		TArray<FTabWidgetData> tabsData; \
		int32 selectedKey; \
	}; \
	struct StoreMenuViewInterface_eventSetTabSelected_Parms \
	{ \
		int32 key; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreMenuViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreMenuViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreMenuViewInterface(UStoreMenuViewInterface&&); \
	NO_API UStoreMenuViewInterface(const UStoreMenuViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreMenuViewInterface(UStoreMenuViewInterface&&); \
	NO_API UStoreMenuViewInterface(const UStoreMenuViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreMenuViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreMenuViewInterface(); \
	friend struct Z_Construct_UClass_UStoreMenuViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreMenuViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreMenuViewInterface() {} \
public: \
	typedef UStoreMenuViewInterface UClassType; \
	typedef IStoreMenuViewInterface ThisClass; \
	static TScriptInterface<IStoreCharactersViewInterface> Execute_GetStoreCharactersInterface(const UObject* O); \
	static TScriptInterface<IStoreCollectionsViewInterface> Execute_GetStoreCollectionsInterface(const UObject* O); \
	static TScriptInterface<IStoreFeaturedViewInterface> Execute_GetStoreFeaturedInterface(const UObject* O); \
	static TScriptInterface<IStoreSpecialPacksViewInterface> Execute_GetStoreSpecialPacksInterface(const UObject* O); \
	static TScriptInterface<IStoreSpecialsViewInterface> Execute_GetStoreSpecialsInterface(const UObject* O); \
	static void Execute_SetMenuState(UObject* O, EStoreMenuState state); \
	static void Execute_SetTabEnabled(UObject* O, int32 key, bool enabled); \
	static void Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey); \
	static void Execute_SetTabSelected(UObject* O, int32 key); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreMenuViewInterface() {} \
public: \
	typedef UStoreMenuViewInterface UClassType; \
	typedef IStoreMenuViewInterface ThisClass; \
	static TScriptInterface<IStoreCharactersViewInterface> Execute_GetStoreCharactersInterface(const UObject* O); \
	static TScriptInterface<IStoreCollectionsViewInterface> Execute_GetStoreCollectionsInterface(const UObject* O); \
	static TScriptInterface<IStoreFeaturedViewInterface> Execute_GetStoreFeaturedInterface(const UObject* O); \
	static TScriptInterface<IStoreSpecialPacksViewInterface> Execute_GetStoreSpecialPacksInterface(const UObject* O); \
	static TScriptInterface<IStoreSpecialsViewInterface> Execute_GetStoreSpecialsInterface(const UObject* O); \
	static void Execute_SetMenuState(UObject* O, EStoreMenuState state); \
	static void Execute_SetTabEnabled(UObject* O, int32 key, bool enabled); \
	static void Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey); \
	static void Execute_SetTabSelected(UObject* O, int32 key); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_16_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreMenuViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreMenuViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
