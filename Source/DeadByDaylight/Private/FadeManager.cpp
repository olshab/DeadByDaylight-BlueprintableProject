#include "FadeManager.h"
#include "UObject/NoExportTypes.h"

void AFadeManager::RemoveFadeMaterials()
{

}

void AFadeManager::FadeAt(FVector CameraLocation)
{

}

void AFadeManager::DBD_ActivateFadeCamera(bool isActivated)
{

}

AFadeManager::AFadeManager()
{
	this->_meshComponents = TSet<UMeshComponent*>();
	this->_fadeMaterials = NULL;
	this->_originalToFade = TMap<TSoftObjectPtr<UMaterialInterface>, TSoftObjectPtr<UMaterialInterface>>();
	this->_fadeToOriginal = TMap<TSoftObjectPtr<UMaterialInterface>, TSoftObjectPtr<UMaterialInterface>>();
	this->_fadedMeshes = TArray<FOriginalMaterials>();
}
