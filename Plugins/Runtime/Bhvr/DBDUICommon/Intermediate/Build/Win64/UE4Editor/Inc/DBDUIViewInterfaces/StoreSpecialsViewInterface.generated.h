// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAuricCellsBundleViewData;
class UStoreSpecialsItemViewData;
#ifdef DBDUIVIEWINTERFACES_StoreSpecialsViewInterface_generated_h
#error "StoreSpecialsViewInterface.generated.h already included, missing '#pragma once' in StoreSpecialsViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreSpecialsViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_RPC_WRAPPERS \
	virtual void SetAuricCellsSpecialOfferData_Implementation(FAuricCellsBundleViewData const& auricCellsSpecialOfferData) {}; \
	virtual void SetSpecialsData_Implementation(TArray<UStoreSpecialsItemViewData*> const& specialsData) {}; \
 \
	DECLARE_FUNCTION(execSetAuricCellsSpecialOfferData); \
	DECLARE_FUNCTION(execSetSpecialsData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetAuricCellsSpecialOfferData_Implementation(FAuricCellsBundleViewData const& auricCellsSpecialOfferData) {}; \
	virtual void SetSpecialsData_Implementation(TArray<UStoreSpecialsItemViewData*> const& specialsData) {}; \
 \
	DECLARE_FUNCTION(execSetAuricCellsSpecialOfferData); \
	DECLARE_FUNCTION(execSetSpecialsData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_EVENT_PARMS \
	struct StoreSpecialsViewInterface_eventSetAuricCellsSpecialOfferData_Parms \
	{ \
		FAuricCellsBundleViewData auricCellsSpecialOfferData; \
	}; \
	struct StoreSpecialsViewInterface_eventSetSpecialsData_Parms \
	{ \
		TArray<UStoreSpecialsItemViewData*> specialsData; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreSpecialsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreSpecialsViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreSpecialsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreSpecialsViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreSpecialsViewInterface(UStoreSpecialsViewInterface&&); \
	NO_API UStoreSpecialsViewInterface(const UStoreSpecialsViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreSpecialsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreSpecialsViewInterface(UStoreSpecialsViewInterface&&); \
	NO_API UStoreSpecialsViewInterface(const UStoreSpecialsViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreSpecialsViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreSpecialsViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreSpecialsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreSpecialsViewInterface(); \
	friend struct Z_Construct_UClass_UStoreSpecialsViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreSpecialsViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreSpecialsViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreSpecialsViewInterface() {} \
public: \
	typedef UStoreSpecialsViewInterface UClassType; \
	typedef IStoreSpecialsViewInterface ThisClass; \
	static void Execute_SetAuricCellsSpecialOfferData(UObject* O, FAuricCellsBundleViewData const& auricCellsSpecialOfferData); \
	static void Execute_SetSpecialsData(UObject* O, TArray<UStoreSpecialsItemViewData*> const& specialsData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreSpecialsViewInterface() {} \
public: \
	typedef UStoreSpecialsViewInterface UClassType; \
	typedef IStoreSpecialsViewInterface ThisClass; \
	static void Execute_SetAuricCellsSpecialOfferData(UObject* O, FAuricCellsBundleViewData const& auricCellsSpecialOfferData); \
	static void Execute_SetSpecialsData(UObject* O, TArray<UStoreSpecialsItemViewData*> const& specialsData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreSpecialsViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreSpecialsViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
