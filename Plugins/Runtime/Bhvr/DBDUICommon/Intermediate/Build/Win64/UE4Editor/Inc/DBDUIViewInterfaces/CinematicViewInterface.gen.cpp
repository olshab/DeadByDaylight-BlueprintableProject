// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CinematicViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinematicViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCinematicViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCinematicViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(ICinematicViewInterface::execFadeInAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeInAnimation_Implementation(Z_Param_fadeInDuration,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICinematicViewInterface::execFadeOutAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOutAnimation_Implementation(Z_Param_fadeOutDuration,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICinematicViewInterface::execSetSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSize_Implementation(Z_Param_size);
		P_NATIVE_END;
	}
	void ICinematicViewInterface::FadeInAnimation(const float fadeInDuration, const float delay)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FadeInAnimation instead.");
	}
	void ICinematicViewInterface::FadeOutAnimation(const float fadeOutDuration, const float delay)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FadeOutAnimation instead.");
	}
	UBinkMediaPlayer* ICinematicViewInterface::GetBinkVideoPlayer()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBinkVideoPlayer instead.");
		CinematicViewInterface_eventGetBinkVideoPlayer_Parms Parms;
		return Parms.ReturnValue;
	}
	void ICinematicViewInterface::SetSize(FVector2D size)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSize instead.");
	}
	void UCinematicViewInterface::StaticRegisterNativesUCinematicViewInterface()
	{
		UClass* Class = UCinematicViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FadeInAnimation", &ICinematicViewInterface::execFadeInAnimation },
			{ "FadeOutAnimation", &ICinematicViewInterface::execFadeOutAnimation },
			{ "SetSize", &ICinematicViewInterface::execSetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_fadeInDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_fadeInDuration = { "fadeInDuration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicViewInterface_eventFadeInAnimation_Parms, fadeInDuration), METADATA_PARAMS(Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_fadeInDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_fadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_delay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicViewInterface_eventFadeInAnimation_Parms, delay), METADATA_PARAMS(Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_delay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_fadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicViewInterface, nullptr, "FadeInAnimation", nullptr, nullptr, sizeof(CinematicViewInterface_eventFadeInAnimation_Parms), Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_fadeOutDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_fadeOutDuration = { "fadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicViewInterface_eventFadeOutAnimation_Parms, fadeOutDuration), METADATA_PARAMS(Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_fadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_fadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_delay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicViewInterface_eventFadeOutAnimation_Parms, delay), METADATA_PARAMS(Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_delay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_fadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicViewInterface, nullptr, "FadeOutAnimation", nullptr, nullptr, sizeof(CinematicViewInterface_eventFadeOutAnimation_Parms), Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicViewInterface_eventGetBinkVideoPlayer_Parms, ReturnValue), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicViewInterface, nullptr, "GetBinkVideoPlayer", nullptr, nullptr, sizeof(CinematicViewInterface_eventGetBinkVideoPlayer_Parms), Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicViewInterface_eventSetSize_Parms, size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicViewInterface, nullptr, "SetSize", nullptr, nullptr, sizeof(CinematicViewInterface_eventSetSize_Parms), Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicViewInterface_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicViewInterface_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCinematicViewInterface_NoRegister()
	{
		return UCinematicViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCinematicViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCinematicViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCinematicViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCinematicViewInterface_FadeInAnimation, "FadeInAnimation" }, // 496025066
		{ &Z_Construct_UFunction_UCinematicViewInterface_FadeOutAnimation, "FadeOutAnimation" }, // 1923695656
		{ &Z_Construct_UFunction_UCinematicViewInterface_GetBinkVideoPlayer, "GetBinkVideoPlayer" }, // 3332865914
		{ &Z_Construct_UFunction_UCinematicViewInterface_SetSize, "SetSize" }, // 502510249
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinematicViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CinematicViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCinematicViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICinematicViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCinematicViewInterface_Statics::ClassParams = {
		&UCinematicViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCinematicViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCinematicViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCinematicViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCinematicViewInterface, 320462401);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UCinematicViewInterface>()
	{
		return UCinematicViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCinematicViewInterface(Z_Construct_UClass_UCinematicViewInterface, &UCinematicViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UCinematicViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCinematicViewInterface);
	static FName NAME_UCinematicViewInterface_FadeInAnimation = FName(TEXT("FadeInAnimation"));
	void ICinematicViewInterface::Execute_FadeInAnimation(UObject* O, const float fadeInDuration, const float delay)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCinematicViewInterface::StaticClass()));
		CinematicViewInterface_eventFadeInAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCinematicViewInterface_FadeInAnimation);
		if (Func)
		{
			Parms.fadeInDuration=fadeInDuration;
			Parms.delay=delay;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICinematicViewInterface*)(O->GetNativeInterfaceAddress(UCinematicViewInterface::StaticClass())))
		{
			I->FadeInAnimation_Implementation(fadeInDuration,delay);
		}
	}
	static FName NAME_UCinematicViewInterface_FadeOutAnimation = FName(TEXT("FadeOutAnimation"));
	void ICinematicViewInterface::Execute_FadeOutAnimation(UObject* O, const float fadeOutDuration, const float delay)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCinematicViewInterface::StaticClass()));
		CinematicViewInterface_eventFadeOutAnimation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCinematicViewInterface_FadeOutAnimation);
		if (Func)
		{
			Parms.fadeOutDuration=fadeOutDuration;
			Parms.delay=delay;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICinematicViewInterface*)(O->GetNativeInterfaceAddress(UCinematicViewInterface::StaticClass())))
		{
			I->FadeOutAnimation_Implementation(fadeOutDuration,delay);
		}
	}
	static FName NAME_UCinematicViewInterface_GetBinkVideoPlayer = FName(TEXT("GetBinkVideoPlayer"));
	UBinkMediaPlayer* ICinematicViewInterface::Execute_GetBinkVideoPlayer(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCinematicViewInterface::StaticClass()));
		CinematicViewInterface_eventGetBinkVideoPlayer_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCinematicViewInterface_GetBinkVideoPlayer);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCinematicViewInterface_SetSize = FName(TEXT("SetSize"));
	void ICinematicViewInterface::Execute_SetSize(UObject* O, FVector2D size)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCinematicViewInterface::StaticClass()));
		CinematicViewInterface_eventSetSize_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCinematicViewInterface_SetSize);
		if (Func)
		{
			Parms.size=size;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICinematicViewInterface*)(O->GetNativeInterfaceAddress(UCinematicViewInterface::StaticClass())))
		{
			I->SetSize_Implementation(size);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
