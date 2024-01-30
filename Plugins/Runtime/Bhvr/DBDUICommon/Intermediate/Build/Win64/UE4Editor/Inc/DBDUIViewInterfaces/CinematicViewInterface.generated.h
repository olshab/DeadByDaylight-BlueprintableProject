// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UBinkMediaPlayer;
#ifdef DBDUIVIEWINTERFACES_CinematicViewInterface_generated_h
#error "CinematicViewInterface.generated.h already included, missing '#pragma once' in CinematicViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_CinematicViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_RPC_WRAPPERS \
	virtual void FadeInAnimation_Implementation(const float fadeInDuration, const float delay) {}; \
	virtual void FadeOutAnimation_Implementation(const float fadeOutDuration, const float delay) {}; \
	virtual void SetSize_Implementation(FVector2D size) {}; \
 \
	DECLARE_FUNCTION(execFadeInAnimation); \
	DECLARE_FUNCTION(execFadeOutAnimation); \
	DECLARE_FUNCTION(execSetSize);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FadeInAnimation_Implementation(const float fadeInDuration, const float delay) {}; \
	virtual void FadeOutAnimation_Implementation(const float fadeOutDuration, const float delay) {}; \
	virtual void SetSize_Implementation(FVector2D size) {}; \
 \
	DECLARE_FUNCTION(execFadeInAnimation); \
	DECLARE_FUNCTION(execFadeOutAnimation); \
	DECLARE_FUNCTION(execSetSize);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_EVENT_PARMS \
	struct CinematicViewInterface_eventFadeInAnimation_Parms \
	{ \
		float fadeInDuration; \
		float delay; \
	}; \
	struct CinematicViewInterface_eventFadeOutAnimation_Parms \
	{ \
		float fadeOutDuration; \
		float delay; \
	}; \
	struct CinematicViewInterface_eventGetBinkVideoPlayer_Parms \
	{ \
		UBinkMediaPlayer* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CinematicViewInterface_eventGetBinkVideoPlayer_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct CinematicViewInterface_eventSetSize_Parms \
	{ \
		FVector2D size; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCinematicViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCinematicViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCinematicViewInterface(UCinematicViewInterface&&); \
	NO_API UCinematicViewInterface(const UCinematicViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCinematicViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCinematicViewInterface(UCinematicViewInterface&&); \
	NO_API UCinematicViewInterface(const UCinematicViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCinematicViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCinematicViewInterface(); \
	friend struct Z_Construct_UClass_UCinematicViewInterface_Statics; \
public: \
	DECLARE_CLASS(UCinematicViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UCinematicViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICinematicViewInterface() {} \
public: \
	typedef UCinematicViewInterface UClassType; \
	typedef ICinematicViewInterface ThisClass; \
	static void Execute_FadeInAnimation(UObject* O, const float fadeInDuration, const float delay); \
	static void Execute_FadeOutAnimation(UObject* O, const float fadeOutDuration, const float delay); \
	static UBinkMediaPlayer* Execute_GetBinkVideoPlayer(UObject* O); \
	static void Execute_SetSize(UObject* O, FVector2D size); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ICinematicViewInterface() {} \
public: \
	typedef UCinematicViewInterface UClassType; \
	typedef ICinematicViewInterface ThisClass; \
	static void Execute_FadeInAnimation(UObject* O, const float fadeInDuration, const float delay); \
	static void Execute_FadeOutAnimation(UObject* O, const float fadeOutDuration, const float delay); \
	static UBinkMediaPlayer* Execute_GetBinkVideoPlayer(UObject* O); \
	static void Execute_SetSize(UObject* O, FVector2D size); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UCinematicViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_CinematicViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
