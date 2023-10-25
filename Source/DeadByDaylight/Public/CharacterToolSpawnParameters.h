#pragma once

#include "CoreMinimal.h"
#include "CharacterToolSpawnParameters.generated.h"

USTRUCT(BlueprintType)
struct FCharacterToolSpawnParameters
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAnimated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseMasterPoseForItems;

public:
	DEADBYDAYLIGHT_API FCharacterToolSpawnParameters();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterToolSpawnParameters) { return 0; }
