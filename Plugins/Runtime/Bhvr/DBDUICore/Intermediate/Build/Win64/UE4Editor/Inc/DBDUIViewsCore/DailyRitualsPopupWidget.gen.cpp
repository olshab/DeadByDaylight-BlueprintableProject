// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DailyRitualsPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualsPopupWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDailyRitualsPopupWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDailyRitualsPopupWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGenericPopupWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_RemovedDailyRitualDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ClaimedRitualDelegate__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ClaimedAllRitualsDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDailyRitualsContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UDailyRitualsPopupViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDailyRitualsPopupWidget::execOnDailyRitualClaimAllButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDailyRitualClaimAllButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsPopupWidget::execOnDailyRitualClaimButtonClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dailyRitualKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDailyRitualClaimButtonClicked(Z_Param_dailyRitualKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsPopupWidget::execOnDailyRitualRemoveButtonClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dailyRitualKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDailyRitualRemoveButtonClicked(Z_Param_dailyRitualKey);
		P_NATIVE_END;
	}
	static FName NAME_UDailyRitualsPopupWidget_SetVisuals = FName(TEXT("SetVisuals"));
	void UDailyRitualsPopupWidget::SetVisuals(bool isAfterTrial)
	{
		DailyRitualsPopupWidget_eventSetVisuals_Parms Parms;
		Parms.isAfterTrial=isAfterTrial ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDailyRitualsPopupWidget_SetVisuals),&Parms);
	}
	void UDailyRitualsPopupWidget::StaticRegisterNativesUDailyRitualsPopupWidget()
	{
		UClass* Class = UDailyRitualsPopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDailyRitualClaimAllButtonClicked", &UDailyRitualsPopupWidget::execOnDailyRitualClaimAllButtonClicked },
			{ "OnDailyRitualClaimButtonClicked", &UDailyRitualsPopupWidget::execOnDailyRitualClaimButtonClicked },
			{ "OnDailyRitualRemoveButtonClicked", &UDailyRitualsPopupWidget::execOnDailyRitualRemoveButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupWidget, nullptr, "OnDailyRitualClaimAllButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics
	{
		struct DailyRitualsPopupWidget_eventOnDailyRitualClaimButtonClicked_Parms
		{
			FString dailyRitualKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dailyRitualKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dailyRitualKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey = { "dailyRitualKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsPopupWidget_eventOnDailyRitualClaimButtonClicked_Parms, dailyRitualKey), METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::NewProp_dailyRitualKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupWidget, nullptr, "OnDailyRitualClaimButtonClicked", nullptr, nullptr, sizeof(DailyRitualsPopupWidget_eventOnDailyRitualClaimButtonClicked_Parms), Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics
	{
		struct DailyRitualsPopupWidget_eventOnDailyRitualRemoveButtonClicked_Parms
		{
			FString dailyRitualKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dailyRitualKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dailyRitualKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey = { "dailyRitualKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsPopupWidget_eventOnDailyRitualRemoveButtonClicked_Parms, dailyRitualKey), METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::NewProp_dailyRitualKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupWidget, nullptr, "OnDailyRitualRemoveButtonClicked", nullptr, nullptr, sizeof(DailyRitualsPopupWidget_eventOnDailyRitualRemoveButtonClicked_Parms), Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics
	{
		static void NewProp_isAfterTrial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAfterTrial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::NewProp_isAfterTrial_SetBit(void* Obj)
	{
		((DailyRitualsPopupWidget_eventSetVisuals_Parms*)Obj)->isAfterTrial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::NewProp_isAfterTrial = { "isAfterTrial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DailyRitualsPopupWidget_eventSetVisuals_Parms), &Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::NewProp_isAfterTrial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::NewProp_isAfterTrial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsPopupWidget, nullptr, "SetVisuals", nullptr, nullptr, sizeof(DailyRitualsPopupWidget_eventSetVisuals_Parms), Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDailyRitualsPopupWidget_NoRegister()
	{
		return UDailyRitualsPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDailyRitualsPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onRemovedDailyRitualDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onRemovedDailyRitualDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onClaimedRitualDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onClaimedRitualDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onClaimedAllRitualsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onClaimedAllRitualsDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseBG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseBG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRitualsDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DailyRitualsDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRitualsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DailyRitualsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FooterText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FooterText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBackgroundMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBackgroundMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterTrialBackgroundMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AfterTrialBackgroundMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreGenericPopupWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked, "OnDailyRitualClaimAllButtonClicked" }, // 3729320579
		{ &Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked, "OnDailyRitualClaimButtonClicked" }, // 1533630274
		{ &Z_Construct_UFunction_UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked, "OnDailyRitualRemoveButtonClicked" }, // 2966916126
		{ &Z_Construct_UFunction_UDailyRitualsPopupWidget_SetVisuals, "SetVisuals" }, // 3842437263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DailyRitualsPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onRemovedDailyRitualDelegate_MetaData[] = {
		{ "Category", "DailyRitualsPopupWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onRemovedDailyRitualDelegate = { "_onRemovedDailyRitualDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsPopupWidget, _onRemovedDailyRitualDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_RemovedDailyRitualDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onRemovedDailyRitualDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onRemovedDailyRitualDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedRitualDelegate_MetaData[] = {
		{ "Category", "DailyRitualsPopupWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedRitualDelegate = { "_onClaimedRitualDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsPopupWidget, _onClaimedRitualDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ClaimedRitualDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedRitualDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedRitualDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedAllRitualsDelegate_MetaData[] = {
		{ "Category", "DailyRitualsPopupWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedAllRitualsDelegate = { "_onClaimedAllRitualsDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsPopupWidget, _onClaimedAllRitualsDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_ClaimedAllRitualsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedAllRitualsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedAllRitualsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_BaseBG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualsPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_BaseBG = { "BaseBG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsPopupWidget, BaseBG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_BaseBG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_BaseBG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsDetails_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualsPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsDetails = { "DailyRitualsDetails", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsPopupWidget, DailyRitualsDetails), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualsPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsContainer = { "DailyRitualsContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsPopupWidget, DailyRitualsContainer), Z_Construct_UClass_UDailyRitualsContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_FooterText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DailyRitualsPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_FooterText = { "FooterText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsPopupWidget, FooterText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_FooterText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_FooterText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DefaultBackgroundMaterialInstance_MetaData[] = {
		{ "Category", "DailyRitualsPopupWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DefaultBackgroundMaterialInstance = { "DefaultBackgroundMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsPopupWidget, DefaultBackgroundMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DefaultBackgroundMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DefaultBackgroundMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_AfterTrialBackgroundMaterialInstance_MetaData[] = {
		{ "Category", "DailyRitualsPopupWidget" },
		{ "ModuleRelativePath", "Public/DailyRitualsPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_AfterTrialBackgroundMaterialInstance = { "AfterTrialBackgroundMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDailyRitualsPopupWidget, AfterTrialBackgroundMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_AfterTrialBackgroundMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_AfterTrialBackgroundMaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onRemovedDailyRitualDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedRitualDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp__onClaimedAllRitualsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_BaseBG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DailyRitualsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_FooterText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_DefaultBackgroundMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::NewProp_AfterTrialBackgroundMaterialInstance,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDailyRitualsPopupViewInterface_NoRegister, (int32)VTABLE_OFFSET(UDailyRitualsPopupWidget, IDailyRitualsPopupViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDailyRitualsPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::ClassParams = {
		&UDailyRitualsPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDailyRitualsPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDailyRitualsPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDailyRitualsPopupWidget, 2353846648);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDailyRitualsPopupWidget>()
	{
		return UDailyRitualsPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDailyRitualsPopupWidget(Z_Construct_UClass_UDailyRitualsPopupWidget, &UDailyRitualsPopupWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDailyRitualsPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDailyRitualsPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
