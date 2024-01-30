// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EConnectionQuality : uint8;
#ifdef DBDUIVIEWINTERFACES_PingStatusViewInterface_generated_h
#error "PingStatusViewInterface.generated.h already included, missing '#pragma once' in PingStatusViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_PingStatusViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_RPC_WRAPPERS \
	virtual void SetKillerConnectionQualityStatus_Implementation(EConnectionQuality const& killerConnectionQuality) {}; \
	virtual void SetLocalPacketLossStatus_Implementation(EConnectionQuality const& localPacketLoss) {}; \
	virtual void SetLocalPingStatus_Implementation(EConnectionQuality const& localPing) {}; \
 \
	DECLARE_FUNCTION(execSetKillerConnectionQualityStatus); \
	DECLARE_FUNCTION(execSetLocalPacketLossStatus); \
	DECLARE_FUNCTION(execSetLocalPingStatus);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetKillerConnectionQualityStatus_Implementation(EConnectionQuality const& killerConnectionQuality) {}; \
	virtual void SetLocalPacketLossStatus_Implementation(EConnectionQuality const& localPacketLoss) {}; \
	virtual void SetLocalPingStatus_Implementation(EConnectionQuality const& localPing) {}; \
 \
	DECLARE_FUNCTION(execSetKillerConnectionQualityStatus); \
	DECLARE_FUNCTION(execSetLocalPacketLossStatus); \
	DECLARE_FUNCTION(execSetLocalPingStatus);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_EVENT_PARMS \
	struct PingStatusViewInterface_eventSetKillerConnectionQualityStatus_Parms \
	{ \
		EConnectionQuality killerConnectionQuality; \
	}; \
	struct PingStatusViewInterface_eventSetLocalPacketLossStatus_Parms \
	{ \
		EConnectionQuality localPacketLoss; \
	}; \
	struct PingStatusViewInterface_eventSetLocalPingStatus_Parms \
	{ \
		EConnectionQuality localPing; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPingStatusViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPingStatusViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPingStatusViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPingStatusViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPingStatusViewInterface(UPingStatusViewInterface&&); \
	NO_API UPingStatusViewInterface(const UPingStatusViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPingStatusViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPingStatusViewInterface(UPingStatusViewInterface&&); \
	NO_API UPingStatusViewInterface(const UPingStatusViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPingStatusViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPingStatusViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPingStatusViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPingStatusViewInterface(); \
	friend struct Z_Construct_UClass_UPingStatusViewInterface_Statics; \
public: \
	DECLARE_CLASS(UPingStatusViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UPingStatusViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPingStatusViewInterface() {} \
public: \
	typedef UPingStatusViewInterface UClassType; \
	typedef IPingStatusViewInterface ThisClass; \
	static void Execute_SetKillerConnectionQualityStatus(UObject* O, EConnectionQuality const& killerConnectionQuality); \
	static void Execute_SetLocalPacketLossStatus(UObject* O, EConnectionQuality const& localPacketLoss); \
	static void Execute_SetLocalPingStatus(UObject* O, EConnectionQuality const& localPing); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IPingStatusViewInterface() {} \
public: \
	typedef UPingStatusViewInterface UClassType; \
	typedef IPingStatusViewInterface ThisClass; \
	static void Execute_SetKillerConnectionQualityStatus(UObject* O, EConnectionQuality const& killerConnectionQuality); \
	static void Execute_SetLocalPacketLossStatus(UObject* O, EConnectionQuality const& localPacketLoss); \
	static void Execute_SetLocalPingStatus(UObject* O, EConnectionQuality const& localPing); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UPingStatusViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PingStatusViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
