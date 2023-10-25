#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolTarget.h"
#include "ScreenshotToolTargetWithLabel.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotToolTargetWithLabel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotToolTarget Data;

public:
	DEADBYDAYLIGHT_API FScreenshotToolTargetWithLabel();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolTargetWithLabel) { return 0; }
