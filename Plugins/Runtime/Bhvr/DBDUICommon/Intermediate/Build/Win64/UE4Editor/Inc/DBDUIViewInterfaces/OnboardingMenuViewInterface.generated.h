// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IGameManualViewInterface;
class IOnboardingTutorialViewInterface;
enum class EOnboardingMenuState : uint8;
#ifdef DBDUIVIEWINTERFACES_OnboardingMenuViewInterface_generated_h
#error "OnboardingMenuViewInterface.generated.h already included, missing '#pragma once' in OnboardingMenuViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_OnboardingMenuViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_RPC_WRAPPERS \
	virtual TScriptInterface<IGameManualViewInterface> GetGameManualInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IOnboardingTutorialViewInterface> GetOnboardingTutorialInterface_Implementation() const { return NULL; }; \
	virtual void SetBackButtonVisible_Implementation(bool visible) {}; \
	virtual void SetChangeAccountInputSwitcherPlayerNickname_Implementation(const FString& playerNickname) {}; \
	virtual void SetChangeAccountInputSwitcherVisible_Implementation(bool visible) {}; \
	virtual void SetFirstTimeUserExperience_Implementation(bool ftue) {}; \
	virtual void SetOnboardingMenuState_Implementation(EOnboardingMenuState menuState) {}; \
	virtual void SetQuitGameButtonVisible_Implementation(bool visible) {}; \
	virtual void SetUIEnabled_Implementation(bool enabled) {}; \
 \
	DECLARE_FUNCTION(execGetGameManualInterface); \
	DECLARE_FUNCTION(execGetOnboardingTutorialInterface); \
	DECLARE_FUNCTION(execSetBackButtonVisible); \
	DECLARE_FUNCTION(execSetChangeAccountInputSwitcherPlayerNickname); \
	DECLARE_FUNCTION(execSetChangeAccountInputSwitcherVisible); \
	DECLARE_FUNCTION(execSetFirstTimeUserExperience); \
	DECLARE_FUNCTION(execSetOnboardingMenuState); \
	DECLARE_FUNCTION(execSetQuitGameButtonVisible); \
	DECLARE_FUNCTION(execSetUIEnabled);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IGameManualViewInterface> GetGameManualInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IOnboardingTutorialViewInterface> GetOnboardingTutorialInterface_Implementation() const { return NULL; }; \
	virtual void SetBackButtonVisible_Implementation(bool visible) {}; \
	virtual void SetChangeAccountInputSwitcherPlayerNickname_Implementation(const FString& playerNickname) {}; \
	virtual void SetChangeAccountInputSwitcherVisible_Implementation(bool visible) {}; \
	virtual void SetFirstTimeUserExperience_Implementation(bool ftue) {}; \
	virtual void SetOnboardingMenuState_Implementation(EOnboardingMenuState menuState) {}; \
	virtual void SetQuitGameButtonVisible_Implementation(bool visible) {}; \
	virtual void SetUIEnabled_Implementation(bool enabled) {}; \
 \
	DECLARE_FUNCTION(execGetGameManualInterface); \
	DECLARE_FUNCTION(execGetOnboardingTutorialInterface); \
	DECLARE_FUNCTION(execSetBackButtonVisible); \
	DECLARE_FUNCTION(execSetChangeAccountInputSwitcherPlayerNickname); \
	DECLARE_FUNCTION(execSetChangeAccountInputSwitcherVisible); \
	DECLARE_FUNCTION(execSetFirstTimeUserExperience); \
	DECLARE_FUNCTION(execSetOnboardingMenuState); \
	DECLARE_FUNCTION(execSetQuitGameButtonVisible); \
	DECLARE_FUNCTION(execSetUIEnabled);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_EVENT_PARMS \
	struct OnboardingMenuViewInterface_eventGetGameManualInterface_Parms \
	{ \
		TScriptInterface<IGameManualViewInterface> ReturnValue; \
	}; \
	struct OnboardingMenuViewInterface_eventGetOnboardingTutorialInterface_Parms \
	{ \
		TScriptInterface<IOnboardingTutorialViewInterface> ReturnValue; \
	}; \
	struct OnboardingMenuViewInterface_eventSetBackButtonVisible_Parms \
	{ \
		bool visible; \
	}; \
	struct OnboardingMenuViewInterface_eventSetChangeAccountInputSwitcherPlayerNickname_Parms \
	{ \
		FString playerNickname; \
	}; \
	struct OnboardingMenuViewInterface_eventSetChangeAccountInputSwitcherVisible_Parms \
	{ \
		bool visible; \
	}; \
	struct OnboardingMenuViewInterface_eventSetFirstTimeUserExperience_Parms \
	{ \
		bool ftue; \
	}; \
	struct OnboardingMenuViewInterface_eventSetOnboardingMenuState_Parms \
	{ \
		EOnboardingMenuState menuState; \
	}; \
	struct OnboardingMenuViewInterface_eventSetQuitGameButtonVisible_Parms \
	{ \
		bool visible; \
	}; \
	struct OnboardingMenuViewInterface_eventSetUIEnabled_Parms \
	{ \
		bool enabled; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnboardingMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnboardingMenuViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnboardingMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnboardingMenuViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnboardingMenuViewInterface(UOnboardingMenuViewInterface&&); \
	NO_API UOnboardingMenuViewInterface(const UOnboardingMenuViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnboardingMenuViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnboardingMenuViewInterface(UOnboardingMenuViewInterface&&); \
	NO_API UOnboardingMenuViewInterface(const UOnboardingMenuViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnboardingMenuViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnboardingMenuViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnboardingMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOnboardingMenuViewInterface(); \
	friend struct Z_Construct_UClass_UOnboardingMenuViewInterface_Statics; \
public: \
	DECLARE_CLASS(UOnboardingMenuViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UOnboardingMenuViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOnboardingMenuViewInterface() {} \
public: \
	typedef UOnboardingMenuViewInterface UClassType; \
	typedef IOnboardingMenuViewInterface ThisClass; \
	static TScriptInterface<IGameManualViewInterface> Execute_GetGameManualInterface(const UObject* O); \
	static TScriptInterface<IOnboardingTutorialViewInterface> Execute_GetOnboardingTutorialInterface(const UObject* O); \
	static void Execute_SetBackButtonVisible(UObject* O, bool visible); \
	static void Execute_SetChangeAccountInputSwitcherPlayerNickname(UObject* O, const FString& playerNickname); \
	static void Execute_SetChangeAccountInputSwitcherVisible(UObject* O, bool visible); \
	static void Execute_SetFirstTimeUserExperience(UObject* O, bool ftue); \
	static void Execute_SetOnboardingMenuState(UObject* O, EOnboardingMenuState menuState); \
	static void Execute_SetQuitGameButtonVisible(UObject* O, bool visible); \
	static void Execute_SetUIEnabled(UObject* O, bool enabled); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IOnboardingMenuViewInterface() {} \
public: \
	typedef UOnboardingMenuViewInterface UClassType; \
	typedef IOnboardingMenuViewInterface ThisClass; \
	static TScriptInterface<IGameManualViewInterface> Execute_GetGameManualInterface(const UObject* O); \
	static TScriptInterface<IOnboardingTutorialViewInterface> Execute_GetOnboardingTutorialInterface(const UObject* O); \
	static void Execute_SetBackButtonVisible(UObject* O, bool visible); \
	static void Execute_SetChangeAccountInputSwitcherPlayerNickname(UObject* O, const FString& playerNickname); \
	static void Execute_SetChangeAccountInputSwitcherVisible(UObject* O, bool visible); \
	static void Execute_SetFirstTimeUserExperience(UObject* O, bool ftue); \
	static void Execute_SetOnboardingMenuState(UObject* O, EOnboardingMenuState menuState); \
	static void Execute_SetQuitGameButtonVisible(UObject* O, bool visible); \
	static void Execute_SetUIEnabled(UObject* O, bool enabled); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_12_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UOnboardingMenuViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingMenuViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
