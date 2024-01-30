// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_CreditsViewInterface_generated_h
#error "CreditsViewInterface.generated.h already included, missing '#pragma once' in CreditsViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_CreditsViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_RPC_WRAPPERS \
	virtual void ScrollToEnd_Implementation() {}; \
	virtual void ScrollToName_Implementation(const FString& name, float delay) {}; \
	virtual void SetText_Implementation(FText const& text) {}; \
 \
	DECLARE_FUNCTION(execScrollToEnd); \
	DECLARE_FUNCTION(execScrollToName); \
	DECLARE_FUNCTION(execSetText);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ScrollToEnd_Implementation() {}; \
	virtual void ScrollToName_Implementation(const FString& name, float delay) {}; \
	virtual void SetText_Implementation(FText const& text) {}; \
 \
	DECLARE_FUNCTION(execScrollToEnd); \
	DECLARE_FUNCTION(execScrollToName); \
	DECLARE_FUNCTION(execSetText);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_EVENT_PARMS \
	struct CreditsViewInterface_eventScrollToName_Parms \
	{ \
		FString name; \
		float delay; \
	}; \
	struct CreditsViewInterface_eventSetText_Parms \
	{ \
		FText text; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreditsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreditsViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreditsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreditsViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreditsViewInterface(UCreditsViewInterface&&); \
	NO_API UCreditsViewInterface(const UCreditsViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreditsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreditsViewInterface(UCreditsViewInterface&&); \
	NO_API UCreditsViewInterface(const UCreditsViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreditsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreditsViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreditsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCreditsViewInterface(); \
	friend struct Z_Construct_UClass_UCreditsViewInterface_Statics; \
public: \
	DECLARE_CLASS(UCreditsViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UCreditsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICreditsViewInterface() {} \
public: \
	typedef UCreditsViewInterface UClassType; \
	typedef ICreditsViewInterface ThisClass; \
	static void Execute_ScrollToEnd(UObject* O); \
	static void Execute_ScrollToName(UObject* O, const FString& name, float delay); \
	static void Execute_SetText(UObject* O, FText const& text); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ICreditsViewInterface() {} \
public: \
	typedef UCreditsViewInterface UClassType; \
	typedef ICreditsViewInterface ThisClass; \
	static void Execute_ScrollToEnd(UObject* O); \
	static void Execute_ScrollToName(UObject* O, const FString& name, float delay); \
	static void Execute_SetText(UObject* O, FText const& text); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_7_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UCreditsViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CreditsViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
