#pragma once

#include "CoreMinimal.h"
#include "ECharmCategory.h"
#include "ScreenshotViewSetting.h"
#include "CharmCategorySetting.generated.h"

USTRUCT(BlueprintType)
struct FCharmCategorySetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharmCategory CharmCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FCharmCategorySetting();
};

FORCEINLINE uint32 GetTypeHash(const FCharmCategorySetting) { return 0; }
