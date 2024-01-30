// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveQuestPathWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveQuestPathWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveQuestPathWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveMapPathViewData();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EArchivePathStatus();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveQuestPathWidget::execInitPath)
	{
		P_GET_STRUCT_REF(FArchiveMapPathViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitPath(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestPathWidget::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveQuestPathWidget::execUpdatePath)
	{
		P_GET_STRUCT_REF(FArchiveMapPathViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePath(Z_Param_Out_data);
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveQuestPathWidget_SetVisualState = FName(TEXT("SetVisualState"));
	void UCoreArchiveQuestPathWidget::SetVisualState(EArchivePathStatus const& pathStatus)
	{
		CoreArchiveQuestPathWidget_eventSetVisualState_Parms Parms;
		Parms.pathStatus=pathStatus;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveQuestPathWidget_SetVisualState),&Parms);
	}
	void UCoreArchiveQuestPathWidget::StaticRegisterNativesUCoreArchiveQuestPathWidget()
	{
		UClass* Class = UCoreArchiveQuestPathWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitPath", &UCoreArchiveQuestPathWidget::execInitPath },
			{ "Reset", &UCoreArchiveQuestPathWidget::execReset },
			{ "UpdatePath", &UCoreArchiveQuestPathWidget::execUpdatePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics
	{
		struct CoreArchiveQuestPathWidget_eventInitPath_Parms
		{
			FArchiveMapPathViewData data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestPathWidget_eventInitPath_Parms, data), Z_Construct_UScriptStruct_FArchiveMapPathViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestPathWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestPathWidget, nullptr, "InitPath", nullptr, nullptr, sizeof(CoreArchiveQuestPathWidget_eventInitPath_Parms), Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestPathWidget_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestPathWidget_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestPathWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestPathWidget_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestPathWidget, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestPathWidget_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestPathWidget_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pathStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pathStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::NewProp_pathStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::NewProp_pathStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::NewProp_pathStatus = { "pathStatus", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestPathWidget_eventSetVisualState_Parms, pathStatus), Z_Construct_UEnum_DBDUIViewInterfaces_EArchivePathStatus, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::NewProp_pathStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::NewProp_pathStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::NewProp_pathStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::NewProp_pathStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestPathWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestPathWidget, nullptr, "SetVisualState", nullptr, nullptr, sizeof(CoreArchiveQuestPathWidget_eventSetVisualState_Parms), Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics
	{
		struct CoreArchiveQuestPathWidget_eventUpdatePath_Parms
		{
			FArchiveMapPathViewData data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveQuestPathWidget_eventUpdatePath_Parms, data), Z_Construct_UScriptStruct_FArchiveMapPathViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveQuestPathWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveQuestPathWidget, nullptr, "UpdatePath", nullptr, nullptr, sizeof(CoreArchiveQuestPathWidget_eventUpdatePath_Parms), Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveQuestPathWidget_NoRegister()
	{
		return UCoreArchiveQuestPathWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathImage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveQuestPathWidget_InitPath, "InitPath" }, // 4128135942
		{ &Z_Construct_UFunction_UCoreArchiveQuestPathWidget_Reset, "Reset" }, // 3009080283
		{ &Z_Construct_UFunction_UCoreArchiveQuestPathWidget_SetVisualState, "SetVisualState" }, // 2669127387
		{ &Z_Construct_UFunction_UCoreArchiveQuestPathWidget_UpdatePath, "UpdatePath" }, // 1014524378
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveQuestPathWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestPathWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestPathWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestPathWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathOverlay = { "PathOverlay", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestPathWidget, PathOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveQuestPathWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestPathWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathImage = { "PathImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestPathWidget, PathImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathImage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__status_MetaData[] = {
		{ "Category", "CoreArchiveQuestPathWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestPathWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__status = { "_status", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestPathWidget, _status), Z_Construct_UEnum_DBDUIViewInterfaces_EArchivePathStatus, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__data_MetaData[] = {
		{ "Category", "CoreArchiveQuestPathWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveQuestPathWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveQuestPathWidget, _data), Z_Construct_UScriptStruct_FArchiveMapPathViewData, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp_PathImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::NewProp__data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveQuestPathWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::ClassParams = {
		&UCoreArchiveQuestPathWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveQuestPathWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveQuestPathWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveQuestPathWidget, 224735420);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveQuestPathWidget>()
	{
		return UCoreArchiveQuestPathWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveQuestPathWidget(Z_Construct_UClass_UCoreArchiveQuestPathWidget, &UCoreArchiveQuestPathWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveQuestPathWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveQuestPathWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
