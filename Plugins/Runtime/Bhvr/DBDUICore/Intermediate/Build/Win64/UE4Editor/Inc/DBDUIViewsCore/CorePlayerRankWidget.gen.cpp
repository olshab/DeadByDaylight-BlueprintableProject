// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerRankWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerRankWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerRankWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerRankWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRankViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCorePlayerRankWidget::execGetConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoreRankWidgetConfiguration*)Z_Param__Result=P_THIS->GetConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerRankWidget::execSetRankImageAndText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rankIndex);
		P_GET_UBOOL(Z_Param_isKiller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRankImageAndText(Z_Param_rankIndex,Z_Param_isKiller);
		P_NATIVE_END;
	}
	static FName NAME_UCorePlayerRankWidget_AnimateRankUp = FName(TEXT("AnimateRankUp"));
	void UCorePlayerRankWidget::AnimateRankUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerRankWidget_AnimateRankUp),NULL);
	}
	static FName NAME_UCorePlayerRankWidget_SetData = FName(TEXT("SetData"));
	void UCorePlayerRankWidget::SetData(FRankViewData const& data)
	{
		CorePlayerRankWidget_eventSetData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerRankWidget_SetData),&Parms);
	}
	void UCorePlayerRankWidget::StaticRegisterNativesUCorePlayerRankWidget()
	{
		UClass* Class = UCorePlayerRankWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConfiguration", &UCorePlayerRankWidget::execGetConfiguration },
			{ "SetRankImageAndText", &UCorePlayerRankWidget::execSetRankImageAndText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePlayerRankWidget_AnimateRankUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerRankWidget_AnimateRankUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerRankWidget_AnimateRankUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerRankWidget, nullptr, "AnimateRankUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerRankWidget_AnimateRankUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_AnimateRankUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerRankWidget_AnimateRankUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerRankWidget_AnimateRankUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics
	{
		struct CorePlayerRankWidget_eventGetConfiguration_Parms
		{
			FCoreRankWidgetConfiguration ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerRankWidget_eventGetConfiguration_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerRankWidget, nullptr, "GetConfiguration", nullptr, nullptr, sizeof(CorePlayerRankWidget_eventGetConfiguration_Parms), Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerRankWidget_eventSetData_Parms, data), Z_Construct_UScriptStruct_FRankViewData, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerRankWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CorePlayerRankWidget_eventSetData_Parms), Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerRankWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerRankWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics
	{
		struct CorePlayerRankWidget_eventSetRankImageAndText_Parms
		{
			int32 rankIndex;
			bool isKiller;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rankIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rankIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isKiller_MetaData[];
#endif
		static void NewProp_isKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_rankIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_rankIndex = { "rankIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerRankWidget_eventSetRankImageAndText_Parms, rankIndex), METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_rankIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_rankIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_isKiller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_isKiller_SetBit(void* Obj)
	{
		((CorePlayerRankWidget_eventSetRankImageAndText_Parms*)Obj)->isKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_isKiller = { "isKiller", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePlayerRankWidget_eventSetRankImageAndText_Parms), &Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_isKiller_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_isKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_isKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_rankIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::NewProp_isKiller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerRankWidget, nullptr, "SetRankImageAndText", nullptr, nullptr, sizeof(CorePlayerRankWidget_eventSetRankImageAndText_Parms), Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePlayerRankWidget_NoRegister()
	{
		return UCorePlayerRankWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerRankWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widgetConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__widgetConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__showTooltipOnHover_MetaData[];
#endif
		static void NewProp__showTooltipOnHover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__showTooltipOnHover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelBG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelBG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankNumberImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankNumberImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerRankWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePlayerRankWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePlayerRankWidget_AnimateRankUp, "AnimateRankUp" }, // 2674906303
		{ &Z_Construct_UFunction_UCorePlayerRankWidget_GetConfiguration, "GetConfiguration" }, // 789649567
		{ &Z_Construct_UFunction_UCorePlayerRankWidget_SetData, "SetData" }, // 2633242196
		{ &Z_Construct_UFunction_UCorePlayerRankWidget_SetRankImageAndText, "SetRankImageAndText" }, // 960713885
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerRankWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePlayerRankWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerRankWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__widgetConfiguration_MetaData[] = {
		{ "Category", "CorePlayerRankWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__widgetConfiguration = { "_widgetConfiguration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerRankWidget, _widgetConfiguration), Z_Construct_UScriptStruct_FCoreRankWidgetConfiguration, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__widgetConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__widgetConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__showTooltipOnHover_MetaData[] = {
		{ "Category", "CorePlayerRankWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerRankWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__showTooltipOnHover_SetBit(void* Obj)
	{
		((UCorePlayerRankWidget*)Obj)->_showTooltipOnHover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__showTooltipOnHover = { "_showTooltipOnHover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCorePlayerRankWidget), &Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__showTooltipOnHover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__showTooltipOnHover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__showTooltipOnHover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_LevelBG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerRankWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_LevelBG = { "LevelBG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerRankWidget, LevelBG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_LevelBG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_LevelBG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_RankNumberImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePlayerRankWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_RankNumberImage = { "RankNumberImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerRankWidget, RankNumberImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_RankNumberImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_RankNumberImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePlayerRankWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__widgetConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp__showTooltipOnHover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_LevelBG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerRankWidget_Statics::NewProp_RankNumberImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerRankWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerRankWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerRankWidget_Statics::ClassParams = {
		&UCorePlayerRankWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePlayerRankWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerRankWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerRankWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerRankWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerRankWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerRankWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerRankWidget, 2088824032);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerRankWidget>()
	{
		return UCorePlayerRankWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerRankWidget(Z_Construct_UClass_UCorePlayerRankWidget, &UCorePlayerRankWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerRankWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerRankWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
