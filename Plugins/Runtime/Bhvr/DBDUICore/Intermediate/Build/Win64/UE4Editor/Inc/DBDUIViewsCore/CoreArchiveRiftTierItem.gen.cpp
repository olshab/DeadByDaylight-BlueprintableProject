// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveRiftTierItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveRiftTierItem() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveRiftTierItem_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveRiftTierItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_ArchiveRiftTierItemClicked__DelegateSignature();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_ArchiveRiftTierItemUnlockAnimationComplete__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWrapperWidget_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveRiftTierItem::execOnRewardClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardClicked(Z_Param_button);
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveRiftTierItem_Clear = FName(TEXT("Clear"));
	void UCoreArchiveRiftTierItem::Clear()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveRiftTierItem_Clear),NULL);
	}
	static FName NAME_UCoreArchiveRiftTierItem_PlayUnlockanimation = FName(TEXT("PlayUnlockanimation"));
	void UCoreArchiveRiftTierItem::PlayUnlockanimation(bool isPremiumUnlocked, float delay)
	{
		CoreArchiveRiftTierItem_eventPlayUnlockanimation_Parms Parms;
		Parms.isPremiumUnlocked=isPremiumUnlocked ? true : false;
		Parms.delay=delay;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveRiftTierItem_PlayUnlockanimation),&Parms);
	}
	static FName NAME_UCoreArchiveRiftTierItem_SetGenericData = FName(TEXT("SetGenericData"));
	void UCoreArchiveRiftTierItem::SetGenericData(FArchiveRiftTierRewardsViewData const& data)
	{
		CoreArchiveRiftTierItem_eventSetGenericData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveRiftTierItem_SetGenericData),&Parms);
	}
	static FName NAME_UCoreArchiveRiftTierItem_SetLockedState = FName(TEXT("SetLockedState"));
	void UCoreArchiveRiftTierItem::SetLockedState(bool isLocked, bool hasPremium)
	{
		CoreArchiveRiftTierItem_eventSetLockedState_Parms Parms;
		Parms.isLocked=isLocked ? true : false;
		Parms.hasPremium=hasPremium ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveRiftTierItem_SetLockedState),&Parms);
	}
	void UCoreArchiveRiftTierItem::StaticRegisterNativesUCoreArchiveRiftTierItem()
	{
		UClass* Class = UCoreArchiveRiftTierItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRewardClicked", &UCoreArchiveRiftTierItem::execOnRewardClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftTierItem_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftTierItem_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftTierItem, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftTierItem_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftTierItem_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftTierItem_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics
	{
		struct CoreArchiveRiftTierItem_eventOnRewardClicked_Parms
		{
			UCoreButtonWidget* button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftTierItem_eventOnRewardClicked_Parms, button), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftTierItem, nullptr, "OnRewardClicked", nullptr, nullptr, sizeof(CoreArchiveRiftTierItem_eventOnRewardClicked_Parms), Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics
	{
		static void NewProp_isPremiumUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPremiumUnlocked;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::NewProp_isPremiumUnlocked_SetBit(void* Obj)
	{
		((CoreArchiveRiftTierItem_eventPlayUnlockanimation_Parms*)Obj)->isPremiumUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::NewProp_isPremiumUnlocked = { "isPremiumUnlocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveRiftTierItem_eventPlayUnlockanimation_Parms), &Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::NewProp_isPremiumUnlocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftTierItem_eventPlayUnlockanimation_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::NewProp_isPremiumUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftTierItem, nullptr, "PlayUnlockanimation", nullptr, nullptr, sizeof(CoreArchiveRiftTierItem_eventPlayUnlockanimation_Parms), Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveRiftTierItem_eventSetGenericData_Parms, data), Z_Construct_UScriptStruct_FArchiveRiftTierRewardsViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftTierItem, nullptr, "SetGenericData", nullptr, nullptr, sizeof(CoreArchiveRiftTierItem_eventSetGenericData_Parms), Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLocked_MetaData[];
#endif
		static void NewProp_isLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasPremium_MetaData[];
#endif
		static void NewProp_hasPremium_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasPremium;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_isLocked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_isLocked_SetBit(void* Obj)
	{
		((CoreArchiveRiftTierItem_eventSetLockedState_Parms*)Obj)->isLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_isLocked = { "isLocked", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveRiftTierItem_eventSetLockedState_Parms), &Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_isLocked_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_isLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_isLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_hasPremium_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_hasPremium_SetBit(void* Obj)
	{
		((CoreArchiveRiftTierItem_eventSetLockedState_Parms*)Obj)->hasPremium = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_hasPremium = { "hasPremium", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveRiftTierItem_eventSetLockedState_Parms), &Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_hasPremium_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_hasPremium_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_hasPremium_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_isLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::NewProp_hasPremium,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveRiftTierItem, nullptr, "SetLockedState", nullptr, nullptr, sizeof(CoreArchiveRiftTierItem_eventSetLockedState_Parms), Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveRiftTierItem_NoRegister()
	{
		return UCoreArchiveRiftTierItem::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__itemClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unlockAnimationCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__unlockAnimationCompleteDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeRewardsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FreeRewardsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumRewardsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PremiumRewardsContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__freeRewardWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__freeRewardWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__freeRewardWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__premiumRewardWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__premiumRewardWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__premiumRewardWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unlockAnimationCompleteSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__unlockAnimationCompleteSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveRiftTierItem_Clear, "Clear" }, // 4045194909
		{ &Z_Construct_UFunction_UCoreArchiveRiftTierItem_OnRewardClicked, "OnRewardClicked" }, // 2154530870
		{ &Z_Construct_UFunction_UCoreArchiveRiftTierItem_PlayUnlockanimation, "PlayUnlockanimation" }, // 1170779890
		{ &Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetGenericData, "SetGenericData" }, // 3887713671
		{ &Z_Construct_UFunction_UCoreArchiveRiftTierItem_SetLockedState, "SetLockedState" }, // 3924866729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveRiftTierItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__itemClickedDelegate_MetaData[] = {
		{ "Category", "CoreArchiveRiftTierItem" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__itemClickedDelegate = { "_itemClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftTierItem, _itemClickedDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_ArchiveRiftTierItemClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__itemClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__itemClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteDelegate_MetaData[] = {
		{ "Category", "CoreArchiveRiftTierItem" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteDelegate = { "_unlockAnimationCompleteDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftTierItem, _unlockAnimationCompleteDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_ArchiveRiftTierItemUnlockAnimationComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_FreeRewardsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftTierItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_FreeRewardsContainer = { "FreeRewardsContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftTierItem, FreeRewardsContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_FreeRewardsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_FreeRewardsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_PremiumRewardsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveRiftTierItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_PremiumRewardsContainer = { "PremiumRewardsContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftTierItem, PremiumRewardsContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_PremiumRewardsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_PremiumRewardsContainer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__freeRewardWidgets_Inner = { "_freeRewardWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreRewardWrapperWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__freeRewardWidgets_MetaData[] = {
		{ "Category", "CoreArchiveRiftTierItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__freeRewardWidgets = { "_freeRewardWidgets", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftTierItem, _freeRewardWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__freeRewardWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__freeRewardWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__premiumRewardWidgets_Inner = { "_premiumRewardWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreRewardWrapperWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__premiumRewardWidgets_MetaData[] = {
		{ "Category", "CoreArchiveRiftTierItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__premiumRewardWidgets = { "_premiumRewardWidgets", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftTierItem, _premiumRewardWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__premiumRewardWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__premiumRewardWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteSound_MetaData[] = {
		{ "Category", "CoreArchiveRiftTierItem" },
		{ "ModuleRelativePath", "Public/CoreArchiveRiftTierItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteSound = { "_unlockAnimationCompleteSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveRiftTierItem, _unlockAnimationCompleteSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__itemClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_FreeRewardsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp_PremiumRewardsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__freeRewardWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__freeRewardWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__premiumRewardWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__premiumRewardWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::NewProp__unlockAnimationCompleteSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveRiftTierItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::ClassParams = {
		&UCoreArchiveRiftTierItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveRiftTierItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveRiftTierItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveRiftTierItem, 1672586409);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveRiftTierItem>()
	{
		return UCoreArchiveRiftTierItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveRiftTierItem(Z_Construct_UClass_UCoreArchiveRiftTierItem, &UCoreArchiveRiftTierItem::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveRiftTierItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveRiftTierItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
