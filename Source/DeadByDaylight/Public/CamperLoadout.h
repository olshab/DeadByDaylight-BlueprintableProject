#pragma once

#include "CoreMinimal.h"
#include "DebugLoadoutPerk.h"
#include "CharacterCustomizationDropdown.h"
#include "CharmDropdown.h"
#include "ItemIdDropdown.h"
#include "DebugLoadoutAddon.h"
#include "CamperLoadout.generated.h"

USTRUCT(BlueprintType)
struct FCamperLoadout
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterCustomizationDropdown Camper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharmDropdown Slot0_CharmID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharmDropdown Slot1_CharmID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharmDropdown Slot2_CharmID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemIdDropdown Item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDebugLoadoutAddon> AddonIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDebugLoadoutPerk> Perks;

public:
	DEADBYDAYLIGHT_API FCamperLoadout();
};

FORCEINLINE uint32 GetTypeHash(const FCamperLoadout) { return 0; }
