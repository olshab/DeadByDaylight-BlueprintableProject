// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/SubtitlesPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubtitlesPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubtitlesPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubtitlesPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIPRESENTERS_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavigationScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USubtitlesPresenter::execIsSubtitlesEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubtitlesEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubtitlesPresenter::execOnEntryTimedOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEntryTimedOut();
		P_NATIVE_END;
	}
	void USubtitlesPresenter::StaticRegisterNativesUSubtitlesPresenter()
	{
		UClass* Class = USubtitlesPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSubtitlesEnabled", &USubtitlesPresenter::execIsSubtitlesEnabled },
			{ "OnEntryTimedOut", &USubtitlesPresenter::execOnEntryTimedOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics
	{
		struct SubtitlesPresenter_eventIsSubtitlesEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubtitlesPresenter_eventIsSubtitlesEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SubtitlesPresenter_eventIsSubtitlesEnabled_Parms), &Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitlesPresenter, nullptr, "IsSubtitlesEnabled", nullptr, nullptr, sizeof(SubtitlesPresenter_eventIsSubtitlesEnabled_Parms), Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubtitlesPresenter_OnEntryTimedOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesPresenter_OnEntryTimedOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitlesPresenter_OnEntryTimedOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitlesPresenter, nullptr, "OnEntryTimedOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesPresenter_OnEntryTimedOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesPresenter_OnEntryTimedOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitlesPresenter_OnEntryTimedOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitlesPresenter_OnEntryTimedOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubtitlesPresenter_NoRegister()
	{
		return USubtitlesPresenter::StaticClass();
	}
	struct Z_Construct_UClass_USubtitlesPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SubtitlesWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCharactersPerLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCharactersPerLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationPerLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationPerLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepSingleCharacter_MetaData[];
#endif
		static void NewProp_KeepSingleCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KeepSingleCharacter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__entryQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__entryQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__entryQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__navigationScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__navigationScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubtitlesPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubtitlesPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubtitlesPresenter_IsSubtitlesEnabled, "IsSubtitlesEnabled" }, // 2702415514
		{ &Z_Construct_UFunction_USubtitlesPresenter_OnEntryTimedOut, "OnEntryTimedOut" }, // 3491351939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubtitlesPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_SubtitlesWidgetClass_MetaData[] = {
		{ "Category", "SubtitlesPresenter" },
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_SubtitlesWidgetClass = { "SubtitlesWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitlesPresenter, SubtitlesWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_SubtitlesWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_SubtitlesWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_NumberOfCharactersPerLine_MetaData[] = {
		{ "Category", "SubtitlesPresenter" },
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_NumberOfCharactersPerLine = { "NumberOfCharactersPerLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitlesPresenter, NumberOfCharactersPerLine), METADATA_PARAMS(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_NumberOfCharactersPerLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_NumberOfCharactersPerLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_DurationPerLine_MetaData[] = {
		{ "Category", "SubtitlesPresenter" },
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_DurationPerLine = { "DurationPerLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitlesPresenter, DurationPerLine), METADATA_PARAMS(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_DurationPerLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_DurationPerLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_KeepSingleCharacter_MetaData[] = {
		{ "Category", "SubtitlesPresenter" },
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
	void Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_KeepSingleCharacter_SetBit(void* Obj)
	{
		((USubtitlesPresenter*)Obj)->KeepSingleCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_KeepSingleCharacter = { "KeepSingleCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USubtitlesPresenter), &Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_KeepSingleCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_KeepSingleCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_KeepSingleCharacter_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__entryQueue_Inner = { "_entryQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubtitlesEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__entryQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubtitlesPresenter" },
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__entryQueue = { "_entryQueue", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitlesPresenter, _entryQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__entryQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__entryQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__timerHandle_MetaData[] = {
		{ "Category", "SubtitlesPresenter" },
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__timerHandle = { "_timerHandle", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitlesPresenter, _timerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__timerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__timerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__navigationScreen_MetaData[] = {
		{ "Category", "SubtitlesPresenter" },
		{ "ModuleRelativePath", "Public/SubtitlesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__navigationScreen = { "_navigationScreen", nullptr, (EPropertyFlags)0x0044000000002001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitlesPresenter, _navigationScreen), Z_Construct_UClass_UNavigationScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__navigationScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__navigationScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubtitlesPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_SubtitlesWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_NumberOfCharactersPerLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_DurationPerLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp_KeepSingleCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__entryQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__entryQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__timerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitlesPresenter_Statics::NewProp__navigationScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubtitlesPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubtitlesPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubtitlesPresenter_Statics::ClassParams = {
		&USubtitlesPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubtitlesPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubtitlesPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubtitlesPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubtitlesPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubtitlesPresenter, 3779712363);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<USubtitlesPresenter>()
	{
		return USubtitlesPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubtitlesPresenter(Z_Construct_UClass_USubtitlesPresenter, &USubtitlesPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("USubtitlesPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubtitlesPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
