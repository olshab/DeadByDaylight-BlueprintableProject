// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStartSequenceViewData;
#ifdef DBDUIVIEWINTERFACES_StartSequenceViewInterface_generated_h
#error "StartSequenceViewInterface.generated.h already included, missing '#pragma once' in StartSequenceViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StartSequenceViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_RPC_WRAPPERS \
	virtual bool GetIsStartSequenceVisible_Implementation() const { return false; }; \
	virtual void HideStartSequence_Implementation() {}; \
	virtual void ShowStartSequence_Implementation(FStartSequenceViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execGetIsStartSequenceVisible); \
	DECLARE_FUNCTION(execHideStartSequence); \
	DECLARE_FUNCTION(execShowStartSequence);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetIsStartSequenceVisible_Implementation() const { return false; }; \
	virtual void HideStartSequence_Implementation() {}; \
	virtual void ShowStartSequence_Implementation(FStartSequenceViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execGetIsStartSequenceVisible); \
	DECLARE_FUNCTION(execHideStartSequence); \
	DECLARE_FUNCTION(execShowStartSequence);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_EVENT_PARMS \
	struct StartSequenceViewInterface_eventGetIsStartSequenceVisible_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		StartSequenceViewInterface_eventGetIsStartSequenceVisible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct StartSequenceViewInterface_eventShowStartSequence_Parms \
	{ \
		FStartSequenceViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStartSequenceViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStartSequenceViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStartSequenceViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStartSequenceViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStartSequenceViewInterface(UStartSequenceViewInterface&&); \
	NO_API UStartSequenceViewInterface(const UStartSequenceViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStartSequenceViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStartSequenceViewInterface(UStartSequenceViewInterface&&); \
	NO_API UStartSequenceViewInterface(const UStartSequenceViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStartSequenceViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStartSequenceViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStartSequenceViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStartSequenceViewInterface(); \
	friend struct Z_Construct_UClass_UStartSequenceViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStartSequenceViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStartSequenceViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStartSequenceViewInterface() {} \
public: \
	typedef UStartSequenceViewInterface UClassType; \
	typedef IStartSequenceViewInterface ThisClass; \
	static bool Execute_GetIsStartSequenceVisible(const UObject* O); \
	static void Execute_HideStartSequence(UObject* O); \
	static void Execute_ShowStartSequence(UObject* O, FStartSequenceViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IStartSequenceViewInterface() {} \
public: \
	typedef UStartSequenceViewInterface UClassType; \
	typedef IStartSequenceViewInterface ThisClass; \
	static bool Execute_GetIsStartSequenceVisible(const UObject* O); \
	static void Execute_HideStartSequence(UObject* O); \
	static void Execute_ShowStartSequence(UObject* O, FStartSequenceViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStartSequenceViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StartSequenceViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
