// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CreditsViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreditsViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCreditsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCreditsViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(ICreditsViewInterface::execScrollToEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollToEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICreditsViewInterface::execScrollToName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollToName_Implementation(Z_Param_name,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICreditsViewInterface::execSetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText_Implementation(Z_Param_Out_text);
		P_NATIVE_END;
	}
	void ICreditsViewInterface::ScrollToEnd()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ScrollToEnd instead.");
	}
	void ICreditsViewInterface::ScrollToName(const FString& name, float delay)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ScrollToName instead.");
	}
	void ICreditsViewInterface::SetText(FText const& text)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetText instead.");
	}
	void UCreditsViewInterface::StaticRegisterNativesUCreditsViewInterface()
	{
		UClass* Class = UCreditsViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ScrollToEnd", &ICreditsViewInterface::execScrollToEnd },
			{ "ScrollToName", &ICreditsViewInterface::execScrollToName },
			{ "SetText", &ICreditsViewInterface::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreditsViewInterface_ScrollToEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsViewInterface_ScrollToEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreditsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreditsViewInterface_ScrollToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreditsViewInterface, nullptr, "ScrollToEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreditsViewInterface_ScrollToEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsViewInterface_ScrollToEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreditsViewInterface_ScrollToEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreditsViewInterface_ScrollToEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreditsViewInterface_eventScrollToName_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreditsViewInterface_eventScrollToName_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreditsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreditsViewInterface, nullptr, "ScrollToName", nullptr, nullptr, sizeof(CreditsViewInterface_eventScrollToName_Parms), Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreditsViewInterface_ScrollToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreditsViewInterface_ScrollToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreditsViewInterface_eventSetText_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreditsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreditsViewInterface, nullptr, "SetText", nullptr, nullptr, sizeof(CreditsViewInterface_eventSetText_Parms), Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreditsViewInterface_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreditsViewInterface_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreditsViewInterface_NoRegister()
	{
		return UCreditsViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCreditsViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreditsViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreditsViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreditsViewInterface_ScrollToEnd, "ScrollToEnd" }, // 2242238722
		{ &Z_Construct_UFunction_UCreditsViewInterface_ScrollToName, "ScrollToName" }, // 3407747550
		{ &Z_Construct_UFunction_UCreditsViewInterface_SetText, "SetText" }, // 2261416058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreditsViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CreditsViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreditsViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICreditsViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreditsViewInterface_Statics::ClassParams = {
		&UCreditsViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCreditsViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreditsViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreditsViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreditsViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreditsViewInterface, 4192315064);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UCreditsViewInterface>()
	{
		return UCreditsViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreditsViewInterface(Z_Construct_UClass_UCreditsViewInterface, &UCreditsViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UCreditsViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreditsViewInterface);
	static FName NAME_UCreditsViewInterface_ScrollToEnd = FName(TEXT("ScrollToEnd"));
	void ICreditsViewInterface::Execute_ScrollToEnd(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCreditsViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCreditsViewInterface_ScrollToEnd);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICreditsViewInterface*)(O->GetNativeInterfaceAddress(UCreditsViewInterface::StaticClass())))
		{
			I->ScrollToEnd_Implementation();
		}
	}
	static FName NAME_UCreditsViewInterface_ScrollToName = FName(TEXT("ScrollToName"));
	void ICreditsViewInterface::Execute_ScrollToName(UObject* O, const FString& name, float delay)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCreditsViewInterface::StaticClass()));
		CreditsViewInterface_eventScrollToName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCreditsViewInterface_ScrollToName);
		if (Func)
		{
			Parms.name=name;
			Parms.delay=delay;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICreditsViewInterface*)(O->GetNativeInterfaceAddress(UCreditsViewInterface::StaticClass())))
		{
			I->ScrollToName_Implementation(name,delay);
		}
	}
	static FName NAME_UCreditsViewInterface_SetText = FName(TEXT("SetText"));
	void ICreditsViewInterface::Execute_SetText(UObject* O, FText const& text)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCreditsViewInterface::StaticClass()));
		CreditsViewInterface_eventSetText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCreditsViewInterface_SetText);
		if (Func)
		{
			Parms.text=text;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICreditsViewInterface*)(O->GetNativeInterfaceAddress(UCreditsViewInterface::StaticClass())))
		{
			I->SetText_Implementation(text);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
