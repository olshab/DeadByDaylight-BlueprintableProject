// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInteractionProgressViewData;
#ifdef DBDUIVIEWINTERFACES_InteractionProgressViewInterface_generated_h
#error "InteractionProgressViewInterface.generated.h already included, missing '#pragma once' in InteractionProgressViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_InteractionProgressViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_RPC_WRAPPERS \
	virtual void HideInputProgressPrompt_Implementation() {}; \
	virtual void PlayHemorrhageAnimation_Implementation() {}; \
	virtual void SetInputProgressPrompt_Implementation(FInteractionProgressViewData const& data) {}; \
	virtual void UpdateInputProgress_Implementation(const float progress, const float itemCharge, bool isBlocked) {}; \
 \
	DECLARE_FUNCTION(execHideInputProgressPrompt); \
	DECLARE_FUNCTION(execPlayHemorrhageAnimation); \
	DECLARE_FUNCTION(execSetInputProgressPrompt); \
	DECLARE_FUNCTION(execUpdateInputProgress);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HideInputProgressPrompt_Implementation() {}; \
	virtual void PlayHemorrhageAnimation_Implementation() {}; \
	virtual void SetInputProgressPrompt_Implementation(FInteractionProgressViewData const& data) {}; \
	virtual void UpdateInputProgress_Implementation(const float progress, const float itemCharge, bool isBlocked) {}; \
 \
	DECLARE_FUNCTION(execHideInputProgressPrompt); \
	DECLARE_FUNCTION(execPlayHemorrhageAnimation); \
	DECLARE_FUNCTION(execSetInputProgressPrompt); \
	DECLARE_FUNCTION(execUpdateInputProgress);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_EVENT_PARMS \
	struct InteractionProgressViewInterface_eventSetInputProgressPrompt_Parms \
	{ \
		FInteractionProgressViewData data; \
	}; \
	struct InteractionProgressViewInterface_eventUpdateInputProgress_Parms \
	{ \
		float progress; \
		float itemCharge; \
		bool isBlocked; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionProgressViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionProgressViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionProgressViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionProgressViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionProgressViewInterface(UInteractionProgressViewInterface&&); \
	NO_API UInteractionProgressViewInterface(const UInteractionProgressViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionProgressViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionProgressViewInterface(UInteractionProgressViewInterface&&); \
	NO_API UInteractionProgressViewInterface(const UInteractionProgressViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionProgressViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionProgressViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionProgressViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionProgressViewInterface(); \
	friend struct Z_Construct_UClass_UInteractionProgressViewInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionProgressViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UInteractionProgressViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionProgressViewInterface() {} \
public: \
	typedef UInteractionProgressViewInterface UClassType; \
	typedef IInteractionProgressViewInterface ThisClass; \
	static void Execute_HideInputProgressPrompt(UObject* O); \
	static void Execute_PlayHemorrhageAnimation(UObject* O); \
	static void Execute_SetInputProgressPrompt(UObject* O, FInteractionProgressViewData const& data); \
	static void Execute_UpdateInputProgress(UObject* O, const float progress, const float itemCharge, bool isBlocked); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionProgressViewInterface() {} \
public: \
	typedef UInteractionProgressViewInterface UClassType; \
	typedef IInteractionProgressViewInterface ThisClass; \
	static void Execute_HideInputProgressPrompt(UObject* O); \
	static void Execute_PlayHemorrhageAnimation(UObject* O); \
	static void Execute_SetInputProgressPrompt(UObject* O, FInteractionProgressViewData const& data); \
	static void Execute_UpdateInputProgress(UObject* O, const float progress, const float itemCharge, bool isBlocked); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UInteractionProgressViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionProgressViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
