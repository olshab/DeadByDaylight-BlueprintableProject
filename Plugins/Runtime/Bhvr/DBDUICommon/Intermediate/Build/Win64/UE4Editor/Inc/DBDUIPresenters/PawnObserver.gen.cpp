// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PawnObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnObserver() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPawnObserver_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPawnObserver();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPawnObserver::execOnLocallyObservedChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocallyObservedChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnObserver::execOnPawnControllerSet)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_GET_OBJECT(AController,Z_Param_oldController);
		P_GET_OBJECT(AController,Z_Param_newController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnControllerSet(Z_Param_pawn,Z_Param_oldController,Z_Param_newController);
		P_NATIVE_END;
	}
	void UPawnObserver::StaticRegisterNativesUPawnObserver()
	{
		UClass* Class = UPawnObserver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLocallyObservedChanged", &UPawnObserver::execOnLocallyObservedChanged },
			{ "OnPawnControllerSet", &UPawnObserver::execOnPawnControllerSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PawnObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnObserver, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics
	{
		struct PawnObserver_eventOnPawnControllerSet_Parms
		{
			APawn* pawn;
			AController* oldController;
			AController* newController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnObserver_eventOnPawnControllerSet_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::NewProp_oldController = { "oldController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnObserver_eventOnPawnControllerSet_Parms, oldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::NewProp_newController = { "newController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnObserver_eventOnPawnControllerSet_Parms, newController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::NewProp_pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::NewProp_oldController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::NewProp_newController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PawnObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnObserver, nullptr, "OnPawnControllerSet", nullptr, nullptr, sizeof(PawnObserver_eventOnPawnControllerSet_Parms), Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnObserver_NoRegister()
	{
		return UPawnObserver::StaticClass();
	}
	struct Z_Construct_UClass_UPawnObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnObserver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 1279942182
		{ &Z_Construct_UFunction_UPawnObserver_OnPawnControllerSet, "OnPawnControllerSet" }, // 1251625091
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PawnObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PawnObserver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnObserver_Statics::ClassParams = {
		&UPawnObserver::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnObserver, 950363390);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPawnObserver>()
	{
		return UPawnObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnObserver(Z_Construct_UClass_UPawnObserver, &UPawnObserver::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPawnObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
