#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "DailyRitualInstance.generated.h"

class URitualEvaluatorBase;

USTRUCT(BlueprintType)
struct FDailyRitualInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RitualId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EDBDScoreTypes> TrackedEvents;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> TrackedGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> CharacterIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPlayerRole> Roles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Progress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Threshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Tolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisplayThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExpReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Active;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTemporary;

	UPROPERTY(EditAnywhere)
	FDateTime DateAssigned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	URitualEvaluatorBase* Evaluator;

public:
	DEADBYDAYLIGHT_API FDailyRitualInstance();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualInstance) { return 0; }
