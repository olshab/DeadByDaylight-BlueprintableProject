// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChallengeTrackerViewData;
struct FArchiveNodeObjectiveViewData;
#ifdef DBDUIVIEWINTERFACES_ChallengeTrackerViewInterface_generated_h
#error "ChallengeTrackerViewInterface.generated.h already included, missing '#pragma once' in ChallengeTrackerViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ChallengeTrackerViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_RPC_WRAPPERS \
	virtual void CloseWidget_Implementation() {}; \
	virtual void InitWidgetData_Implementation(FChallengeTrackerViewData const& viewData) {}; \
	virtual void OpenWidget_Implementation() {}; \
	virtual void UpdateWidgetProgression_Implementation(FArchiveNodeObjectiveViewData const& progressionData) {}; \
 \
	DECLARE_FUNCTION(execCloseWidget); \
	DECLARE_FUNCTION(execInitWidgetData); \
	DECLARE_FUNCTION(execOpenWidget); \
	DECLARE_FUNCTION(execUpdateWidgetProgression);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CloseWidget_Implementation() {}; \
	virtual void InitWidgetData_Implementation(FChallengeTrackerViewData const& viewData) {}; \
	virtual void OpenWidget_Implementation() {}; \
	virtual void UpdateWidgetProgression_Implementation(FArchiveNodeObjectiveViewData const& progressionData) {}; \
 \
	DECLARE_FUNCTION(execCloseWidget); \
	DECLARE_FUNCTION(execInitWidgetData); \
	DECLARE_FUNCTION(execOpenWidget); \
	DECLARE_FUNCTION(execUpdateWidgetProgression);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_EVENT_PARMS \
	struct ChallengeTrackerViewInterface_eventInitWidgetData_Parms \
	{ \
		FChallengeTrackerViewData viewData; \
	}; \
	struct ChallengeTrackerViewInterface_eventUpdateWidgetProgression_Parms \
	{ \
		FArchiveNodeObjectiveViewData progressionData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChallengeTrackerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChallengeTrackerViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChallengeTrackerViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChallengeTrackerViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChallengeTrackerViewInterface(UChallengeTrackerViewInterface&&); \
	NO_API UChallengeTrackerViewInterface(const UChallengeTrackerViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChallengeTrackerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChallengeTrackerViewInterface(UChallengeTrackerViewInterface&&); \
	NO_API UChallengeTrackerViewInterface(const UChallengeTrackerViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChallengeTrackerViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChallengeTrackerViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChallengeTrackerViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChallengeTrackerViewInterface(); \
	friend struct Z_Construct_UClass_UChallengeTrackerViewInterface_Statics; \
public: \
	DECLARE_CLASS(UChallengeTrackerViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UChallengeTrackerViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChallengeTrackerViewInterface() {} \
public: \
	typedef UChallengeTrackerViewInterface UClassType; \
	typedef IChallengeTrackerViewInterface ThisClass; \
	static void Execute_CloseWidget(UObject* O); \
	static void Execute_InitWidgetData(UObject* O, FChallengeTrackerViewData const& viewData); \
	static void Execute_OpenWidget(UObject* O); \
	static void Execute_UpdateWidgetProgression(UObject* O, FArchiveNodeObjectiveViewData const& progressionData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IChallengeTrackerViewInterface() {} \
public: \
	typedef UChallengeTrackerViewInterface UClassType; \
	typedef IChallengeTrackerViewInterface ThisClass; \
	static void Execute_CloseWidget(UObject* O); \
	static void Execute_InitWidgetData(UObject* O, FChallengeTrackerViewData const& viewData); \
	static void Execute_OpenWidget(UObject* O); \
	static void Execute_UpdateWidgetProgression(UObject* O, FArchiveNodeObjectiveViewData const& progressionData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UChallengeTrackerViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ChallengeTrackerViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
