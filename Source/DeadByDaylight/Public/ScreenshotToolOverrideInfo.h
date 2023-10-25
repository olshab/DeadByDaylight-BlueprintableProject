#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolOverrideInfo.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotToolOverrideInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int16 PriorityHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName TargetLabel;

public:
	DEADBYDAYLIGHT_API FScreenshotToolOverrideInfo();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolOverrideInfo) { return 0; }
