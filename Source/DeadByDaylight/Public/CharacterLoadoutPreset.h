#pragma once

#include "CoreMinimal.h"
#include "CharacterLoadoutPreset.generated.h"

USTRUCT(BlueprintType)
struct FCharacterLoadoutPreset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName PowerOrItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FName> AddOns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FName> Perks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName Favor;

public:
	DEADBYDAYLIGHT_API FCharacterLoadoutPreset();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterLoadoutPreset) { return 0; }
