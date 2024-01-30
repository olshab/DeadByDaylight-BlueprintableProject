// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EventTabViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventTabViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventTabViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEventTabViewData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UEventTabViewData::StaticRegisterNativesUEventTabViewData()
	{
	}
	UClass* Z_Construct_UClass_UEventTabViewData_NoRegister()
	{
		return UEventTabViewData::StaticClass();
	}
	struct Z_Construct_UClass_UEventTabViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ImageTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldShowEventTomeButton_MetaData[];
#endif
		static void NewProp_ShouldShowEventTomeButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldShowEventTomeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventTabViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventTabViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventTabViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventTabViewData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ImageTexture_MetaData[] = {
		{ "Category", "EventTabViewData" },
		{ "ModuleRelativePath", "Public/EventTabViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ImageTexture = { "ImageTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventTabViewData, ImageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ImageTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ImageTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ShouldShowEventTomeButton_MetaData[] = {
		{ "Category", "EventTabViewData" },
		{ "ModuleRelativePath", "Public/EventTabViewData.h" },
	};
#endif
	void Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ShouldShowEventTomeButton_SetBit(void* Obj)
	{
		((UEventTabViewData*)Obj)->ShouldShowEventTomeButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ShouldShowEventTomeButton = { "ShouldShowEventTomeButton", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEventTabViewData), &Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ShouldShowEventTomeButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ShouldShowEventTomeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ShouldShowEventTomeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventTabViewData_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "EventTabViewData" },
		{ "ModuleRelativePath", "Public/EventTabViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEventTabViewData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventTabViewData, Message), METADATA_PARAMS(Z_Construct_UClass_UEventTabViewData_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventTabViewData_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventTabViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ImageTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventTabViewData_Statics::NewProp_ShouldShowEventTomeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventTabViewData_Statics::NewProp_Message,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventTabViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventTabViewData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventTabViewData_Statics::ClassParams = {
		&UEventTabViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEventTabViewData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventTabViewData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventTabViewData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventTabViewData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventTabViewData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventTabViewData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventTabViewData, 2682078796);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UEventTabViewData>()
	{
		return UEventTabViewData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventTabViewData(Z_Construct_UClass_UEventTabViewData, &UEventTabViewData::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UEventTabViewData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventTabViewData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
