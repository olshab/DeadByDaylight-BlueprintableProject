// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHudComponent : uint8;
#ifdef DBDUIVIEWINTERFACES_TutorialHighlightViewInterface_generated_h
#error "TutorialHighlightViewInterface.generated.h already included, missing '#pragma once' in TutorialHighlightViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_TutorialHighlightViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_RPC_WRAPPERS \
	virtual void SetTutorialHighlight_Implementation(bool show, EHudComponent const& componentId) {}; \
 \
	DECLARE_FUNCTION(execSetTutorialHighlight);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetTutorialHighlight_Implementation(bool show, EHudComponent const& componentId) {}; \
 \
	DECLARE_FUNCTION(execSetTutorialHighlight);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_EVENT_PARMS \
	struct TutorialHighlightViewInterface_eventSetTutorialHighlight_Parms \
	{ \
		bool show; \
		EHudComponent componentId; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialHighlightViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialHighlightViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialHighlightViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialHighlightViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialHighlightViewInterface(UTutorialHighlightViewInterface&&); \
	NO_API UTutorialHighlightViewInterface(const UTutorialHighlightViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialHighlightViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialHighlightViewInterface(UTutorialHighlightViewInterface&&); \
	NO_API UTutorialHighlightViewInterface(const UTutorialHighlightViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialHighlightViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialHighlightViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialHighlightViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTutorialHighlightViewInterface(); \
	friend struct Z_Construct_UClass_UTutorialHighlightViewInterface_Statics; \
public: \
	DECLARE_CLASS(UTutorialHighlightViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UTutorialHighlightViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITutorialHighlightViewInterface() {} \
public: \
	typedef UTutorialHighlightViewInterface UClassType; \
	typedef ITutorialHighlightViewInterface ThisClass; \
	static void Execute_SetTutorialHighlight(UObject* O, bool show, EHudComponent const& componentId); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ITutorialHighlightViewInterface() {} \
public: \
	typedef UTutorialHighlightViewInterface UClassType; \
	typedef ITutorialHighlightViewInterface ThisClass; \
	static void Execute_SetTutorialHighlight(UObject* O, bool show, EHudComponent const& componentId); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_8_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UTutorialHighlightViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialHighlightViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
