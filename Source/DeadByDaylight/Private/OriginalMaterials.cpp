#include "OriginalMaterials.h"

FOriginalMaterials::FOriginalMaterials()
{
	this->OriginalMaterial = TArray<UMaterialInterface*>();
	this->MeshWithChangedMaterials = NULL;
}
