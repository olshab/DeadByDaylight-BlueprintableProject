// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCurrencyLabelViewData;
struct FPlayerCardViewData;
enum class ECurrencyType : uint8;
#ifdef DBDUIVIEWINTERFACES_PlayerProfileViewInterface_generated_h
#error "PlayerProfileViewInterface.generated.h already included, missing '#pragma once' in PlayerProfileViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_PlayerProfileViewInterface_generated_h

#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_SPARSE_DATA
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_RPC_WRAPPERS \
	virtual void FullUpdateCurrency_Implementation(FCurrencyLabelViewData const& viewData) {}; \
	virtual void HidePlayerCard_Implementation() {}; \
	virtual void HidePlayerName_Implementation() {}; \
	virtual void HideUI_Implementation() {}; \
	virtual void SetPlayerCard_Implementation(FPlayerCardViewData const& badge, FPlayerCardViewData const& banner) {}; \
	virtual void SetPlayerCardBannerOpacity_Implementation(float opacity) {}; \
	virtual void SetPlayerName_Implementation(FText const& playerNameText) {}; \
	virtual void SetWalletData_Implementation(TArray<FCurrencyLabelViewData> const& walletData) {}; \
	virtual void SetWalletVisibility_Implementation(bool isVisible) {}; \
	virtual void ShowUI_Implementation() {}; \
	virtual void UpdatePlayerCardButton_Implementation(bool isProfileMenuContextEntered) {}; \
	virtual void UpdatePlayerProfileOpacity_Implementation(bool isFocused) {}; \
	virtual void UpdateWallet_Implementation(const ECurrencyType type, int32 newBalance, int32 previousBalance) {}; \
 \
	DECLARE_FUNCTION(execFullUpdateCurrency); \
	DECLARE_FUNCTION(execHidePlayerCard); \
	DECLARE_FUNCTION(execHidePlayerName); \
	DECLARE_FUNCTION(execHideUI); \
	DECLARE_FUNCTION(execSetPlayerCard); \
	DECLARE_FUNCTION(execSetPlayerCardBannerOpacity); \
	DECLARE_FUNCTION(execSetPlayerCardEnabled); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execSetWalletData); \
	DECLARE_FUNCTION(execSetWalletVisibility); \
	DECLARE_FUNCTION(execShowUI); \
	DECLARE_FUNCTION(execUpdatePlayerCardButton); \
	DECLARE_FUNCTION(execUpdatePlayerProfileOpacity); \
	DECLARE_FUNCTION(execUpdateWallet);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FullUpdateCurrency_Implementation(FCurrencyLabelViewData const& viewData) {}; \
	virtual void HidePlayerCard_Implementation() {}; \
	virtual void HidePlayerName_Implementation() {}; \
	virtual void HideUI_Implementation() {}; \
	virtual void SetPlayerCard_Implementation(FPlayerCardViewData const& badge, FPlayerCardViewData const& banner) {}; \
	virtual void SetPlayerCardBannerOpacity_Implementation(float opacity) {}; \
	virtual void SetPlayerName_Implementation(FText const& playerNameText) {}; \
	virtual void SetWalletData_Implementation(TArray<FCurrencyLabelViewData> const& walletData) {}; \
	virtual void SetWalletVisibility_Implementation(bool isVisible) {}; \
	virtual void ShowUI_Implementation() {}; \
	virtual void UpdatePlayerCardButton_Implementation(bool isProfileMenuContextEntered) {}; \
	virtual void UpdatePlayerProfileOpacity_Implementation(bool isFocused) {}; \
	virtual void UpdateWallet_Implementation(const ECurrencyType type, int32 newBalance, int32 previousBalance) {}; \
 \
	DECLARE_FUNCTION(execFullUpdateCurrency); \
	DECLARE_FUNCTION(execHidePlayerCard); \
	DECLARE_FUNCTION(execHidePlayerName); \
	DECLARE_FUNCTION(execHideUI); \
	DECLARE_FUNCTION(execSetPlayerCard); \
	DECLARE_FUNCTION(execSetPlayerCardBannerOpacity); \
	DECLARE_FUNCTION(execSetPlayerCardEnabled); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execSetWalletData); \
	DECLARE_FUNCTION(execSetWalletVisibility); \
	DECLARE_FUNCTION(execShowUI); \
	DECLARE_FUNCTION(execUpdatePlayerCardButton); \
	DECLARE_FUNCTION(execUpdatePlayerProfileOpacity); \
	DECLARE_FUNCTION(execUpdateWallet);


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_EVENT_PARMS \
	struct PlayerProfileViewInterface_eventFullUpdateCurrency_Parms \
	{ \
		FCurrencyLabelViewData viewData; \
	}; \
	struct PlayerProfileViewInterface_eventSetPlayerCard_Parms \
	{ \
		FPlayerCardViewData badge; \
		FPlayerCardViewData banner; \
	}; \
	struct PlayerProfileViewInterface_eventSetPlayerCardBannerOpacity_Parms \
	{ \
		float opacity; \
	}; \
	struct PlayerProfileViewInterface_eventSetPlayerName_Parms \
	{ \
		FText playerNameText; \
	}; \
	struct PlayerProfileViewInterface_eventSetWalletData_Parms \
	{ \
		TArray<FCurrencyLabelViewData> walletData; \
	}; \
	struct PlayerProfileViewInterface_eventSetWalletVisibility_Parms \
	{ \
		bool isVisible; \
	}; \
	struct PlayerProfileViewInterface_eventUpdatePlayerCardButton_Parms \
	{ \
		bool isProfileMenuContextEntered; \
	}; \
	struct PlayerProfileViewInterface_eventUpdatePlayerProfileOpacity_Parms \
	{ \
		bool isFocused; \
	}; \
	struct PlayerProfileViewInterface_eventUpdateWallet_Parms \
	{ \
		ECurrencyType type; \
		int32 newBalance; \
		int32 previousBalance; \
	};


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerProfileViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerProfileViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerProfileViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerProfileViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerProfileViewInterface(UPlayerProfileViewInterface&&); \
	NO_API UPlayerProfileViewInterface(const UPlayerProfileViewInterface&); \
