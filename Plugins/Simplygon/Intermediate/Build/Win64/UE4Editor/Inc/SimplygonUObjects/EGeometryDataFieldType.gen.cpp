// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplygonUObjects/Public/EGeometryDataFieldType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGeometryDataFieldType() {}
// Cross Module References
	SIMPLYGONUOBJECTS_API UEnum* Z_Construct_UEnum_SimplygonUObjects_EGeometryDataFieldType();
	UPackage* Z_Construct_UPackage__Script_SimplygonUObjects();
// End Cross Module References
	static UEnum* EGeometryDataFieldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimplygonUObjects_EGeometryDataFieldType, Z_Construct_UPackage__Script_SimplygonUObjects(), TEXT("EGeometryDataFieldType"));
		}
		return Singleton;
	}
	template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EGeometryDataFieldType>()
	{
		return EGeometryDataFieldType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGeometryDataFieldType(EGeometryDataFieldType_StaticEnum, TEXT("/Script/SimplygonUObjects"), TEXT("EGeometryDataFieldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimplygonUObjects_EGeometryDataFieldType_Hash() { return 3999288093U; }
	UEnum* Z_Construct_UEnum_SimplygonUObjects_EGeometryDataFieldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimplygonUObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGeometryDataFieldType"), 0, Get_Z_Construct_UEnum_SimplygonUObjects_EGeometryDataFieldType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGeometryDataFieldType::Coords", (int64)EGeometryDataFieldType::Coords },
				{ "EGeometryDataFieldType::TexCoords", (int64)EGeometryDataFieldType::TexCoords },
				{ "EGeometryDataFieldType::Normals", (int64)EGeometryDataFieldType::Normals },
				{ "EGeometryDataFieldType::Tangents", (int64)EGeometryDataFieldType::Tangents },
				{ "EGeometryDataFieldType::Bitangents", (int64)EGeometryDataFieldType::Bitangents },
				{ "EGeometryDataFieldType::Colors", (int64)EGeometryDataFieldType::Colors },
				{ "EGeometryDataFieldType::TriangleIds", (int64)EGeometryDataFieldType::TriangleIds },
				{ "EGeometryDataFieldType::MaterialIds", (int64)EGeometryDataFieldType::MaterialIds },
				{ "EGeometryDataFieldType::VertexIds", (int64)EGeometryDataFieldType::VertexIds },
				{ "EGeometryDataFieldType::UserVertexField", (int64)EGeometryDataFieldType::UserVertexField },
				{ "EGeometryDataFieldType::UserCornerField", (int64)EGeometryDataFieldType::UserCornerField },
				{ "EGeometryDataFieldType::UserTriangleField", (int64)EGeometryDataFieldType::UserTriangleField },
				{ "EGeometryDataFieldType::CustomField", (int64)EGeometryDataFieldType::CustomField },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitangents.Name", "EGeometryDataFieldType::Bitangents" },
				{ "BlueprintType", "true" },
				{ "Colors.Name", "EGeometryDataFieldType::Colors" },
				{ "Coords.Name", "EGeometryDataFieldType::Coords" },
				{ "CustomField.Name", "EGeometryDataFieldType::CustomField" },
				{ "MaterialIds.Name", "EGeometryDataFieldType::MaterialIds" },
				{ "ModuleRelativePath", "Public/EGeometryDataFieldType.h" },
				{ "Normals.Name", "EGeometryDataFieldType::Normals" },
				{ "Tangents.Name", "EGeometryDataFieldType::Tangents" },
				{ "TexCoords.Name", "EGeometryDataFieldType::TexCoords" },
				{ "TriangleIds.Name", "EGeometryDataFieldType::TriangleIds" },
				{ "UserCornerField.Name", "EGeometryDataFieldType::UserCornerField" },
				{ "UserTriangleField.Name", "EGeometryDataFieldType::UserTriangleField" },
				{ "UserVertexField.Name", "EGeometryDataFieldType::UserVertexField" },
				{ "VertexIds.Name", "EGeometryDataFieldType::VertexIds" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimplygonUObjects,
				nullptr,
				"EGeometryDataFieldType",
				"EGeometryDataFieldType",
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
