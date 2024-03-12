#pragma once

#include "CoreMinimal.h"
#include "CharacterLoadoutPresetsList.h"
#include "LoadoutPresetsDataForGameType.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutPresetsDataForGameType
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharacterLoadoutPresetsList> CharacterLoadoutPresetsList;

public:
	DEADBYDAYLIGHT_API FLoadoutPresetsDataForGameType();
};

FORCEINLINE uint32 GetTypeHash(const FLoadoutPresetsDataForGameType) { return 0; }
