// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreBinkVideoPlayerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreBinkVideoPlayerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBinkVideoPlayerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBinkVideoPlayerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCinematicViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreBinkVideoPlayerWidget::execFadeInAnimation_Implementation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeInAnimation_Implementation(Z_Param_fadeInDuration,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBinkVideoPlayerWidget::execFadeOutAnimation_Implementation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOutAnimation_Implementation(Z_Param_fadeOutDuration,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBinkVideoPlayerWidget::execOnEndReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndReached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBinkVideoPlayerWidget::execOnFadeInAnimationComplete)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFadeInAnimationComplete(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBinkVideoPlayerWidget::execOnFadeOutAnimationComplete)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFadeOutAnimationComplete(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBinkVideoPlayerWidget::execOnMediaClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBinkVideoPlayerWidget::execOnMediaOpened)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_openedUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaOpened(Z_Param_openedUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBinkVideoPlayerWidget::execOnSubtitlesChanged)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_subtitlesText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubtitlesChanged(Z_Param_Out_subtitlesText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBinkVideoPlayerWidget::execSetSize_Implementation)
	{
		P_GET_STRUCT(FVector2D,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSize_Implementation(Z_Param_size);
		P_NATIVE_END;
	}
	void UCoreBinkVideoPlayerWidget::StaticRegisterNativesUCoreBinkVideoPlayerWidget()
	{
		UClass* Class = UCoreBinkVideoPlayerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FadeInAnimation_Implementation", &UCoreBinkVideoPlayerWidget::execFadeInAnimation_Implementation },
			{ "FadeOutAnimation_Implementation", &UCoreBinkVideoPlayerWidget::execFadeOutAnimation_Implementation },
			{ "OnEndReached", &UCoreBinkVideoPlayerWidget::execOnEndReached },
			{ "OnFadeInAnimationComplete", &UCoreBinkVideoPlayerWidget::execOnFadeInAnimationComplete },
			{ "OnFadeOutAnimationComplete", &UCoreBinkVideoPlayerWidget::execOnFadeOutAnimationComplete },
			{ "OnMediaClosed", &UCoreBinkVideoPlayerWidget::execOnMediaClosed },
			{ "OnMediaOpened", &UCoreBinkVideoPlayerWidget::execOnMediaOpened },
			{ "OnSubtitlesChanged", &UCoreBinkVideoPlayerWidget::execOnSubtitlesChanged },
			{ "SetSize_Implementation", &UCoreBinkVideoPlayerWidget::execSetSize_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics
	{
		struct CoreBinkVideoPlayerWidget_eventFadeInAnimation_Implementation_Parms
		{
			float fadeInDuration;
			float delay;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_fadeInDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_fadeInDuration = { "fadeInDuration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBinkVideoPlayerWidget_eventFadeInAnimation_Implementation_Parms, fadeInDuration), METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_fadeInDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_fadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_delay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBinkVideoPlayerWidget_eventFadeInAnimation_Implementation_Parms, delay), METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_delay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_fadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBinkVideoPlayerWidget, nullptr, "FadeInAnimation_Implementation", nullptr, nullptr, sizeof(CoreBinkVideoPlayerWidget_eventFadeInAnimation_Implementation_Parms), Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics
	{
		struct CoreBinkVideoPlayerWidget_eventFadeOutAnimation_Implementation_Parms
		{
			float fadeOutDuration;
			float delay;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_fadeOutDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_fadeOutDuration = { "fadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBinkVideoPlayerWidget_eventFadeOutAnimation_Implementation_Parms, fadeOutDuration), METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_fadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_fadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_delay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBinkVideoPlayerWidget_eventFadeOutAnimation_Implementation_Parms, delay), METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_delay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_fadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBinkVideoPlayerWidget, nullptr, "FadeOutAnimation_Implementation", nullptr, nullptr, sizeof(CoreBinkVideoPlayerWidget_eventFadeOutAnimation_Implementation_Parms), Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnEndReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnEndReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnEndReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBinkVideoPlayerWidget, nullptr, "OnEndReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnEndReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnEndReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnEndReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnEndReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics
	{
		struct CoreBinkVideoPlayerWidget_eventOnFadeInAnimationComplete_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBinkVideoPlayerWidget_eventOnFadeInAnimationComplete_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBinkVideoPlayerWidget, nullptr, "OnFadeInAnimationComplete", nullptr, nullptr, sizeof(CoreBinkVideoPlayerWidget_eventOnFadeInAnimationComplete_Parms), Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics
	{
		struct CoreBinkVideoPlayerWidget_eventOnFadeOutAnimationComplete_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBinkVideoPlayerWidget_eventOnFadeOutAnimationComplete_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBinkVideoPlayerWidget, nullptr, "OnFadeOutAnimationComplete", nullptr, nullptr, sizeof(CoreBinkVideoPlayerWidget_eventOnFadeOutAnimationComplete_Parms), Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBinkVideoPlayerWidget, nullptr, "OnMediaClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics
	{
		struct CoreBinkVideoPlayerWidget_eventOnMediaOpened_Parms
		{
			FString openedUrl;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_openedUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_openedUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::NewProp_openedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::NewProp_openedUrl = { "openedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBinkVideoPlayerWidget_eventOnMediaOpened_Parms, openedUrl), METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::NewProp_openedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::NewProp_openedUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::NewProp_openedUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBinkVideoPlayerWidget, nullptr, "OnMediaOpened", nullptr, nullptr, sizeof(CoreBinkVideoPlayerWidget_eventOnMediaOpened_Parms), Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics
	{
		struct CoreBinkVideoPlayerWidget_eventOnSubtitlesChanged_Parms
		{
			TArray<FString> subtitlesText;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_subtitlesText_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subtitlesText_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_subtitlesText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::NewProp_subtitlesText_Inner = { "subtitlesText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::NewProp_subtitlesText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::NewProp_subtitlesText = { "subtitlesText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBinkVideoPlayerWidget_eventOnSubtitlesChanged_Parms, subtitlesText), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::NewProp_subtitlesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::NewProp_subtitlesText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::NewProp_subtitlesText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::NewProp_subtitlesText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBinkVideoPlayerWidget, nullptr, "OnSubtitlesChanged", nullptr, nullptr, sizeof(CoreBinkVideoPlayerWidget_eventOnSubtitlesChanged_Parms), Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics
	{
		struct CoreBinkVideoPlayerWidget_eventSetSize_Implementation_Parms
		{
			FVector2D size;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBinkVideoPlayerWidget_eventSetSize_Implementation_Parms, size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBinkVideoPlayerWidget, nullptr, "SetSize_Implementation", nullptr, nullptr, sizeof(CoreBinkVideoPlayerWidget_eventSetSize_Implementation_Parms), Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreBinkVideoPlayerWidget_NoRegister()
	{
		return UCoreBinkVideoPlayerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoBinkCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoBinkCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoBinkBG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoBinkBG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoBinkSizeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoBinkSizeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoBinkScaleBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoBinkScaleBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoBinkImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoBinkImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__binkMediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__binkMediaPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeInAnimation_Implementation, "FadeInAnimation_Implementation" }, // 1968386777
		{ &Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_FadeOutAnimation_Implementation, "FadeOutAnimation_Implementation" }, // 461636486
		{ &Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnEndReached, "OnEndReached" }, // 602098192
		{ &Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeInAnimationComplete, "OnFadeInAnimationComplete" }, // 3863077524
		{ &Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnFadeOutAnimationComplete, "OnFadeOutAnimationComplete" }, // 1892074132
		{ &Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaClosed, "OnMediaClosed" }, // 3581242192
		{ &Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnMediaOpened, "OnMediaOpened" }, // 108270391
		{ &Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_OnSubtitlesChanged, "OnSubtitlesChanged" }, // 731454056
		{ &Z_Construct_UFunction_UCoreBinkVideoPlayerWidget_SetSize_Implementation, "SetSize_Implementation" }, // 3365374558
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreBinkVideoPlayerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkCanvas_MetaData[] = {
		{ "Category", "CoreBinkVideoPlayerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkCanvas = { "VideoBinkCanvas", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBinkVideoPlayerWidget, VideoBinkCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkBG_MetaData[] = {
		{ "Category", "CoreBinkVideoPlayerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkBG = { "VideoBinkBG", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBinkVideoPlayerWidget, VideoBinkBG), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkBG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkBG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkSizeBox_MetaData[] = {
		{ "Category", "CoreBinkVideoPlayerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkSizeBox = { "VideoBinkSizeBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBinkVideoPlayerWidget, VideoBinkSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkSizeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkScaleBox_MetaData[] = {
		{ "Category", "CoreBinkVideoPlayerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkScaleBox = { "VideoBinkScaleBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBinkVideoPlayerWidget, VideoBinkScaleBox), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkScaleBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkScaleBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkImage_MetaData[] = {
		{ "Category", "CoreBinkVideoPlayerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkImage = { "VideoBinkImage", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBinkVideoPlayerWidget, VideoBinkImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp__binkMediaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreBinkVideoPlayerWidget" },
		{ "ModuleRelativePath", "Public/CoreBinkVideoPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp__binkMediaPlayer = { "_binkMediaPlayer", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBinkVideoPlayerWidget, _binkMediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp__binkMediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp__binkMediaPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkBG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkSizeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkScaleBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp_VideoBinkImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::NewProp__binkMediaPlayer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCinematicViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreBinkVideoPlayerWidget, ICinematicViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreBinkVideoPlayerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::ClassParams = {
		&UCoreBinkVideoPlayerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreBinkVideoPlayerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreBinkVideoPlayerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreBinkVideoPlayerWidget, 830261151);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreBinkVideoPlayerWidget>()
	{
		return UCoreBinkVideoPlayerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreBinkVideoPlayerWidget(Z_Construct_UClass_UCoreBinkVideoPlayerWidget, &UCoreBinkVideoPlayerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreBinkVideoPlayerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreBinkVideoPlayerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
