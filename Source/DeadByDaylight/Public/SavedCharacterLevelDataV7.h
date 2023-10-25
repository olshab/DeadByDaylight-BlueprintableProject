#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkPropertiesV7.h"
#include "SavedCharacterLevelDataV7.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharacterLevelDataV7
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasPerksBeenSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasPerkSelectionBeenGenerated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FAssignedPerkPropertiesV7> PerkSelection;

public:
	DEADBYDAYLIGHT_API FSavedCharacterLevelDataV7();
};

FORCEINLINE uint32 GetTypeHash(const FSavedCharacterLevelDataV7) { return 0; }
