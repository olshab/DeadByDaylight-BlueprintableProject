#pragma once

#include "CoreMinimal.h"
#include "AkSegmentInfo.generated.h"

USTRUCT(BlueprintType)
struct FAkSegmentInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PreEntryDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ActiveDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PostExitDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RemainingLookAheadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BeatDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BarDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GridDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GridOffset;

public:
	AKAUDIO_API FAkSegmentInfo();
};

FORCEINLINE uint32 GetTypeHash(const FAkSegmentInfo) { return 0; }
