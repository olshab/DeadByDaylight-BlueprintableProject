#pragma once

#include "CoreMinimal.h"
#include "EmblemSlotData.h"
#include "TallyScorePipsData.generated.h"

USTRUCT(BlueprintType)
struct FTallyScorePipsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Threshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<float> PipThresholds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FEmblemSlotData> Scores;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PipsDelta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsCustomMatch;

public:
	DEADBYDAYLIGHT_API FTallyScorePipsData();
};

FORCEINLINE uint32 GetTypeHash(const FTallyScorePipsData) { return 0; }
