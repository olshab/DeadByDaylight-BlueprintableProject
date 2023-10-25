#pragma once

#include "CoreMinimal.h"
#include "CharacterLoadoutPreset.h"
#include "CharacterLoadoutPresetsList.generated.h"

USTRUCT(BlueprintType)
struct FCharacterLoadoutPresetsList
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 ActivePreset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FCharacterLoadoutPreset> Presets;

public:
	DEADBYDAYLIGHT_API FCharacterLoadoutPresetsList();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterLoadoutPresetsList) { return 0; }
