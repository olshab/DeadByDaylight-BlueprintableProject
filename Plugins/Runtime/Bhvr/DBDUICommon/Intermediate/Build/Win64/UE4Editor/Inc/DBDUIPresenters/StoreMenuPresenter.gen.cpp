// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/StoreMenuPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreMenuPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreMenuPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreMenuPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EStoreMenuState();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreFeaturedSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSpecialsSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreCollectionsSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSpecialPacksSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreCharactersSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UStoreSubPresenter_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UShopManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStoreMenuPresenter::execOnAllStoreDataLoadComplete)
	{
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAllStoreDataLoadComplete(Z_Param_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreMenuPresenter::execOnBackAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreMenuPresenter::execOnMenuTabSelected)
	{
		P_GET_ENUM(EStoreMenuState,Z_Param_menuState);
		P_GET_UBOOL(Z_Param_alreadySelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuTabSelected(EStoreMenuState(Z_Param_menuState),Z_Param_alreadySelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreMenuPresenter::execOnMoveToCharactersPageRequested)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoveToCharactersPageRequested(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreMenuPresenter::execOnStartSubPresenterAsyncOperation)
	{
		P_GET_OBJECT(USubPresenter,Z_Param_subPresenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartSubPresenterAsyncOperation(Z_Param_subPresenter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreMenuPresenter::execOnStopSubPresenterAsyncOperation)
	{
		P_GET_OBJECT(USubPresenter,Z_Param_subPresenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopSubPresenterAsyncOperation(Z_Param_subPresenter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreMenuPresenter::execOpenAuricCellsOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenAuricCellsOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreMenuPresenter::execOpenRedeemCodePopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenRedeemCodePopup();
		P_NATIVE_END;
	}
	void UStoreMenuPresenter::StaticRegisterNativesUStoreMenuPresenter()
	{
		UClass* Class = UStoreMenuPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAllStoreDataLoadComplete", &UStoreMenuPresenter::execOnAllStoreDataLoadComplete },
			{ "OnBackAction", &UStoreMenuPresenter::execOnBackAction },
			{ "OnMenuTabSelected", &UStoreMenuPresenter::execOnMenuTabSelected },
			{ "OnMoveToCharactersPageRequested", &UStoreMenuPresenter::execOnMoveToCharactersPageRequested },
			{ "OnStartSubPresenterAsyncOperation", &UStoreMenuPresenter::execOnStartSubPresenterAsyncOperation },
			{ "OnStopSubPresenterAsyncOperation", &UStoreMenuPresenter::execOnStopSubPresenterAsyncOperation },
			{ "OpenAuricCellsOverlay", &UStoreMenuPresenter::execOpenAuricCellsOverlay },
			{ "OpenRedeemCodePopup", &UStoreMenuPresenter::execOpenRedeemCodePopup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics
	{
		struct StoreMenuPresenter_eventOnAllStoreDataLoadComplete_Parms
		{
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::NewProp_success_SetBit(void* Obj)
	{
		((StoreMenuPresenter_eventOnAllStoreDataLoadComplete_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreMenuPresenter_eventOnAllStoreDataLoadComplete_Parms), &Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuPresenter, nullptr, "OnAllStoreDataLoadComplete", nullptr, nullptr, sizeof(StoreMenuPresenter_eventOnAllStoreDataLoadComplete_Parms), Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuPresenter_OnBackAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuPresenter_OnBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuPresenter_OnBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuPresenter, nullptr, "OnBackAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuPresenter_OnBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuPresenter_OnBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuPresenter_OnBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics
	{
		struct StoreMenuPresenter_eventOnMenuTabSelected_Parms
		{
			EStoreMenuState menuState;
			bool alreadySelected;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static void NewProp_alreadySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_alreadySelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuPresenter_eventOnMenuTabSelected_Parms, menuState), Z_Construct_UEnum_DBDUIViewInterfaces_EStoreMenuState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::NewProp_alreadySelected_SetBit(void* Obj)
	{
		((StoreMenuPresenter_eventOnMenuTabSelected_Parms*)Obj)->alreadySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::NewProp_alreadySelected = { "alreadySelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StoreMenuPresenter_eventOnMenuTabSelected_Parms), &Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::NewProp_alreadySelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::NewProp_menuState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::NewProp_alreadySelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuPresenter, nullptr, "OnMenuTabSelected", nullptr, nullptr, sizeof(StoreMenuPresenter_eventOnMenuTabSelected_Parms), Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics
	{
		struct StoreMenuPresenter_eventOnMoveToCharactersPageRequested_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuPresenter_eventOnMoveToCharactersPageRequested_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuPresenter, nullptr, "OnMoveToCharactersPageRequested", nullptr, nullptr, sizeof(StoreMenuPresenter_eventOnMoveToCharactersPageRequested_Parms), Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics
	{
		struct StoreMenuPresenter_eventOnStartSubPresenterAsyncOperation_Parms
		{
			USubPresenter* subPresenter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_subPresenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::NewProp_subPresenter = { "subPresenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuPresenter_eventOnStartSubPresenterAsyncOperation_Parms, subPresenter), Z_Construct_UClass_USubPresenter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::NewProp_subPresenter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuPresenter, nullptr, "OnStartSubPresenterAsyncOperation", nullptr, nullptr, sizeof(StoreMenuPresenter_eventOnStartSubPresenterAsyncOperation_Parms), Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics
	{
		struct StoreMenuPresenter_eventOnStopSubPresenterAsyncOperation_Parms
		{
			USubPresenter* subPresenter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_subPresenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::NewProp_subPresenter = { "subPresenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreMenuPresenter_eventOnStopSubPresenterAsyncOperation_Parms, subPresenter), Z_Construct_UClass_USubPresenter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::NewProp_subPresenter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuPresenter, nullptr, "OnStopSubPresenterAsyncOperation", nullptr, nullptr, sizeof(StoreMenuPresenter_eventOnStopSubPresenterAsyncOperation_Parms), Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuPresenter_OpenAuricCellsOverlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuPresenter_OpenAuricCellsOverlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuPresenter_OpenAuricCellsOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuPresenter, nullptr, "OpenAuricCellsOverlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuPresenter_OpenAuricCellsOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OpenAuricCellsOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuPresenter_OpenAuricCellsOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuPresenter_OpenAuricCellsOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreMenuPresenter_OpenRedeemCodePopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreMenuPresenter_OpenRedeemCodePopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreMenuPresenter_OpenRedeemCodePopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreMenuPresenter, nullptr, "OpenRedeemCodePopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreMenuPresenter_OpenRedeemCodePopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreMenuPresenter_OpenRedeemCodePopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreMenuPresenter_OpenRedeemCodePopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreMenuPresenter_OpenRedeemCodePopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreMenuPresenter_NoRegister()
	{
		return UStoreMenuPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UStoreMenuPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StoreMenuWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayStandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayStandName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStoreCameraTransitionDurationSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStoreCameraTransitionDurationSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeFeaturedSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__storeFeaturedSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeSpecialsSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__storeSpecialsSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeCollectionsSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__storeCollectionsSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeSpecialPacksSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__storeSpecialPacksSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__storeCharactersSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__storeCharactersSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeSubPresenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeSubPresenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shopManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__shopManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreMenuPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreMenuPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreMenuPresenter_OnAllStoreDataLoadComplete, "OnAllStoreDataLoadComplete" }, // 237977993
		{ &Z_Construct_UFunction_UStoreMenuPresenter_OnBackAction, "OnBackAction" }, // 227752711
		{ &Z_Construct_UFunction_UStoreMenuPresenter_OnMenuTabSelected, "OnMenuTabSelected" }, // 4234125419
		{ &Z_Construct_UFunction_UStoreMenuPresenter_OnMoveToCharactersPageRequested, "OnMoveToCharactersPageRequested" }, // 2160113541
		{ &Z_Construct_UFunction_UStoreMenuPresenter_OnStartSubPresenterAsyncOperation, "OnStartSubPresenterAsyncOperation" }, // 26451459
		{ &Z_Construct_UFunction_UStoreMenuPresenter_OnStopSubPresenterAsyncOperation, "OnStopSubPresenterAsyncOperation" }, // 2474960779
		{ &Z_Construct_UFunction_UStoreMenuPresenter_OpenAuricCellsOverlay, "OpenAuricCellsOverlay" }, // 2752324745
		{ &Z_Construct_UFunction_UStoreMenuPresenter_OpenRedeemCodePopup, "OpenRedeemCodePopup" }, // 4016805901
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoreMenuPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_StoreMenuWidgetClass_MetaData[] = {
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_StoreMenuWidgetClass = { "StoreMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, StoreMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_StoreMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_StoreMenuWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_DisplayStandName_MetaData[] = {
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_DisplayStandName = { "DisplayStandName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, DisplayStandName), METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_DisplayStandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_DisplayStandName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_InStoreCameraTransitionDurationSeconds_MetaData[] = {
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_InStoreCameraTransitionDurationSeconds = { "InStoreCameraTransitionDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, InStoreCameraTransitionDurationSeconds), METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_InStoreCameraTransitionDurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_InStoreCameraTransitionDurationSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeFeaturedSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeFeaturedSubPresenter = { "_storeFeaturedSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, _storeFeaturedSubPresenter), Z_Construct_UClass_UStoreFeaturedSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeFeaturedSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeFeaturedSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialsSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialsSubPresenter = { "_storeSpecialsSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, _storeSpecialsSubPresenter), Z_Construct_UClass_UStoreSpecialsSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialsSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialsSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCollectionsSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCollectionsSubPresenter = { "_storeCollectionsSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, _storeCollectionsSubPresenter), Z_Construct_UClass_UStoreCollectionsSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCollectionsSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCollectionsSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialPacksSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialPacksSubPresenter = { "_storeSpecialPacksSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, _storeSpecialPacksSubPresenter), Z_Construct_UClass_UStoreSpecialPacksSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialPacksSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialPacksSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCharactersSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCharactersSubPresenter = { "_storeCharactersSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, _storeCharactersSubPresenter), Z_Construct_UClass_UStoreCharactersSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCharactersSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCharactersSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__activeSubPresenter = { "_activeSubPresenter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, _activeSubPresenter), Z_Construct_UClass_UStoreSubPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__activeSubPresenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__shopManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StoreMenuPresenter" },
		{ "ModuleRelativePath", "Public/StoreMenuPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__shopManager = { "_shopManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreMenuPresenter, _shopManager), Z_Construct_UClass_UShopManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__shopManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__shopManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreMenuPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_StoreMenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_DisplayStandName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp_InStoreCameraTransitionDurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeFeaturedSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialsSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCollectionsSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeSpecialPacksSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__storeCharactersSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__activeSubPresenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreMenuPresenter_Statics::NewProp__shopManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreMenuPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreMenuPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreMenuPresenter_Statics::ClassParams = {
		&UStoreMenuPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreMenuPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreMenuPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreMenuPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreMenuPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreMenuPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreMenuPresenter, 2339436657);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UStoreMenuPresenter>()
	{
		return UStoreMenuPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreMenuPresenter(Z_Construct_UClass_UStoreMenuPresenter, &UStoreMenuPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UStoreMenuPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreMenuPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
