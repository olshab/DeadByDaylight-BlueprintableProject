#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkProperties.h"
#include "CharacterLevelData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterLevelData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 ExperienceToNextLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasPerksBeenSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FAssignedPerkProperties> PerkSelection;

public:
	DEADBYDAYLIGHT_API FCharacterLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterLevelData) { return 0; }
