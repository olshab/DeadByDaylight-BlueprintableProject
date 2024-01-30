// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCompendiumButtonData;
#ifdef DBDUIVIEWINTERFACES_ArchiveCompendiumViewInterface_generated_h
#error "ArchiveCompendiumViewInterface.generated.h already included, missing '#pragma once' in ArchiveCompendiumViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveCompendiumViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_RPC_WRAPPERS \
	virtual void SetPastTomesViewData_Implementation(TArray<FCompendiumButtonData> const& pastStoryButtonData) {}; \
 \
	DECLARE_FUNCTION(execSetPastTomesViewData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetPastTomesViewData_Implementation(TArray<FCompendiumButtonData> const& pastStoryButtonData) {}; \
 \
	DECLARE_FUNCTION(execSetPastTomesViewData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_EVENT_PARMS \
	struct ArchiveCompendiumViewInterface_eventSetPastTomesViewData_Parms \
	{ \
		TArray<FCompendiumButtonData> pastStoryButtonData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveCompendiumViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveCompendiumViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveCompendiumViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveCompendiumViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveCompendiumViewInterface(UArchiveCompendiumViewInterface&&); \
	NO_API UArchiveCompendiumViewInterface(const UArchiveCompendiumViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveCompendiumViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveCompendiumViewInterface(UArchiveCompendiumViewInterface&&); \
	NO_API UArchiveCompendiumViewInterface(const UArchiveCompendiumViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveCompendiumViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveCompendiumViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveCompendiumViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArchiveCompendiumViewInterface(); \
	friend struct Z_Construct_UClass_UArchiveCompendiumViewInterface_Statics; \
public: \
	DECLARE_CLASS(UArchiveCompendiumViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UArchiveCompendiumViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArchiveCompendiumViewInterface() {} \
public: \
	typedef UArchiveCompendiumViewInterface UClassType; \
	typedef IArchiveCompendiumViewInterface ThisClass; \
	static void Execute_SetPastTomesViewData(UObject* O, TArray<FCompendiumButtonData> const& pastStoryButtonData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IArchiveCompendiumViewInterface() {} \
public: \
	typedef UArchiveCompendiumViewInterface UClassType; \
	typedef IArchiveCompendiumViewInterface ThisClass; \
	static void Execute_SetPastTomesViewData(UObject* O, TArray<FCompendiumButtonData> const& pastStoryButtonData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UArchiveCompendiumViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveCompendiumViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