public:


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerProfileViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerProfileViewInterface(UPlayerProfileViewInterface&&); \
	NO_API UPlayerProfileViewInterface(const UPlayerProfileViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerProfileViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerProfileViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerProfileViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerProfileViewInterface(); \
	friend struct Z_Construct_UClass_UPlayerProfileViewInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerProfileViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UPlayerProfileViewInterface)


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerProfileViewInterface() {} \
public: \
	typedef UPlayerProfileViewInterface UClassType; \
	typedef IPlayerProfileViewInterface ThisClass; \
	static void Execute_FullUpdateCurrency(UObject* O, FCurrencyLabelViewData const& viewData); \
	static void Execute_HidePlayerCard(UObject* O); \
	static void Execute_HidePlayerName(UObject* O); \
	static void Execute_HideUI(UObject* O); \
	static void Execute_SetPlayerCard(UObject* O, FPlayerCardViewData const& badge, FPlayerCardViewData const& banner); \
	static void Execute_SetPlayerCardBannerOpacity(UObject* O, float opacity); \
	static void Execute_SetPlayerName(UObject* O, FText const& playerNameText); \
	static void Execute_SetWalletData(UObject* O, TArray<FCurrencyLabelViewData> const& walletData); \
	static void Execute_SetWalletVisibility(UObject* O, bool isVisible); \
	static void Execute_ShowUI(UObject* O); \
	static void Execute_UpdatePlayerCardButton(UObject* O, bool isProfileMenuContextEntered); \
	static void Execute_UpdatePlayerProfileOpacity(UObject* O, bool isFocused); \
	static void Execute_UpdateWallet(UObject* O, const ECurrencyType type, int32 newBalance, int32 previousBalance); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPlayerProfileViewInterface() {} \
public: \
	typedef UPlayerProfileViewInterface UClassType; \
	typedef IPlayerProfileViewInterface ThisClass; \
	static void Execute_FullUpdateCurrency(UObject* O, FCurrencyLabelViewData const& viewData); \
	static void Execute_HidePlayerCard(UObject* O); \
	static void Execute_HidePlayerName(UObject* O); \
	static void Execute_HideUI(UObject* O); \
	static void Execute_SetPlayerCard(UObject* O, FPlayerCardViewData const& badge, FPlayerCardViewData const& banner); \
	static void Execute_SetPlayerCardBannerOpacity(UObject* O, float opacity); \
	static void Execute_SetPlayerName(UObject* O, FText const& playerNameText); \
	static void Execute_SetWalletData(UObject* O, TArray<FCurrencyLabelViewData> const& walletData); \
	static void Execute_SetWalletVisibility(UObject* O, bool isVisible); \
	static void Execute_ShowUI(UObject* O); \
	static void Execute_UpdatePlayerCardButton(UObject* O, bool isProfileMenuContextEntered); \
	static void Execute_UpdatePlayerProfileOpacity(UObject* O, bool isFocused); \
	static void Execute_UpdateWallet(UObject* O, const ECurrencyType type, int32 newBalance, int32 previousBalance); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_10_PROLOG \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_EVENT_PARMS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_RPC_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_SPARSE_DATA \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UPlayerProfileViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerProfileViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
