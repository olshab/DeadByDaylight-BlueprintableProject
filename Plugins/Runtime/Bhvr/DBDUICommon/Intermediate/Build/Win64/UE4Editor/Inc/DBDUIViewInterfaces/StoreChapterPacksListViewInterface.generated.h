// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStoreChapterPackViewData;
#ifdef DBDUIVIEWINTERFACES_StoreChapterPacksListViewInterface_generated_h
#error "StoreChapterPacksListViewInterface.generated.h already included, missing '#pragma once' in StoreChapterPacksListViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreChapterPacksListViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_RPC_WRAPPERS \
	virtual void SetData_Implementation(TArray<UStoreChapterPackViewData*> const& data) {}; \
 \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetData_Implementation(TArray<UStoreChapterPackViewData*> const& data) {}; \
 \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_EVENT_PARMS \
	struct StoreChapterPacksListViewInterface_eventSetData_Parms \
	{ \
		TArray<UStoreChapterPackViewData*> data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreChapterPacksListViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreChapterPacksListViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreChapterPacksListViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreChapterPacksListViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreChapterPacksListViewInterface(UStoreChapterPacksListViewInterface&&); \
	NO_API UStoreChapterPacksListViewInterface(const UStoreChapterPacksListViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreChapterPacksListViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreChapterPacksListViewInterface(UStoreChapterPacksListViewInterface&&); \
	NO_API UStoreChapterPacksListViewInterface(const UStoreChapterPacksListViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreChapterPacksListViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreChapterPacksListViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreChapterPacksListViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreChapterPacksListViewInterface(); \
	friend struct Z_Construct_UClass_UStoreChapterPacksListViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreChapterPacksListViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreChapterPacksListViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreChapterPacksListViewInterface() {} \
public: \
	typedef UStoreChapterPacksListViewInterface UClassType; \
	typedef IStoreChapterPacksListViewInterface ThisClass; \
	static void Execute_SetData(UObject* O, TArray<UStoreChapterPackViewData*> const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreChapterPacksListViewInterface() {} \
public: \
	typedef UStoreChapterPacksListViewInterface UClassType; \
	typedef IStoreChapterPacksListViewInterface ThisClass; \
	static void Execute_SetData(UObject* O, TArray<UStoreChapterPackViewData*> const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreChapterPacksListViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreChapterPacksListViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
