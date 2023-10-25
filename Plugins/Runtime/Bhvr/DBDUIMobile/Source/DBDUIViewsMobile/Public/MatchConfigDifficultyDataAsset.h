#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MatchConfigDifficultyData.h"
#include "ECustomMatchDifficulty.h"
#include "MatchConfigDifficultyDataAsset.generated.h"

UCLASS(Blueprintable)
class UMatchConfigDifficultyDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECustomMatchDifficulty, FMatchConfigDifficultyData> DifficultiesData;

public:
	UMatchConfigDifficultyDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UMatchConfigDifficultyDataAsset) { return 0; }
