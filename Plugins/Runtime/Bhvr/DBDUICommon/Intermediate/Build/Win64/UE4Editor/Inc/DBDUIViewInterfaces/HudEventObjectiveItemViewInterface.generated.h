// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
enum class EEventObjectiveItemState : uint8;
#ifdef DBDUIVIEWINTERFACES_HudEventObjectiveItemViewInterface_generated_h
#error "HudEventObjectiveItemViewInterface.generated.h already included, missing '#pragma once' in HudEventObjectiveItemViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_HudEventObjectiveItemViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_RPC_WRAPPERS \
	virtual void ClearData_Implementation() {}; \
	virtual void InitWidget_Implementation() {}; \
	virtual void SetAvailableCharges_Implementation(const int32 charges, const int32 maxCharges) {}; \
	virtual void SetChargePercentage_Implementation(const float chargePercent) {}; \
	virtual void SetCooldownPercentage_Implementation(const float cooldownPercent) {}; \
	virtual void SetInputKey_Implementation(const FKey inputKey) {}; \
	virtual void SetWidgetData_Implementation(const EEventObjectiveItemState eventItemState, const int32 charges, const int32 maxCharges, const float chargePercent) {}; \
	virtual void SetWidgetState_Implementation(const EEventObjectiveItemState eventItemState) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execInitWidget); \
	DECLARE_FUNCTION(execSetAvailableCharges); \
	DECLARE_FUNCTION(execSetChargePercentage); \
	DECLARE_FUNCTION(execSetCooldownPercentage); \
	DECLARE_FUNCTION(execSetInputKey); \
	DECLARE_FUNCTION(execSetWidgetData); \
	DECLARE_FUNCTION(execSetWidgetState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearData_Implementation() {}; \
	virtual void InitWidget_Implementation() {}; \
	virtual void SetAvailableCharges_Implementation(const int32 charges, const int32 maxCharges) {}; \
	virtual void SetChargePercentage_Implementation(const float chargePercent) {}; \
	virtual void SetCooldownPercentage_Implementation(const float cooldownPercent) {}; \
	virtual void SetInputKey_Implementation(const FKey inputKey) {}; \
	virtual void SetWidgetData_Implementation(const EEventObjectiveItemState eventItemState, const int32 charges, const int32 maxCharges, const float chargePercent) {}; \
	virtual void SetWidgetState_Implementation(const EEventObjectiveItemState eventItemState) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execInitWidget); \
	DECLARE_FUNCTION(execSetAvailableCharges); \
	DECLARE_FUNCTION(execSetChargePercentage); \
	DECLARE_FUNCTION(execSetCooldownPercentage); \
	DECLARE_FUNCTION(execSetInputKey); \
	DECLARE_FUNCTION(execSetWidgetData); \
	DECLARE_FUNCTION(execSetWidgetState);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_EVENT_PARMS \
	struct HudEventObjectiveItemViewInterface_eventSetAvailableCharges_Parms \
	{ \
		int32 charges; \
		int32 maxCharges; \
	}; \
	struct HudEventObjectiveItemViewInterface_eventSetChargePercentage_Parms \
	{ \
		float chargePercent; \
	}; \
	struct HudEventObjectiveItemViewInterface_eventSetCooldownPercentage_Parms \
	{ \
		float cooldownPercent; \
	}; \
	struct HudEventObjectiveItemViewInterface_eventSetInputKey_Parms \
	{ \
		FKey inputKey; \
	}; \
	struct HudEventObjectiveItemViewInterface_eventSetWidgetData_Parms \
	{ \
		EEventObjectiveItemState eventItemState; \
		int32 charges; \
		int32 maxCharges; \
		float chargePercent; \
	}; \
	struct HudEventObjectiveItemViewInterface_eventSetWidgetState_Parms \
	{ \
		EEventObjectiveItemState eventItemState; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudEventObjectiveItemViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudEventObjectiveItemViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudEventObjectiveItemViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudEventObjectiveItemViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudEventObjectiveItemViewInterface(UHudEventObjectiveItemViewInterface&&); \
	NO_API UHudEventObjectiveItemViewInterface(const UHudEventObjectiveItemViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudEventObjectiveItemViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudEventObjectiveItemViewInterface(UHudEventObjectiveItemViewInterface&&); \
	NO_API UHudEventObjectiveItemViewInterface(const UHudEventObjectiveItemViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudEventObjectiveItemViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudEventObjectiveItemViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudEventObjectiveItemViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHudEventObjectiveItemViewInterface(); \
	friend struct Z_Construct_UClass_UHudEventObjectiveItemViewInterface_Statics; \
public: \
	DECLARE_CLASS(UHudEventObjectiveItemViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UHudEventObjectiveItemViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHudEventObjectiveItemViewInterface() {} \
public: \
	typedef UHudEventObjectiveItemViewInterface UClassType; \
	typedef IHudEventObjectiveItemViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_InitWidget(UObject* O); \
	static void Execute_SetAvailableCharges(UObject* O, const int32 charges, const int32 maxCharges); \
	static void Execute_SetChargePercentage(UObject* O, const float chargePercent); \
	static void Execute_SetCooldownPercentage(UObject* O, const float cooldownPercent); \
	static void Execute_SetInputKey(UObject* O, const FKey inputKey); \
	static void Execute_SetWidgetData(UObject* O, const EEventObjectiveItemState eventItemState, const int32 charges, const int32 maxCharges, const float chargePercent); \
	static void Execute_SetWidgetState(UObject* O, const EEventObjectiveItemState eventItemState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IHudEventObjectiveItemViewInterface() {} \
public: \
	typedef UHudEventObjectiveItemViewInterface UClassType; \
	typedef IHudEventObjectiveItemViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_InitWidget(UObject* O); \
	static void Execute_SetAvailableCharges(UObject* O, const int32 charges, const int32 maxCharges); \
	static void Execute_SetChargePercentage(UObject* O, const float chargePercent); \
	static void Execute_SetCooldownPercentage(UObject* O, const float cooldownPercent); \
	static void Execute_SetInputKey(UObject* O, const FKey inputKey); \
	static void Execute_SetWidgetData(UObject* O, const EEventObjectiveItemState eventItemState, const int32 charges, const int32 maxCharges, const float chargePercent); \
	static void Execute_SetWidgetState(UObject* O, const EEventObjectiveItemState eventItemState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UHudEventObjectiveItemViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudEventObjectiveItemViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
