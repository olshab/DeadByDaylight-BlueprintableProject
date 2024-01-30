// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemBundleViewData;
class UTexture2D;
struct FKey;
#ifdef DBDUIVIEWINTERFACES_EquippedItemViewInterface_generated_h
#error "EquippedItemViewInterface.generated.h already included, missing '#pragma once' in EquippedItemViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_EquippedItemViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_RPC_WRAPPERS \
	virtual void ClearData_Implementation(bool fullClear) {}; \
	virtual void SetActiveState_Implementation(bool isActive) {}; \
	virtual void SetData_Implementation(FItemBundleViewData const& itemBundleData) {}; \
	virtual void SetFakeItem_Implementation(bool isHoldingFakeItem, TSoftObjectPtr<UTexture2D> const& fakeItemIcon, FKey inputKey, int32 count) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execSetActiveState); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetFakeItem);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearData_Implementation(bool fullClear) {}; \
	virtual void SetActiveState_Implementation(bool isActive) {}; \
	virtual void SetData_Implementation(FItemBundleViewData const& itemBundleData) {}; \
	virtual void SetFakeItem_Implementation(bool isHoldingFakeItem, TSoftObjectPtr<UTexture2D> const& fakeItemIcon, FKey inputKey, int32 count) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execSetActiveState); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetFakeItem);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_EVENT_PARMS \
	struct EquippedItemViewInterface_eventClearData_Parms \
	{ \
		bool fullClear; \
	}; \
	struct EquippedItemViewInterface_eventSetActiveState_Parms \
	{ \
		bool isActive; \
	}; \
	struct EquippedItemViewInterface_eventSetData_Parms \
	{ \
		FItemBundleViewData itemBundleData; \
	}; \
	struct EquippedItemViewInterface_eventSetFakeItem_Parms \
	{ \
		bool isHoldingFakeItem; \
		TSoftObjectPtr<UTexture2D> fakeItemIcon; \
		FKey inputKey; \
		int32 count; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquippedItemViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquippedItemViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquippedItemViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquippedItemViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquippedItemViewInterface(UEquippedItemViewInterface&&); \
	NO_API UEquippedItemViewInterface(const UEquippedItemViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquippedItemViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquippedItemViewInterface(UEquippedItemViewInterface&&); \
	NO_API UEquippedItemViewInterface(const UEquippedItemViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquippedItemViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquippedItemViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquippedItemViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEquippedItemViewInterface(); \
	friend struct Z_Construct_UClass_UEquippedItemViewInterface_Statics; \
public: \
	DECLARE_CLASS(UEquippedItemViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UEquippedItemViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEquippedItemViewInterface() {} \
public: \
	typedef UEquippedItemViewInterface UClassType; \
	typedef IEquippedItemViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O, bool fullClear); \
	static void Execute_SetActiveState(UObject* O, bool isActive); \
	static void Execute_SetData(UObject* O, FItemBundleViewData const& itemBundleData); \
	static void Execute_SetFakeItem(UObject* O, bool isHoldingFakeItem, TSoftObjectPtr<UTexture2D> const& fakeItemIcon, FKey inputKey, int32 count); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IEquippedItemViewInterface() {} \
public: \
	typedef UEquippedItemViewInterface UClassType; \
	typedef IEquippedItemViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O, bool fullClear); \
	static void Execute_SetActiveState(UObject* O, bool isActive); \
	static void Execute_SetData(UObject* O, FItemBundleViewData const& itemBundleData); \
	static void Execute_SetFakeItem(UObject* O, bool isHoldingFakeItem, TSoftObjectPtr<UTexture2D> const& fakeItemIcon, FKey inputKey, int32 count); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_12_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UEquippedItemViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedItemViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
