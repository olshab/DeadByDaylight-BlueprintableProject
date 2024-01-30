// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArchiveNodeGraphViewData;
struct FArchiveMapPathViewData;
#ifdef DBDUIVIEWINTERFACES_ArchiveQuestMapViewInterface_generated_h
#error "ArchiveQuestMapViewInterface.generated.h already included, missing '#pragma once' in ArchiveQuestMapViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ArchiveQuestMapViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_RPC_WRAPPERS \
	virtual void Reset_Implementation() {}; \
	virtual void SetLoadingSpinner_Implementation(bool isLoading) {}; \
	virtual void SetQuestMapData_Implementation(TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList, bool needsCascadeAppear) {}; \
	virtual void UpdateQuestMapData_Implementation(TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList) {}; \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetLoadingSpinner); \
	DECLARE_FUNCTION(execSetQuestMapData); \
	DECLARE_FUNCTION(execUpdateQuestMapData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Reset_Implementation() {}; \
	virtual void SetLoadingSpinner_Implementation(bool isLoading) {}; \
	virtual void SetQuestMapData_Implementation(TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList, bool needsCascadeAppear) {}; \
	virtual void UpdateQuestMapData_Implementation(TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList) {}; \
 \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetLoadingSpinner); \
	DECLARE_FUNCTION(execSetQuestMapData); \
	DECLARE_FUNCTION(execUpdateQuestMapData);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_EVENT_PARMS \
	struct ArchiveQuestMapViewInterface_eventSetLoadingSpinner_Parms \
	{ \
		bool isLoading; \
	}; \
	struct ArchiveQuestMapViewInterface_eventSetQuestMapData_Parms \
	{ \
		TArray<FArchiveNodeGraphViewData> nodeDataList; \
		TArray<FArchiveMapPathViewData> pathDataList; \
		bool needsCascadeAppear; \
	}; \
	struct ArchiveQuestMapViewInterface_eventUpdateQuestMapData_Parms \
	{ \
		TArray<FArchiveNodeGraphViewData> nodeDataList; \
		TArray<FArchiveMapPathViewData> pathDataList; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveQuestMapViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveQuestMapViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveQuestMapViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveQuestMapViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveQuestMapViewInterface(UArchiveQuestMapViewInterface&&); \
	NO_API UArchiveQuestMapViewInterface(const UArchiveQuestMapViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchiveQuestMapViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchiveQuestMapViewInterface(UArchiveQuestMapViewInterface&&); \
	NO_API UArchiveQuestMapViewInterface(const UArchiveQuestMapViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchiveQuestMapViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchiveQuestMapViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchiveQuestMapViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArchiveQuestMapViewInterface(); \
	friend struct Z_Construct_UClass_UArchiveQuestMapViewInterface_Statics; \
public: \
	DECLARE_CLASS(UArchiveQuestMapViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UArchiveQuestMapViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArchiveQuestMapViewInterface() {} \
public: \
	typedef UArchiveQuestMapViewInterface UClassType; \
	typedef IArchiveQuestMapViewInterface ThisClass; \
	static void Execute_Reset(UObject* O); \
	static void Execute_SetLoadingSpinner(UObject* O, bool isLoading); \
	static void Execute_SetQuestMapData(UObject* O, TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList, bool needsCascadeAppear); \
	static void Execute_UpdateQuestMapData(UObject* O, TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IArchiveQuestMapViewInterface() {} \
public: \
	typedef UArchiveQuestMapViewInterface UClassType; \
	typedef IArchiveQuestMapViewInterface ThisClass; \
	static void Execute_Reset(UObject* O); \
	static void Execute_SetLoadingSpinner(UObject* O, bool isLoading); \
	static void Execute_SetQuestMapData(UObject* O, TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList, bool needsCascadeAppear); \
	static void Execute_UpdateQuestMapData(UObject* O, TArray<FArchiveNodeGraphViewData> const& nodeDataList, TArray<FArchiveMapPathViewData> const& pathDataList); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UArchiveQuestMapViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ArchiveQuestMapViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
