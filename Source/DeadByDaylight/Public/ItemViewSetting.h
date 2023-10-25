#pragma once

#include "CoreMinimal.h"
#include "CustomizationItemDropdown.h"
#include "ScreenshotViewSetting.h"
#include "ItemViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FItemViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomizationItemDropdown Item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FItemViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FItemViewSetting) { return 0; }
