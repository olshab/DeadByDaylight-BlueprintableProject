// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteContentCache/Public/SoftRemoteContentCacheObjectPtrLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoftRemoteContentCacheObjectPtrLibrary() {}
// Cross Module References
	REMOTECONTENTCACHE_API UClass* Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_NoRegister();
	REMOTECONTENTCACHE_API UClass* Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RemoteContentCache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	REMOTECONTENTCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USoftRemoteContentCacheObjectPtrLibrary::execBindToImage)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_STRUCT(FSoftRemoteContentCacheObjectPtr,Z_Param_ptrToBind);
		P_GET_OBJECT(UImage,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoftRemoteContentCacheObjectPtrLibrary::BindToImage(Z_Param_worldContextObject,Z_Param_ptrToBind,Z_Param_target);
		P_NATIVE_END;
	}
	void USoftRemoteContentCacheObjectPtrLibrary::StaticRegisterNativesUSoftRemoteContentCacheObjectPtrLibrary()
	{
		UClass* Class = USoftRemoteContentCacheObjectPtrLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToImage", &USoftRemoteContentCacheObjectPtrLibrary::execBindToImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics
	{
		struct SoftRemoteContentCacheObjectPtrLibrary_eventBindToImage_Parms
		{
			UObject* worldContextObject;
			FSoftRemoteContentCacheObjectPtr ptrToBind;
			UImage* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ptrToBind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoftRemoteContentCacheObjectPtrLibrary_eventBindToImage_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::NewProp_ptrToBind = { "ptrToBind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoftRemoteContentCacheObjectPtrLibrary_eventBindToImage_Parms, ptrToBind), Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoftRemoteContentCacheObjectPtrLibrary_eventBindToImage_Parms, target), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::NewProp_worldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::NewProp_ptrToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoftRemoteContentCacheObjectPtrLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary, nullptr, "BindToImage", nullptr, nullptr, sizeof(SoftRemoteContentCacheObjectPtrLibrary_eventBindToImage_Parms), Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_NoRegister()
	{
		return USoftRemoteContentCacheObjectPtrLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteContentCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoftRemoteContentCacheObjectPtrLibrary_BindToImage, "BindToImage" }, // 1516433769
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoftRemoteContentCacheObjectPtrLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SoftRemoteContentCacheObjectPtrLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoftRemoteContentCacheObjectPtrLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_Statics::ClassParams = {
		&USoftRemoteContentCacheObjectPtrLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoftRemoteContentCacheObjectPtrLibrary, 3276224446);
	template<> REMOTECONTENTCACHE_API UClass* StaticClass<USoftRemoteContentCacheObjectPtrLibrary>()
	{
		return USoftRemoteContentCacheObjectPtrLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoftRemoteContentCacheObjectPtrLibrary(Z_Construct_UClass_USoftRemoteContentCacheObjectPtrLibrary, &USoftRemoteContentCacheObjectPtrLibrary::StaticClass, TEXT("/Script/RemoteContentCache"), TEXT("USoftRemoteContentCacheObjectPtrLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoftRemoteContentCacheObjectPtrLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
