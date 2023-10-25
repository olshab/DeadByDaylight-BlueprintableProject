#pragma once

#include "CoreMinimal.h"
#include "LamentConfigurationPlayerPossessionData.generated.h"

USTRUCT(BlueprintType)
struct FLamentConfigurationPlayerPossessionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PickUpElapsedMatchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropElapsedMatchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Outcome;

public:
	THEK25_API FLamentConfigurationPlayerPossessionData();
};

FORCEINLINE uint32 GetTypeHash(const FLamentConfigurationPlayerPossessionData) { return 0; }
