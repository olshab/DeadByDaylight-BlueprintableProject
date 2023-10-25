#pragma once

#include "CoreMinimal.h"
#include "AwardedScore.generated.h"

USTRUCT(BlueprintType)
struct FAwardedScore
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ScoreTypeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BloodpointsAwarded;

public:
	DEADBYDAYLIGHT_API FAwardedScore();
};

FORCEINLINE uint32 GetTypeHash(const FAwardedScore) { return 0; }
