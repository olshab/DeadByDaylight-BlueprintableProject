// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDailyRitualViewData;
#ifdef DBDUIVIEWINTERFACES_DailyRitualsPopupViewInterface_generated_h
#error "DailyRitualsPopupViewInterface.generated.h already included, missing '#pragma once' in DailyRitualsPopupViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_DailyRitualsPopupViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_RPC_WRAPPERS \
	virtual void SetAllDailyRitualTilesVisible_Implementation() {}; \
	virtual void SetCanRemoveDailyRitual_Implementation(bool canRemoveDailyRitual) {}; \
	virtual void SetDailyRitualsData_Implementation(TArray<FDailyRitualViewData> const& dailyRitualsData, bool isAfterTrial) {}; \
	virtual void StartAnim_Implementation() {}; \
 \
	DECLARE_FUNCTION(execSetAllDailyRitualTilesVisible); \
	DECLARE_FUNCTION(execSetCanRemoveDailyRitual); \
	DECLARE_FUNCTION(execSetDailyRitualsData); \
	DECLARE_FUNCTION(execStartAnim);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetAllDailyRitualTilesVisible_Implementation() {}; \
	virtual void SetCanRemoveDailyRitual_Implementation(bool canRemoveDailyRitual) {}; \
	virtual void SetDailyRitualsData_Implementation(TArray<FDailyRitualViewData> const& dailyRitualsData, bool isAfterTrial) {}; \
	virtual void StartAnim_Implementation() {}; \
 \
	DECLARE_FUNCTION(execSetAllDailyRitualTilesVisible); \
	DECLARE_FUNCTION(execSetCanRemoveDailyRitual); \
	DECLARE_FUNCTION(execSetDailyRitualsData); \
	DECLARE_FUNCTION(execStartAnim);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_EVENT_PARMS \
	struct DailyRitualsPopupViewInterface_eventSetCanRemoveDailyRitual_Parms \
	{ \
		bool canRemoveDailyRitual; \
	}; \
	struct DailyRitualsPopupViewInterface_eventSetDailyRitualsData_Parms \
	{ \
		TArray<FDailyRitualViewData> dailyRitualsData; \
		bool isAfterTrial; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDailyRitualsPopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDailyRitualsPopupViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDailyRitualsPopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDailyRitualsPopupViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDailyRitualsPopupViewInterface(UDailyRitualsPopupViewInterface&&); \
	NO_API UDailyRitualsPopupViewInterface(const UDailyRitualsPopupViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDailyRitualsPopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDailyRitualsPopupViewInterface(UDailyRitualsPopupViewInterface&&); \
	NO_API UDailyRitualsPopupViewInterface(const UDailyRitualsPopupViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDailyRitualsPopupViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDailyRitualsPopupViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDailyRitualsPopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDailyRitualsPopupViewInterface(); \
	friend struct Z_Construct_UClass_UDailyRitualsPopupViewInterface_Statics; \
public: \
	DECLARE_CLASS(UDailyRitualsPopupViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UDailyRitualsPopupViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDailyRitualsPopupViewInterface() {} \
public: \
	typedef UDailyRitualsPopupViewInterface UClassType; \
	typedef IDailyRitualsPopupViewInterface ThisClass; \
	static void Execute_SetAllDailyRitualTilesVisible(UObject* O); \
	static void Execute_SetCanRemoveDailyRitual(UObject* O, bool canRemoveDailyRitual); \
	static void Execute_SetDailyRitualsData(UObject* O, TArray<FDailyRitualViewData> const& dailyRitualsData, bool isAfterTrial); \
	static void Execute_StartAnim(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IDailyRitualsPopupViewInterface() {} \
public: \
	typedef UDailyRitualsPopupViewInterface UClassType; \
	typedef IDailyRitualsPopupViewInterface ThisClass; \
	static void Execute_SetAllDailyRitualTilesVisible(UObject* O); \
	static void Execute_SetCanRemoveDailyRitual(UObject* O, bool canRemoveDailyRitual); \
	static void Execute_SetDailyRitualsData(UObject* O, TArray<FDailyRitualViewData> const& dailyRitualsData, bool isAfterTrial); \
	static void Execute_StartAnim(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UDailyRitualsPopupViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_DailyRitualsPopupViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
