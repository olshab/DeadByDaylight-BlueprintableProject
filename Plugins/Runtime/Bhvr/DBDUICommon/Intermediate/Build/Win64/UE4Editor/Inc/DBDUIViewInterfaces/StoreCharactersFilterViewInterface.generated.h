// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreCharactersFiltersData;
#ifdef DBDUIVIEWINTERFACES_StoreCharactersFilterViewInterface_generated_h
#error "StoreCharactersFilterViewInterface.generated.h already included, missing '#pragma once' in StoreCharactersFilterViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreCharactersFilterViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_RPC_WRAPPERS \
	virtual void SetFiltersState_Implementation(FStoreCharactersFiltersData newFiltersData) {}; \
	virtual void SetRarityFiltersVisibility_Implementation(bool showRarityFilters) {}; \
 \
	DECLARE_FUNCTION(execSetFiltersState); \
	DECLARE_FUNCTION(execSetRarityFiltersVisibility);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetFiltersState_Implementation(FStoreCharactersFiltersData newFiltersData) {}; \
	virtual void SetRarityFiltersVisibility_Implementation(bool showRarityFilters) {}; \
 \
	DECLARE_FUNCTION(execSetFiltersState); \
	DECLARE_FUNCTION(execSetRarityFiltersVisibility);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_EVENT_PARMS \
	struct StoreCharactersFilterViewInterface_eventSetFiltersState_Parms \
	{ \
		FStoreCharactersFiltersData newFiltersData; \
	}; \
	struct StoreCharactersFilterViewInterface_eventSetRarityFiltersVisibility_Parms \
	{ \
		bool showRarityFilters; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCharactersFilterViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCharactersFilterViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersFilterViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersFilterViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersFilterViewInterface(UStoreCharactersFilterViewInterface&&); \
	NO_API UStoreCharactersFilterViewInterface(const UStoreCharactersFilterViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCharactersFilterViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersFilterViewInterface(UStoreCharactersFilterViewInterface&&); \
	NO_API UStoreCharactersFilterViewInterface(const UStoreCharactersFilterViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersFilterViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersFilterViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCharactersFilterViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreCharactersFilterViewInterface(); \
	friend struct Z_Construct_UClass_UStoreCharactersFilterViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreCharactersFilterViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreCharactersFilterViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreCharactersFilterViewInterface() {} \
public: \
	typedef UStoreCharactersFilterViewInterface UClassType; \
	typedef IStoreCharactersFilterViewInterface ThisClass; \
	static void Execute_SetFiltersState(UObject* O, FStoreCharactersFiltersData newFiltersData); \
	static void Execute_SetRarityFiltersVisibility(UObject* O, bool showRarityFilters); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreCharactersFilterViewInterface() {} \
public: \
	typedef UStoreCharactersFilterViewInterface UClassType; \
	typedef IStoreCharactersFilterViewInterface ThisClass; \
	static void Execute_SetFiltersState(UObject* O, FStoreCharactersFiltersData newFiltersData); \
	static void Execute_SetRarityFiltersVisibility(UObject* O, bool showRarityFilters); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreCharactersFilterViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersFilterViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
