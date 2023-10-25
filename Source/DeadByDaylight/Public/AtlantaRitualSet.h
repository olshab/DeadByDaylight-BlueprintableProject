#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualInstance.h"
#include "RewardItem.h"
#include "AtlantaRitualSet.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualSet
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAtlantaRitualInstance> Instances;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardItem> RewardItems;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualSet();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualSet) { return 0; }
