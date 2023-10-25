#pragma once

#include "CoreMinimal.h"
#include "EScreenshotToolTargetCategory.h"
#include "EScreenshotToolTargetSubCategory.h"
#include "ScreenshotToolTarget.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotToolTarget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EScreenshotToolTargetCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EScreenshotToolTargetSubCategory Subcategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RawData;

public:
	DEADBYDAYLIGHT_API FScreenshotToolTarget();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolTarget) { return 0; }
