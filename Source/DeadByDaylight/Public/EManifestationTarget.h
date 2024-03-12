#pragma once

#include "CoreMinimal.h"
#include "EManifestationTarget.generated.h"

UENUM(BlueprintType)
enum class EManifestationTarget : uint8
{
	AllPlayers,
	AllSurvivors,
	AllRitualContributers,
	PerkEquipedSurvivors,
	OnlyOwner,
	AllExceptOwner,
	Slasher,
	None,
};
