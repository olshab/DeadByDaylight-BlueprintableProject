// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ProfileMenuStatsViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileMenuStatsViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuStatsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UProfileMenuStatsViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRankViewData();
// End Cross Module References
	void IProfileMenuStatsViewInterface::SetPlayerLevel(FPlayerLevelViewData const& viewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerLevel instead.");
	}
	void IProfileMenuStatsViewInterface::SetPlayerRanks(FRankViewData const& survivorViewData, FRankViewData const& killerViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerRanks instead.");
	}
	void UProfileMenuStatsViewInterface::StaticRegisterNativesUProfileMenuStatsViewInterface()
	{
	}
	struct Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuStatsViewInterface_eventSetPlayerLevel_Parms, viewData), Z_Construct_UScriptStruct_FPlayerLevelViewData, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuStatsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuStatsViewInterface, nullptr, "SetPlayerLevel", nullptr, nullptr, sizeof(ProfileMenuStatsViewInterface_eventSetPlayerLevel_Parms), Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_survivorViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_survivorViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killerViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_killerViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_survivorViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_survivorViewData = { "survivorViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuStatsViewInterface_eventSetPlayerRanks_Parms, survivorViewData), Z_Construct_UScriptStruct_FRankViewData, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_survivorViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_survivorViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_killerViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_killerViewData = { "killerViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProfileMenuStatsViewInterface_eventSetPlayerRanks_Parms, killerViewData), Z_Construct_UScriptStruct_FRankViewData, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_killerViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_killerViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_survivorViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::NewProp_killerViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileMenuStatsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProfileMenuStatsViewInterface, nullptr, "SetPlayerRanks", nullptr, nullptr, sizeof(ProfileMenuStatsViewInterface_eventSetPlayerRanks_Parms), Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProfileMenuStatsViewInterface_NoRegister()
	{
		return UProfileMenuStatsViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UProfileMenuStatsViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileMenuStatsViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProfileMenuStatsViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerLevel, "SetPlayerLevel" }, // 1815565421
		{ &Z_Construct_UFunction_UProfileMenuStatsViewInterface_SetPlayerRanks, "SetPlayerRanks" }, // 363388864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileMenuStatsViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProfileMenuStatsViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileMenuStatsViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IProfileMenuStatsViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileMenuStatsViewInterface_Statics::ClassParams = {
		&UProfileMenuStatsViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProfileMenuStatsViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileMenuStatsViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileMenuStatsViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileMenuStatsViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileMenuStatsViewInterface, 873780337);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UProfileMenuStatsViewInterface>()
	{
		return UProfileMenuStatsViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileMenuStatsViewInterface(Z_Construct_UClass_UProfileMenuStatsViewInterface, &UProfileMenuStatsViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UProfileMenuStatsViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileMenuStatsViewInterface);
	static FName NAME_UProfileMenuStatsViewInterface_SetPlayerLevel = FName(TEXT("SetPlayerLevel"));
	void IProfileMenuStatsViewInterface::Execute_SetPlayerLevel(UObject* O, FPlayerLevelViewData const& viewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuStatsViewInterface::StaticClass()));
		ProfileMenuStatsViewInterface_eventSetPlayerLevel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuStatsViewInterface_SetPlayerLevel);
		if (Func)
		{
			Parms.viewData=viewData;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UProfileMenuStatsViewInterface_SetPlayerRanks = FName(TEXT("SetPlayerRanks"));
	void IProfileMenuStatsViewInterface::Execute_SetPlayerRanks(UObject* O, FRankViewData const& survivorViewData, FRankViewData const& killerViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProfileMenuStatsViewInterface::StaticClass()));
		ProfileMenuStatsViewInterface_eventSetPlayerRanks_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProfileMenuStatsViewInterface_SetPlayerRanks);
		if (Func)
		{
			Parms.survivorViewData=survivorViewData;
			Parms.killerViewData=killerViewData;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
