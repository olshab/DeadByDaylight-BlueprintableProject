#pragma once

#include "CoreMinimal.h"
#include "CharmDropdown.h"
#include "CharacterCustomizationDropdown.h"
#include "DebugLoadoutPerk.h"
#include "DebugLoadoutAddon.h"
#include "SlasherLoadout.generated.h"

USTRUCT(BlueprintType)
struct FSlasherLoadout
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharmDropdown Slot0_CharmID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharmDropdown Slot1_CharmID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharmDropdown Slot2_CharmID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDebugLoadoutPerk> Perks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDebugLoadoutAddon> PowerAddonIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterCustomizationDropdown Slasher;

public:
	DEADBYDAYLIGHT_API FSlasherLoadout();
};

FORCEINLINE uint32 GetTypeHash(const FSlasherLoadout) { return 0; }
