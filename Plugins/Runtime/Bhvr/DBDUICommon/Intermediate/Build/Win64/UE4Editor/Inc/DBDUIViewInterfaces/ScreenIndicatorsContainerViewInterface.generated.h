// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScreenIndicatorViewData;
#ifdef DBDUIVIEWINTERFACES_ScreenIndicatorsContainerViewInterface_generated_h
#error "ScreenIndicatorsContainerViewInterface.generated.h already included, missing '#pragma once' in ScreenIndicatorsContainerViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ScreenIndicatorsContainerViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_RPC_WRAPPERS \
	virtual void RemoveDirectionIndicator_Implementation(const FString& id) {}; \
	virtual void ShowDirectionIndicator_Implementation(FScreenIndicatorViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execRemoveDirectionIndicator); \
	DECLARE_FUNCTION(execShowDirectionIndicator);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemoveDirectionIndicator_Implementation(const FString& id) {}; \
	virtual void ShowDirectionIndicator_Implementation(FScreenIndicatorViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execRemoveDirectionIndicator); \
	DECLARE_FUNCTION(execShowDirectionIndicator);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_EVENT_PARMS \
	struct ScreenIndicatorsContainerViewInterface_eventRemoveDirectionIndicator_Parms \
	{ \
		FString id; \
	}; \
	struct ScreenIndicatorsContainerViewInterface_eventShowDirectionIndicator_Parms \
	{ \
		FScreenIndicatorViewData data; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenIndicatorsContainerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenIndicatorsContainerViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenIndicatorsContainerViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenIndicatorsContainerViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenIndicatorsContainerViewInterface(UScreenIndicatorsContainerViewInterface&&); \
	NO_API UScreenIndicatorsContainerViewInterface(const UScreenIndicatorsContainerViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenIndicatorsContainerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenIndicatorsContainerViewInterface(UScreenIndicatorsContainerViewInterface&&); \
	NO_API UScreenIndicatorsContainerViewInterface(const UScreenIndicatorsContainerViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenIndicatorsContainerViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenIndicatorsContainerViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenIndicatorsContainerViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUScreenIndicatorsContainerViewInterface(); \
	friend struct Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics; \
public: \
	DECLARE_CLASS(UScreenIndicatorsContainerViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UScreenIndicatorsContainerViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IScreenIndicatorsContainerViewInterface() {} \
public: \
	typedef UScreenIndicatorsContainerViewInterface UClassType; \
	typedef IScreenIndicatorsContainerViewInterface ThisClass; \
	static void Execute_RemoveDirectionIndicator(UObject* O, const FString& id); \
	static void Execute_ShowDirectionIndicator(UObject* O, FScreenIndicatorViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IScreenIndicatorsContainerViewInterface() {} \
public: \
	typedef UScreenIndicatorsContainerViewInterface UClassType; \
	typedef IScreenIndicatorsContainerViewInterface ThisClass; \
	static void Execute_RemoveDirectionIndicator(UObject* O, const FString& id); \
	static void Execute_ShowDirectionIndicator(UObject* O, FScreenIndicatorViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UScreenIndicatorsContainerViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ScreenIndicatorsContainerViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
