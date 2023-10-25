#pragma once

#include "CoreMinimal.h"
#include "ScoreEventData.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FScoreEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float PercentToAward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UObject* CustomObjectParameter;

public:
	DEADBYDAYLIGHT_API FScoreEventData();
};

FORCEINLINE uint32 GetTypeHash(const FScoreEventData) { return 0; }
