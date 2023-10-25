#pragma once

#include "CoreMinimal.h"
#include "RankResetDateData.generated.h"

USTRUCT(BlueprintType)
struct FRankResetDateData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StartYear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StartMonth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResetDay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResetHour;

public:
	S3COMMAND_API FRankResetDateData();
};

FORCEINLINE uint32 GetTypeHash(const FRankResetDateData) { return 0; }
