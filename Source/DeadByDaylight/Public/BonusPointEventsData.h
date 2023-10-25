#pragma once

#include "CoreMinimal.h"
#include "BonusPointEventsItemData.h"
#include "BonusPointEventsData.generated.h"

USTRUCT(BlueprintType)
struct FBonusPointEventsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBonusPointEventsItemData> BonusPointEvents;

public:
	DEADBYDAYLIGHT_API FBonusPointEventsData();
};

FORCEINLINE uint32 GetTypeHash(const FBonusPointEventsData) { return 0; }
