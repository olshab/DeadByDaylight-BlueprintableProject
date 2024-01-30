// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_SpectateBarViewInterface_generated_h
#error "SpectateBarViewInterface.generated.h already included, missing '#pragma once' in SpectateBarViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_SpectateBarViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_RPC_WRAPPERS \
	virtual void SetArrowsVisibility_Implementation(bool isVisible) {}; \
	virtual void SetBotTag_Implementation(bool isBot) {}; \
	virtual void SetSpectateBarVisibility_Implementation(bool isVisible) {}; \
	virtual void SetSpectatedName_Implementation(const FString& playerName) {}; \
 \
	DECLARE_FUNCTION(execSetArrowsVisibility); \
	DECLARE_FUNCTION(execSetBotTag); \
	DECLARE_FUNCTION(execSetSpectateBarVisibility); \
	DECLARE_FUNCTION(execSetSpectatedName);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetArrowsVisibility_Implementation(bool isVisible) {}; \
	virtual void SetBotTag_Implementation(bool isBot) {}; \
	virtual void SetSpectateBarVisibility_Implementation(bool isVisible) {}; \
	virtual void SetSpectatedName_Implementation(const FString& playerName) {}; \
 \
	DECLARE_FUNCTION(execSetArrowsVisibility); \
	DECLARE_FUNCTION(execSetBotTag); \
	DECLARE_FUNCTION(execSetSpectateBarVisibility); \
	DECLARE_FUNCTION(execSetSpectatedName);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_EVENT_PARMS \
	struct SpectateBarViewInterface_eventSetArrowsVisibility_Parms \
	{ \
		bool isVisible; \
	}; \
	struct SpectateBarViewInterface_eventSetBotTag_Parms \
	{ \
		bool isBot; \
	}; \
	struct SpectateBarViewInterface_eventSetSpectateBarVisibility_Parms \
	{ \
		bool isVisible; \
	}; \
	struct SpectateBarViewInterface_eventSetSpectatedName_Parms \
	{ \
		FString playerName; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpectateBarViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpectateBarViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpectateBarViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpectateBarViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpectateBarViewInterface(USpectateBarViewInterface&&); \
	NO_API USpectateBarViewInterface(const USpectateBarViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpectateBarViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpectateBarViewInterface(USpectateBarViewInterface&&); \
	NO_API USpectateBarViewInterface(const USpectateBarViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpectateBarViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpectateBarViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpectateBarViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSpectateBarViewInterface(); \
	friend struct Z_Construct_UClass_USpectateBarViewInterface_Statics; \
public: \
	DECLARE_CLASS(USpectateBarViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(USpectateBarViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISpectateBarViewInterface() {} \
public: \
	typedef USpectateBarViewInterface UClassType; \
	typedef ISpectateBarViewInterface ThisClass; \
	static void Execute_SetArrowsVisibility(UObject* O, bool isVisible); \
	static void Execute_SetBotTag(UObject* O, bool isBot); \
	static void Execute_SetSpectateBarVisibility(UObject* O, bool isVisible); \
	static void Execute_SetSpectatedName(UObject* O, const FString& playerName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ISpectateBarViewInterface() {} \
public: \
	typedef USpectateBarViewInterface UClassType; \
	typedef ISpectateBarViewInterface ThisClass; \
	static void Execute_SetArrowsVisibility(UObject* O, bool isVisible); \
	static void Execute_SetBotTag(UObject* O, bool isBot); \
	static void Execute_SetSpectateBarVisibility(UObject* O, bool isVisible); \
	static void Execute_SetSpectatedName(UObject* O, const FString& playerName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_7_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class USpectateBarViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SpectateBarViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
