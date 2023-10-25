#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreCategory.h"
#include "DBDTableRowBase.h"
#include "ScoreCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FScoreCategoryData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDBDScoreCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScoreCap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProgressionCap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AchievementCap;

public:
	DEADBYDAYLIGHT_API FScoreCategoryData();
};

FORCEINLINE uint32 GetTypeHash(const FScoreCategoryData) { return 0; }
