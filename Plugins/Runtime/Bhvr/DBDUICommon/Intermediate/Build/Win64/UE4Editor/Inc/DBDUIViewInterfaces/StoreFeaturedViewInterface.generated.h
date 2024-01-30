// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreFeaturedCharacterViewData;
class UStoreCustomizationItemViewData;
#ifdef DBDUIVIEWINTERFACES_StoreFeaturedViewInterface_generated_h
#error "StoreFeaturedViewInterface.generated.h already included, missing '#pragma once' in StoreFeaturedViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreFeaturedViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_RPC_WRAPPERS \
	virtual void FocusFeaturedCharacter_Implementation(int32 characterIndex) {}; \
	virtual void InitFeaturedCharacters_Implementation(TArray<FStoreFeaturedCharacterViewData> const& characterViewDataArray) {}; \
	virtual void InitFeaturedCustomizationItems_Implementation(TArray<UStoreCustomizationItemViewData*> const& viewDataArray) {}; \
 \
	DECLARE_FUNCTION(execFocusFeaturedCharacter); \
	DECLARE_FUNCTION(execInitFeaturedCharacters); \
	DECLARE_FUNCTION(execInitFeaturedCustomizationItems);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FocusFeaturedCharacter_Implementation(int32 characterIndex) {}; \
	virtual void InitFeaturedCharacters_Implementation(TArray<FStoreFeaturedCharacterViewData> const& characterViewDataArray) {}; \
	virtual void InitFeaturedCustomizationItems_Implementation(TArray<UStoreCustomizationItemViewData*> const& viewDataArray) {}; \
 \
	DECLARE_FUNCTION(execFocusFeaturedCharacter); \
	DECLARE_FUNCTION(execInitFeaturedCharacters); \
	DECLARE_FUNCTION(execInitFeaturedCustomizationItems);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_EVENT_PARMS \
	struct StoreFeaturedViewInterface_eventFocusFeaturedCharacter_Parms \
	{ \
		int32 characterIndex; \
	}; \
	struct StoreFeaturedViewInterface_eventInitFeaturedCharacters_Parms \
	{ \
		TArray<FStoreFeaturedCharacterViewData> characterViewDataArray; \
	}; \
	struct StoreFeaturedViewInterface_eventInitFeaturedCustomizationItems_Parms \
	{ \
		TArray<UStoreCustomizationItemViewData*> viewDataArray; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreFeaturedViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreFeaturedViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreFeaturedViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreFeaturedViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreFeaturedViewInterface(UStoreFeaturedViewInterface&&); \
	NO_API UStoreFeaturedViewInterface(const UStoreFeaturedViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreFeaturedViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreFeaturedViewInterface(UStoreFeaturedViewInterface&&); \
	NO_API UStoreFeaturedViewInterface(const UStoreFeaturedViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreFeaturedViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreFeaturedViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreFeaturedViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreFeaturedViewInterface(); \
	friend struct Z_Construct_UClass_UStoreFeaturedViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreFeaturedViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreFeaturedViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreFeaturedViewInterface() {} \
public: \
	typedef UStoreFeaturedViewInterface UClassType; \
	typedef IStoreFeaturedViewInterface ThisClass; \
	static void Execute_FocusFeaturedCharacter(UObject* O, int32 characterIndex); \
	static void Execute_InitFeaturedCharacters(UObject* O, TArray<FStoreFeaturedCharacterViewData> const& characterViewDataArray); \
	static void Execute_InitFeaturedCustomizationItems(UObject* O, TArray<UStoreCustomizationItemViewData*> const& viewDataArray); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreFeaturedViewInterface() {} \
public: \
	typedef UStoreFeaturedViewInterface UClassType; \
	typedef IStoreFeaturedViewInterface ThisClass; \
	static void Execute_FocusFeaturedCharacter(UObject* O, int32 characterIndex); \
	static void Execute_InitFeaturedCharacters(UObject* O, TArray<FStoreFeaturedCharacterViewData> const& characterViewDataArray); \
	static void Execute_InitFeaturedCustomizationItems(UObject* O, TArray<UStoreCustomizationItemViewData*> const& viewDataArray); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreFeaturedViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreFeaturedViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
