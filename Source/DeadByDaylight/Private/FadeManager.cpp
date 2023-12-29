#include "FadeManager.h"
#include "UObject/NoExportTypes.h"

void AFadeManager::RemoveFadeMaterials()
{

}

void AFadeManager::FadeAt(FVector Location)
{

}

void AFadeManager::DBD_TurnCameraAroundPlayerWithFading(bool isTurning)
{

}

void AFadeManager::DBD_FadeAtCurrentCameraLocation(bool isEnabled)
{

}

AFadeManager::AFadeManager()
{
	this->_meshComponents = TSet<UMeshComponent*>();
	this->_fadeMaterials = NULL;
	this->_fadedMeshes = TArray<FOriginalMaterials>();
}
