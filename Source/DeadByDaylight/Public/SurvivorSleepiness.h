#pragma once

#include "CoreMinimal.h"
#include "SurvivorSleepiness.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorSleepiness
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sleepiness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sleepThreshold;

public:
	DEADBYDAYLIGHT_API FSurvivorSleepiness();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorSleepiness) { return 0; }
