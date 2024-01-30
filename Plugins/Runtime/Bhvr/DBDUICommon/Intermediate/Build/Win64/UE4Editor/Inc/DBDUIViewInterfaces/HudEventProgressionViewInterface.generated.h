// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHudEventProgressionViewData;
#ifdef DBDUIVIEWINTERFACES_HudEventProgressionViewInterface_generated_h
#error "HudEventProgressionViewInterface.generated.h already included, missing '#pragma once' in HudEventProgressionViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_HudEventProgressionViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_RPC_WRAPPERS \
	virtual void EnableEventProgression_Implementation(bool isEnabled) {}; \
	virtual void InitEventProgression_Implementation(FHudEventProgressionViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateEventBankedProgress_Implementation(FHudEventProgressionViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateEventPendingProgress_Implementation(FHudEventProgressionViewData const& hudEventProgressionViewData) {}; \
 \
	DECLARE_FUNCTION(execEnableEventProgression); \
	DECLARE_FUNCTION(execInitEventProgression); \
	DECLARE_FUNCTION(execUpdateEventBankedProgress); \
	DECLARE_FUNCTION(execUpdateEventPendingProgress);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EnableEventProgression_Implementation(bool isEnabled) {}; \
	virtual void InitEventProgression_Implementation(FHudEventProgressionViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateEventBankedProgress_Implementation(FHudEventProgressionViewData const& hudEventProgressionViewData) {}; \
	virtual void UpdateEventPendingProgress_Implementation(FHudEventProgressionViewData const& hudEventProgressionViewData) {}; \
 \
	DECLARE_FUNCTION(execEnableEventProgression); \
	DECLARE_FUNCTION(execInitEventProgression); \
	DECLARE_FUNCTION(execUpdateEventBankedProgress); \
	DECLARE_FUNCTION(execUpdateEventPendingProgress);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_EVENT_PARMS \
	struct HudEventProgressionViewInterface_eventEnableEventProgression_Parms \
	{ \
		bool isEnabled; \
	}; \
	struct HudEventProgressionViewInterface_eventInitEventProgression_Parms \
	{ \
		FHudEventProgressionViewData hudEventProgressionViewData; \
	}; \
	struct HudEventProgressionViewInterface_eventUpdateEventBankedProgress_Parms \
	{ \
		FHudEventProgressionViewData hudEventProgressionViewData; \
	}; \
	struct HudEventProgressionViewInterface_eventUpdateEventPendingProgress_Parms \
	{ \
		FHudEventProgressionViewData hudEventProgressionViewData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudEventProgressionViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudEventProgressionViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudEventProgressionViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudEventProgressionViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudEventProgressionViewInterface(UHudEventProgressionViewInterface&&); \
	NO_API UHudEventProgressionViewInterface(const UHudEventProgressionViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudEventProgressionViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudEventProgressionViewInterface(UHudEventProgressionViewInterface&&); \
	NO_API UHudEventProgressionViewInterface(const UHudEventProgressionViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudEventProgressionViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudEventProgressionViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudEventProgressionViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHudEventProgressionViewInterface(); \
	friend struct Z_Construct_UClass_UHudEventProgressionViewInterface_Statics; \
public: \
	DECLARE_CLASS(UHudEventProgressionViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UHudEventProgressionViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHudEventProgressionViewInterface() {} \
public: \
	typedef UHudEventProgressionViewInterface UClassType; \
	typedef IHudEventProgressionViewInterface ThisClass; \
	static void Execute_EnableEventProgression(UObject* O, bool isEnabled); \
	static void Execute_InitEventProgression(UObject* O, FHudEventProgressionViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateEventBankedProgress(UObject* O, FHudEventProgressionViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateEventPendingProgress(UObject* O, FHudEventProgressionViewData const& hudEventProgressionViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IHudEventProgressionViewInterface() {} \
public: \
	typedef UHudEventProgressionViewInterface UClassType; \
	typedef IHudEventProgressionViewInterface ThisClass; \
	static void Execute_EnableEventProgression(UObject* O, bool isEnabled); \
	static void Execute_InitEventProgression(UObject* O, FHudEventProgressionViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateEventBankedProgress(UObject* O, FHudEventProgressionViewData const& hudEventProgressionViewData); \
	static void Execute_UpdateEventPendingProgress(UObject* O, FHudEventProgressionViewData const& hudEventProgressionViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UHudEventProgressionViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventProgressionViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
