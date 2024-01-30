// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreRewardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreRewardWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreLockedOverlayWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreRewardWidget::execSetIsLocked)
	{
		P_GET_UBOOL(Z_Param_isLocked);
		P_GET_UBOOL(Z_Param_useAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLocked(Z_Param_isLocked,Z_Param_useAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreRewardWidget::execSetRewardData)
	{
		P_GET_STRUCT_REF(FRewardViewData,Z_Param_Out_rewardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewardData_Implementation(Z_Param_Out_rewardData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreRewardWidget::execSetRewardScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewardScale(Z_Param_scale);
		P_NATIVE_END;
	}
	static FName NAME_UCoreRewardWidget_ClearData = FName(TEXT("ClearData"));
	void UCoreRewardWidget::ClearData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreRewardWidget_ClearData),NULL);
	}
	static FName NAME_UCoreRewardWidget_SetRewardData = FName(TEXT("SetRewardData"));
	void UCoreRewardWidget::SetRewardData(FRewardViewData const& rewardData)
	{
		CoreRewardWidget_eventSetRewardData_Parms Parms;
		Parms.rewardData=rewardData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreRewardWidget_SetRewardData),&Parms);
	}
	static FName NAME_UCoreRewardWidget_SetSmallTemplate = FName(TEXT("SetSmallTemplate"));
	void UCoreRewardWidget::SetSmallTemplate(bool useSmallTemplate)
	{
		CoreRewardWidget_eventSetSmallTemplate_Parms Parms;
		Parms.useSmallTemplate=useSmallTemplate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreRewardWidget_SetSmallTemplate),&Parms);
	}
	void UCoreRewardWidget::StaticRegisterNativesUCoreRewardWidget()
	{
		UClass* Class = UCoreRewardWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIsLocked", &UCoreRewardWidget::execSetIsLocked },
			{ "SetRewardData", &UCoreRewardWidget::execSetRewardData },
			{ "SetRewardScale", &UCoreRewardWidget::execSetRewardScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWidget, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWidget_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics
	{
		struct CoreRewardWidget_eventSetIsLocked_Parms
		{
			bool isLocked;
			bool useAnimation;
		};
		static void NewProp_isLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocked;
		static void NewProp_useAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::NewProp_isLocked_SetBit(void* Obj)
	{
		((CoreRewardWidget_eventSetIsLocked_Parms*)Obj)->isLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::NewProp_isLocked = { "isLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreRewardWidget_eventSetIsLocked_Parms), &Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::NewProp_isLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::NewProp_useAnimation_SetBit(void* Obj)
	{
		((CoreRewardWidget_eventSetIsLocked_Parms*)Obj)->useAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::NewProp_useAnimation = { "useAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreRewardWidget_eventSetIsLocked_Parms), &Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::NewProp_useAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::NewProp_isLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::NewProp_useAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWidget, nullptr, "SetIsLocked", nullptr, nullptr, sizeof(CoreRewardWidget_eventSetIsLocked_Parms), Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rewardData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::NewProp_rewardData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::NewProp_rewardData = { "rewardData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreRewardWidget_eventSetRewardData_Parms, rewardData), Z_Construct_UScriptStruct_FRewardViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::NewProp_rewardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::NewProp_rewardData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::NewProp_rewardData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWidget, nullptr, "SetRewardData", nullptr, nullptr, sizeof(CoreRewardWidget_eventSetRewardData_Parms), Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWidget_SetRewardData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWidget_SetRewardData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics
	{
		struct CoreRewardWidget_eventSetRewardScale_Parms
		{
			float scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreRewardWidget_eventSetRewardScale_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWidget, nullptr, "SetRewardScale", nullptr, nullptr, sizeof(CoreRewardWidget_eventSetRewardScale_Parms), Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics
	{
		static void NewProp_useSmallTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useSmallTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::NewProp_useSmallTemplate_SetBit(void* Obj)
	{
		((CoreRewardWidget_eventSetSmallTemplate_Parms*)Obj)->useSmallTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::NewProp_useSmallTemplate = { "useSmallTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreRewardWidget_eventSetSmallTemplate_Parms), &Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::NewProp_useSmallTemplate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::NewProp_useSmallTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWidget, nullptr, "SetSmallTemplate", nullptr, nullptr, sizeof(CoreRewardWidget_eventSetSmallTemplate_Parms), Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreRewardWidget_NoRegister()
	{
		return UCoreRewardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreRewardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayoutScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoverBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnHoverBorder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreRewardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreRewardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreRewardWidget_ClearData, "ClearData" }, // 3189845260
		{ &Z_Construct_UFunction_UCoreRewardWidget_SetIsLocked, "SetIsLocked" }, // 3964211372
		{ &Z_Construct_UFunction_UCoreRewardWidget_SetRewardData, "SetRewardData" }, // 309835573
		{ &Z_Construct_UFunction_UCoreRewardWidget_SetRewardScale, "SetRewardScale" }, // 3656856398
		{ &Z_Construct_UFunction_UCoreRewardWidget_SetSmallTemplate, "SetSmallTemplate" }, // 4062774613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreRewardWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon = { "RewardIcon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWidget, RewardIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LayoutScale_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LayoutScale = { "LayoutScale", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWidget, LayoutScale), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LayoutScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LayoutScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LockedOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LockedOverlay = { "LockedOverlay", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWidget, LockedOverlay), Z_Construct_UClass_UCoreLockedOverlayWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LockedOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LockedOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_OnHoverBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_OnHoverBorder = { "OnHoverBorder", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWidget, OnHoverBorder), Z_Construct_UClass_UCoreOnHoverBorderWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_OnHoverBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_OnHoverBorder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreRewardWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LayoutScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_LockedOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_OnHoverBorder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreRewardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreRewardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreRewardWidget_Statics::ClassParams = {
		&UCoreRewardWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreRewardWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreRewardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreRewardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreRewardWidget, 1384601127);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreRewardWidget>()
	{
		return UCoreRewardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreRewardWidget(Z_Construct_UClass_UCoreRewardWidget, &UCoreRewardWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreRewardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreRewardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
