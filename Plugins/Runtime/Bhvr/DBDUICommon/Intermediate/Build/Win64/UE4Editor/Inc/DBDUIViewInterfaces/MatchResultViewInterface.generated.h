// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateVisibility : uint8;
struct FMatchResultViewData;
#ifdef DBDUIVIEWINTERFACES_MatchResultViewInterface_generated_h
#error "MatchResultViewInterface.generated.h already included, missing '#pragma once' in MatchResultViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_MatchResultViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_RPC_WRAPPERS \
	virtual void PlayAnimationSequence_Implementation() {}; \
	virtual void SetMatchResultVisibility_Implementation(ESlateVisibility visibility) {}; \
	virtual void UpdateWidget_Implementation(FMatchResultViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execPlayAnimationSequence); \
	DECLARE_FUNCTION(execSetMatchResultVisibility); \
	DECLARE_FUNCTION(execUpdateWidget);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayAnimationSequence_Implementation() {}; \
	virtual void SetMatchResultVisibility_Implementation(ESlateVisibility visibility) {}; \
	virtual void UpdateWidget_Implementation(FMatchResultViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execPlayAnimationSequence); \
	DECLARE_FUNCTION(execSetMatchResultVisibility); \
	DECLARE_FUNCTION(execUpdateWidget);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_EVENT_PARMS \
	struct MatchResultViewInterface_eventSetMatchResultVisibility_Parms \
	{ \
		ESlateVisibility visibility; \
	}; \
	struct MatchResultViewInterface_eventUpdateWidget_Parms \
	{ \
		FMatchResultViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatchResultViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatchResultViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatchResultViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatchResultViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatchResultViewInterface(UMatchResultViewInterface&&); \
	NO_API UMatchResultViewInterface(const UMatchResultViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatchResultViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatchResultViewInterface(UMatchResultViewInterface&&); \
	NO_API UMatchResultViewInterface(const UMatchResultViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatchResultViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatchResultViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatchResultViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMatchResultViewInterface(); \
	friend struct Z_Construct_UClass_UMatchResultViewInterface_Statics; \
public: \
	DECLARE_CLASS(UMatchResultViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UMatchResultViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMatchResultViewInterface() {} \
public: \
	typedef UMatchResultViewInterface UClassType; \
	typedef IMatchResultViewInterface ThisClass; \
	static void Execute_PlayAnimationSequence(UObject* O); \
	static void Execute_SetMatchResultVisibility(UObject* O, ESlateVisibility visibility); \
	static void Execute_UpdateWidget(UObject* O, FMatchResultViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IMatchResultViewInterface() {} \
public: \
	typedef UMatchResultViewInterface UClassType; \
	typedef IMatchResultViewInterface ThisClass; \
	static void Execute_PlayAnimationSequence(UObject* O); \
	static void Execute_SetMatchResultVisibility(UObject* O, ESlateVisibility visibility); \
	static void Execute_UpdateWidget(UObject* O, FMatchResultViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_9_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UMatchResultViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_MatchResultViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
