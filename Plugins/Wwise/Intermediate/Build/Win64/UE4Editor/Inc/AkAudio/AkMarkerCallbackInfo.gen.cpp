// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMarkerCallbackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMarkerCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkMarkerCallbackInfo::StaticRegisterNativesUAkMarkerCallbackInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister()
	{
		return UAkMarkerCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkMarkerCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMarkerCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMarkerCallbackInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "AkMarkerCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMarkerCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMarkerCallbackInfo, Identifier), METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "AkMarkerCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMarkerCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMarkerCallbackInfo, Position), METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "AkMarkerCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMarkerCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMarkerCallbackInfo, Label), METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMarkerCallbackInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::ClassParams = {
		&UAkMarkerCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMarkerCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkMarkerCallbackInfo, 3321705789);
	template<> AKAUDIO_API UClass* StaticClass<UAkMarkerCallbackInfo>()
	{
		return UAkMarkerCallbackInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMarkerCallbackInfo(Z_Construct_UClass_UAkMarkerCallbackInfo, &UAkMarkerCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMarkerCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMarkerCallbackInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
