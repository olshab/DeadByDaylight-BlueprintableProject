// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePaginationContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePaginationContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePaginationContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePaginationContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonSelector();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics
	{
		struct CorePaginationContainerWidget_eventOnSelectedPageDelegate_Parms
		{
			int32 selectedPage;
			bool isUpdate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedPage;
		static void NewProp_isUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::NewProp_selectedPage = { "selectedPage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePaginationContainerWidget_eventOnSelectedPageDelegate_Parms, selectedPage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::NewProp_isUpdate_SetBit(void* Obj)
	{
		((CorePaginationContainerWidget_eventOnSelectedPageDelegate_Parms*)Obj)->isUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::NewProp_isUpdate = { "isUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePaginationContainerWidget_eventOnSelectedPageDelegate_Parms), &Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::NewProp_isUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::NewProp_selectedPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::NewProp_isUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePaginationContainerWidget, nullptr, "OnSelectedPageDelegate__DelegateSignature", nullptr, nullptr, sizeof(CorePaginationContainerWidget_eventOnSelectedPageDelegate_Parms), Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCorePaginationContainerWidget::execGetCurrentPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePaginationContainerWidget::execOnPaginationSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPaginationSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePaginationContainerWidget::execUpdateSelectedWidget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_currentIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_numberOfPages);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSelectedWidget(Z_Param_currentIndex,Z_Param_numberOfPages);
		P_NATIVE_END;
	}
	void UCorePaginationContainerWidget::StaticRegisterNativesUCorePaginationContainerWidget()
	{
		UClass* Class = UCorePaginationContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentPage", &UCorePaginationContainerWidget::execGetCurrentPage },
			{ "OnPaginationSelected", &UCorePaginationContainerWidget::execOnPaginationSelected },
			{ "UpdateSelectedWidget", &UCorePaginationContainerWidget::execUpdateSelectedWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics
	{
		struct CorePaginationContainerWidget_eventGetCurrentPage_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePaginationContainerWidget_eventGetCurrentPage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePaginationContainerWidget, nullptr, "GetCurrentPage", nullptr, nullptr, sizeof(CorePaginationContainerWidget_eventGetCurrentPage_Parms), Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics
	{
		struct CorePaginationContainerWidget_eventOnPaginationSelected_Parms
		{
			UCoreSelectableButtonWidget* selectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePaginationContainerWidget_eventOnPaginationSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePaginationContainerWidget, nullptr, "OnPaginationSelected", nullptr, nullptr, sizeof(CorePaginationContainerWidget_eventOnPaginationSelected_Parms), Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics
	{
		struct CorePaginationContainerWidget_eventUpdateSelectedWidget_Parms
		{
			int32 currentIndex;
			int32 numberOfPages;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numberOfPages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::NewProp_currentIndex = { "currentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePaginationContainerWidget_eventUpdateSelectedWidget_Parms, currentIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::NewProp_numberOfPages = { "numberOfPages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePaginationContainerWidget_eventUpdateSelectedWidget_Parms, numberOfPages), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::NewProp_currentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::NewProp_numberOfPages,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePaginationContainerWidget, nullptr, "UpdateSelectedWidget", nullptr, nullptr, sizeof(CorePaginationContainerWidget_eventUpdateSelectedWidget_Parms), Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePaginationContainerWidget_NoRegister()
	{
		return UCorePaginationContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePaginationContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectedPageDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedPageDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaginationWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PaginationWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfPages_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfPages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaginationContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaginationContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstEllipsis_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstEllipsis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEllipsis_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastEllipsis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widgetPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__widgetPadding;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__paginationWidgetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__paginationWidgetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__paginationWidgetList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePaginationContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePaginationContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePaginationContainerWidget_GetCurrentPage, "GetCurrentPage" }, // 1739796472
		{ &Z_Construct_UFunction_UCorePaginationContainerWidget_OnPaginationSelected, "OnPaginationSelected" }, // 4180904584
		{ &Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature, "OnSelectedPageDelegate__DelegateSignature" }, // 1200535059
		{ &Z_Construct_UFunction_UCorePaginationContainerWidget_UpdateSelectedWidget, "UpdateSelectedWidget" }, // 125485689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CorePaginationContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_OnSelectedPageDelegate_MetaData[] = {
		{ "Category", "CorePaginationContainerWidget" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_OnSelectedPageDelegate = { "OnSelectedPageDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, OnSelectedPageDelegate), Z_Construct_UDelegateFunction_UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_OnSelectedPageDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_OnSelectedPageDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationWidgetClass_MetaData[] = {
		{ "Category", "CorePaginationContainerWidget" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationWidgetClass = { "PaginationWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, PaginationWidgetClass), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_MaxNumberOfPages_MetaData[] = {
		{ "Category", "CorePaginationContainerWidget" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_MaxNumberOfPages = { "MaxNumberOfPages", nullptr, (EPropertyFlags)0x0020080002000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, MaxNumberOfPages), METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_MaxNumberOfPages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_MaxNumberOfPages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePaginationContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationContainer = { "PaginationContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, PaginationContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstPage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePaginationContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstPage = { "FirstPage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, FirstPage), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstEllipsis_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePaginationContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstEllipsis = { "FirstEllipsis", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, FirstEllipsis), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstEllipsis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstEllipsis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastEllipsis_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePaginationContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastEllipsis = { "LastEllipsis", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, LastEllipsis), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastEllipsis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastEllipsis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastPage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CorePaginationContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastPage = { "LastPage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, LastPage), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__widgetPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CorePaginationContainerWidget" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__widgetPadding = { "_widgetPadding", nullptr, (EPropertyFlags)0x0040000002000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, _widgetPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__widgetPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__widgetPadding_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__paginationWidgetList_Inner = { "_paginationWidgetList", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__paginationWidgetList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CorePaginationContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePaginationContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__paginationWidgetList = { "_paginationWidgetList", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePaginationContainerWidget, _paginationWidgetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__paginationWidgetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__paginationWidgetList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePaginationContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_OnSelectedPageDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_MaxNumberOfPages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_PaginationContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_FirstEllipsis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastEllipsis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp_LastPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__widgetPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__paginationWidgetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePaginationContainerWidget_Statics::NewProp__paginationWidgetList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePaginationContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePaginationContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePaginationContainerWidget_Statics::ClassParams = {
		&UCorePaginationContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePaginationContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePaginationContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePaginationContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePaginationContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePaginationContainerWidget, 3243771475);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePaginationContainerWidget>()
	{
		return UCorePaginationContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePaginationContainerWidget(Z_Construct_UClass_UCorePaginationContainerWidget, &UCorePaginationContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePaginationContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePaginationContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
