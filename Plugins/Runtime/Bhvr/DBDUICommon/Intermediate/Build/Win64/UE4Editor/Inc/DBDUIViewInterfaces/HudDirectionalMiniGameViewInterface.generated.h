// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDirectionalMiniGameType : uint8;
enum class EDirectionalInputKey : uint8;
enum class EDirectionalMinigameResult : uint8;
#ifdef DBDUIVIEWINTERFACES_HudDirectionalMiniGameViewInterface_generated_h
#error "HudDirectionalMiniGameViewInterface.generated.h already included, missing '#pragma once' in HudDirectionalMiniGameViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_HudDirectionalMiniGameViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_RPC_WRAPPERS \
	virtual void Init_Implementation(int32 maxItems, EDirectionalMiniGameType type) {}; \
	virtual void Show_Implementation(TArray<EDirectionalInputKey> const& directions) {}; \
	virtual void UpdateResult_Implementation(int32 index, bool isSuccessful) {}; \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execShow); \
	DECLARE_FUNCTION(execUpdateResult);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Init_Implementation(int32 maxItems, EDirectionalMiniGameType type) {}; \
	virtual void Show_Implementation(TArray<EDirectionalInputKey> const& directions) {}; \
	virtual void UpdateResult_Implementation(int32 index, bool isSuccessful) {}; \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execShow); \
	DECLARE_FUNCTION(execUpdateResult);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_EVENT_PARMS \
	struct HudDirectionalMiniGameViewInterface_eventInit_Parms \
	{ \
		int32 maxItems; \
		EDirectionalMiniGameType type; \
	}; \
	struct HudDirectionalMiniGameViewInterface_eventShow_Parms \
	{ \
		TArray<EDirectionalInputKey> directions; \
	}; \
	struct HudDirectionalMiniGameViewInterface_eventUpdateFinalResult_Parms \
	{ \
		EDirectionalMinigameResult finalResult; \
	}; \
	struct HudDirectionalMiniGameViewInterface_eventUpdateResult_Parms \
	{ \
		int32 index; \
		bool isSuccessful; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudDirectionalMiniGameViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudDirectionalMiniGameViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudDirectionalMiniGameViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudDirectionalMiniGameViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudDirectionalMiniGameViewInterface(UHudDirectionalMiniGameViewInterface&&); \
	NO_API UHudDirectionalMiniGameViewInterface(const UHudDirectionalMiniGameViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudDirectionalMiniGameViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudDirectionalMiniGameViewInterface(UHudDirectionalMiniGameViewInterface&&); \
	NO_API UHudDirectionalMiniGameViewInterface(const UHudDirectionalMiniGameViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudDirectionalMiniGameViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudDirectionalMiniGameViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudDirectionalMiniGameViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHudDirectionalMiniGameViewInterface(); \
	friend struct Z_Construct_UClass_UHudDirectionalMiniGameViewInterface_Statics; \
public: \
	DECLARE_CLASS(UHudDirectionalMiniGameViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UHudDirectionalMiniGameViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHudDirectionalMiniGameViewInterface() {} \
public: \
	typedef UHudDirectionalMiniGameViewInterface UClassType; \
	typedef IHudDirectionalMiniGameViewInterface ThisClass; \
	static void Execute_Hide(UObject* O); \
	static void Execute_Init(UObject* O, int32 maxItems, EDirectionalMiniGameType type); \
	static void Execute_Show(UObject* O, TArray<EDirectionalInputKey> const& directions); \
	static void Execute_UpdateFinalResult(UObject* O, EDirectionalMinigameResult finalResult); \
	static void Execute_UpdateResult(UObject* O, int32 index, bool isSuccessful); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IHudDirectionalMiniGameViewInterface() {} \
public: \
	typedef UHudDirectionalMiniGameViewInterface UClassType; \
	typedef IHudDirectionalMiniGameViewInterface ThisClass; \
	static void Execute_Hide(UObject* O); \
	static void Execute_Init(UObject* O, int32 maxItems, EDirectionalMiniGameType type); \
	static void Execute_Show(UObject* O, TArray<EDirectionalInputKey> const& directions); \
	static void Execute_UpdateFinalResult(UObject* O, EDirectionalMinigameResult finalResult); \
	static void Execute_UpdateResult(UObject* O, int32 index, bool isSuccessful); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UHudDirectionalMiniGameViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudDirectionalMiniGameViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
