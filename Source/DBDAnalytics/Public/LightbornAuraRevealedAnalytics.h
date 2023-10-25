#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "LightbornAuraRevealedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLightbornAuraRevealedAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RevealedSurvivorMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FlashlightedSlasherMirrorsId;

public:
	DBDANALYTICS_API FLightbornAuraRevealedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLightbornAuraRevealedAnalytics) { return 0; }
