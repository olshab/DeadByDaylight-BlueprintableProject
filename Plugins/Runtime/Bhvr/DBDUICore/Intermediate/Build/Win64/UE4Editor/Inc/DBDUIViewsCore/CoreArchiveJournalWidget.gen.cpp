// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreArchiveJournalWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreArchiveJournalWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveJournalWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveJournalWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContentWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteButtonContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteSelected__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteEntrySelected__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteCinematicPlayed__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteVoiceOverPlayed__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteVoiceOverAutoplay__DelegateSignature();
	DBDUIVIEWINTERFACES_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteShowImageViewer__DelegateSignature();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UArchiveJournalViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execInitializeArrow)
	{
		P_GET_OBJECT(UCoreInputSwitcherWidget,Z_Param_arrowWidget);
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeArrow(Z_Param_arrowWidget,Z_Param_active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnFirstJournalEntryUnlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFirstJournalEntryUnlocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnJournalEntriesUnlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJournalEntriesUnlocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnLeftArrowTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftArrowTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnRewardImageLoaded)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_loadedTexture);
		P_GET_UBOOL(Z_Param_success);
		P_GET_PROPERTY(FTextProperty,Z_Param_titleText);
		P_GET_PROPERTY(FTextProperty,Z_Param_descriptionText);
		P_GET_PROPERTY(FFloatProperty,Z_Param_textureOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardImageLoaded(Z_Param_loadedTexture,Z_Param_success,Z_Param_titleText,Z_Param_descriptionText,Z_Param_textureOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnRightArrowTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRightArrowTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnVignetteButtonSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVignetteButtonSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnVignetteCinematicSelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVignetteCinematicSelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnVignetteEntrySelected)
	{
		P_GET_OBJECT(UCoreSelectableButtonWidget,Z_Param_selectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVignetteEntrySelected(Z_Param_selectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnVoiceOverAutoPlay)
	{
		P_GET_UBOOL(Z_Param_autoplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVoiceOverAutoPlay(Z_Param_autoplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execOnVoiceOverPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVoiceOverPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreArchiveJournalWidget::execShowImageViewer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowImageViewer();
		P_NATIVE_END;
	}
	static FName NAME_UCoreArchiveJournalWidget_SetBottomFogOffset = FName(TEXT("SetBottomFogOffset"));
	void UCoreArchiveJournalWidget::SetBottomFogOffset(bool hasAudio)
	{
		CoreArchiveJournalWidget_eventSetBottomFogOffset_Parms Parms;
		Parms.hasAudio=hasAudio ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalWidget_SetBottomFogOffset),&Parms);
	}
	static FName NAME_UCoreArchiveJournalWidget_SetEntryImage = FName(TEXT("SetEntryImage"));
	void UCoreArchiveJournalWidget::SetEntryImage(FText const& titleText, FText const& descriptionText, TSoftObjectPtr<UTexture2D> const& rewardImage, float textureOffset)
	{
		CoreArchiveJournalWidget_eventSetEntryImage_Parms Parms;
		Parms.titleText=titleText;
		Parms.descriptionText=descriptionText;
		Parms.rewardImage=rewardImage;
		Parms.textureOffset=textureOffset;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalWidget_SetEntryImage),&Parms);
	}
	static FName NAME_UCoreArchiveJournalWidget_SetEntryText = FName(TEXT("SetEntryText"));
	void UCoreArchiveJournalWidget::SetEntryText(FText const& titleText, FText const& descriptionText)
	{
		CoreArchiveJournalWidget_eventSetEntryText_Parms Parms;
		Parms.titleText=titleText;
		Parms.descriptionText=descriptionText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalWidget_SetEntryText),&Parms);
	}
	static FName NAME_UCoreArchiveJournalWidget_SetTopFogOffset = FName(TEXT("SetTopFogOffset"));
	void UCoreArchiveJournalWidget::SetTopFogOffset(bool hasTitle, bool hasDescription)
	{
		CoreArchiveJournalWidget_eventSetTopFogOffset_Parms Parms;
		Parms.hasTitle=hasTitle ? true : false;
		Parms.hasDescription=hasDescription ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalWidget_SetTopFogOffset),&Parms);
	}
	static FName NAME_UCoreArchiveJournalWidget_SetVignetteText = FName(TEXT("SetVignetteText"));
	void UCoreArchiveJournalWidget::SetVignetteText(FText const& titleText, FText const& subtitleText)
	{
		CoreArchiveJournalWidget_eventSetVignetteText_Parms Parms;
		Parms.titleText=titleText;
		Parms.subtitleText=subtitleText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalWidget_SetVignetteText),&Parms);
	}
	static FName NAME_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility = FName(TEXT("SetVoiceOverButtonsVisibility"));
	void UCoreArchiveJournalWidget::SetVoiceOverButtonsVisibility(bool isVisible)
	{
		CoreArchiveJournalWidget_eventSetVoiceOverButtonsVisibility_Parms Parms;
		Parms.isVisible=isVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility),&Parms);
	}
	static FName NAME_UCoreArchiveJournalWidget_SetVoiceOverText = FName(TEXT("SetVoiceOverText"));
	void UCoreArchiveJournalWidget::SetVoiceOverText(FText const& playVoiceOverText, FText const& stopVoiceOverText, FText const& autoplayVoiceOverText)
	{
		CoreArchiveJournalWidget_eventSetVoiceOverText_Parms Parms;
		Parms.playVoiceOverText=playVoiceOverText;
		Parms.stopVoiceOverText=stopVoiceOverText;
		Parms.autoplayVoiceOverText=autoplayVoiceOverText;
		ProcessEvent(FindFunctionChecked(NAME_UCoreArchiveJournalWidget_SetVoiceOverText),&Parms);
	}
	void UCoreArchiveJournalWidget::StaticRegisterNativesUCoreArchiveJournalWidget()
	{
		UClass* Class = UCoreArchiveJournalWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeArrow", &UCoreArchiveJournalWidget::execInitializeArrow },
			{ "OnFirstJournalEntryUnlocked", &UCoreArchiveJournalWidget::execOnFirstJournalEntryUnlocked },
			{ "OnJournalEntriesUnlocked", &UCoreArchiveJournalWidget::execOnJournalEntriesUnlocked },
			{ "OnLeftArrowTriggered", &UCoreArchiveJournalWidget::execOnLeftArrowTriggered },
			{ "OnRewardImageLoaded", &UCoreArchiveJournalWidget::execOnRewardImageLoaded },
			{ "OnRightArrowTriggered", &UCoreArchiveJournalWidget::execOnRightArrowTriggered },
			{ "OnVignetteButtonSelected", &UCoreArchiveJournalWidget::execOnVignetteButtonSelected },
			{ "OnVignetteCinematicSelected", &UCoreArchiveJournalWidget::execOnVignetteCinematicSelected },
			{ "OnVignetteEntrySelected", &UCoreArchiveJournalWidget::execOnVignetteEntrySelected },
			{ "OnVoiceOverAutoPlay", &UCoreArchiveJournalWidget::execOnVoiceOverAutoPlay },
			{ "OnVoiceOverPlay", &UCoreArchiveJournalWidget::execOnVoiceOverPlay },
			{ "ShowImageViewer", &UCoreArchiveJournalWidget::execShowImageViewer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics
	{
		struct CoreArchiveJournalWidget_eventInitializeArrow_Parms
		{
			UCoreInputSwitcherWidget* arrowWidget;
			bool active;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrowWidget;
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::NewProp_arrowWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::NewProp_arrowWidget = { "arrowWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventInitializeArrow_Parms, arrowWidget), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::NewProp_arrowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::NewProp_arrowWidget_MetaData)) };
	void Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::NewProp_active_SetBit(void* Obj)
	{
		((CoreArchiveJournalWidget_eventInitializeArrow_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalWidget_eventInitializeArrow_Parms), &Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::NewProp_arrowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "InitializeArrow", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventInitializeArrow_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnFirstJournalEntryUnlocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnJournalEntriesUnlocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnJournalEntriesUnlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnJournalEntriesUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnJournalEntriesUnlocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnJournalEntriesUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnJournalEntriesUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnJournalEntriesUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnJournalEntriesUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnLeftArrowTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnLeftArrowTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnLeftArrowTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnLeftArrowTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnLeftArrowTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnLeftArrowTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnLeftArrowTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnLeftArrowTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics
	{
		struct CoreArchiveJournalWidget_eventOnRewardImageLoaded_Parms
		{
			TSoftObjectPtr<UTexture2D> loadedTexture;
			bool success;
			FText titleText;
			FText descriptionText;
			float textureOffset;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_loadedTexture;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_titleText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_descriptionText;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_textureOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_loadedTexture = { "loadedTexture", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventOnRewardImageLoaded_Parms, loadedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_success_SetBit(void* Obj)
	{
		((CoreArchiveJournalWidget_eventOnRewardImageLoaded_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalWidget_eventOnRewardImageLoaded_Parms), &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_titleText = { "titleText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventOnRewardImageLoaded_Parms, titleText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_descriptionText = { "descriptionText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventOnRewardImageLoaded_Parms, descriptionText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_textureOffset = { "textureOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventOnRewardImageLoaded_Parms, textureOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_loadedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_titleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_descriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::NewProp_textureOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnRewardImageLoaded", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventOnRewardImageLoaded_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRightArrowTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRightArrowTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRightArrowTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnRightArrowTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRightArrowTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRightArrowTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRightArrowTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRightArrowTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics
	{
		struct CoreArchiveJournalWidget_eventOnVignetteButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventOnVignetteButtonSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnVignetteButtonSelected", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventOnVignetteButtonSelected_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics
	{
		struct CoreArchiveJournalWidget_eventOnVignetteCinematicSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventOnVignetteCinematicSelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnVignetteCinematicSelected", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventOnVignetteCinematicSelected_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics
	{
		struct CoreArchiveJournalWidget_eventOnVignetteEntrySelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::NewProp_selectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::NewProp_selectedButton = { "selectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventOnVignetteEntrySelected_Parms, selectedButton), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::NewProp_selectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::NewProp_selectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::NewProp_selectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnVignetteEntrySelected", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventOnVignetteEntrySelected_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics
	{
		struct CoreArchiveJournalWidget_eventOnVoiceOverAutoPlay_Parms
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
	void Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::NewProp_autoplay_SetBit(void* Obj)
	{
		((CoreArchiveJournalWidget_eventOnVoiceOverAutoPlay_Parms*)Obj)->autoplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::NewProp_autoplay = { "autoplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalWidget_eventOnVoiceOverAutoPlay_Parms), &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::NewProp_autoplay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::NewProp_autoplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnVoiceOverAutoPlay", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventOnVoiceOverAutoPlay_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "OnVoiceOverPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics
	{
		static void NewProp_hasAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasAudio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::NewProp_hasAudio_SetBit(void* Obj)
	{
		((CoreArchiveJournalWidget_eventSetBottomFogOffset_Parms*)Obj)->hasAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::NewProp_hasAudio = { "hasAudio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalWidget_eventSetBottomFogOffset_Parms), &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::NewProp_hasAudio_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::NewProp_hasAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "SetBottomFogOffset", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventSetBottomFogOffset_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_titleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_titleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_descriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_descriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_rewardImage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_textureOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_titleText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_titleText = { "titleText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetEntryImage_Parms, titleText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_titleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_titleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_descriptionText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_descriptionText = { "descriptionText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetEntryImage_Parms, descriptionText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_descriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_descriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_rewardImage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_rewardImage = { "rewardImage", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetEntryImage_Parms, rewardImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_rewardImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_rewardImage_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_textureOffset = { "textureOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetEntryImage_Parms, textureOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_titleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_descriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_rewardImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::NewProp_textureOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "SetEntryImage", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventSetEntryImage_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_titleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_titleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_descriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_descriptionText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_titleText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_titleText = { "titleText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetEntryText_Parms, titleText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_titleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_titleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_descriptionText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_descriptionText = { "descriptionText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetEntryText_Parms, descriptionText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_descriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_descriptionText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_titleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::NewProp_descriptionText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "SetEntryText", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventSetEntryText_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics
	{
		static void NewProp_hasTitle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasTitle;
		static void NewProp_hasDescription_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::NewProp_hasTitle_SetBit(void* Obj)
	{
		((CoreArchiveJournalWidget_eventSetTopFogOffset_Parms*)Obj)->hasTitle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::NewProp_hasTitle = { "hasTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalWidget_eventSetTopFogOffset_Parms), &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::NewProp_hasTitle_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::NewProp_hasDescription_SetBit(void* Obj)
	{
		((CoreArchiveJournalWidget_eventSetTopFogOffset_Parms*)Obj)->hasDescription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::NewProp_hasDescription = { "hasDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalWidget_eventSetTopFogOffset_Parms), &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::NewProp_hasDescription_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::NewProp_hasTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::NewProp_hasDescription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "SetTopFogOffset", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventSetTopFogOffset_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_titleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_titleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subtitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_subtitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_titleText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_titleText = { "titleText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetVignetteText_Parms, titleText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_titleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_titleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_subtitleText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_subtitleText = { "subtitleText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetVignetteText_Parms, subtitleText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_subtitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_subtitleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_titleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::NewProp_subtitleText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "SetVignetteText", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventSetVignetteText_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isVisible_MetaData[];
#endif
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::NewProp_isVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((CoreArchiveJournalWidget_eventSetVoiceOverButtonsVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreArchiveJournalWidget_eventSetVoiceOverButtonsVisibility_Parms), &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::NewProp_isVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::NewProp_isVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "SetVoiceOverButtonsVisibility", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventSetVoiceOverButtonsVisibility_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playVoiceOverText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_playVoiceOverText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stopVoiceOverText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_stopVoiceOverText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_autoplayVoiceOverText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_autoplayVoiceOverText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText = { "playVoiceOverText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetVoiceOverText_Parms, playVoiceOverText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText = { "stopVoiceOverText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetVoiceOverText_Parms, stopVoiceOverText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText = { "autoplayVoiceOverText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreArchiveJournalWidget_eventSetVoiceOverText_Parms, autoplayVoiceOverText), METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_playVoiceOverText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_stopVoiceOverText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::NewProp_autoplayVoiceOverText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "SetVoiceOverText", nullptr, nullptr, sizeof(CoreArchiveJournalWidget_eventSetVoiceOverText_Parms), Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreArchiveJournalWidget_ShowImageViewer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreArchiveJournalWidget_ShowImageViewer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreArchiveJournalWidget_ShowImageViewer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreArchiveJournalWidget, nullptr, "ShowImageViewer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreArchiveJournalWidget_ShowImageViewer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreArchiveJournalWidget_ShowImageViewer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreArchiveJournalWidget_ShowImageViewer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreArchiveJournalWidget_ShowImageViewer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreArchiveJournalWidget_NoRegister()
	{
		return UCoreArchiveJournalWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreArchiveJournalWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VignetteButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteEntryContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VignetteEntryContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteCinematicsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VignetteCinematicsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftArrowInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftArrowInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArrowInputSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightArrowInputSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreInputsEnabled_MetaData[];
#endif
		static void NewProp_AreInputsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AreInputsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugRewardImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DebugRewardImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardImageMaxDescriptionLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RewardImageMaxDescriptionLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vignetteSelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__vignetteSelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vignetteEntrySelectedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__vignetteEntrySelectedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vignetteCinematicPlayedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__vignetteCinematicPlayedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vignetteVoiceOverPlayedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__vignetteVoiceOverPlayedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vignetteVoiceOverAutoplayDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__vignetteVoiceOverAutoplayDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vignetteShowImageViewerDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__vignetteShowImageViewerDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreTabContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_InitializeArrow, "InitializeArrow" }, // 145354365
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked, "OnFirstJournalEntryUnlocked" }, // 1518321381
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnJournalEntriesUnlocked, "OnJournalEntriesUnlocked" }, // 2429563040
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnLeftArrowTriggered, "OnLeftArrowTriggered" }, // 3665988166
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRewardImageLoaded, "OnRewardImageLoaded" }, // 890559494
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnRightArrowTriggered, "OnRightArrowTriggered" }, // 22812986
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteButtonSelected, "OnVignetteButtonSelected" }, // 1667925849
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteCinematicSelected, "OnVignetteCinematicSelected" }, // 3134651190
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVignetteEntrySelected, "OnVignetteEntrySelected" }, // 697273032
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverAutoPlay, "OnVoiceOverAutoPlay" }, // 1591588392
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_OnVoiceOverPlay, "OnVoiceOverPlay" }, // 3449694946
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetBottomFogOffset, "SetBottomFogOffset" }, // 1082727358
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryImage, "SetEntryImage" }, // 4248479270
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetEntryText, "SetEntryText" }, // 3021789181
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetTopFogOffset, "SetTopFogOffset" }, // 3765367751
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVignetteText, "SetVignetteText" }, // 3746531262
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility, "SetVoiceOverButtonsVisibility" }, // 433160182
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_SetVoiceOverText, "SetVoiceOverText" }, // 980439491
		{ &Z_Construct_UFunction_UCoreArchiveJournalWidget_ShowImageViewer, "ShowImageViewer" }, // 1795232729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreArchiveJournalWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteButtonContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteButtonContainer = { "VignetteButtonContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, VignetteButtonContainer), Z_Construct_UClass_UCoreArchiveVignetteButtonContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteEntryContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteEntryContainer = { "VignetteEntryContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, VignetteEntryContainer), Z_Construct_UClass_UCoreArchiveVignetteEntryContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteEntryContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteEntryContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteCinematicsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteCinematicsContainer = { "VignetteCinematicsContainer", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, VignetteCinematicsContainer), Z_Construct_UClass_UCoreArchiveVignetteCinematicContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteCinematicsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteCinematicsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_LeftArrowInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_LeftArrowInputSwitcher = { "LeftArrowInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, LeftArrowInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_LeftArrowInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_LeftArrowInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RightArrowInputSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RightArrowInputSwitcher = { "RightArrowInputSwitcher", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, RightArrowInputSwitcher), Z_Construct_UClass_UCoreInputSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RightArrowInputSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RightArrowInputSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_AreInputsEnabled_MetaData[] = {
		{ "Category", "CoreArchiveJournalWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_AreInputsEnabled_SetBit(void* Obj)
	{
		((UCoreArchiveJournalWidget*)Obj)->AreInputsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_AreInputsEnabled = { "AreInputsEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreArchiveJournalWidget), &Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_AreInputsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_AreInputsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_AreInputsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_DebugRewardImage_MetaData[] = {
		{ "Category", "CoreArchiveJournalWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_DebugRewardImage = { "DebugRewardImage", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, DebugRewardImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_DebugRewardImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_DebugRewardImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RewardImageMaxDescriptionLength_MetaData[] = {
		{ "Category", "CoreArchiveJournalWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RewardImageMaxDescriptionLength = { "RewardImageMaxDescriptionLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, RewardImageMaxDescriptionLength), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RewardImageMaxDescriptionLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RewardImageMaxDescriptionLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteSelectedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteSelectedDelegate = { "_vignetteSelectedDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteSelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteSelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteSelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteEntrySelectedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteEntrySelectedDelegate = { "_vignetteEntrySelectedDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteEntrySelectedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteEntrySelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteEntrySelectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteEntrySelectedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteCinematicPlayedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteCinematicPlayedDelegate = { "_vignetteCinematicPlayedDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteCinematicPlayedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteCinematicPlayed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteCinematicPlayedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteCinematicPlayedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverPlayedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverPlayedDelegate = { "_vignetteVoiceOverPlayedDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteVoiceOverPlayedDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteVoiceOverPlayed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverPlayedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverPlayedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverAutoplayDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverAutoplayDelegate = { "_vignetteVoiceOverAutoplayDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteVoiceOverAutoplayDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteVoiceOverAutoplay__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverAutoplayDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverAutoplayDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteShowImageViewerDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreArchiveJournalWidget" },
		{ "ModuleRelativePath", "Public/CoreArchiveJournalWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteShowImageViewerDelegate = { "_vignetteShowImageViewerDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreArchiveJournalWidget, _vignetteShowImageViewerDelegate), Z_Construct_UDelegateFunction_DBDUIViewInterfaces_VignetteShowImageViewer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteShowImageViewerDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteShowImageViewerDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteEntryContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_VignetteCinematicsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_LeftArrowInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RightArrowInputSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_AreInputsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_DebugRewardImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp_RewardImageMaxDescriptionLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteSelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteEntrySelectedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteCinematicPlayedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverPlayedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteVoiceOverAutoplayDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::NewProp__vignetteShowImageViewerDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UArchiveJournalViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreArchiveJournalWidget, IArchiveJournalViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreArchiveJournalWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::ClassParams = {
		&UCoreArchiveJournalWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreArchiveJournalWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreArchiveJournalWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreArchiveJournalWidget, 2403831263);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreArchiveJournalWidget>()
	{
		return UCoreArchiveJournalWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreArchiveJournalWidget(Z_Construct_UClass_UCoreArchiveJournalWidget, &UCoreArchiveJournalWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreArchiveJournalWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreArchiveJournalWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
