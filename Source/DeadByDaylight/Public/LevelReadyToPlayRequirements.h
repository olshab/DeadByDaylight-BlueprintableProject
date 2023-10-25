#pragma once

#include "CoreMinimal.h"
#include "LevelReadyToPlayRequirements.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FLevelReadyToPlayRequirements
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 perkCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 itemCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 addonCount;

public:
	DEADBYDAYLIGHT_API FLevelReadyToPlayRequirements();
};

FORCEINLINE uint32 GetTypeHash(const FLevelReadyToPlayRequirements) { return 0; }
