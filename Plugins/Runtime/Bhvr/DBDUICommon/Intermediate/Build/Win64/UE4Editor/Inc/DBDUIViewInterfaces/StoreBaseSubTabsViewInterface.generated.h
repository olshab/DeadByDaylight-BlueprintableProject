// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTabWidgetData;
#ifdef DBDUIVIEWINTERFACES_StoreBaseSubTabsViewInterface_generated_h
#error "StoreBaseSubTabsViewInterface.generated.h already included, missing '#pragma once' in StoreBaseSubTabsViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreBaseSubTabsViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_RPC_WRAPPERS \
	virtual void ActivateSubTabContent_Implementation(const int32 state) {}; \
	virtual void SelectSubTab_Implementation(const int32 selectedKey) {}; \
	virtual void SetSubTabsData_Implementation(TArray<FTabWidgetData> const& tabsData) {}; \
	virtual void UnselectCurrentTab_Implementation() {}; \
	virtual void UpdateTabData_Implementation(const int32 subTabId, const FTabWidgetData tabWidgetData) {}; \
 \
	DECLARE_FUNCTION(execActivateSubTabContent); \
	DECLARE_FUNCTION(execSelectSubTab); \
	DECLARE_FUNCTION(execSetSubTabsData); \
	DECLARE_FUNCTION(execUnselectCurrentTab); \
	DECLARE_FUNCTION(execUpdateTabData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ActivateSubTabContent_Implementation(const int32 state) {}; \
	virtual void SelectSubTab_Implementation(const int32 selectedKey) {}; \
	virtual void SetSubTabsData_Implementation(TArray<FTabWidgetData> const& tabsData) {}; \
	virtual void UnselectCurrentTab_Implementation() {}; \
	virtual void UpdateTabData_Implementation(const int32 subTabId, const FTabWidgetData tabWidgetData) {}; \
 \
	DECLARE_FUNCTION(execActivateSubTabContent); \
	DECLARE_FUNCTION(execSelectSubTab); \
	DECLARE_FUNCTION(execSetSubTabsData); \
	DECLARE_FUNCTION(execUnselectCurrentTab); \
	DECLARE_FUNCTION(execUpdateTabData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_EVENT_PARMS \
	struct StoreBaseSubTabsViewInterface_eventActivateSubTabContent_Parms \
	{ \
		int32 state; \
	}; \
	struct StoreBaseSubTabsViewInterface_eventSelectSubTab_Parms \
	{ \
		int32 selectedKey; \
	}; \
	struct StoreBaseSubTabsViewInterface_eventSetSubTabsData_Parms \
	{ \
		TArray<FTabWidgetData> tabsData; \
	}; \
	struct StoreBaseSubTabsViewInterface_eventUpdateTabData_Parms \
	{ \
		int32 subTabId; \
		FTabWidgetData tabWidgetData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreBaseSubTabsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreBaseSubTabsViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreBaseSubTabsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreBaseSubTabsViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreBaseSubTabsViewInterface(UStoreBaseSubTabsViewInterface&&); \
	NO_API UStoreBaseSubTabsViewInterface(const UStoreBaseSubTabsViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreBaseSubTabsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreBaseSubTabsViewInterface(UStoreBaseSubTabsViewInterface&&); \
	NO_API UStoreBaseSubTabsViewInterface(const UStoreBaseSubTabsViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreBaseSubTabsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreBaseSubTabsViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreBaseSubTabsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreBaseSubTabsViewInterface(); \
	friend struct Z_Construct_UClass_UStoreBaseSubTabsViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreBaseSubTabsViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreBaseSubTabsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreBaseSubTabsViewInterface() {} \
public: \
	typedef UStoreBaseSubTabsViewInterface UClassType; \
	typedef IStoreBaseSubTabsViewInterface ThisClass; \
	static void Execute_ActivateSubTabContent(UObject* O, const int32 state); \
	static void Execute_SelectSubTab(UObject* O, const int32 selectedKey); \
	static void Execute_SetSubTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData); \
	static void Execute_UnselectCurrentTab(UObject* O); \
	static void Execute_UpdateTabData(UObject* O, const int32 subTabId, const FTabWidgetData tabWidgetData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreBaseSubTabsViewInterface() {} \
public: \
	typedef UStoreBaseSubTabsViewInterface UClassType; \
	typedef IStoreBaseSubTabsViewInterface ThisClass; \
	static void Execute_ActivateSubTabContent(UObject* O, const int32 state); \
	static void Execute_SelectSubTab(UObject* O, const int32 selectedKey); \
	static void Execute_SetSubTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData); \
	static void Execute_UnselectCurrentTab(UObject* O); \
	static void Execute_UpdateTabData(UObject* O, const int32 subTabId, const FTabWidgetData tabWidgetData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreBaseSubTabsViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreBaseSubTabsViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
