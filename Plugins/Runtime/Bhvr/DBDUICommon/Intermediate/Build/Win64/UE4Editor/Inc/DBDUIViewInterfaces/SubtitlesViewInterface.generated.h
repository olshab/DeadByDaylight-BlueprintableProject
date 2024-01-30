// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESubtitlesBackgroundOpacity : uint8;
enum class ESubtitlesPosition : uint8;
enum class ESubtitlesSize : uint8;
#ifdef DBDUIVIEWINTERFACES_SubtitlesViewInterface_generated_h
#error "SubtitlesViewInterface.generated.h already included, missing '#pragma once' in SubtitlesViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_SubtitlesViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_RPC_WRAPPERS \
	virtual void HideSubtitles_Implementation() {}; \
	virtual void SetConstrainAspectRatioChanged_Implementation(bool isConstrained, float aspectRatio) {}; \
	virtual void SetSubtitlesBackgroundOpacity_Implementation(ESubtitlesBackgroundOpacity opacity) {}; \
	virtual void SetSubtitlesPosition_Implementation(ESubtitlesPosition position) {}; \
	virtual void SetSubtitlesSize_Implementation(ESubtitlesSize size) {}; \
	virtual void ShowSubtitle_Implementation(FText const& subtitleText) {}; \
 \
	DECLARE_FUNCTION(execHideSubtitles); \
	DECLARE_FUNCTION(execSetConstrainAspectRatioChanged); \
	DECLARE_FUNCTION(execSetSubtitlesBackgroundOpacity); \
	DECLARE_FUNCTION(execSetSubtitlesPosition); \
	DECLARE_FUNCTION(execSetSubtitlesSize); \
	DECLARE_FUNCTION(execShowSubtitle);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HideSubtitles_Implementation() {}; \
	virtual void SetConstrainAspectRatioChanged_Implementation(bool isConstrained, float aspectRatio) {}; \
	virtual void SetSubtitlesBackgroundOpacity_Implementation(ESubtitlesBackgroundOpacity opacity) {}; \
	virtual void SetSubtitlesPosition_Implementation(ESubtitlesPosition position) {}; \
	virtual void SetSubtitlesSize_Implementation(ESubtitlesSize size) {}; \
	virtual void ShowSubtitle_Implementation(FText const& subtitleText) {}; \
 \
	DECLARE_FUNCTION(execHideSubtitles); \
	DECLARE_FUNCTION(execSetConstrainAspectRatioChanged); \
	DECLARE_FUNCTION(execSetSubtitlesBackgroundOpacity); \
	DECLARE_FUNCTION(execSetSubtitlesPosition); \
	DECLARE_FUNCTION(execSetSubtitlesSize); \
	DECLARE_FUNCTION(execShowSubtitle);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_EVENT_PARMS \
	struct SubtitlesViewInterface_eventSetConstrainAspectRatioChanged_Parms \
	{ \
		bool isConstrained; \
		float aspectRatio; \
	}; \
	struct SubtitlesViewInterface_eventSetSubtitlesBackgroundOpacity_Parms \
	{ \
		ESubtitlesBackgroundOpacity opacity; \
	}; \
	struct SubtitlesViewInterface_eventSetSubtitlesPosition_Parms \
	{ \
		ESubtitlesPosition position; \
	}; \
	struct SubtitlesViewInterface_eventSetSubtitlesSize_Parms \
	{ \
		ESubtitlesSize size; \
	}; \
	struct SubtitlesViewInterface_eventShowSubtitle_Parms \
	{ \
		FText subtitleText; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubtitlesViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubtitlesViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubtitlesViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitlesViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubtitlesViewInterface(USubtitlesViewInterface&&); \
	NO_API USubtitlesViewInterface(const USubtitlesViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubtitlesViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubtitlesViewInterface(USubtitlesViewInterface&&); \
	NO_API USubtitlesViewInterface(const USubtitlesViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubtitlesViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitlesViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubtitlesViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSubtitlesViewInterface(); \
	friend struct Z_Construct_UClass_USubtitlesViewInterface_Statics; \
public: \
	DECLARE_CLASS(USubtitlesViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(USubtitlesViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISubtitlesViewInterface() {} \
public: \
	typedef USubtitlesViewInterface UClassType; \
	typedef ISubtitlesViewInterface ThisClass; \
	static void Execute_HideSubtitles(UObject* O); \
	static void Execute_SetConstrainAspectRatioChanged(UObject* O, bool isConstrained, float aspectRatio); \
	static void Execute_SetSubtitlesBackgroundOpacity(UObject* O, ESubtitlesBackgroundOpacity opacity); \
	static void Execute_SetSubtitlesPosition(UObject* O, ESubtitlesPosition position); \
	static void Execute_SetSubtitlesSize(UObject* O, ESubtitlesSize size); \
	static void Execute_ShowSubtitle(UObject* O, FText const& subtitleText); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISubtitlesViewInterface() {} \
public: \
	typedef USubtitlesViewInterface UClassType; \
	typedef ISubtitlesViewInterface ThisClass; \
	static void Execute_HideSubtitles(UObject* O); \
	static void Execute_SetConstrainAspectRatioChanged(UObject* O, bool isConstrained, float aspectRatio); \
	static void Execute_SetSubtitlesBackgroundOpacity(UObject* O, ESubtitlesBackgroundOpacity opacity); \
	static void Execute_SetSubtitlesPosition(UObject* O, ESubtitlesPosition position); \
	static void Execute_SetSubtitlesSize(UObject* O, ESubtitlesSize size); \
	static void Execute_ShowSubtitle(UObject* O, FText const& subtitleText); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class USubtitlesViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SubtitlesViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
