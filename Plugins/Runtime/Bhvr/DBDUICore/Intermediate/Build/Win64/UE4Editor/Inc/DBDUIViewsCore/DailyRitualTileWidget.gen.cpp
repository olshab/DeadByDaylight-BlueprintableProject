// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DailyRitualTileWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualTileWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDailyRitualTileWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDailyRitualTileWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ClaimedRitualDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_RemovedDailyRitualDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_OnDailyRitualTileFadeInCompletedDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_OnDailyRitualTileFadeOutCompletedDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualViewData();
// End Cross Module References
	DEFINE_FUNCTION(UDailyRitualTileWidget::execOnClaimButtonClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClaimButtonClicked(Z_Param_button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualTileWidget::execOnRemoveButtonClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoveButtonClicked(Z_Param_button);
		P_NATIVE_END;
	}
	static FName NAME_UDailyRitualTileWidget_PlayFadeInAnimation = FName(TEXT("PlayFadeInAnimation"));
	void UDailyRitualTileWidget::PlayFadeInAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDailyRitualTileWidget_PlayFadeInAnimation),NULL);
	}
	static FName NAME_UDailyRitualTileWidget_PlayFadeOutAnimation = FName(TEXT("PlayFadeOutAnimation"));
	void UDailyRitualTileWidget::PlayFadeOutAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDailyRitualTileWidget_PlayFadeOutAnimation),NULL);
	}
	void UDailyRitualTileWidget::StaticRegisterNativesUDailyRitualTileWidget()
	{
		UClass* Class = UDailyRitualTileWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClaimButtonClicked", &UDailyRitualTileWidget::execOnClaimButtonClicked },
			{ "OnRemoveButtonClicked", &UDailyRitualTileWidget::execOnRemoveButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics
	{
		struct DailyRitualTileWidget_eventOnClaimButtonClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualTileWidget_eventOnClaimButtonClicked_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualTileWidget, nullptr, "OnClaimButtonClicked", nullptr, nullptr, sizeof(DailyRitualTileWidget_eventOnClaimButtonClicked_Parms), Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics
	{
		struct DailyRitualTileWidget_eventOnRemoveButtonClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualTileWidget_eventOnRemoveButtonClicked_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualTileWidget, nullptr, "OnRemoveButtonClicked", nullptr, nullptr, sizeof(DailyRitualTileWidget_eventOnRemoveButtonClicked_Parms), Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualTileWidget, nullptr, "PlayFadeInAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualTileWidget, nullptr, "PlayFadeOutAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDailyRitualTileWidget_NoRegister()
	{
		return UDailyRitualTileWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDailyRitualTileWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__claimButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__claimButtonClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__removeButtonClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__removeButtonClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onDailyRitualTileFadeInCompletedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onDailyRitualTileFadeInCompletedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onDailyRitualTileFadeOutCompletedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onDailyRitualTileFadeOutCompletedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerSizeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContainerSizeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundSheen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundSheen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DescriptionTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaimButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClaimButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBackgroundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBackgroundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBackgroundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewBackgroundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedBackgroundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompletedBackgroundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dailyRitualData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dailyRitualData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDailyRitualTileWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDailyRitualTileWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDailyRitualTileWidget_OnClaimButtonClicked, "OnClaimButtonClicked" }, // 3476104010
		{ &Z_Construct_UFunction_UDailyRitualTileWidget_OnRemoveButtonClicked, "OnRemoveButtonClicked" }, // 28215278
		{ &Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeInAnimation, "PlayFadeInAnimation" }, // 3079630099
		{ &Z_Construct_UFunction_UDailyRitualTileWidget_PlayFadeOutAnimation, "PlayFadeOutAnimation" }, // 343684305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DailyRitualTileWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__claimButtonClickedDelegate_MetaData[] = {
		{ "Category", "DailyRitualTileWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__claimButtonClickedDelegate = { "_claimButtonClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, _claimButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ClaimedRitualDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__claimButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__claimButtonClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__removeButtonClickedDelegate_MetaData[] = {
		{ "Category", "DailyRitualTileWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__removeButtonClickedDelegate = { "_removeButtonClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, _removeButtonClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_RemovedDailyRitualDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__removeButtonClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__removeButtonClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeInCompletedDelegate_MetaData[] = {
		{ "Category", "DailyRitualTileWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeInCompletedDelegate = { "_onDailyRitualTileFadeInCompletedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, _onDailyRitualTileFadeInCompletedDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_OnDailyRitualTileFadeInCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeInCompletedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeInCompletedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeOutCompletedDelegate_MetaData[] = {
		{ "Category", "DailyRitualTileWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeOutCompletedDelegate = { "_onDailyRitualTileFadeOutCompletedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, _onDailyRitualTileFadeOutCompletedDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_OnDailyRitualTileFadeOutCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeOutCompletedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeOutCompletedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ContainerSizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ContainerSizeBox = { "ContainerSizeBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, ContainerSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ContainerSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ContainerSizeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_IconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, IconImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_IconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_IconImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, BackgroundImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, ProgressBar), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundSheen_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundSheen = { "BackgroundSheen", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, BackgroundSheen), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundSheen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundSheen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_TitleTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_TitleTextBlock = { "TitleTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, TitleTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_TitleTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_TitleTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RewardTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RewardTextBlock = { "RewardTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, RewardTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RewardTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RewardTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DescriptionTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DescriptionTextBlock = { "DescriptionTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, DescriptionTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DescriptionTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DescriptionTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressTextBlock = { "ProgressTextBlock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, ProgressTextBlock), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ClaimButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ClaimButton = { "ClaimButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, ClaimButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ClaimButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ClaimButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RemoveButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualTileWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RemoveButton = { "RemoveButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, RemoveButton), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RemoveButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RemoveButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DefaultBackgroundTexture_MetaData[] = {
		{ "Category", "DailyRitualTileWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DefaultBackgroundTexture = { "DefaultBackgroundTexture", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, DefaultBackgroundTexture), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DefaultBackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DefaultBackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_NewBackgroundTexture_MetaData[] = {
		{ "Category", "DailyRitualTileWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_NewBackgroundTexture = { "NewBackgroundTexture", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, NewBackgroundTexture), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_NewBackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_NewBackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_CompletedBackgroundTexture_MetaData[] = {
		{ "Category", "DailyRitualTileWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_CompletedBackgroundTexture = { "CompletedBackgroundTexture", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, CompletedBackgroundTexture), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_CompletedBackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_CompletedBackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__dailyRitualData_MetaData[] = {
		{ "Category", "DailyRitualTileWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualTileWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__dailyRitualData = { "_dailyRitualData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualTileWidget, _dailyRitualData), Z_Construct_UScriptStruct_FDailyRitualViewData, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__dailyRitualData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__dailyRitualData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDailyRitualTileWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__claimButtonClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__removeButtonClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeInCompletedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__onDailyRitualTileFadeOutCompletedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ContainerSizeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_IconImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_BackgroundSheen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_TitleTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RewardTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DescriptionTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ProgressTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_ClaimButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_RemoveButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_DefaultBackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_NewBackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp_CompletedBackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualTileWidget_Statics::NewProp__dailyRitualData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDailyRitualTileWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDailyRitualTileWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDailyRitualTileWidget_Statics::ClassParams = {
		&UDailyRitualTileWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDailyRitualTileWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDailyRitualTileWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualTileWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDailyRitualTileWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDailyRitualTileWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDailyRitualTileWidget, 998940048);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDailyRitualTileWidget>()
	{
		return UDailyRitualTileWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDailyRitualTileWidget(Z_Construct_UClass_UDailyRitualTileWidget, &UDailyRitualTileWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDailyRitualTileWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDailyRitualTileWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
