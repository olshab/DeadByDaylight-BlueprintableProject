#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkProperties.h"
#include "SavedCharacterLevelData.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharacterLevelData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasPerksBeenSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasPerkSelectionBeenGenerated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAssignedPerkProperties> PerkSelection;

public:
	DEADBYDAYLIGHT_API FSavedCharacterLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FSavedCharacterLevelData) { return 0; }
