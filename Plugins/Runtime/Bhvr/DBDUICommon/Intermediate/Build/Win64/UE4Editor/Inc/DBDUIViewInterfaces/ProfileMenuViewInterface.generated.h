// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IProfileMenuCustomizationViewInterface;
class IProfileMenuStatsViewInterface;
enum class EProfileMenuState : uint8;
struct FTabWidgetData;
#ifdef DBDUIVIEWINTERFACES_ProfileMenuViewInterface_generated_h
#error "ProfileMenuViewInterface.generated.h already included, missing '#pragma once' in ProfileMenuViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ProfileMenuViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_RPC_WRAPPERS \
	virtual TScriptInterface<IProfileMenuCustomizationViewInterface> GetProfileMenuBadgeInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IProfileMenuCustomizationViewInterface> GetProfileMenuBannerInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IProfileMenuStatsViewInterface> GetProfileMenuStatsInterface_Implementation() const { return NULL; }; \
	virtual void SetMenuState_Implementation(EProfileMenuState menuState) {}; \
	virtual void SetSubtitle_Implementation(FText const& subtitle) {}; \
	virtual void SetTabEnabled_Implementation(int32 key, bool enabled) {}; \
	virtual void SetTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, int32 selectedKey) {}; \
	virtual void SetTabSelected_Implementation(int32 key) {}; \
	virtual void SetTitle_Implementation(FText const& title) {}; \
 \
	DECLARE_FUNCTION(execGetProfileMenuBadgeInterface); \
	DECLARE_FUNCTION(execGetProfileMenuBannerInterface); \
	DECLARE_FUNCTION(execGetProfileMenuStatsInterface); \
	DECLARE_FUNCTION(execSetMenuState); \
	DECLARE_FUNCTION(execSetSubtitle); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabsData); \
	DECLARE_FUNCTION(execSetTabSelected); \
	DECLARE_FUNCTION(execSetTitle);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IProfileMenuCustomizationViewInterface> GetProfileMenuBadgeInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IProfileMenuCustomizationViewInterface> GetProfileMenuBannerInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IProfileMenuStatsViewInterface> GetProfileMenuStatsInterface_Implementation() const { return NULL; }; \
	virtual void SetMenuState_Implementation(EProfileMenuState menuState) {}; \
	virtual void SetSubtitle_Implementation(FText const& subtitle) {}; \
	virtual void SetTabEnabled_Implementation(int32 key, bool enabled) {}; \
	virtual void SetTabsData_Implementation(TArray<FTabWidgetData> const& tabsData, int32 selectedKey) {}; \
	virtual void SetTabSelected_Implementation(int32 key) {}; \
	virtual void SetTitle_Implementation(FText const& title) {}; \
 \
	DECLARE_FUNCTION(execGetProfileMenuBadgeInterface); \
	DECLARE_FUNCTION(execGetProfileMenuBannerInterface); \
	DECLARE_FUNCTION(execGetProfileMenuStatsInterface); \
	DECLARE_FUNCTION(execSetMenuState); \
	DECLARE_FUNCTION(execSetSubtitle); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabsData); \
	DECLARE_FUNCTION(execSetTabSelected); \
	DECLARE_FUNCTION(execSetTitle);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_EVENT_PARMS \
	struct ProfileMenuViewInterface_eventGetProfileMenuBadgeInterface_Parms \
	{ \
		TScriptInterface<IProfileMenuCustomizationViewInterface> ReturnValue; \
	}; \
	struct ProfileMenuViewInterface_eventGetProfileMenuBannerInterface_Parms \
	{ \
		TScriptInterface<IProfileMenuCustomizationViewInterface> ReturnValue; \
	}; \
	struct ProfileMenuViewInterface_eventGetProfileMenuStatsInterface_Parms \
	{ \
		TScriptInterface<IProfileMenuStatsViewInterface> ReturnValue; \
	}; \
	struct ProfileMenuViewInterface_eventSetMenuState_Parms \
	{ \
		EProfileMenuState menuState; \
	}; \
	struct ProfileMenuViewInterface_eventSetSubtitle_Parms \
	{ \
		FText subtitle; \
	}; \
	struct ProfileMenuViewInterface_eventSetTabEnabled_Parms \
	{ \
		int32 key; \
		bool enabled; \
	}; \
	struct ProfileMenuViewInterface_eventSetTabsData_Parms \
	{ \
		TArray<FTabWidgetData> tabsData; \
		int32 selectedKey; \
	}; \
	struct ProfileMenuViewInterface_eventSetTabSelected_Parms \
	{ \
		int32 key; \
	}; \
	struct ProfileMenuViewInterface_eventSetTitle_Parms \
	{ \
		FText title; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProfileMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProfileMenuViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProfileMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProfileMenuViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProfileMenuViewInterface(UProfileMenuViewInterface&&); \
	NO_API UProfileMenuViewInterface(const UProfileMenuViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProfileMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProfileMenuViewInterface(UProfileMenuViewInterface&&); \
	NO_API UProfileMenuViewInterface(const UProfileMenuViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProfileMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProfileMenuViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProfileMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUProfileMenuViewInterface(); \
	friend struct Z_Construct_UClass_UProfileMenuViewInterface_Statics; \
public: \
	DECLARE_CLASS(UProfileMenuViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UProfileMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IProfileMenuViewInterface() {} \
public: \
	typedef UProfileMenuViewInterface UClassType; \
	typedef IProfileMenuViewInterface ThisClass; \
	static TScriptInterface<IProfileMenuCustomizationViewInterface> Execute_GetProfileMenuBadgeInterface(const UObject* O); \
	static TScriptInterface<IProfileMenuCustomizationViewInterface> Execute_GetProfileMenuBannerInterface(const UObject* O); \
	static TScriptInterface<IProfileMenuStatsViewInterface> Execute_GetProfileMenuStatsInterface(const UObject* O); \
	static void Execute_SetMenuState(UObject* O, EProfileMenuState menuState); \
	static void Execute_SetSubtitle(UObject* O, FText const& subtitle); \
	static void Execute_SetTabEnabled(UObject* O, int32 key, bool enabled); \
	static void Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey); \
	static void Execute_SetTabSelected(UObject* O, int32 key); \
	static void Execute_SetTitle(UObject* O, FText const& title); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IProfileMenuViewInterface() {} \
public: \
	typedef UProfileMenuViewInterface UClassType; \
	typedef IProfileMenuViewInterface ThisClass; \
	static TScriptInterface<IProfileMenuCustomizationViewInterface> Execute_GetProfileMenuBadgeInterface(const UObject* O); \
	static TScriptInterface<IProfileMenuCustomizationViewInterface> Execute_GetProfileMenuBannerInterface(const UObject* O); \
	static TScriptInterface<IProfileMenuStatsViewInterface> Execute_GetProfileMenuStatsInterface(const UObject* O); \
	static void Execute_SetMenuState(UObject* O, EProfileMenuState menuState); \
	static void Execute_SetSubtitle(UObject* O, FText const& subtitle); \
	static void Execute_SetTabEnabled(UObject* O, int32 key, bool enabled); \
	static void Execute_SetTabsData(UObject* O, TArray<FTabWidgetData> const& tabsData, int32 selectedKey); \
	static void Execute_SetTabSelected(UObject* O, int32 key); \
	static void Execute_SetTitle(UObject* O, FText const& title); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_13_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UProfileMenuViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ProfileMenuViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
