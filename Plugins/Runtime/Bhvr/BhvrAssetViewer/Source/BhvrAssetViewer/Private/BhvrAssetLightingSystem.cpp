#include "BhvrAssetLightingSystem.h"

void ABhvrAssetLightingSystem::SelectLightingRig(const FString& InDisplayName)
{

}

ABhvrAssetLightingSystem::ABhvrAssetLightingSystem()
{
	this->LightingRigs = TArray<ABhvrAssetLightingRig*>();
	this->SelectedLightingRig = NULL;
}
