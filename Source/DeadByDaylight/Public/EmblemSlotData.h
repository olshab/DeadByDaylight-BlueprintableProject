#pragma once

#include "CoreMinimal.h"
#include "EEmblemQuality.h"
#include "EmblemProgressionData.h"
#include "EmblemSlotData.generated.h"

USTRUCT(BlueprintType)
struct FEmblemSlotData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EEmblemQuality Quality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Score;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FString> IconPaths;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<int32> ThresholdPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float CurrentPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FEmblemProgressionData> ProgressionData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CharacterExperience;

public:
	DEADBYDAYLIGHT_API FEmblemSlotData();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemSlotData) { return 0; }
