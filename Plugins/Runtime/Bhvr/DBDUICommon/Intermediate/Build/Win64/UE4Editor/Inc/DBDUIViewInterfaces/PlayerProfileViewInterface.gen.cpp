// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlayerProfileViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerProfileViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerProfileViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerProfileViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyLabelViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerCardViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execFullUpdateCurrency)
	{
		P_GET_STRUCT_REF(FCurrencyLabelViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FullUpdateCurrency_Implementation(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execHidePlayerCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePlayerCard_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execHidePlayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePlayerName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execHideUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideUI_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execSetPlayerCard)
	{
		P_GET_STRUCT_REF(FPlayerCardViewData,Z_Param_Out_badge);
		P_GET_STRUCT_REF(FPlayerCardViewData,Z_Param_Out_banner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerCard_Implementation(Z_Param_Out_badge,Z_Param_Out_banner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execSetPlayerCardBannerOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_opacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerCardBannerOpacity_Implementation(Z_Param_opacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execSetPlayerCardEnabled)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerCardEnabled(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execSetPlayerName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_playerNameText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerName_Implementation(Z_Param_Out_playerNameText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execSetWalletData)
	{
		P_GET_TARRAY_REF(FCurrencyLabelViewData,Z_Param_Out_walletData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWalletData_Implementation(Z_Param_Out_walletData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execSetWalletVisibility)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWalletVisibility_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execShowUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowUI_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execUpdatePlayerCardButton)
	{
		P_GET_UBOOL(Z_Param_isProfileMenuContextEntered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerCardButton_Implementation(Z_Param_isProfileMenuContextEntered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execUpdatePlayerProfileOpacity)
	{
		P_GET_UBOOL(Z_Param_isFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerProfileOpacity_Implementation(Z_Param_isFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerProfileViewInterface::execUpdateWallet)
	{
		P_GET_ENUM(ECurrencyType,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_newBalance);
		P_GET_PROPERTY(FIntProperty,Z_Param_previousBalance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWallet_Implementation(ECurrencyType(Z_Param_type),Z_Param_newBalance,Z_Param_previousBalance);
		P_NATIVE_END;
	}
	void IPlayerProfileViewInterface::FullUpdateCurrency(FCurrencyLabelViewData const& viewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FullUpdateCurrency instead.");
	}
	void IPlayerProfileViewInterface::HidePlayerCard()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HidePlayerCard instead.");
	}
	void IPlayerProfileViewInterface::HidePlayerName()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HidePlayerName instead.");
	}
	void IPlayerProfileViewInterface::HideUI()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideUI instead.");
	}
	void IPlayerProfileViewInterface::SetPlayerCard(FPlayerCardViewData const& badge, FPlayerCardViewData const& banner)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerCard instead.");
	}
	void IPlayerProfileViewInterface::SetPlayerCardBannerOpacity(float opacity)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerCardBannerOpacity instead.");
	}
	void IPlayerProfileViewInterface::SetPlayerName(FText const& playerNameText)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerName instead.");
	}
	void IPlayerProfileViewInterface::SetWalletData(TArray<FCurrencyLabelViewData> const& walletData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetWalletData instead.");
	}
	void IPlayerProfileViewInterface::SetWalletVisibility(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetWalletVisibility instead.");
	}
	void IPlayerProfileViewInterface::ShowUI()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowUI instead.");
	}
	void IPlayerProfileViewInterface::UpdatePlayerCardButton(bool isProfileMenuContextEntered)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdatePlayerCardButton instead.");
	}
	void IPlayerProfileViewInterface::UpdatePlayerProfileOpacity(bool isFocused)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdatePlayerProfileOpacity instead.");
	}
	void IPlayerProfileViewInterface::UpdateWallet(const ECurrencyType type, int32 newBalance, int32 previousBalance)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateWallet instead.");
	}
	void UPlayerProfileViewInterface::StaticRegisterNativesUPlayerProfileViewInterface()
	{
		UClass* Class = UPlayerProfileViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FullUpdateCurrency", &IPlayerProfileViewInterface::execFullUpdateCurrency },
			{ "HidePlayerCard", &IPlayerProfileViewInterface::execHidePlayerCard },
			{ "HidePlayerName", &IPlayerProfileViewInterface::execHidePlayerName },
			{ "HideUI", &IPlayerProfileViewInterface::execHideUI },
			{ "SetPlayerCard", &IPlayerProfileViewInterface::execSetPlayerCard },
			{ "SetPlayerCardBannerOpacity", &IPlayerProfileViewInterface::execSetPlayerCardBannerOpacity },
			{ "SetPlayerCardEnabled", &IPlayerProfileViewInterface::execSetPlayerCardEnabled },
			{ "SetPlayerName", &IPlayerProfileViewInterface::execSetPlayerName },
			{ "SetWalletData", &IPlayerProfileViewInterface::execSetWalletData },
			{ "SetWalletVisibility", &IPlayerProfileViewInterface::execSetWalletVisibility },
			{ "ShowUI", &IPlayerProfileViewInterface::execShowUI },
			{ "UpdatePlayerCardButton", &IPlayerProfileViewInterface::execUpdatePlayerCardButton },
			{ "UpdatePlayerProfileOpacity", &IPlayerProfileViewInterface::execUpdatePlayerProfileOpacity },
			{ "UpdateWallet", &IPlayerProfileViewInterface::execUpdateWallet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfileViewInterface_eventFullUpdateCurrency_Parms, viewData), Z_Construct_UScriptStruct_FCurrencyLabelViewData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "FullUpdateCurrency", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventFullUpdateCurrency_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerCard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "HidePlayerCard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "HidePlayerName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_HideUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_HideUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_HideUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "HideUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_HideUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_HideUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_HideUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_HideUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_badge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_badge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_banner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_banner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_badge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_badge = { "badge", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfileViewInterface_eventSetPlayerCard_Parms, badge), Z_Construct_UScriptStruct_FPlayerCardViewData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_badge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_badge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_banner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_banner = { "banner", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfileViewInterface_eventSetPlayerCard_Parms, banner), Z_Construct_UScriptStruct_FPlayerCardViewData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_banner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_banner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_badge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::NewProp_banner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "SetPlayerCard", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventSetPlayerCard_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_opacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::NewProp_opacity = { "opacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfileViewInterface_eventSetPlayerCardBannerOpacity_Parms, opacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::NewProp_opacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "SetPlayerCardBannerOpacity", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventSetPlayerCardBannerOpacity_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics
	{
		struct PlayerProfileViewInterface_eventSetPlayerCardEnabled_Parms
		{
			bool isEnabled;
		};
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((PlayerProfileViewInterface_eventSetPlayerCardEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerProfileViewInterface_eventSetPlayerCardEnabled_Parms), &Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "SetPlayerCardEnabled", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventSetPlayerCardEnabled_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_playerNameText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::NewProp_playerNameText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::NewProp_playerNameText = { "playerNameText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfileViewInterface_eventSetPlayerName_Parms, playerNameText), METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::NewProp_playerNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::NewProp_playerNameText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::NewProp_playerNameText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "SetPlayerName", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventSetPlayerName_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_walletData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walletData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_walletData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::NewProp_walletData_Inner = { "walletData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCurrencyLabelViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::NewProp_walletData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::NewProp_walletData = { "walletData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfileViewInterface_eventSetWalletData_Parms, walletData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::NewProp_walletData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::NewProp_walletData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::NewProp_walletData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::NewProp_walletData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "SetWalletData", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventSetWalletData_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isVisible_MetaData[];
#endif
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::NewProp_isVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((PlayerProfileViewInterface_eventSetWalletVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerProfileViewInterface_eventSetWalletVisibility_Parms), &Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::NewProp_isVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::NewProp_isVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "SetWalletVisibility", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventSetWalletVisibility_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_ShowUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_ShowUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_ShowUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "ShowUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_ShowUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_ShowUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_ShowUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_ShowUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isProfileMenuContextEntered_MetaData[];
#endif
		static void NewProp_isProfileMenuContextEntered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isProfileMenuContextEntered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::NewProp_isProfileMenuContextEntered_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::NewProp_isProfileMenuContextEntered_SetBit(void* Obj)
	{
		((PlayerProfileViewInterface_eventUpdatePlayerCardButton_Parms*)Obj)->isProfileMenuContextEntered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::NewProp_isProfileMenuContextEntered = { "isProfileMenuContextEntered", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerProfileViewInterface_eventUpdatePlayerCardButton_Parms), &Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::NewProp_isProfileMenuContextEntered_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::NewProp_isProfileMenuContextEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::NewProp_isProfileMenuContextEntered_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::NewProp_isProfileMenuContextEntered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "UpdatePlayerCardButton", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventUpdatePlayerCardButton_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFocused_MetaData[];
#endif
		static void NewProp_isFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::NewProp_isFocused_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::NewProp_isFocused_SetBit(void* Obj)
	{
		((PlayerProfileViewInterface_eventUpdatePlayerProfileOpacity_Parms*)Obj)->isFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::NewProp_isFocused = { "isFocused", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerProfileViewInterface_eventUpdatePlayerProfileOpacity_Parms), &Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::NewProp_isFocused_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::NewProp_isFocused_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::NewProp_isFocused_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::NewProp_isFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "UpdatePlayerProfileOpacity", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventUpdatePlayerProfileOpacity_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newBalance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_previousBalance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfileViewInterface_eventUpdateWallet_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_type_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_newBalance = { "newBalance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfileViewInterface_eventUpdateWallet_Parms, newBalance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_previousBalance = { "previousBalance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfileViewInterface_eventUpdateWallet_Parms, previousBalance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_newBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::NewProp_previousBalance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfileViewInterface, nullptr, "UpdateWallet", nullptr, nullptr, sizeof(PlayerProfileViewInterface_eventUpdateWallet_Parms), Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerProfileViewInterface_NoRegister()
	{
		return UPlayerProfileViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerProfileViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerProfileViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerProfileViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_FullUpdateCurrency, "FullUpdateCurrency" }, // 1725081659
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerCard, "HidePlayerCard" }, // 1509999560
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_HidePlayerName, "HidePlayerName" }, // 1731689120
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_HideUI, "HideUI" }, // 2960358152
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCard, "SetPlayerCard" }, // 3523788379
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity, "SetPlayerCardBannerOpacity" }, // 3597442495
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerCardEnabled, "SetPlayerCardEnabled" }, // 3638601428
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_SetPlayerName, "SetPlayerName" }, // 3152479428
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletData, "SetWalletData" }, // 2718224571
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_SetWalletVisibility, "SetWalletVisibility" }, // 4133735382
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_ShowUI, "ShowUI" }, // 1052337241
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerCardButton, "UpdatePlayerCardButton" }, // 2805114582
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity, "UpdatePlayerProfileOpacity" }, // 3520159959
		{ &Z_Construct_UFunction_UPlayerProfileViewInterface_UpdateWallet, "UpdateWallet" }, // 3411538664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerProfileViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerProfileViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerProfileViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerProfileViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerProfileViewInterface_Statics::ClassParams = {
		&UPlayerProfileViewInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerProfileViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerProfileViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerProfileViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerProfileViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerProfileViewInterface, 1889989940);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPlayerProfileViewInterface>()
	{
		return UPlayerProfileViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerProfileViewInterface(Z_Construct_UClass_UPlayerProfileViewInterface, &UPlayerProfileViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPlayerProfileViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerProfileViewInterface);
	static FName NAME_UPlayerProfileViewInterface_FullUpdateCurrency = FName(TEXT("FullUpdateCurrency"));
	void IPlayerProfileViewInterface::Execute_FullUpdateCurrency(UObject* O, FCurrencyLabelViewData const& viewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		PlayerProfileViewInterface_eventFullUpdateCurrency_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_FullUpdateCurrency);
		if (Func)
		{
			Parms.viewData=viewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->FullUpdateCurrency_Implementation(viewData);
		}
	}
	static FName NAME_UPlayerProfileViewInterface_HidePlayerCard = FName(TEXT("HidePlayerCard"));
	void IPlayerProfileViewInterface::Execute_HidePlayerCard(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_HidePlayerCard);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->HidePlayerCard_Implementation();
		}
	}
	static FName NAME_UPlayerProfileViewInterface_HidePlayerName = FName(TEXT("HidePlayerName"));
	void IPlayerProfileViewInterface::Execute_HidePlayerName(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_HidePlayerName);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->HidePlayerName_Implementation();
		}
	}
	static FName NAME_UPlayerProfileViewInterface_HideUI = FName(TEXT("HideUI"));
	void IPlayerProfileViewInterface::Execute_HideUI(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_HideUI);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->HideUI_Implementation();
		}
	}
	static FName NAME_UPlayerProfileViewInterface_SetPlayerCard = FName(TEXT("SetPlayerCard"));
	void IPlayerProfileViewInterface::Execute_SetPlayerCard(UObject* O, FPlayerCardViewData const& badge, FPlayerCardViewData const& banner)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		PlayerProfileViewInterface_eventSetPlayerCard_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_SetPlayerCard);
		if (Func)
		{
			Parms.badge=badge;
			Parms.banner=banner;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->SetPlayerCard_Implementation(badge,banner);
		}
	}
	static FName NAME_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity = FName(TEXT("SetPlayerCardBannerOpacity"));
	void IPlayerProfileViewInterface::Execute_SetPlayerCardBannerOpacity(UObject* O, float opacity)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		PlayerProfileViewInterface_eventSetPlayerCardBannerOpacity_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_SetPlayerCardBannerOpacity);
		if (Func)
		{
			Parms.opacity=opacity;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->SetPlayerCardBannerOpacity_Implementation(opacity);
		}
	}
	static FName NAME_UPlayerProfileViewInterface_SetPlayerName = FName(TEXT("SetPlayerName"));
	void IPlayerProfileViewInterface::Execute_SetPlayerName(UObject* O, FText const& playerNameText)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		PlayerProfileViewInterface_eventSetPlayerName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_SetPlayerName);
		if (Func)
		{
			Parms.playerNameText=playerNameText;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->SetPlayerName_Implementation(playerNameText);
		}
	}
	static FName NAME_UPlayerProfileViewInterface_SetWalletData = FName(TEXT("SetWalletData"));
	void IPlayerProfileViewInterface::Execute_SetWalletData(UObject* O, TArray<FCurrencyLabelViewData> const& walletData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		PlayerProfileViewInterface_eventSetWalletData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_SetWalletData);
		if (Func)
		{
			Parms.walletData=walletData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->SetWalletData_Implementation(walletData);
		}
	}
	static FName NAME_UPlayerProfileViewInterface_SetWalletVisibility = FName(TEXT("SetWalletVisibility"));
	void IPlayerProfileViewInterface::Execute_SetWalletVisibility(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		PlayerProfileViewInterface_eventSetWalletVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_SetWalletVisibility);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->SetWalletVisibility_Implementation(isVisible);
		}
	}
	static FName NAME_UPlayerProfileViewInterface_ShowUI = FName(TEXT("ShowUI"));
	void IPlayerProfileViewInterface::Execute_ShowUI(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_ShowUI);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->ShowUI_Implementation();
		}
	}
	static FName NAME_UPlayerProfileViewInterface_UpdatePlayerCardButton = FName(TEXT("UpdatePlayerCardButton"));
	void IPlayerProfileViewInterface::Execute_UpdatePlayerCardButton(UObject* O, bool isProfileMenuContextEntered)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		PlayerProfileViewInterface_eventUpdatePlayerCardButton_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_UpdatePlayerCardButton);
		if (Func)
		{
			Parms.isProfileMenuContextEntered=isProfileMenuContextEntered;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->UpdatePlayerCardButton_Implementation(isProfileMenuContextEntered);
		}
	}
	static FName NAME_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity = FName(TEXT("UpdatePlayerProfileOpacity"));
	void IPlayerProfileViewInterface::Execute_UpdatePlayerProfileOpacity(UObject* O, bool isFocused)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		PlayerProfileViewInterface_eventUpdatePlayerProfileOpacity_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_UpdatePlayerProfileOpacity);
		if (Func)
		{
			Parms.isFocused=isFocused;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->UpdatePlayerProfileOpacity_Implementation(isFocused);
		}
	}
	static FName NAME_UPlayerProfileViewInterface_UpdateWallet = FName(TEXT("UpdateWallet"));
	void IPlayerProfileViewInterface::Execute_UpdateWallet(UObject* O, const ECurrencyType type, int32 newBalance, int32 previousBalance)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerProfileViewInterface::StaticClass()));
		PlayerProfileViewInterface_eventUpdateWallet_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerProfileViewInterface_UpdateWallet);
		if (Func)
		{
			Parms.type=type;
			Parms.newBalance=newBalance;
			Parms.previousBalance=previousBalance;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerProfileViewInterface*)(O->GetNativeInterfaceAddress(UPlayerProfileViewInterface::StaticClass())))
		{
			I->UpdateWallet_Implementation(type,newBalance,previousBalance);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
