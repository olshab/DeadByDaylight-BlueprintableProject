#pragma once

#include "CoreMinimal.h"
#include "CharmIdSlot.h"
#include "CharacterCustomizationPreset.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCustomizationPreset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName Head;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName TorsoOrBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName LegsOrWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FCharmIdSlot> Charms;

public:
	DEADBYDAYLIGHT_API FCharacterCustomizationPreset();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCustomizationPreset) { return 0; }
