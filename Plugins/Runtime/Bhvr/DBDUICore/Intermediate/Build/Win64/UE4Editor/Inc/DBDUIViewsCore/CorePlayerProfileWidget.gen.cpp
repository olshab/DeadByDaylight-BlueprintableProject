// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerProfileWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerProfileWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerProfileWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerProfileWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerCardViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreWalletWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerNameWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_PlayerProfileClickedDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerProfileViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCorePlayerProfileWidget::execSetPlayerCardEnabled)
	{
		P_GET_UBOOL(Z_Param_isEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerCardEnabled(Z_Param_isEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerProfileWidget::execOnPlayerCardButtonHovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerCardButtonHovered(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerProfileWidget::execOnPlayerCardButtonUnhovered)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerCardButtonUnhovered(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerProfileWidget::execOnPlayerProfileClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerProfileClicked(Z_Param_button);
		P_NATIVE_END;
	}
	static FName NAME_UCorePlayerProfileWidget_SetBadgeBannerData = FName(TEXT("SetBadgeBannerData"));
	void UCorePlayerProfileWidget::SetBadgeBannerData(TSoftObjectPtr<UTexture2D> const& badge, FPlayerCardViewData const& banner, bool showBanner)
	{
		CorePlayerProfileWidget_eventSetBadgeBannerData_Parms Parms;
		Parms.badge=badge;
		Parms.banner=banner;
		Parms.showBanner=showBanner ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerProfileWidget_SetBadgeBannerData),&Parms);
	}
	void UCorePlayerProfileWidget::StaticRegisterNativesUCorePlayerProfileWidget()
	{
		UClass* Class = UCorePlayerProfileWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerCardButtonHovered", &UCorePlayerProfileWidget::execOnPlayerCardButtonHovered },
			{ "OnPlayerCardButtonUnhovered", &UCorePlayerProfileWidget::execOnPlayerCardButtonUnhovered },
			{ "OnPlayerProfileClicked", &UCorePlayerProfileWidget::execOnPlayerProfileClicked },
			{ "SetPlayerCardEnabled", &UCorePlayerProfileWidget::execSetPlayerCardEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics
	{
		struct CorePlayerProfileWidget_eventOnPlayerCardButtonHovered_Parms
		{
			UCoreButtonWidget* button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerProfileWidget_eventOnPlayerCardButtonHovered_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerProfileWidget, nullptr, "OnPlayerCardButtonHovered", nullptr, nullptr, sizeof(CorePlayerProfileWidget_eventOnPlayerCardButtonHovered_Parms), Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics
	{
		struct CorePlayerProfileWidget_eventOnPlayerCardButtonUnhovered_Parms
		{
			UCoreButtonWidget* button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerProfileWidget_eventOnPlayerCardButtonUnhovered_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerProfileWidget, nullptr, "OnPlayerCardButtonUnhovered", nullptr, nullptr, sizeof(CorePlayerProfileWidget_eventOnPlayerCardButtonUnhovered_Parms), Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics
	{
		struct CorePlayerProfileWidget_eventOnPlayerProfileClicked_Parms
		{
			UCoreButtonWidget* button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerProfileWidget_eventOnPlayerProfileClicked_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerProfileWidget, nullptr, "OnPlayerProfileClicked", nullptr, nullptr, sizeof(CorePlayerProfileWidget_eventOnPlayerProfileClicked_Parms), Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_badge_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_badge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_banner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_banner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_showBanner_MetaData[];
#endif
		static void NewProp_showBanner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_showBanner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_badge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_badge = { "badge", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerProfileWidget_eventSetBadgeBannerData_Parms, badge), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_badge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_badge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_banner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_banner = { "banner", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerProfileWidget_eventSetBadgeBannerData_Parms, banner), Z_Construct_UScriptStruct_FPlayerCardViewData, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_banner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_banner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_showBanner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_showBanner_SetBit(void* Obj)
	{
		((CorePlayerProfileWidget_eventSetBadgeBannerData_Parms*)Obj)->showBanner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_showBanner = { "showBanner", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePlayerProfileWidget_eventSetBadgeBannerData_Parms), &Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_showBanner_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_showBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_showBanner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_badge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_banner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::NewProp_showBanner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerProfileWidget, nullptr, "SetBadgeBannerData", nullptr, nullptr, sizeof(CorePlayerProfileWidget_eventSetBadgeBannerData_Parms), Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics
	{
		struct CorePlayerProfileWidget_eventSetPlayerCardEnabled_Parms
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
	void Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((CorePlayerProfileWidget_eventSetPlayerCardEnabled_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePlayerProfileWidget_eventSetPlayerCardEnabled_Parms), &Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerProfileWidget, nullptr, "SetPlayerCardEnabled", nullptr, nullptr, sizeof(CorePlayerProfileWidget_eventSetPlayerCardEnabled_Parms), Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePlayerProfileWidget_NoRegister()
	{
		return UCorePlayerProfileWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerProfileWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCardButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCardButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wallet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wallet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onPlayerProfileClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onPlayerProfileClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerCardEnabledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__playerCardEnabledOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerCardDisabledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__playerCardDisabledOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerProfileFocusOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__playerProfileFocusOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerProfileUnfocusOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__playerProfileUnfocusOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isProfileMenuContextEntered_MetaData[];
#endif
		static void NewProp__isProfileMenuContextEntered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isProfileMenuContextEntered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerProfileWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePlayerProfileWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonHovered, "OnPlayerCardButtonHovered" }, // 19383983
		{ &Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerCardButtonUnhovered, "OnPlayerCardButtonUnhovered" }, // 163949242
		{ &Z_Construct_UFunction_UCorePlayerProfileWidget_OnPlayerProfileClicked, "OnPlayerProfileClicked" }, // 2343108726
		{ &Z_Construct_UFunction_UCorePlayerProfileWidget_SetBadgeBannerData, "SetBadgeBannerData" }, // 2674857808
		{ &Z_Construct_UFunction_UCorePlayerProfileWidget_SetPlayerCardEnabled, "SetPlayerCardEnabled" }, // 3574404693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePlayerProfileWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerCardButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerProfileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerCardButton = { "PlayerCardButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerProfileWidget, PlayerCardButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerCardButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerCardButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_Wallet_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerProfileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_Wallet = { "Wallet", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerProfileWidget, Wallet), Z_Construct_UClass_UCoreWalletWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_Wallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_Wallet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerProfileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerProfileWidget, PlayerName), Z_Construct_UClass_UCorePlayerNameWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__onPlayerProfileClickedDelegate_MetaData[] = {
		{ "Category", "CorePlayerProfileWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__onPlayerProfileClickedDelegate = { "_onPlayerProfileClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerProfileWidget, _onPlayerProfileClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_PlayerProfileClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__onPlayerProfileClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__onPlayerProfileClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardEnabledOpacity_MetaData[] = {
		{ "Category", "CorePlayerProfileWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardEnabledOpacity = { "_playerCardEnabledOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerProfileWidget, _playerCardEnabledOpacity), METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardEnabledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardEnabledOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardDisabledOpacity_MetaData[] = {
		{ "Category", "CorePlayerProfileWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardDisabledOpacity = { "_playerCardDisabledOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerProfileWidget, _playerCardDisabledOpacity), METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardDisabledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardDisabledOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileFocusOpacity_MetaData[] = {
		{ "Category", "CorePlayerProfileWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileFocusOpacity = { "_playerProfileFocusOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerProfileWidget, _playerProfileFocusOpacity), METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileFocusOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileFocusOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileUnfocusOpacity_MetaData[] = {
		{ "Category", "CorePlayerProfileWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileUnfocusOpacity = { "_playerProfileUnfocusOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerProfileWidget, _playerProfileUnfocusOpacity), METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileUnfocusOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileUnfocusOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__isProfileMenuContextEntered_MetaData[] = {
		{ "Category", "CorePlayerProfileWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerProfileWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__isProfileMenuContextEntered_SetBit(void* Obj)
	{
		((UCorePlayerProfileWidget*)Obj)->_isProfileMenuContextEntered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__isProfileMenuContextEntered = { "_isProfileMenuContextEntered", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCorePlayerProfileWidget), &Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__isProfileMenuContextEntered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__isProfileMenuContextEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__isProfileMenuContextEntered_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePlayerProfileWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerCardButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_Wallet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__onPlayerProfileClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardEnabledOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerCardDisabledOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileFocusOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__playerProfileUnfocusOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerProfileWidget_Statics::NewProp__isProfileMenuContextEntered,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerProfileViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCorePlayerProfileWidget, IPlayerProfileViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerProfileWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerProfileWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerProfileWidget_Statics::ClassParams = {
		&UCorePlayerProfileWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePlayerProfileWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerProfileWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerProfileWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerProfileWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerProfileWidget, 3809512455);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerProfileWidget>()
	{
		return UCorePlayerProfileWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerProfileWidget(Z_Construct_UClass_UCorePlayerProfileWidget, &UCorePlayerProfileWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerProfileWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerProfileWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
