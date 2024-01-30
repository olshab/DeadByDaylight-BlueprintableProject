// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IStoreCharactersBioViewInterface;
class IStoreCharactersCustomizationsViewInterface;
class IStoreCharactersSelectionViewInterface;
enum class EPlayerRole : uint8;
class UCharacterPerkViewData;
class UMenuPowerViewData;
#ifdef DBDUIVIEWINTERFACES_StoreCharactersViewInterface_generated_h
#error "StoreCharactersViewInterface.generated.h already included, missing '#pragma once' in StoreCharactersViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_StoreCharactersViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_RPC_WRAPPERS \
	virtual TScriptInterface<IStoreCharactersBioViewInterface> GetStoreCharactersBioInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCharactersCustomizationsViewInterface> GetStoreCharactersCustomizationsInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCharactersSelectionViewInterface> GetStoreCharactersSelectionInterface_Implementation() const { return NULL; }; \
	virtual void SetCharacterData_Implementation(FText const& characterName, EPlayerRole role, TArray<UCharacterPerkViewData*> const& characterPerks) {}; \
	virtual void SetKillerPower_Implementation(UMenuPowerViewData* killerPower) {}; \
 \
	DECLARE_FUNCTION(execGetStoreCharactersBioInterface); \
	DECLARE_FUNCTION(execGetStoreCharactersCustomizationsInterface); \
	DECLARE_FUNCTION(execGetStoreCharactersSelectionInterface); \
	DECLARE_FUNCTION(execSetCharacterData); \
	DECLARE_FUNCTION(execSetKillerPower);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IStoreCharactersBioViewInterface> GetStoreCharactersBioInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCharactersCustomizationsViewInterface> GetStoreCharactersCustomizationsInterface_Implementation() const { return NULL; }; \
	virtual TScriptInterface<IStoreCharactersSelectionViewInterface> GetStoreCharactersSelectionInterface_Implementation() const { return NULL; }; \
	virtual void SetCharacterData_Implementation(FText const& characterName, EPlayerRole role, TArray<UCharacterPerkViewData*> const& characterPerks) {}; \
	virtual void SetKillerPower_Implementation(UMenuPowerViewData* killerPower) {}; \
 \
	DECLARE_FUNCTION(execGetStoreCharactersBioInterface); \
	DECLARE_FUNCTION(execGetStoreCharactersCustomizationsInterface); \
	DECLARE_FUNCTION(execGetStoreCharactersSelectionInterface); \
	DECLARE_FUNCTION(execSetCharacterData); \
	DECLARE_FUNCTION(execSetKillerPower);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_EVENT_PARMS \
	struct StoreCharactersViewInterface_eventGetStoreCharactersBioInterface_Parms \
	{ \
		TScriptInterface<IStoreCharactersBioViewInterface> ReturnValue; \
	}; \
	struct StoreCharactersViewInterface_eventGetStoreCharactersCustomizationsInterface_Parms \
	{ \
		TScriptInterface<IStoreCharactersCustomizationsViewInterface> ReturnValue; \
	}; \
	struct StoreCharactersViewInterface_eventGetStoreCharactersSelectionInterface_Parms \
	{ \
		TScriptInterface<IStoreCharactersSelectionViewInterface> ReturnValue; \
	}; \
	struct StoreCharactersViewInterface_eventSetCharacterData_Parms \
	{ \
		FText characterName; \
		EPlayerRole role; \
		TArray<UCharacterPerkViewData*> characterPerks; \
	}; \
	struct StoreCharactersViewInterface_eventSetKillerPower_Parms \
	{ \
		UMenuPowerViewData* killerPower; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCharactersViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCharactersViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersViewInterface(UStoreCharactersViewInterface&&); \
	NO_API UStoreCharactersViewInterface(const UStoreCharactersViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreCharactersViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreCharactersViewInterface(UStoreCharactersViewInterface&&); \
	NO_API UStoreCharactersViewInterface(const UStoreCharactersViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreCharactersViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreCharactersViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreCharactersViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStoreCharactersViewInterface(); \
	friend struct Z_Construct_UClass_UStoreCharactersViewInterface_Statics; \
public: \
	DECLARE_CLASS(UStoreCharactersViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UStoreCharactersViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStoreCharactersViewInterface() {} \
public: \
	typedef UStoreCharactersViewInterface UClassType; \
	typedef IStoreCharactersViewInterface ThisClass; \
	static TScriptInterface<IStoreCharactersBioViewInterface> Execute_GetStoreCharactersBioInterface(const UObject* O); \
	static TScriptInterface<IStoreCharactersCustomizationsViewInterface> Execute_GetStoreCharactersCustomizationsInterface(const UObject* O); \
	static TScriptInterface<IStoreCharactersSelectionViewInterface> Execute_GetStoreCharactersSelectionInterface(const UObject* O); \
	static void Execute_SetCharacterData(UObject* O, FText const& characterName, EPlayerRole role, TArray<UCharacterPerkViewData*> const& characterPerks); \
	static void Execute_SetKillerPower(UObject* O, UMenuPowerViewData* killerPower); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IStoreCharactersViewInterface() {} \
public: \
	typedef UStoreCharactersViewInterface UClassType; \
	typedef IStoreCharactersViewInterface ThisClass; \
	static TScriptInterface<IStoreCharactersBioViewInterface> Execute_GetStoreCharactersBioInterface(const UObject* O); \
	static TScriptInterface<IStoreCharactersCustomizationsViewInterface> Execute_GetStoreCharactersCustomizationsInterface(const UObject* O); \
	static TScriptInterface<IStoreCharactersSelectionViewInterface> Execute_GetStoreCharactersSelectionInterface(const UObject* O); \
	static void Execute_SetCharacterData(UObject* O, FText const& characterName, EPlayerRole role, TArray<UCharacterPerkViewData*> const& characterPerks); \
	static void Execute_SetKillerPower(UObject* O, UMenuPowerViewData* killerPower); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_15_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UStoreCharactersViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_StoreCharactersViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
