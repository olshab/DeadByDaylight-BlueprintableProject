#include "Tile2Data.h"

FTile2Data::FTile2Data()
{
	this->TileName = TEXT("");
	this->MinimumSpacing = 0;
	this->MaximumSpacing = 0;
	this->MaximumCount = 0;
	this->Dimension = FVector2D{};
	this->AvailableEscapeTypes = TArray<EscapeStrategyType>();
	this->Type = ETileType::None;
	this->Density = EDensity::Unspecified;
	this->Path = EPathType::None;
	this->Number = 0;
	this->PlaceHolder = false;
	this->Replacement = false;
	this->SpawnPriorityTier = 0;
	this->Weight = 0.0f;
	this->Coord = FVector2D{};
	this->QuadrantSpawnType = EQuadrantSpawnType::L_Shape;
	this->BasementType = EBasementType::None;
	this->AvailableGameplayElementTypes = TArray<EGameplayElementType>();
	this->DiagonalSpacing = false;
	this->TypeSpacing = false;
	this->TileClassType = ETileClassType::None;
}
