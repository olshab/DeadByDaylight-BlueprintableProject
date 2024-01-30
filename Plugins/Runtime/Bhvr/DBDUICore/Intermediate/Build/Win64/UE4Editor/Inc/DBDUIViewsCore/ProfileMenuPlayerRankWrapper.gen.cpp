// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/ProfileMenuPlayerRankWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileMenuPlayerRankWrapper() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UProfileMenuPlayerRankWrapper_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UProfileMenuPlayerRankWrapper();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRankViewData();
// End Cross Module References
	static FName NAME_UProfileMenuPlayerRankWrapper_SetData = FName(TEXT("SetData"));
	void UProfileMenuPlayerRankWrapper::SetData(FRankViewData const& data)
	{
		ProfileMenuPlayerRankWrapper_eventSetData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UProfileMenuPlayerRankWrapper_SetData),&Parms);
	}
	void UProfileMenuPlayerRankWrapper::StaticRegisterNativesUProfileMenuPlayerRankWrapper()
	{
	}
	struct Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuPlayerRankWrapper_eventSetData_Parms, data), Z_Construct_UScriptStruct_FRankViewData, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuPlayerRankWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuPlayerRankWrapper, nullptr, "SetData", nullptr, nullptr, sizeof(ProfileMenuPlayerRankWrapper_eventSetData_Parms), Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProfileMenuPlayerRankWrapper_NoRegister()
	{
		return UProfileMenuPlayerRankWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ProgressText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerGradeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_KillerGradeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorGradeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SurvivorGradeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProfileMenuPlayerRankWrapper_SetData, "SetData" }, // 1623780610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProfileMenuPlayerRankWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuPlayerRankWrapper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_ProgressText_MetaData[] = {
		{ "Category", "ProfileMenuPlayerRankWrapper" },
		{ "ModuleRelativePath", "Public/ProfileMenuPlayerRankWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_ProgressText = { "ProgressText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuPlayerRankWrapper, ProgressText), METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_ProgressText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_ProgressText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_KillerGradeText_MetaData[] = {
		{ "Category", "ProfileMenuPlayerRankWrapper" },
		{ "ModuleRelativePath", "Public/ProfileMenuPlayerRankWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_KillerGradeText = { "KillerGradeText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuPlayerRankWrapper, KillerGradeText), METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_KillerGradeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_KillerGradeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_SurvivorGradeText_MetaData[] = {
		{ "Category", "ProfileMenuPlayerRankWrapper" },
		{ "ModuleRelativePath", "Public/ProfileMenuPlayerRankWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_SurvivorGradeText = { "SurvivorGradeText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileMenuPlayerRankWrapper, SurvivorGradeText), METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_SurvivorGradeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_SurvivorGradeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_ProgressText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_KillerGradeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::NewProp_SurvivorGradeText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProfileMenuPlayerRankWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::ClassParams = {
		&UProfileMenuPlayerRankWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileMenuPlayerRankWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileMenuPlayerRankWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileMenuPlayerRankWrapper, 3543734037);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UProfileMenuPlayerRankWrapper>()
	{
		return UProfileMenuPlayerRankWrapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileMenuPlayerRankWrapper(Z_Construct_UClass_UProfileMenuPlayerRankWrapper, &UProfileMenuPlayerRankWrapper::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UProfileMenuPlayerRankWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileMenuPlayerRankWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
