// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreImagePreviewAreaWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreImagePreviewAreaWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreImagePreviewAreaWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreImagePreviewAreaWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationItemGridContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreImagePreviewAreaWidget::execOnItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemClicked(Z_Param_selectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreImagePreviewAreaWidget::execSetData)
	{
		P_GET_STRUCT_REF(FCustomizationItemPreviewAreaViewData,Z_Param_Out_viewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_viewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreImagePreviewAreaWidget::execShowBGImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowBGImage_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual = FName(TEXT("SetPreviewContainerVisual"));
	void UCoreImagePreviewAreaWidget::SetPreviewContainerVisual(const ECustomizationCategory customizationCategory)
	{
		CoreImagePreviewAreaWidget_eventSetPreviewContainerVisual_Parms Parms;
		Parms.customizationCategory=customizationCategory;
		ProcessEvent(FindFunctionChecked(NAME_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual),&Parms);
	}
	static FName NAME_UCoreImagePreviewAreaWidget_ShowBGImage = FName(TEXT("ShowBGImage"));
	void UCoreImagePreviewAreaWidget::ShowBGImage()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreImagePreviewAreaWidget_ShowBGImage),NULL);
	}
	void UCoreImagePreviewAreaWidget::StaticRegisterNativesUCoreImagePreviewAreaWidget()
	{
		UClass* Class = UCoreImagePreviewAreaWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnItemClicked", &UCoreImagePreviewAreaWidget::execOnItemClicked },
			{ "SetData", &UCoreImagePreviewAreaWidget::execSetData },
			{ "ShowBGImage", &UCoreImagePreviewAreaWidget::execShowBGImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics
	{
		struct CoreImagePreviewAreaWidget_eventOnItemClicked_Parms
		{
			int32 selectedIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::NewProp_selectedIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::NewProp_selectedIndex = { "selectedIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreImagePreviewAreaWidget_eventOnItemClicked_Parms, selectedIndex), METADATA_PARAMS(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::NewProp_selectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::NewProp_selectedIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::NewProp_selectedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreImagePreviewAreaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreImagePreviewAreaWidget, nullptr, "OnItemClicked", nullptr, nullptr, sizeof(CoreImagePreviewAreaWidget_eventOnItemClicked_Parms), Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics
	{
		struct CoreImagePreviewAreaWidget_eventSetData_Parms
		{
			FCustomizationItemPreviewAreaViewData viewData;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::NewProp_viewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::NewProp_viewData = { "viewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreImagePreviewAreaWidget_eventSetData_Parms, viewData), Z_Construct_UScriptStruct_FCustomizationItemPreviewAreaViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::NewProp_viewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::NewProp_viewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::NewProp_viewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreImagePreviewAreaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreImagePreviewAreaWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreImagePreviewAreaWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_customizationCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_customizationCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::NewProp_customizationCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::NewProp_customizationCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::NewProp_customizationCategory = { "customizationCategory", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreImagePreviewAreaWidget_eventSetPreviewContainerVisual_Parms, customizationCategory), Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::NewProp_customizationCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::NewProp_customizationCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::NewProp_customizationCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::NewProp_customizationCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreImagePreviewAreaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreImagePreviewAreaWidget, nullptr, "SetPreviewContainerVisual", nullptr, nullptr, sizeof(CoreImagePreviewAreaWidget_eventSetPreviewContainerVisual_Parms), Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreImagePreviewAreaWidget_ShowBGImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreImagePreviewAreaWidget_ShowBGImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreImagePreviewAreaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreImagePreviewAreaWidget_ShowBGImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreImagePreviewAreaWidget, nullptr, "ShowBGImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_ShowBGImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreImagePreviewAreaWidget_ShowBGImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreImagePreviewAreaWidget_ShowBGImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreImagePreviewAreaWidget_ShowBGImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreImagePreviewAreaWidget_NoRegister()
	{
		return UCoreImagePreviewAreaWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAreaBG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewAreaBG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemContainerText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemContainerText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreImagePreviewAreaWidget_OnItemClicked, "OnItemClicked" }, // 313471341
		{ &Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetData, "SetData" }, // 2480192963
		{ &Z_Construct_UFunction_UCoreImagePreviewAreaWidget_SetPreviewContainerVisual, "SetPreviewContainerVisual" }, // 1381555258
		{ &Z_Construct_UFunction_UCoreImagePreviewAreaWidget_ShowBGImage, "ShowBGImage" }, // 2367645278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreImagePreviewAreaWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreImagePreviewAreaWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewArea_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreImagePreviewAreaWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreImagePreviewAreaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewArea = { "PreviewArea", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreImagePreviewAreaWidget, PreviewArea), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewAreaBG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreImagePreviewAreaWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreImagePreviewAreaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewAreaBG = { "PreviewAreaBG", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreImagePreviewAreaWidget, PreviewAreaBG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewAreaBG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewAreaBG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreImagePreviewAreaWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreImagePreviewAreaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainerText = { "ItemContainerText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreImagePreviewAreaWidget, ItemContainerText), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainerText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreImagePreviewAreaWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreImagePreviewAreaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainer = { "ItemContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreImagePreviewAreaWidget, ItemContainer), Z_Construct_UClass_UCustomizationItemGridContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_PreviewAreaBG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainerText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::NewProp_ItemContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreImagePreviewAreaWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::ClassParams = {
		&UCoreImagePreviewAreaWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreImagePreviewAreaWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreImagePreviewAreaWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreImagePreviewAreaWidget, 216853620);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreImagePreviewAreaWidget>()
	{
		return UCoreImagePreviewAreaWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreImagePreviewAreaWidget(Z_Construct_UClass_UCoreImagePreviewAreaWidget, &UCoreImagePreviewAreaWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreImagePreviewAreaWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreImagePreviewAreaWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
