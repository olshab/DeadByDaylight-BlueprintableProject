// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEventTabViewData;
struct FEventEntryPopupSkinUIData;
#ifdef DBDUIVIEWINTERFACES_EventInfoViewInterface_generated_h
#error "EventInfoViewInterface.generated.h already included, missing '#pragma once' in EventInfoViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_EventInfoViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_RPC_WRAPPERS \
	virtual void Deinit_Implementation() {}; \
	virtual void DisableArchivesButton_Implementation() {}; \
	virtual void Init_Implementation(UEventTabViewData* viewData, FEventEntryPopupSkinUIData const& skinData) {}; \
 \
	DECLARE_FUNCTION(execDeinit); \
	DECLARE_FUNCTION(execDisableArchivesButton); \
	DECLARE_FUNCTION(execInit);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Deinit_Implementation() {}; \
	virtual void DisableArchivesButton_Implementation() {}; \
	virtual void Init_Implementation(UEventTabViewData* viewData, FEventEntryPopupSkinUIData const& skinData) {}; \
 \
	DECLARE_FUNCTION(execDeinit); \
	DECLARE_FUNCTION(execDisableArchivesButton); \
	DECLARE_FUNCTION(execInit);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_EVENT_PARMS \
	struct EventInfoViewInterface_eventInit_Parms \
	{ \
		UEventTabViewData* viewData; \
		FEventEntryPopupSkinUIData skinData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventInfoViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventInfoViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventInfoViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventInfoViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventInfoViewInterface(UEventInfoViewInterface&&); \
	NO_API UEventInfoViewInterface(const UEventInfoViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventInfoViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventInfoViewInterface(UEventInfoViewInterface&&); \
	NO_API UEventInfoViewInterface(const UEventInfoViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventInfoViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventInfoViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventInfoViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEventInfoViewInterface(); \
	friend struct Z_Construct_UClass_UEventInfoViewInterface_Statics; \
public: \
	DECLARE_CLASS(UEventInfoViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UEventInfoViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEventInfoViewInterface() {} \
public: \
	typedef UEventInfoViewInterface UClassType; \
	typedef IEventInfoViewInterface ThisClass; \
	static void Execute_Deinit(UObject* O); \
	static void Execute_DisableArchivesButton(UObject* O); \
	static void Execute_Init(UObject* O, UEventTabViewData* viewData, FEventEntryPopupSkinUIData const& skinData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEventInfoViewInterface() {} \
public: \
	typedef UEventInfoViewInterface UClassType; \
	typedef IEventInfoViewInterface ThisClass; \
	static void Execute_Deinit(UObject* O); \
	static void Execute_DisableArchivesButton(UObject* O); \
	static void Execute_Init(UObject* O, UEventTabViewData* viewData, FEventEntryPopupSkinUIData const& skinData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UEventInfoViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EventInfoViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
