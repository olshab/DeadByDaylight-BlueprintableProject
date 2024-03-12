#pragma once

#include "CoreMinimal.h"
#include "EventObjectiveTargetData.h"
#include "ECurrencyType.h"
#include "ObjectiveRewardLabelViewData.generated.h"

USTRUCT(BlueprintType)
struct FObjectiveRewardLabelViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FEventObjectiveTargetData TargetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType CurrencyRewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsReached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsActive;

public:
	DBDUIVIEWINTERFACES_API FObjectiveRewardLabelViewData();
};

FORCEINLINE uint32 GetTypeHash(const FObjectiveRewardLabelViewData) { return 0; }
