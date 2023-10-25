#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "OngoingScoreData.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FOngoingScoreData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDBDScoreTypes ScoreType;

	UPROPERTY(EditAnywhere)
	FGameplayTag ScoreTypeTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeSinceScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ApplyScoreTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AccumulatedPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* CustomObjectParameter;

public:
	DEADBYDAYLIGHT_API FOngoingScoreData();
};

FORCEINLINE uint32 GetTypeHash(const FOngoingScoreData) { return 0; }
