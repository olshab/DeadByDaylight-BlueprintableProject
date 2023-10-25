#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ERewardType.h"
#include "ECurrencyType.h"
#include "CoreRitualsBackendData.generated.h"

USTRUCT(BlueprintType)
struct FCoreRitualsBackendData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DifficultyThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DifficultyTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DifficultyDisplayThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERewardType DifficultyRewardsType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DifficultyRewardsAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECurrencyType DifficultyRewardsId;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RitualId;

public:
	DEADBYDAYLIGHT_API FCoreRitualsBackendData();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRitualsBackendData) { return 0; }
