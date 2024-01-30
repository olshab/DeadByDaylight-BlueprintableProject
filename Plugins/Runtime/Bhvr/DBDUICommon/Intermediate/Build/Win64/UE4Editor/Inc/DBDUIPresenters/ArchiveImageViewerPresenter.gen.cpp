// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ArchiveImageViewerPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveImageViewerPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveImageViewerPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UArchiveImageViewerPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UArchiveImageViewerPresenter::execCanShowFullScreenMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanShowFullScreenMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveImageViewerPresenter::execOnArchivesVoiceOverAutoplay)
	{
		P_GET_UBOOL(Z_Param_autoplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnArchivesVoiceOverAutoplay(Z_Param_autoplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveImageViewerPresenter::execOnArchivesVoiceOverPlayed)
	{
		P_GET_UBOOL(Z_Param_playing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnArchivesVoiceOverPlayed(Z_Param_playing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveImageViewerPresenter::execOnBackAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveImageViewerPresenter::execOnImageViewerVoiceOverAutoplay)
	{
		P_GET_UBOOL(Z_Param_autoplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImageViewerVoiceOverAutoplay(Z_Param_autoplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveImageViewerPresenter::execOnImageViewerVoiceOverPlayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImageViewerVoiceOverPlayed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchiveImageViewerPresenter::execOnTextVisibilityChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextVisibilityChanged();
		P_NATIVE_END;
	}
	void UArchiveImageViewerPresenter::StaticRegisterNativesUArchiveImageViewerPresenter()
	{
		UClass* Class = UArchiveImageViewerPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanShowFullScreenMode", &UArchiveImageViewerPresenter::execCanShowFullScreenMode },
			{ "OnArchivesVoiceOverAutoplay", &UArchiveImageViewerPresenter::execOnArchivesVoiceOverAutoplay },
			{ "OnArchivesVoiceOverPlayed", &UArchiveImageViewerPresenter::execOnArchivesVoiceOverPlayed },
			{ "OnBackAction", &UArchiveImageViewerPresenter::execOnBackAction },
			{ "OnImageViewerVoiceOverAutoplay", &UArchiveImageViewerPresenter::execOnImageViewerVoiceOverAutoplay },
			{ "OnImageViewerVoiceOverPlayed", &UArchiveImageViewerPresenter::execOnImageViewerVoiceOverPlayed },
			{ "OnTextVisibilityChanged", &UArchiveImageViewerPresenter::execOnTextVisibilityChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics
	{
		struct ArchiveImageViewerPresenter_eventCanShowFullScreenMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArchiveImageViewerPresenter_eventCanShowFullScreenMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveImageViewerPresenter_eventCanShowFullScreenMode_Parms), &Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerPresenter, nullptr, "CanShowFullScreenMode", nullptr, nullptr, sizeof(ArchiveImageViewerPresenter_eventCanShowFullScreenMode_Parms), Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics
	{
		struct ArchiveImageViewerPresenter_eventOnArchivesVoiceOverAutoplay_Parms
		{
			bool autoplay;
		};
		static void NewProp_autoplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::NewProp_autoplay_SetBit(void* Obj)
	{
		((ArchiveImageViewerPresenter_eventOnArchivesVoiceOverAutoplay_Parms*)Obj)->autoplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::NewProp_autoplay = { "autoplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveImageViewerPresenter_eventOnArchivesVoiceOverAutoplay_Parms), &Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::NewProp_autoplay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::NewProp_autoplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerPresenter, nullptr, "OnArchivesVoiceOverAutoplay", nullptr, nullptr, sizeof(ArchiveImageViewerPresenter_eventOnArchivesVoiceOverAutoplay_Parms), Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics
	{
		struct ArchiveImageViewerPresenter_eventOnArchivesVoiceOverPlayed_Parms
		{
			bool playing;
		};
		static void NewProp_playing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::NewProp_playing_SetBit(void* Obj)
	{
		((ArchiveImageViewerPresenter_eventOnArchivesVoiceOverPlayed_Parms*)Obj)->playing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::NewProp_playing = { "playing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveImageViewerPresenter_eventOnArchivesVoiceOverPlayed_Parms), &Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::NewProp_playing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::NewProp_playing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerPresenter, nullptr, "OnArchivesVoiceOverPlayed", nullptr, nullptr, sizeof(ArchiveImageViewerPresenter_eventOnArchivesVoiceOverPlayed_Parms), Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveImageViewerPresenter_OnBackAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerPresenter_OnBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerPresenter_OnBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerPresenter, nullptr, "OnBackAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerPresenter_OnBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerPresenter_OnBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics
	{
		struct ArchiveImageViewerPresenter_eventOnImageViewerVoiceOverAutoplay_Parms
		{
			bool autoplay;
		};
		static void NewProp_autoplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay_SetBit(void* Obj)
	{
		((ArchiveImageViewerPresenter_eventOnImageViewerVoiceOverAutoplay_Parms*)Obj)->autoplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay = { "autoplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArchiveImageViewerPresenter_eventOnImageViewerVoiceOverAutoplay_Parms), &Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::NewProp_autoplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerPresenter, nullptr, "OnImageViewerVoiceOverAutoplay", nullptr, nullptr, sizeof(ArchiveImageViewerPresenter_eventOnImageViewerVoiceOverAutoplay_Parms), Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerPresenter, nullptr, "OnImageViewerVoiceOverPlayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchiveImageViewerPresenter_OnTextVisibilityChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchiveImageViewerPresenter_OnTextVisibilityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveImageViewerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveImageViewerPresenter_OnTextVisibilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveImageViewerPresenter, nullptr, "OnTextVisibilityChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnTextVisibilityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveImageViewerPresenter_OnTextVisibilityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchiveImageViewerPresenter_OnTextVisibilityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchiveImageViewerPresenter_OnTextVisibilityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchiveImageViewerPresenter_NoRegister()
	{
		return UArchiveImageViewerPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UArchiveImageViewerPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveImageViewerWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ArchiveImageViewerWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveImageViewerPresenter_CanShowFullScreenMode, "CanShowFullScreenMode" }, // 1659384200
		{ &Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay, "OnArchivesVoiceOverAutoplay" }, // 883759946
		{ &Z_Construct_UFunction_UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed, "OnArchivesVoiceOverPlayed" }, // 285245792
		{ &Z_Construct_UFunction_UArchiveImageViewerPresenter_OnBackAction, "OnBackAction" }, // 770251469
		{ &Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay, "OnImageViewerVoiceOverAutoplay" }, // 3870807632
		{ &Z_Construct_UFunction_UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed, "OnImageViewerVoiceOverPlayed" }, // 803983113
		{ &Z_Construct_UFunction_UArchiveImageViewerPresenter_OnTextVisibilityChanged, "OnTextVisibilityChanged" }, // 1309830598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchiveImageViewerPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchiveImageViewerPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::NewProp_ArchiveImageViewerWidgetClass_MetaData[] = {
		{ "Category", "ArchiveImageViewerPresenter" },
		{ "ModuleRelativePath", "Public/ArchiveImageViewerPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::NewProp_ArchiveImageViewerWidgetClass = { "ArchiveImageViewerWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArchiveImageViewerPresenter, ArchiveImageViewerWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::NewProp_ArchiveImageViewerWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::NewProp_ArchiveImageViewerWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::NewProp_ArchiveImageViewerWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveImageViewerPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::ClassParams = {
		&UArchiveImageViewerPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchiveImageViewerPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchiveImageViewerPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchiveImageViewerPresenter, 1946148392);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UArchiveImageViewerPresenter>()
	{
		return UArchiveImageViewerPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchiveImageViewerPresenter(Z_Construct_UClass_UArchiveImageViewerPresenter, &UArchiveImageViewerPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UArchiveImageViewerPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveImageViewerPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
