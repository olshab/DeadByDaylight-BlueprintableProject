// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDUIViewsMobile_init() {}
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsMobile_OnHighlightWidgetClicked__DelegateSignature();
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsMobile_OnScrollListPageButtonClicked__DelegateSignature();
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_UUMGBaseButtonWidget_OnBaseButtonReleased__DelegateSignature();
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_UUMGBaseButtonWidget_OnBaseButtonPressed__DelegateSignature();
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_UUMGBaseButtonWidget_OnBaseButtonLongPress__DelegateSignature();
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_UUMGBaseButtonWidget_OnBaseButtonClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DBDUIViewsMobile_OnHighlightWidgetClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DBDUIViewsMobile_OnScrollListPageButtonClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UUMGBaseButtonWidget_OnBaseButtonReleased__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UUMGBaseButtonWidget_OnBaseButtonPressed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UUMGBaseButtonWidget_OnBaseButtonLongPress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UUMGBaseButtonWidget_OnBaseButtonClicked__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/DBDUIViewsMobile",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF5D0AB59,
				0x64484830,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
