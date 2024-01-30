// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteContentCache/Public/AsyncLoadSoftPtrAsTexture2DNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncLoadSoftPtrAsTexture2DNode() {}
// Cross Module References
	REMOTECONTENTCACHE_API UFunction* Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature();
	REMOTECONTENTCACHE_API UClass* Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	REMOTECONTENTCACHE_API UClass* Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_RemoteContentCache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	REMOTECONTENTCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics
	{
		struct AsyncLoadSoftPtrAsTexture2DNode_eventSoftPtrAsyncLoadAsTexture2DCompleted_Parms
		{
			UTexture2D* LoadedTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::NewProp_LoadedTexture = { "LoadedTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncLoadSoftPtrAsTexture2DNode_eventSoftPtrAsyncLoadAsTexture2DCompleted_Parms, LoadedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::NewProp_LoadedTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadSoftPtrAsTexture2DNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode, nullptr, "SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature", nullptr, nullptr, sizeof(AsyncLoadSoftPtrAsTexture2DNode_eventSoftPtrAsyncLoadAsTexture2DCompleted_Parms), Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAsyncLoadSoftPtrAsTexture2DNode::execLoadAsTexture2D)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_STRUCT(FSoftRemoteContentCacheObjectPtr,Z_Param_ptrToLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncLoadSoftPtrAsTexture2DNode**)Z_Param__Result=UAsyncLoadSoftPtrAsTexture2DNode::LoadAsTexture2D(Z_Param_worldContextObject,Z_Param_ptrToLoad);
		P_NATIVE_END;
	}
	void UAsyncLoadSoftPtrAsTexture2DNode::StaticRegisterNativesUAsyncLoadSoftPtrAsTexture2DNode()
	{
		UClass* Class = UAsyncLoadSoftPtrAsTexture2DNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadAsTexture2D", &UAsyncLoadSoftPtrAsTexture2DNode::execLoadAsTexture2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics
	{
		struct AsyncLoadSoftPtrAsTexture2DNode_eventLoadAsTexture2D_Parms
		{
			UObject* worldContextObject;
			FSoftRemoteContentCacheObjectPtr ptrToLoad;
			UAsyncLoadSoftPtrAsTexture2DNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ptrToLoad;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncLoadSoftPtrAsTexture2DNode_eventLoadAsTexture2D_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::NewProp_ptrToLoad = { "ptrToLoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncLoadSoftPtrAsTexture2DNode_eventLoadAsTexture2D_Parms, ptrToLoad), Z_Construct_UScriptStruct_FSoftRemoteContentCacheObjectPtr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncLoadSoftPtrAsTexture2DNode_eventLoadAsTexture2D_Parms, ReturnValue), Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::NewProp_worldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::NewProp_ptrToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadSoftPtrAsTexture2DNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode, nullptr, "LoadAsTexture2D", nullptr, nullptr, sizeof(AsyncLoadSoftPtrAsTexture2DNode_eventLoadAsTexture2D_Parms), Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_NoRegister()
	{
		return UAsyncLoadSoftPtrAsTexture2DNode::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Loaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LoadFailed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteContentCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadSoftPtrAsTexture2DNode_LoadAsTexture2D, "LoadAsTexture2D" }, // 2707679335
		{ &Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature, "SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature" }, // 3304160186
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AsyncLoadSoftPtrAsTexture2DNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsyncLoadSoftPtrAsTexture2DNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_Loaded_MetaData[] = {
		{ "Category", "AsyncLoadSoftPtrAsTexture2DNode" },
		{ "ModuleRelativePath", "Public/AsyncLoadSoftPtrAsTexture2DNode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_Loaded = { "Loaded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncLoadSoftPtrAsTexture2DNode, Loaded), Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_Loaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_Loaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_LoadFailed_MetaData[] = {
		{ "Category", "AsyncLoadSoftPtrAsTexture2DNode" },
		{ "ModuleRelativePath", "Public/AsyncLoadSoftPtrAsTexture2DNode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_LoadFailed = { "LoadFailed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncLoadSoftPtrAsTexture2DNode, LoadFailed), Z_Construct_UDelegateFunction_UAsyncLoadSoftPtrAsTexture2DNode_SoftPtrAsyncLoadAsTexture2DCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_LoadFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_LoadFailed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_Loaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::NewProp_LoadFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadSoftPtrAsTexture2DNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::ClassParams = {
		&UAsyncLoadSoftPtrAsTexture2DNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncLoadSoftPtrAsTexture2DNode, 814459813);
	template<> REMOTECONTENTCACHE_API UClass* StaticClass<UAsyncLoadSoftPtrAsTexture2DNode>()
	{
		return UAsyncLoadSoftPtrAsTexture2DNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncLoadSoftPtrAsTexture2DNode(Z_Construct_UClass_UAsyncLoadSoftPtrAsTexture2DNode, &UAsyncLoadSoftPtrAsTexture2DNode::StaticClass, TEXT("/Script/RemoteContentCache"), TEXT("UAsyncLoadSoftPtrAsTexture2DNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadSoftPtrAsTexture2DNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
