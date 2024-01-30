// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlayerCardAnimationViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCardAnimationViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerCardAnimationViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerCardAnimationViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void IPlayerCardAnimationViewInterface::OnPlayAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayAnimation instead.");
	}
	void IPlayerCardAnimationViewInterface::OnStopAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStopAnimation instead.");
	}
	void UPlayerCardAnimationViewInterface::StaticRegisterNativesUPlayerCardAnimationViewInterface()
	{
	}
	struct Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnPlayAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnPlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCardAnimationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnPlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCardAnimationViewInterface, nullptr, "OnPlayAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnPlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnPlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnPlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnPlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnStopAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnStopAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCardAnimationViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnStopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCardAnimationViewInterface, nullptr, "OnStopAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnStopAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnStopAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnStopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnStopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerCardAnimationViewInterface_NoRegister()
	{
		return UPlayerCardAnimationViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnPlayAnimation, "OnPlayAnimation" }, // 1552211445
		{ &Z_Construct_UFunction_UPlayerCardAnimationViewInterface_OnStopAnimation, "OnStopAnimation" }, // 2764888985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerCardAnimationViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerCardAnimationViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics::ClassParams = {
		&UPlayerCardAnimationViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCardAnimationViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerCardAnimationViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerCardAnimationViewInterface, 3758310019);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPlayerCardAnimationViewInterface>()
	{
		return UPlayerCardAnimationViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerCardAnimationViewInterface(Z_Construct_UClass_UPlayerCardAnimationViewInterface, &UPlayerCardAnimationViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPlayerCardAnimationViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCardAnimationViewInterface);
	static FName NAME_UPlayerCardAnimationViewInterface_OnPlayAnimation = FName(TEXT("OnPlayAnimation"));
	void IPlayerCardAnimationViewInterface::Execute_OnPlayAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCardAnimationViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerCardAnimationViewInterface_OnPlayAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UPlayerCardAnimationViewInterface_OnStopAnimation = FName(TEXT("OnStopAnimation"));
	void IPlayerCardAnimationViewInterface::Execute_OnStopAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCardAnimationViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerCardAnimationViewInterface_OnStopAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
