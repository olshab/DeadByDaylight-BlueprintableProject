#pragma once

#include "CoreMinimal.h"
#include "PrestigeRewardItemAnalytic.generated.h"

USTRUCT(BlueprintType)
struct FPrestigeRewardItemAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

public:
	DBDANALYTICS_API FPrestigeRewardItemAnalytic();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeRewardItemAnalytic) { return 0; }
