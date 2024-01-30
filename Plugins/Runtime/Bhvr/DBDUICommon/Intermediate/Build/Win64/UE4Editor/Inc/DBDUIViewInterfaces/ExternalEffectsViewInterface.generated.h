// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAddonViewData;
struct FPerkViewData;
#ifdef DBDUIVIEWINTERFACES_ExternalEffectsViewInterface_generated_h
#error "ExternalEffectsViewInterface.generated.h already included, missing '#pragma once' in ExternalEffectsViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ExternalEffectsViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_RPC_WRAPPERS \
	virtual void HideAllExternalAddons_Implementation() {}; \
	virtual void HideAllExternalPerks_Implementation() {}; \
	virtual void HideExternalAddon_Implementation(const FName itemId) {}; \
	virtual void HideExternalPerk_Implementation(const FName itemId) {}; \
	virtual void ShowExternalAddon_Implementation(FAddonViewData const& addonViewData) {}; \
	virtual void ShowExternalPerk_Implementation(FPerkViewData const& perkViewData) {}; \
 \
	DECLARE_FUNCTION(execHideAllExternalAddons); \
	DECLARE_FUNCTION(execHideAllExternalPerks); \
	DECLARE_FUNCTION(execHideExternalAddon); \
	DECLARE_FUNCTION(execHideExternalPerk); \
	DECLARE_FUNCTION(execShowExternalAddon); \
	DECLARE_FUNCTION(execShowExternalPerk);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HideAllExternalAddons_Implementation() {}; \
	virtual void HideAllExternalPerks_Implementation() {}; \
	virtual void HideExternalAddon_Implementation(const FName itemId) {}; \
	virtual void HideExternalPerk_Implementation(const FName itemId) {}; \
	virtual void ShowExternalAddon_Implementation(FAddonViewData const& addonViewData) {}; \
	virtual void ShowExternalPerk_Implementation(FPerkViewData const& perkViewData) {}; \
 \
	DECLARE_FUNCTION(execHideAllExternalAddons); \
	DECLARE_FUNCTION(execHideAllExternalPerks); \
	DECLARE_FUNCTION(execHideExternalAddon); \
	DECLARE_FUNCTION(execHideExternalPerk); \
	DECLARE_FUNCTION(execShowExternalAddon); \
	DECLARE_FUNCTION(execShowExternalPerk);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_EVENT_PARMS \
	struct ExternalEffectsViewInterface_eventHideExternalAddon_Parms \
	{ \
		FName itemId; \
	}; \
	struct ExternalEffectsViewInterface_eventHideExternalPerk_Parms \
	{ \
		FName itemId; \
	}; \
	struct ExternalEffectsViewInterface_eventShowExternalAddon_Parms \
	{ \
		FAddonViewData addonViewData; \
	}; \
	struct ExternalEffectsViewInterface_eventShowExternalPerk_Parms \
	{ \
		FPerkViewData perkViewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExternalEffectsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalEffectsViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExternalEffectsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalEffectsViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExternalEffectsViewInterface(UExternalEffectsViewInterface&&); \
	NO_API UExternalEffectsViewInterface(const UExternalEffectsViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExternalEffectsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExternalEffectsViewInterface(UExternalEffectsViewInterface&&); \
	NO_API UExternalEffectsViewInterface(const UExternalEffectsViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExternalEffectsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalEffectsViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalEffectsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUExternalEffectsViewInterface(); \
	friend struct Z_Construct_UClass_UExternalEffectsViewInterface_Statics; \
public: \
	DECLARE_CLASS(UExternalEffectsViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UExternalEffectsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IExternalEffectsViewInterface() {} \
public: \
	typedef UExternalEffectsViewInterface UClassType; \
	typedef IExternalEffectsViewInterface ThisClass; \
	static void Execute_HideAllExternalAddons(UObject* O); \
	static void Execute_HideAllExternalPerks(UObject* O); \
	static void Execute_HideExternalAddon(UObject* O, const FName itemId); \
	static void Execute_HideExternalPerk(UObject* O, const FName itemId); \
	static void Execute_ShowExternalAddon(UObject* O, FAddonViewData const& addonViewData); \
	static void Execute_ShowExternalPerk(UObject* O, FPerkViewData const& perkViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IExternalEffectsViewInterface() {} \
public: \
	typedef UExternalEffectsViewInterface UClassType; \
	typedef IExternalEffectsViewInterface ThisClass; \
	static void Execute_HideAllExternalAddons(UObject* O); \
	static void Execute_HideAllExternalPerks(UObject* O); \
	static void Execute_HideExternalAddon(UObject* O, const FName itemId); \
	static void Execute_HideExternalPerk(UObject* O, const FName itemId); \
	static void Execute_ShowExternalAddon(UObject* O, FAddonViewData const& addonViewData); \
	static void Execute_ShowExternalPerk(UObject* O, FPerkViewData const& perkViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UExternalEffectsViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
