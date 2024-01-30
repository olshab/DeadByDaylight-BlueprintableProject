// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMainMenuButtonViewData;
#ifdef DBDUIVIEWINTERFACES_MainMenuViewInterface_generated_h
#error "MainMenuViewInterface.generated.h already included, missing '#pragma once' in MainMenuViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_MainMenuViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_RPC_WRAPPERS \
	virtual void SetArchivesButton_Implementation(FMainMenuButtonViewData const& data) {}; \
	virtual void SetBloodPointBonus_Implementation(bool isOnKiller, FMainMenuButtonViewData const& data) {}; \
	virtual void SetEventButton_Implementation(bool isEventActive, FMainMenuButtonViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execSetArchivesButton); \
	DECLARE_FUNCTION(execSetBloodPointBonus); \
	DECLARE_FUNCTION(execSetEventButton);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetArchivesButton_Implementation(FMainMenuButtonViewData const& data) {}; \
	virtual void SetBloodPointBonus_Implementation(bool isOnKiller, FMainMenuButtonViewData const& data) {}; \
	virtual void SetEventButton_Implementation(bool isEventActive, FMainMenuButtonViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execSetArchivesButton); \
	DECLARE_FUNCTION(execSetBloodPointBonus); \
	DECLARE_FUNCTION(execSetEventButton);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_EVENT_PARMS \
	struct MainMenuViewInterface_eventSetArchivesButton_Parms \
	{ \
		FMainMenuButtonViewData data; \
	}; \
	struct MainMenuViewInterface_eventSetBloodPointBonus_Parms \
	{ \
		bool isOnKiller; \
		FMainMenuButtonViewData data; \
	}; \
	struct MainMenuViewInterface_eventSetEventButton_Parms \
	{ \
		bool isEventActive; \
		FMainMenuButtonViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuViewInterface(UMainMenuViewInterface&&); \
	NO_API UMainMenuViewInterface(const UMainMenuViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuViewInterface(UMainMenuViewInterface&&); \
	NO_API UMainMenuViewInterface(const UMainMenuViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMainMenuViewInterface(); \
	friend struct Z_Construct_UClass_UMainMenuViewInterface_Statics; \
public: \
	DECLARE_CLASS(UMainMenuViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMainMenuViewInterface() {} \
public: \
	typedef UMainMenuViewInterface UClassType; \
	typedef IMainMenuViewInterface ThisClass; \
	static void Execute_SetArchivesButton(UObject* O, FMainMenuButtonViewData const& data); \
	static void Execute_SetBloodPointBonus(UObject* O, bool isOnKiller, FMainMenuButtonViewData const& data); \
	static void Execute_SetEventButton(UObject* O, bool isEventActive, FMainMenuButtonViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IMainMenuViewInterface() {} \
public: \
	typedef UMainMenuViewInterface UClassType; \
	typedef IMainMenuViewInterface ThisClass; \
	static void Execute_SetArchivesButton(UObject* O, FMainMenuButtonViewData const& data); \
	static void Execute_SetBloodPointBonus(UObject* O, bool isOnKiller, FMainMenuButtonViewData const& data); \
	static void Execute_SetEventButton(UObject* O, bool isEventActive, FMainMenuButtonViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UMainMenuViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MainMenuViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
