#include "BhvrAssetEnvironmentSystem.h"

void ABhvrAssetEnvironmentSystem::SelectEnvironment(const FString& InDisplayName)
{

}

ABhvrAssetEnvironmentSystem::ABhvrAssetEnvironmentSystem()
{
	this->Environments = TArray<ABhvrAssetEnvironment*>();
	this->SelectedEnvironment = NULL;
}
