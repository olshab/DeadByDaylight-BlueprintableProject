#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Gameplay_PigKillerAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FGameplay_PigKillerAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AmbushHitCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RbtKilledCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rbt1GeneratorCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rbt2GeneratorCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rbt3GeneratorCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rbt4GeneratorCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rbt5GeneratorCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CrouchDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RbtExitKill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RbtHookKill;

public:
	DBDANALYTICS_API FGameplay_PigKillerAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGameplay_PigKillerAnalytics) { return 0; }
