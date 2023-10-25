#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolTargetWithLabel.h"
#include "ScreenshotViewSetting.h"
#include "Engine/DataTable.h"
#include "ScreenshotToolViewOverridesData.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotToolViewOverridesData: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Settings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FScreenshotToolTargetWithLabel> Targets;

public:
	DEADBYDAYLIGHT_API FScreenshotToolViewOverridesData();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolViewOverridesData) { return 0; }
