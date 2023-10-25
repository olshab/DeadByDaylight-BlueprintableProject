#pragma once

#include "CoreMinimal.h"
#include "CharacterCustomizationPreset.h"
#include "CharacterCustomizationPresetsList.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCustomizationPresetsList
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 ActivePreset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FCharacterCustomizationPreset> Presets;

public:
	DEADBYDAYLIGHT_API FCharacterCustomizationPresetsList();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCustomizationPresetsList) { return 0; }
