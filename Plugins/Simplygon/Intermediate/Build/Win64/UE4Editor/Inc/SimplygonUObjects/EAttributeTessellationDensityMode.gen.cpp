// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EAttributeTessellationDensityMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttributeTessellationDensityMode() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EAttributeTessellationDensityMode();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EAttributeTessellationDensityMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EAttributeTessellationDensityMode, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EAttributeTessellationDensityMode"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EAttributeTessellationDensityMode>()
	{
		return EAttributeTessellationDensityMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttributeTessellationDensityMode(EAttributeTessellationDensityMode_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EAttributeTessellationDensityMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EAttributeTessellationDensityMode_Hash() { return 118606962U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EAttributeTessellationDensityMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttributeTessellationDensityMode"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EAttributeTessellationDensityMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttributeTessellationDensityMode::RelativeArea", (int64)EAttributeTessellationDensityMode::RelativeArea },
				{ "EAttributeTessellationDensityMode::AbsoluteArea", (int64)EAttributeTessellationDensityMode::AbsoluteArea },
				{ "EAttributeTessellationDensityMode::RelativeLength", (int64)EAttributeTessellationDensityMode::RelativeLength },
				{ "EAttributeTessellationDensityMode::AbsoluteLength", (int64)EAttributeTessellationDensityMode::AbsoluteLength },
				{ "EAttributeTessellationDensityMode::UserDefined", (int64)EAttributeTessellationDensityMode::UserDefined },
				{ "EAttributeTessellationDensityMode::OnScreenSize", (int64)EAttributeTessellationDensityMode::OnScreenSize },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbsoluteArea.Name", "EAttributeTessellationDensityMode::AbsoluteArea" },
				{ "AbsoluteLength.Name", "EAttributeTessellationDensityMode::AbsoluteLength" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAttributeTessellationDensityMode.h" },
				{ "OnScreenSize.Name", "EAttributeTessellationDensityMode::OnScreenSize" },
				{ "RelativeArea.Name", "EAttributeTessellationDensityMode::RelativeArea" },
				{ "RelativeLength.Name", "EAttributeTessellationDensityMode::RelativeLength" },
				{ "UserDefined.Name", "EAttributeTessellationDensityMode::UserDefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EAttributeTessellationDensityMode",
				"EAttributeTessellationDensityMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
