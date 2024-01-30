// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PlayerProfilePresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerProfilePresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPlayerProfilePresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPlayerProfilePresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCombinedSpecialEventData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESpecialEventStatus();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopWalletUpdate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerProfilePresenter::execFocusPlayerProfile)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_filter);
		P_GET_PROPERTY(FByteProperty,Z_Param_currencyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FocusPlayerProfile(Z_Param_filter,Z_Param_currencyFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execGetPlayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetPlayerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execHidePlayerProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePlayerProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execOnCurrentSpecialEventChanged)
	{
		P_GET_STRUCT_REF(FCombinedSpecialEventData,Z_Param_Out_previousSpecialEvent);
		P_GET_ENUM(ESpecialEventStatus,Z_Param_previousSpecialEventStatus);
		P_GET_STRUCT_REF(FCombinedSpecialEventData,Z_Param_Out_currentSpecialEvent);
		P_GET_ENUM(ESpecialEventStatus,Z_Param_currentSpecialEventStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentSpecialEventChanged(Z_Param_Out_previousSpecialEvent,ESpecialEventStatus(Z_Param_previousSpecialEventStatus),Z_Param_Out_currentSpecialEvent,ESpecialEventStatus(Z_Param_currentSpecialEventStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execOnPlayerProfileClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerProfileClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execOnPlayerProfileCurrencyClicked)
	{
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerProfileCurrencyClicked(ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execOnResetPlayerProfileCurrencyFilter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResetPlayerProfileCurrencyFilter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execOnResetPlayerProfileFilter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResetPlayerProfileFilter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execOnUpdatePlayerProfileCurrencyFilter)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_currencyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatePlayerProfileCurrencyFilter(Z_Param_currencyFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execOnUpdatePlayerProfileFilter)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatePlayerProfileFilter(Z_Param_filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execOnWalletUpdated)
	{
		P_GET_TARRAY_REF(FShopWalletUpdate,Z_Param_Out_walletUpdates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWalletUpdated(Z_Param_Out_walletUpdates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execRefreshPlayerCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshPlayerCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execRefreshWallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshWallet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execSetSpecialEventCurrency)
	{
		P_GET_ENUM(ECurrencyType,Z_Param_specialEventCurrencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpecialEventCurrency(ECurrencyType(Z_Param_specialEventCurrencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execShowPlayerProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPlayerProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerProfilePresenter::execUnfocusPlayerProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnfocusPlayerProfile();
		P_NATIVE_END;
	}
	void UPlayerProfilePresenter::StaticRegisterNativesUPlayerProfilePresenter()
	{
		UClass* Class = UPlayerProfilePresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FocusPlayerProfile", &UPlayerProfilePresenter::execFocusPlayerProfile },
			{ "GetPlayerName", &UPlayerProfilePresenter::execGetPlayerName },
			{ "HidePlayerProfile", &UPlayerProfilePresenter::execHidePlayerProfile },
			{ "OnCurrentSpecialEventChanged", &UPlayerProfilePresenter::execOnCurrentSpecialEventChanged },
			{ "OnPlayerProfileClicked", &UPlayerProfilePresenter::execOnPlayerProfileClicked },
			{ "OnPlayerProfileCurrencyClicked", &UPlayerProfilePresenter::execOnPlayerProfileCurrencyClicked },
			{ "OnResetPlayerProfileCurrencyFilter", &UPlayerProfilePresenter::execOnResetPlayerProfileCurrencyFilter },
			{ "OnResetPlayerProfileFilter", &UPlayerProfilePresenter::execOnResetPlayerProfileFilter },
			{ "OnUpdatePlayerProfileCurrencyFilter", &UPlayerProfilePresenter::execOnUpdatePlayerProfileCurrencyFilter },
			{ "OnUpdatePlayerProfileFilter", &UPlayerProfilePresenter::execOnUpdatePlayerProfileFilter },
			{ "OnWalletUpdated", &UPlayerProfilePresenter::execOnWalletUpdated },
			{ "RefreshPlayerCard", &UPlayerProfilePresenter::execRefreshPlayerCard },
			{ "RefreshWallet", &UPlayerProfilePresenter::execRefreshWallet },
			{ "SetSpecialEventCurrency", &UPlayerProfilePresenter::execSetSpecialEventCurrency },
			{ "ShowPlayerProfile", &UPlayerProfilePresenter::execShowPlayerProfile },
			{ "UnfocusPlayerProfile", &UPlayerProfilePresenter::execUnfocusPlayerProfile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics
	{
		struct PlayerProfilePresenter_eventFocusPlayerProfile_Parms
		{
			uint8 filter;
			uint8 currencyFilter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_filter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventFocusPlayerProfile_Parms, filter), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_filter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_currencyFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_currencyFilter = { "currencyFilter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventFocusPlayerProfile_Parms, currencyFilter), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_currencyFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_currencyFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::NewProp_currencyFilter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "FocusPlayerProfile", nullptr, nullptr, sizeof(PlayerProfilePresenter_eventFocusPlayerProfile_Parms), Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics
	{
		struct PlayerProfilePresenter_eventGetPlayerName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventGetPlayerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "GetPlayerName", nullptr, nullptr, sizeof(PlayerProfilePresenter_eventGetPlayerName_Parms), Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_HidePlayerProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_HidePlayerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_HidePlayerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "HidePlayerProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_HidePlayerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_HidePlayerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_HidePlayerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_HidePlayerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics
	{
		struct PlayerProfilePresenter_eventOnCurrentSpecialEventChanged_Parms
		{
			FCombinedSpecialEventData previousSpecialEvent;
			ESpecialEventStatus previousSpecialEventStatus;
			FCombinedSpecialEventData currentSpecialEvent;
			ESpecialEventStatus currentSpecialEventStatus;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_previousSpecialEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_previousSpecialEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_previousSpecialEventStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_previousSpecialEventStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentSpecialEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentSpecialEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentSpecialEventStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentSpecialEventStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_previousSpecialEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_previousSpecialEvent = { "previousSpecialEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventOnCurrentSpecialEventChanged_Parms, previousSpecialEvent), Z_Construct_UScriptStruct_FCombinedSpecialEventData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_previousSpecialEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_previousSpecialEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_previousSpecialEventStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_previousSpecialEventStatus = { "previousSpecialEventStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventOnCurrentSpecialEventChanged_Parms, previousSpecialEventStatus), Z_Construct_UEnum_DeadByDaylight_ESpecialEventStatus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_currentSpecialEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_currentSpecialEvent = { "currentSpecialEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventOnCurrentSpecialEventChanged_Parms, currentSpecialEvent), Z_Construct_UScriptStruct_FCombinedSpecialEventData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_currentSpecialEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_currentSpecialEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_currentSpecialEventStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_currentSpecialEventStatus = { "currentSpecialEventStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventOnCurrentSpecialEventChanged_Parms, currentSpecialEventStatus), Z_Construct_UEnum_DeadByDaylight_ESpecialEventStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_previousSpecialEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_previousSpecialEventStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_previousSpecialEventStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_currentSpecialEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_currentSpecialEventStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::NewProp_currentSpecialEventStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "OnCurrentSpecialEventChanged", nullptr, nullptr, sizeof(PlayerProfilePresenter_eventOnCurrentSpecialEventChanged_Parms), Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "OnPlayerProfileClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics
	{
		struct PlayerProfilePresenter_eventOnPlayerProfileCurrencyClicked_Parms
		{
			ECurrencyType currencyType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventOnPlayerProfileCurrencyClicked_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::NewProp_currencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "OnPlayerProfileCurrencyClicked", nullptr, nullptr, sizeof(PlayerProfilePresenter_eventOnPlayerProfileCurrencyClicked_Parms), Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileCurrencyFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileCurrencyFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileCurrencyFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "OnResetPlayerProfileCurrencyFilter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileCurrencyFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileCurrencyFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileCurrencyFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileCurrencyFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "OnResetPlayerProfileFilter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics
	{
		struct PlayerProfilePresenter_eventOnUpdatePlayerProfileCurrencyFilter_Parms
		{
			uint8 currencyFilter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::NewProp_currencyFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::NewProp_currencyFilter = { "currencyFilter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventOnUpdatePlayerProfileCurrencyFilter_Parms, currencyFilter), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::NewProp_currencyFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::NewProp_currencyFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::NewProp_currencyFilter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "OnUpdatePlayerProfileCurrencyFilter", nullptr, nullptr, sizeof(PlayerProfilePresenter_eventOnUpdatePlayerProfileCurrencyFilter_Parms), Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics
	{
		struct PlayerProfilePresenter_eventOnUpdatePlayerProfileFilter_Parms
		{
			uint8 filter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::NewProp_filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventOnUpdatePlayerProfileFilter_Parms, filter), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::NewProp_filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::NewProp_filter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::NewProp_filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "OnUpdatePlayerProfileFilter", nullptr, nullptr, sizeof(PlayerProfilePresenter_eventOnUpdatePlayerProfileFilter_Parms), Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics
	{
		struct PlayerProfilePresenter_eventOnWalletUpdated_Parms
		{
			TArray<FShopWalletUpdate> walletUpdates;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_walletUpdates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walletUpdates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_walletUpdates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::NewProp_walletUpdates_Inner = { "walletUpdates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShopWalletUpdate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::NewProp_walletUpdates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::NewProp_walletUpdates = { "walletUpdates", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventOnWalletUpdated_Parms, walletUpdates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::NewProp_walletUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::NewProp_walletUpdates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::NewProp_walletUpdates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::NewProp_walletUpdates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "OnWalletUpdated", nullptr, nullptr, sizeof(PlayerProfilePresenter_eventOnWalletUpdated_Parms), Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_RefreshPlayerCard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_RefreshPlayerCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_RefreshPlayerCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "RefreshPlayerCard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_RefreshPlayerCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_RefreshPlayerCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_RefreshPlayerCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_RefreshPlayerCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_RefreshWallet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_RefreshWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_RefreshWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "RefreshWallet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_RefreshWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_RefreshWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_RefreshWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_RefreshWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics
	{
		struct PlayerProfilePresenter_eventSetSpecialEventCurrency_Parms
		{
			ECurrencyType specialEventCurrencyType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_specialEventCurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_specialEventCurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_specialEventCurrencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::NewProp_specialEventCurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::NewProp_specialEventCurrencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::NewProp_specialEventCurrencyType = { "specialEventCurrencyType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerProfilePresenter_eventSetSpecialEventCurrency_Parms, specialEventCurrencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::NewProp_specialEventCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::NewProp_specialEventCurrencyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::NewProp_specialEventCurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::NewProp_specialEventCurrencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "SetSpecialEventCurrency", nullptr, nullptr, sizeof(PlayerProfilePresenter_eventSetSpecialEventCurrency_Parms), Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_ShowPlayerProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_ShowPlayerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_ShowPlayerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "ShowPlayerProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_ShowPlayerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_ShowPlayerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_ShowPlayerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_ShowPlayerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerProfilePresenter_UnfocusPlayerProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerProfilePresenter_UnfocusPlayerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerProfilePresenter_UnfocusPlayerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerProfilePresenter, nullptr, "UnfocusPlayerProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerProfilePresenter_UnfocusPlayerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerProfilePresenter_UnfocusPlayerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerProfilePresenter_UnfocusPlayerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerProfilePresenter_UnfocusPlayerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerProfilePresenter_NoRegister()
	{
		return UPlayerProfilePresenter::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerProfilePresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorePlayerProfileWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CorePlayerProfileWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerProfilePresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerProfilePresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_FocusPlayerProfile, "FocusPlayerProfile" }, // 3052261337
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_GetPlayerName, "GetPlayerName" }, // 2629084001
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_HidePlayerProfile, "HidePlayerProfile" }, // 3419079229
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_OnCurrentSpecialEventChanged, "OnCurrentSpecialEventChanged" }, // 3462498312
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileClicked, "OnPlayerProfileClicked" }, // 2674123600
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_OnPlayerProfileCurrencyClicked, "OnPlayerProfileCurrencyClicked" }, // 1301085111
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileCurrencyFilter, "OnResetPlayerProfileCurrencyFilter" }, // 1562815765
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_OnResetPlayerProfileFilter, "OnResetPlayerProfileFilter" }, // 2227777938
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileCurrencyFilter, "OnUpdatePlayerProfileCurrencyFilter" }, // 3430283865
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_OnUpdatePlayerProfileFilter, "OnUpdatePlayerProfileFilter" }, // 387533019
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_OnWalletUpdated, "OnWalletUpdated" }, // 4263951239
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_RefreshPlayerCard, "RefreshPlayerCard" }, // 713938996
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_RefreshWallet, "RefreshWallet" }, // 1882307801
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_SetSpecialEventCurrency, "SetSpecialEventCurrency" }, // 3995597126
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_ShowPlayerProfile, "ShowPlayerProfile" }, // 2011011110
		{ &Z_Construct_UFunction_UPlayerProfilePresenter_UnfocusPlayerProfile, "UnfocusPlayerProfile" }, // 3970146133
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerProfilePresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerProfilePresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerProfilePresenter_Statics::NewProp_CorePlayerProfileWidgetClass_MetaData[] = {
		{ "Category", "PlayerProfilePresenter" },
		{ "ModuleRelativePath", "Public/PlayerProfilePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerProfilePresenter_Statics::NewProp_CorePlayerProfileWidgetClass = { "CorePlayerProfileWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerProfilePresenter, CorePlayerProfileWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlayerProfilePresenter_Statics::NewProp_CorePlayerProfileWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerProfilePresenter_Statics::NewProp_CorePlayerProfileWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerProfilePresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerProfilePresenter_Statics::NewProp_CorePlayerProfileWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerProfilePresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerProfilePresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerProfilePresenter_Statics::ClassParams = {
		&UPlayerProfilePresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerProfilePresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerProfilePresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerProfilePresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerProfilePresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerProfilePresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerProfilePresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerProfilePresenter, 2829537301);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPlayerProfilePresenter>()
	{
		return UPlayerProfilePresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerProfilePresenter(Z_Construct_UClass_UPlayerProfilePresenter, &UPlayerProfilePresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPlayerProfilePresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerProfilePresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
