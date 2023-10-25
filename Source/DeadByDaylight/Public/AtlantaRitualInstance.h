#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaRitualDifficulty.h"
#include "AtlantaRitualInstance.generated.h"

class UAtlantaRitualEvaluatorBase;

USTRUCT(BlueprintType)
struct FAtlantaRitualInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RitualKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EDBDScoreTypes> TrackedEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> TrackedGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAtlantaRitualEvaluatorBase* Evaluator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAtlantaRitualDifficulty Difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Progress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Active;

	UPROPERTY(EditAnywhere)
	FDateTime ExpiryDate;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualInstance();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualInstance) { return 0; }
