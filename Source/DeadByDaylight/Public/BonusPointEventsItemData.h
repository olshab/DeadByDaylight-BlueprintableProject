#pragma once

#include "CoreMinimal.h"
#include "BonusPointEventsItemData.generated.h"

USTRUCT(BlueprintType)
struct FBonusPointEventsItemData
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool EventDescription_IsSet;

	UPROPERTY(EditAnywhere)
	uint32 EventType;

	UPROPERTY(EditAnywhere)
	double Multiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EndTime;

public:
	DEADBYDAYLIGHT_API FBonusPointEventsItemData();
};

FORCEINLINE uint32 GetTypeHash(const FBonusPointEventsItemData) { return 0; }
