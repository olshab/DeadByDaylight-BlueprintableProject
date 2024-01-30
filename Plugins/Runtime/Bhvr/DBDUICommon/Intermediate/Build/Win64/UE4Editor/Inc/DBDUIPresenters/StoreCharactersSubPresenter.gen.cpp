// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/StoreCharactersSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreCharactersSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreCharactersSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreCharactersSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCharactersFiltersData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStoreCategoryViewData();
// End Cross Module References
	DEFINE_FUNCTION(UStoreCharactersSubPresenter::execOnCategorySelected)
	{
		P_GET_ENUM(ECustomizationCategory,Z_Param_category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCategorySelected(ECustomizationCategory(Z_Param_category));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCharactersSubPresenter::execOnCharactersClearFiltersClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharactersClearFiltersClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCharactersSubPresenter::execOnCharacterSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterSelected(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCharactersSubPresenter::execOnCharactersFiltersChanged)
	{
		P_GET_STRUCT(FStoreCharactersFiltersData,Z_Param_charactersFilterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharactersFiltersChanged(Z_Param_charactersFilterData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCharactersSubPresenter::execOnCustomizationsClearFiltersClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomizationsClearFiltersClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCharactersSubPresenter::execOnCustomizationSelected)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_customizationId);
		P_GET_UBOOL(Z_Param_isSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomizationSelected(Z_Param_customizationId,Z_Param_isSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCharactersSubPresenter::execOnCustomizationsFiltersChanged)
	{
		P_GET_STRUCT(FStoreCharactersFiltersData,Z_Param_customizationsFilterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomizationsFiltersChanged(Z_Param_customizationsFilterData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreCharactersSubPresenter::execOnDisplayStandPawnLoaded)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDisplayStandPawnLoaded(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	void UStoreCharactersSubPresenter::StaticRegisterNativesUStoreCharactersSubPresenter()
	{
		UClass* Class = UStoreCharactersSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCategorySelected", &UStoreCharactersSubPresenter::execOnCategorySelected },
			{ "OnCharactersClearFiltersClicked", &UStoreCharactersSubPresenter::execOnCharactersClearFiltersClicked },
			{ "OnCharacterSelected", &UStoreCharactersSubPresenter::execOnCharacterSelected },
			{ "OnCharactersFiltersChanged", &UStoreCharactersSubPresenter::execOnCharactersFiltersChanged },
			{ "OnCustomizationsClearFiltersClicked", &UStoreCharactersSubPresenter::execOnCustomizationsClearFiltersClicked },
			{ "OnCustomizationSelected", &UStoreCharactersSubPresenter::execOnCustomizationSelected },
			{ "OnCustomizationsFiltersChanged", &UStoreCharactersSubPresenter::execOnCustomizationsFiltersChanged },
			{ "OnDisplayStandPawnLoaded", &UStoreCharactersSubPresenter::execOnDisplayStandPawnLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics
	{
		struct StoreCharactersSubPresenter_eventOnCategorySelected_Parms
		{
			ECustomizationCategory category;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_category_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::NewProp_category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersSubPresenter_eventOnCategorySelected_Parms, category), Z_Construct_UEnum_DBDSharedTypes_ECustomizationCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::NewProp_category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::NewProp_category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSubPresenter, nullptr, "OnCategorySelected", nullptr, nullptr, sizeof(StoreCharactersSubPresenter_eventOnCategorySelected_Parms), Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersClearFiltersClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersClearFiltersClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersClearFiltersClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSubPresenter, nullptr, "OnCharactersClearFiltersClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersClearFiltersClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersClearFiltersClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersClearFiltersClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersClearFiltersClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics
	{
		struct StoreCharactersSubPresenter_eventOnCharacterSelected_Parms
		{
			int32 characterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersSubPresenter_eventOnCharacterSelected_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSubPresenter, nullptr, "OnCharacterSelected", nullptr, nullptr, sizeof(StoreCharactersSubPresenter_eventOnCharacterSelected_Parms), Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics
	{
		struct StoreCharactersSubPresenter_eventOnCharactersFiltersChanged_Parms
		{
			FStoreCharactersFiltersData charactersFilterData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_charactersFilterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::NewProp_charactersFilterData = { "charactersFilterData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersSubPresenter_eventOnCharactersFiltersChanged_Parms, charactersFilterData), Z_Construct_UScriptStruct_FStoreCharactersFiltersData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::NewProp_charactersFilterData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSubPresenter, nullptr, "OnCharactersFiltersChanged", nullptr, nullptr, sizeof(StoreCharactersSubPresenter_eventOnCharactersFiltersChanged_Parms), Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsClearFiltersClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsClearFiltersClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsClearFiltersClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSubPresenter, nullptr, "OnCustomizationsClearFiltersClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsClearFiltersClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsClearFiltersClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsClearFiltersClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsClearFiltersClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics
	{
		struct StoreCharactersSubPresenter_eventOnCustomizationSelected_Parms
		{
			FName customizationId;
			bool isSelected;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_customizationId;
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::NewProp_customizationId = { "customizationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersSubPresenter_eventOnCustomizationSelected_Parms, customizationId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((StoreCharactersSubPresenter_eventOnCustomizationSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreCharactersSubPresenter_eventOnCustomizationSelected_Parms), &Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::NewProp_customizationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSubPresenter, nullptr, "OnCustomizationSelected", nullptr, nullptr, sizeof(StoreCharactersSubPresenter_eventOnCustomizationSelected_Parms), Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics
	{
		struct StoreCharactersSubPresenter_eventOnCustomizationsFiltersChanged_Parms
		{
			FStoreCharactersFiltersData customizationsFilterData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_customizationsFilterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::NewProp_customizationsFilterData = { "customizationsFilterData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersSubPresenter_eventOnCustomizationsFiltersChanged_Parms, customizationsFilterData), Z_Construct_UScriptStruct_FStoreCharactersFiltersData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::NewProp_customizationsFilterData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSubPresenter, nullptr, "OnCustomizationsFiltersChanged", nullptr, nullptr, sizeof(StoreCharactersSubPresenter_eventOnCustomizationsFiltersChanged_Parms), Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics
	{
		struct StoreCharactersSubPresenter_eventOnDisplayStandPawnLoaded_Parms
		{
			int32 characterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreCharactersSubPresenter_eventOnDisplayStandPawnLoaded_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreCharactersSubPresenter, nullptr, "OnDisplayStandPawnLoaded", nullptr, nullptr, sizeof(StoreCharactersSubPresenter_eventOnDisplayStandPawnLoaded_Parms), Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreCharactersSubPresenter_NoRegister()
	{
		return UStoreCharactersSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UStoreCharactersSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreCharactersWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StoreCharactersWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayStandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayStandName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTransitionDurationSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraTransitionDurationSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__availableCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availableCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__availableCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selectedCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__availableCustomizations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availableCustomizations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__availableCustomizations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__filteredCustomizations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__filteredCustomizations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__filteredCustomizations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__availableCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availableCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__availableCategories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__charactersFilterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__charactersFilterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationsFilterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__customizationsFilterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoreSubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCategorySelected, "OnCategorySelected" }, // 1842075972
		{ &Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersClearFiltersClicked, "OnCharactersClearFiltersClicked" }, // 3675004812
		{ &Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharacterSelected, "OnCharacterSelected" }, // 4165905911
		{ &Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCharactersFiltersChanged, "OnCharactersFiltersChanged" }, // 1519343368
		{ &Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsClearFiltersClicked, "OnCustomizationsClearFiltersClicked" }, // 818306805
		{ &Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationSelected, "OnCustomizationSelected" }, // 4148532379
		{ &Z_Construct_UFunction_UStoreCharactersSubPresenter_OnCustomizationsFiltersChanged, "OnCustomizationsFiltersChanged" }, // 1716225566
		{ &Z_Construct_UFunction_UStoreCharactersSubPresenter_OnDisplayStandPawnLoaded, "OnDisplayStandPawnLoaded" }, // 1144091211
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreCharactersSubPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_StoreCharactersWidgetClass_MetaData[] = {
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_StoreCharactersWidgetClass = { "StoreCharactersWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, StoreCharactersWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_StoreCharactersWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_StoreCharactersWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_DisplayStandName_MetaData[] = {
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_DisplayStandName = { "DisplayStandName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, DisplayStandName), METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_DisplayStandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_DisplayStandName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_CameraTransitionDurationSeconds_MetaData[] = {
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_CameraTransitionDurationSeconds = { "CameraTransitionDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, CameraTransitionDurationSeconds), METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_CameraTransitionDurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_CameraTransitionDurationSeconds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCharacters_Inner = { "_availableCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCharacters = { "_availableCharacters", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, _availableCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__selectedCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__selectedCharacter = { "_selectedCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, _selectedCharacter), Z_Construct_UClass_UStoreCharacterItemViewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__selectedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__selectedCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCustomizations_Inner = { "_availableCustomizations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCustomizations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCustomizations = { "_availableCustomizations", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, _availableCustomizations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCustomizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCustomizations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__filteredCustomizations_Inner = { "_filteredCustomizations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStoreCustomizationItemViewData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__filteredCustomizations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__filteredCustomizations = { "_filteredCustomizations", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, _filteredCustomizations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__filteredCustomizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__filteredCustomizations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCategories_Inner = { "_availableCategories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStoreCategoryViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCategories_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCategories = { "_availableCategories", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, _availableCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCategories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__charactersFilterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__charactersFilterData = { "_charactersFilterData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, _charactersFilterData), Z_Construct_UScriptStruct_FStoreCharactersFiltersData, METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__charactersFilterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__charactersFilterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__customizationsFilterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreCharactersSubPresenter" },
		{ "ModuleRelativePath", "Public/StoreCharactersSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__customizationsFilterData = { "_customizationsFilterData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreCharactersSubPresenter, _customizationsFilterData), Z_Construct_UScriptStruct_FStoreCharactersFiltersData, METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__customizationsFilterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__customizationsFilterData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_StoreCharactersWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_DisplayStandName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp_CameraTransitionDurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__selectedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCustomizations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCustomizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__filteredCustomizations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__filteredCustomizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__availableCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__charactersFilterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::NewProp__customizationsFilterData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreCharactersSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::ClassParams = {
		&UStoreCharactersSubPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreCharactersSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreCharactersSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreCharactersSubPresenter, 3284007241);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UStoreCharactersSubPresenter>()
	{
		return UStoreCharactersSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreCharactersSubPresenter(Z_Construct_UClass_UStoreCharactersSubPresenter, &UStoreCharactersSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UStoreCharactersSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreCharactersSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
