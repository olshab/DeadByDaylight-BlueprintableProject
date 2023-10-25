#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "TinkererUndetectableHitNearGeneratorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FTinkererUndetectableHitNearGeneratorAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HitSurvivorMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AttackingSlasherMirrorsId;

public:
	DBDANALYTICS_API FTinkererUndetectableHitNearGeneratorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FTinkererUndetectableHitNearGeneratorAnalytics) { return 0; }
