// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveVignetteEntryButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveVignetteEntryButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveVignetteEntryButtonWidget::execGetEntryNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEntryNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveVignetteEntryButtonWidget::execSetData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_entryNumber);
		P_GET_UBOOL(Z_Param_isRead);
		P_GET_UBOOL(Z_Param_isImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_entryNumber,Z_Param_isRead,Z_Param_isImage);
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveVignetteEntryButtonWidget_SetVisualData = FName(TEXT("SetVisualData"));
	void UCoreArchiveVignetteEntryButtonWidget::SetVisualData(const int32 entryNumber, bool isRead, FText const& unreadIndicatorText, bool isImage)
	{
		CoreArchiveVignetteEntryButtonWidget_eventSetVisualData_Parms Parms;
		Parms.entryNumber=entryNumber;
		Parms.isRead=isRead ? true : false;
		Parms.unreadIndicatorText=unreadIndicatorText;
		Parms.isImage=isImage ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveVignetteEntryButtonWidget_SetVisualData),&Parms);
	}
	static FName NAME_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry = FName(TEXT("UnlockEntry"));
	void UCoreArchiveVignetteEntryButtonWidget::UnlockEntry()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry),NULL);
	}
	void UCoreArchiveVignetteEntryButtonWidget::StaticRegisterNativesUCoreArchiveVignetteEntryButtonWidget()
	{
		UClass* Class = UCoreArchiveVignetteEntryButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEntryNumber", &UCoreArchiveVignetteEntryButtonWidget::execGetEntryNumber },
			{ "SetData", &UCoreArchiveVignetteEntryButtonWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics
	{
		struct CoreArchiveVignetteEntryButtonWidget_eventGetEntryNumber_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteEntryButtonWidget_eventGetEntryNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget, nullptr, "GetEntryNumber", nullptr, nullptr, sizeof(CoreArchiveVignetteEntryButtonWidget_eventGetEntryNumber_Parms), Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics
	{
		struct CoreArchiveVignetteEntryButtonWidget_eventSetData_Parms
		{
			int32 entryNumber;
			bool isRead;
			bool isImage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entryNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_entryNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRead_MetaData[];
#endif
		static void NewProp_isRead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isImage_MetaData[];
#endif
		static void NewProp_isImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_entryNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_entryNumber = { "entryNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteEntryButtonWidget_eventSetData_Parms, entryNumber), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_entryNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_entryNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isRead_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isRead_SetBit(void* Obj)
	{
		((CoreArchiveVignetteEntryButtonWidget_eventSetData_Parms*)Obj)->isRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isRead = { "isRead", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteEntryButtonWidget_eventSetData_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isRead_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isRead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isImage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isImage_SetBit(void* Obj)
	{
		((CoreArchiveVignetteEntryButtonWidget_eventSetData_Parms*)Obj)->isImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isImage = { "isImage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteEntryButtonWidget_eventSetData_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isImage_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_entryNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::NewProp_isImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreArchiveVignetteEntryButtonWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entryNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_entryNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRead_MetaData[];
#endif
		static void NewProp_isRead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unreadIndicatorText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_unreadIndicatorText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isImage_MetaData[];
#endif
		static void NewProp_isImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_entryNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_entryNumber = { "entryNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteEntryButtonWidget_eventSetVisualData_Parms, entryNumber), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_entryNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_entryNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isRead_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isRead_SetBit(void* Obj)
	{
		((CoreArchiveVignetteEntryButtonWidget_eventSetVisualData_Parms*)Obj)->isRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isRead = { "isRead", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteEntryButtonWidget_eventSetVisualData_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isRead_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isRead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText = { "unreadIndicatorText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveVignetteEntryButtonWidget_eventSetVisualData_Parms, unreadIndicatorText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isImage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isImage_SetBit(void* Obj)
	{
		((CoreArchiveVignetteEntryButtonWidget_eventSetVisualData_Parms*)Obj)->isImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isImage = { "isImage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveVignetteEntryButtonWidget_eventSetVisualData_Parms), &Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isImage_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_entryNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_unreadIndicatorText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::NewProp_isImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget, nullptr, "SetVisualData", nullptr, nullptr, sizeof(CoreArchiveVignetteEntryButtonWidget_eventSetVisualData_Parms), Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget, nullptr, "UnlockEntry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_NoRegister()
	{
		return UCoreArchiveVignetteEntryButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextIconLocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextIconLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextIconUnlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextIconUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageIconLocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageIconLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageIconUnlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageIconUnlocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber, "GetEntryNumber" }, // 4026455703
		{ &Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetData, "SetData" }, // 4072069420
		{ &Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_SetVisualData, "SetVisualData" }, // 3708304674
		{ &Z_Construct_UFunction_UCoreArchiveVignetteEntryButtonWidget_UnlockEntry, "UnlockEntry" }, // 2952502228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveVignetteEntryButtonWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconLocked_MetaData[] = {
		{ "Category", "CoreArchiveVignetteEntryButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconLocked = { "TextIconLocked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveVignetteEntryButtonWidget, TextIconLocked), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconUnlocked_MetaData[] = {
		{ "Category", "CoreArchiveVignetteEntryButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconUnlocked = { "TextIconUnlocked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveVignetteEntryButtonWidget, TextIconUnlocked), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconLocked_MetaData[] = {
		{ "Category", "CoreArchiveVignetteEntryButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconLocked = { "ImageIconLocked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveVignetteEntryButtonWidget, ImageIconLocked), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconUnlocked_MetaData[] = {
		{ "Category", "CoreArchiveVignetteEntryButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveVignetteEntryButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconUnlocked = { "ImageIconUnlocked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveVignetteEntryButtonWidget, ImageIconUnlocked), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconUnlocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_TextIconUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::NewProp_ImageIconUnlocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveVignetteEntryButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::ClassParams = {
		&UCoreArchiveVignetteEntryButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveVignetteEntryButtonWidget, 3897318366);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveVignetteEntryButtonWidget>()
	{
		return UCoreArchiveVignetteEntryButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveVignetteEntryButtonWidget(Z_Construct_UClass_UCoreArchiveVignetteEntryButtonWidget, &UCoreArchiveVignetteEntryButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveVignetteEntryButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveVignetteEntryButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
