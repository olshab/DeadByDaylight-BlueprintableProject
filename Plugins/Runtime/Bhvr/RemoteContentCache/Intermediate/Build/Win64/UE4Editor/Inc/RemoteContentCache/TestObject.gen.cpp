// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteContentCache/Public/TestObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestObject() {}
// Cross Module References
	REMOTECONTENTCACHE_API UClass* Z_Construct_UClass_UTestObject_NoRegister();
	REMOTECONTENTCACHE_API UClass* Z_Construct_UClass_UTestObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RemoteContentCache();
// End Cross Module References
	void UTestObject::StaticRegisterNativesUTestObject()
	{
	}
	UClass* Z_Construct_UClass_UTestObject_NoRegister()
	{
		return UTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TestValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteContentCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TestObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TestObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestObject_Statics::NewProp_TestValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TestObject" },
		{ "ModuleRelativePath", "Public/TestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestObject_Statics::NewProp_TestValue = { "TestValue", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestObject, TestValue), METADATA_PARAMS(Z_Construct_UClass_UTestObject_Statics::NewProp_TestValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestObject_Statics::NewProp_TestValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestObject_Statics::NewProp_TestValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestObject_Statics::ClassParams = {
		&UTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestObject, 732255148);
	template<> REMOTECONTENTCACHE_API UClass* StaticClass<UTestObject>()
	{
		return UTestObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestObject(Z_Construct_UClass_UTestObject, &UTestObject::StaticClass, TEXT("/Script/RemoteContentCache"), TEXT("UTestObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
