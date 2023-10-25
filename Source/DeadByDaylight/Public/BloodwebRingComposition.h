#pragma once

#include "CoreMinimal.h"
#include "BloodwebRingComposition.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebRingComposition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EntityStartingRound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> NodeCountPerRing;

public:
	DEADBYDAYLIGHT_API FBloodwebRingComposition();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebRingComposition) { return 0; }
