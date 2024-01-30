// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ChallengeTrackerViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeTrackerViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UChallengeTrackerViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UChallengeTrackerViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeTrackerViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData();
// End Cross Module References
	DEFINE_FUNCTION(IChallengeTrackerViewInterface::execCloseWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IChallengeTrackerViewInterface::execInitWidgetData)
	{
		P_GET_STRUCT_REF(FChallengeTrackerViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitWidgetData_Implementation(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IChallengeTrackerViewInterface::execOpenWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IChallengeTrackerViewInterface::execUpdateWidgetProgression)
	{
		P_GET_STRUCT_REF(FArchiveNodeObjectiveViewData,Z_Param_Out_progressionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWidgetProgression_Implementation(Z_Param_Out_progressionData);
		P_NATIVE_END;
	}
	void IChallengeTrackerViewInterface::CloseWidget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CloseWidget instead.");
	}
	void IChallengeTrackerViewInterface::InitWidgetData(FChallengeTrackerViewData const& viewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitWidgetData instead.");
	}
	void IChallengeTrackerViewInterface::OpenWidget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OpenWidget instead.");
	}
	void IChallengeTrackerViewInterface::UpdateWidgetProgression(FArchiveNodeObjectiveViewData const& progressionData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateWidgetProgression instead.");
	}
	void UChallengeTrackerViewInterface::StaticRegisterNativesUChallengeTrackerViewInterface()
	{
		UClass* Class = UChallengeTrackerViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseWidget", &IChallengeTrackerViewInterface::execCloseWidget },
			{ "InitWidgetData", &IChallengeTrackerViewInterface::execInitWidgetData },
			{ "OpenWidget", &IChallengeTrackerViewInterface::execOpenWidget },
			{ "UpdateWidgetProgression", &IChallengeTrackerViewInterface::execUpdateWidgetProgression },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChallengeTrackerViewInterface_CloseWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerViewInterface_CloseWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerViewInterface_CloseWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerViewInterface, nullptr, "CloseWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerViewInterface_CloseWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerViewInterface_CloseWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerViewInterface_CloseWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerViewInterface_CloseWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChallengeTrackerViewInterface_eventInitWidgetData_Parms, viewData), Z_Construct_UScriptStruct_FChallengeTrackerViewData, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerViewInterface, nullptr, "InitWidgetData", nullptr, nullptr, sizeof(ChallengeTrackerViewInterface_eventInitWidgetData_Parms), Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChallengeTrackerViewInterface_OpenWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerViewInterface_OpenWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerViewInterface_OpenWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerViewInterface, nullptr, "OpenWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerViewInterface_OpenWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerViewInterface_OpenWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerViewInterface_OpenWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerViewInterface_OpenWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progressionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_progressionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::NewProp_progressionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::NewProp_progressionData = { "progressionData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChallengeTrackerViewInterface_eventUpdateWidgetProgression_Parms, progressionData), Z_Construct_UScriptStruct_FArchiveNodeObjectiveViewData, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::NewProp_progressionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::NewProp_progressionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::NewProp_progressionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChallengeTrackerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChallengeTrackerViewInterface, nullptr, "UpdateWidgetProgression", nullptr, nullptr, sizeof(ChallengeTrackerViewInterface_eventUpdateWidgetProgression_Parms), Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChallengeTrackerViewInterface_NoRegister()
	{
		return UChallengeTrackerViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UChallengeTrackerViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChallengeTrackerViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChallengeTrackerViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChallengeTrackerViewInterface_CloseWidget, "CloseWidget" }, // 2425722796
		{ &Z_Construct_UFunction_UChallengeTrackerViewInterface_InitWidgetData, "InitWidgetData" }, // 3601924653
		{ &Z_Construct_UFunction_UChallengeTrackerViewInterface_OpenWidget, "OpenWidget" }, // 1056136992
		{ &Z_Construct_UFunction_UChallengeTrackerViewInterface_UpdateWidgetProgression, "UpdateWidgetProgression" }, // 3725379203
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChallengeTrackerViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChallengeTrackerViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChallengeTrackerViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChallengeTrackerViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChallengeTrackerViewInterface_Statics::ClassParams = {
		&UChallengeTrackerViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChallengeTrackerViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChallengeTrackerViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChallengeTrackerViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChallengeTrackerViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChallengeTrackerViewInterface, 1985352786);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UChallengeTrackerViewInterface>()
	{
		return UChallengeTrackerViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChallengeTrackerViewInterface(Z_Construct_UClass_UChallengeTrackerViewInterface, &UChallengeTrackerViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UChallengeTrackerViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChallengeTrackerViewInterface);
	static FName NAME_UChallengeTrackerViewInterface_CloseWidget = FName(TEXT("CloseWidget"));
	void IChallengeTrackerViewInterface::Execute_CloseWidget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UChallengeTrackerViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UChallengeTrackerViewInterface_CloseWidget);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IChallengeTrackerViewInterface*)(O->GetNativeInterfaceAddress(UChallengeTrackerViewInterface::StaticClass())))
		{
			I->CloseWidget_Implementation();
		}
	}
	static FName NAME_UChallengeTrackerViewInterface_InitWidgetData = FName(TEXT("InitWidgetData"));
	void IChallengeTrackerViewInterface::Execute_InitWidgetData(UObject* O, FChallengeTrackerViewData const& viewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UChallengeTrackerViewInterface::StaticClass()));
		ChallengeTrackerViewInterface_eventInitWidgetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UChallengeTrackerViewInterface_InitWidgetData);
		if (Func)
		{
			Parms.viewData=viewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IChallengeTrackerViewInterface*)(O->GetNativeInterfaceAddress(UChallengeTrackerViewInterface::StaticClass())))
		{
			I->InitWidgetData_Implementation(viewData);
		}
	}
	static FName NAME_UChallengeTrackerViewInterface_OpenWidget = FName(TEXT("OpenWidget"));
	void IChallengeTrackerViewInterface::Execute_OpenWidget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UChallengeTrackerViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UChallengeTrackerViewInterface_OpenWidget);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IChallengeTrackerViewInterface*)(O->GetNativeInterfaceAddress(UChallengeTrackerViewInterface::StaticClass())))
		{
			I->OpenWidget_Implementation();
		}
	}
	static FName NAME_UChallengeTrackerViewInterface_UpdateWidgetProgression = FName(TEXT("UpdateWidgetProgression"));
	void IChallengeTrackerViewInterface::Execute_UpdateWidgetProgression(UObject* O, FArchiveNodeObjectiveViewData const& progressionData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UChallengeTrackerViewInterface::StaticClass()));
		ChallengeTrackerViewInterface_eventUpdateWidgetProgression_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UChallengeTrackerViewInterface_UpdateWidgetProgression);
		if (Func)
		{
			Parms.progressionData=progressionData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IChallengeTrackerViewInterface*)(O->GetNativeInterfaceAddress(UChallengeTrackerViewInterface::StaticClass())))
		{
			I->UpdateWidgetProgression_Implementation(progressionData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
