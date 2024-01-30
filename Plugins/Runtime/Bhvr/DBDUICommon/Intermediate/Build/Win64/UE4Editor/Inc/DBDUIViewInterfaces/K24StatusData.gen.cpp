// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K24StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK24StatusData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UK24StatusData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UKillerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UK24StatusData::StaticRegisterNativesUK24StatusData()
	{
	}
	UClass* Z_Construct_UClass_UK24StatusData_NoRegister()
	{
		return UK24StatusData::StaticClass();
	}
	struct Z_Construct_UClass_UK24StatusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsContaminated_MetaData[];
#endif
		static void NewProp_IsContaminated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsContaminated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24StatusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerStatusData,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24StatusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K24StatusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K24StatusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24StatusData_Statics::NewProp_IsContaminated_MetaData[] = {
		{ "Category", "K24StatusData" },
		{ "ModuleRelativePath", "Public/K24StatusData.h" },
	};
#endif
	void Z_Construct_UClass_UK24StatusData_Statics::NewProp_IsContaminated_SetBit(void* Obj)
	{
		((UK24StatusData*)Obj)->IsContaminated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24StatusData_Statics::NewProp_IsContaminated = { "IsContaminated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24StatusData), &Z_Construct_UClass_UK24StatusData_Statics::NewProp_IsContaminated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24StatusData_Statics::NewProp_IsContaminated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24StatusData_Statics::NewProp_IsContaminated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK24StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24StatusData_Statics::NewProp_IsContaminated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24StatusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24StatusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24StatusData_Statics::ClassParams = {
		&UK24StatusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK24StatusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK24StatusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK24StatusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24StatusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24StatusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24StatusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24StatusData, 2114232965);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UK24StatusData>()
	{
		return UK24StatusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24StatusData(Z_Construct_UClass_UK24StatusData, &UK24StatusData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UK24StatusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24StatusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
