// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLYGONUOBJECTS_EGeometryDataFieldType_generated_h
#error "EGeometryDataFieldType.generated.h already included, missing '#pragma once' in EGeometryDataFieldType.h"
#endif
#define SIMPLYGONUOBJECTS_EGeometryDataFieldType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Project_Plugins_Simplygon_Source_SimplygonUObjects_Public_EGeometryDataFieldType_h


#define FOREACH_ENUM_EGEOMETRYDATAFIELDTYPE(op) \
	op(EGeometryDataFieldType::Coords) \
	op(EGeometryDataFieldType::TexCoords) \
	op(EGeometryDataFieldType::Normals) \
	op(EGeometryDataFieldType::Tangents) \
	op(EGeometryDataFieldType::Bitangents) \
	op(EGeometryDataFieldType::Colors) \
	op(EGeometryDataFieldType::TriangleIds) \
	op(EGeometryDataFieldType::MaterialIds) \
	op(EGeometryDataFieldType::VertexIds) \
	op(EGeometryDataFieldType::UserVertexField) \
	op(EGeometryDataFieldType::UserCornerField) \
	op(EGeometryDataFieldType::UserTriangleField) \
	op(EGeometryDataFieldType::CustomField) 

enum class EGeometryDataFieldType : uint8;
template<> SIMPLYGONUOBJECTS_API UEnum* StaticEnum<EGeometryDataFieldType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
