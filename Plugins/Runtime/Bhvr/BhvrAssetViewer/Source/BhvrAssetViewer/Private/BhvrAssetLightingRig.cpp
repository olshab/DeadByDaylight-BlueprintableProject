#include "BhvrAssetLightingRig.h"

class ULightComponent;

FString ABhvrAssetLightingRig::GetDisplayName_Implementation()
{
	return TEXT("");
}

void ABhvrAssetLightingRig::AddRimLight(ULightComponent* InLight)
{

}

void ABhvrAssetLightingRig::AddKickLight(ULightComponent* InLight)
{

}

void ABhvrAssetLightingRig::AddKeyLight(ULightComponent* InLight)
{

}

void ABhvrAssetLightingRig::AddFogLight(ULightComponent* InLight)
{

}

void ABhvrAssetLightingRig::AddFillLight(ULightComponent* InLight)
{

}

ABhvrAssetLightingRig::ABhvrAssetLightingRig()
{
	this->KeyLightGroup = NULL;
	this->FillLightGroup = NULL;
	this->RimLightGroup = NULL;
	this->KickLightGroup = NULL;
	this->FogLightGroup = NULL;
}
