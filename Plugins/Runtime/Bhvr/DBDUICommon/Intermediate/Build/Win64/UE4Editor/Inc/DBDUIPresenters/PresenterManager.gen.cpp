// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PresenterManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresenterManager() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterManager_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadingTransitionType();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterGroup_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPresenterManager::execOnLoadingTransition)
	{
		P_GET_ENUM(ELoadingTransitionType,Z_Param_transitionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadingTransition(ELoadingTransitionType(Z_Param_transitionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPresenterManager::execOnPlayerStateChanged)
	{
		P_GET_OBJECT(APlayerState,Z_Param_playerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerStateChanged(Z_Param_playerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPresenterManager::execOnViewportCreated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnViewportCreated();
		P_NATIVE_END;
	}
	void UPresenterManager::StaticRegisterNativesUPresenterManager()
	{
		UClass* Class = UPresenterManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoadingTransition", &UPresenterManager::execOnLoadingTransition },
			{ "OnPlayerStateChanged", &UPresenterManager::execOnPlayerStateChanged },
			{ "OnViewportCreated", &UPresenterManager::execOnViewportCreated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics
	{
		struct PresenterManager_eventOnLoadingTransition_Parms
		{
			ELoadingTransitionType transitionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_transitionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transitionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_transitionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::NewProp_transitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::NewProp_transitionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::NewProp_transitionType = { "transitionType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PresenterManager_eventOnLoadingTransition_Parms, transitionType), Z_Construct_UEnum_DBDSharedTypes_ELoadingTransitionType, METADATA_PARAMS(Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::NewProp_transitionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::NewProp_transitionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::NewProp_transitionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::NewProp_transitionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PresenterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenterManager, nullptr, "OnLoadingTransition", nullptr, nullptr, sizeof(PresenterManager_eventOnLoadingTransition_Parms), Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenterManager_OnLoadingTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenterManager_OnLoadingTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics
	{
		struct PresenterManager_eventOnPlayerStateChanged_Parms
		{
			const APlayerState* playerState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::NewProp_playerState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::NewProp_playerState = { "playerState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PresenterManager_eventOnPlayerStateChanged_Parms, playerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::NewProp_playerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::NewProp_playerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::NewProp_playerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PresenterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenterManager, nullptr, "OnPlayerStateChanged", nullptr, nullptr, sizeof(PresenterManager_eventOnPlayerStateChanged_Parms), Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPresenterManager_OnViewportCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPresenterManager_OnViewportCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PresenterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPresenterManager_OnViewportCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresenterManager, nullptr, "OnViewportCreated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPresenterManager_OnViewportCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPresenterManager_OnViewportCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPresenterManager_OnViewportCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPresenterManager_OnViewportCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPresenterManager_NoRegister()
	{
		return UPresenterManager::StaticClass();
	}
	struct Z_Construct_UClass_UPresenterManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__persistentPresenterGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__persistentPresenterGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__persistentPresenterGroups;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__transientPresenterGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transientPresenterGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__transientPresenterGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresenterManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPresenterManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPresenterManager_OnLoadingTransition, "OnLoadingTransition" }, // 957897934
		{ &Z_Construct_UFunction_UPresenterManager_OnPlayerStateChanged, "OnPlayerStateChanged" }, // 3731059598
		{ &Z_Construct_UFunction_UPresenterManager_OnViewportCreated, "OnViewportCreated" }, // 3073780155
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PresenterManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PresenterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPresenterManager_Statics::NewProp__persistentPresenterGroups_Inner = { "_persistentPresenterGroups", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPresenterGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterManager_Statics::NewProp__persistentPresenterGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresenterManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PresenterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPresenterManager_Statics::NewProp__persistentPresenterGroups = { "_persistentPresenterGroups", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenterManager, _persistentPresenterGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPresenterManager_Statics::NewProp__persistentPresenterGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterManager_Statics::NewProp__persistentPresenterGroups_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPresenterManager_Statics::NewProp__transientPresenterGroups_Inner = { "_transientPresenterGroups", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPresenterGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterManager_Statics::NewProp__transientPresenterGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresenterManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PresenterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPresenterManager_Statics::NewProp__transientPresenterGroups = { "_transientPresenterGroups", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenterManager, _transientPresenterGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPresenterManager_Statics::NewProp__transientPresenterGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterManager_Statics::NewProp__transientPresenterGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPresenterManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenterManager_Statics::NewProp__persistentPresenterGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenterManager_Statics::NewProp__persistentPresenterGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenterManager_Statics::NewProp__transientPresenterGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenterManager_Statics::NewProp__transientPresenterGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresenterManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresenterManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresenterManager_Statics::ClassParams = {
		&UPresenterManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPresenterManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPresenterManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresenterManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresenterManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresenterManager, 688252615);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPresenterManager>()
	{
		return UPresenterManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresenterManager(Z_Construct_UClass_UPresenterManager, &UPresenterManager::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPresenterManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresenterManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
