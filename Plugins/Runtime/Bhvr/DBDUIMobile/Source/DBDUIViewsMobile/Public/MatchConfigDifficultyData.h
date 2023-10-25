#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "MatchConfigDifficultyData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FMatchConfigDifficultyData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UPaperSprite> DifficultyIcon;

public:
	DBDUIVIEWSMOBILE_API FMatchConfigDifficultyData();
};

FORCEINLINE uint32 GetTypeHash(const FMatchConfigDifficultyData) { return 0; }
