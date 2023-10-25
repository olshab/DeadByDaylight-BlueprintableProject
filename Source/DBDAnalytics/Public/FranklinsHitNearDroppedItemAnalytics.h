#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "FranklinsHitNearDroppedItemAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FFranklinsHitNearDroppedItemAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HitSurvivorMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AttackingSlasherMirrorsId;

public:
	DBDANALYTICS_API FFranklinsHitNearDroppedItemAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FFranklinsHitNearDroppedItemAnalytics) { return 0; }
