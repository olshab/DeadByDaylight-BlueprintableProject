#pragma once

#include "CoreMinimal.h"
#include "OutfitDropdown.h"
#include "ScreenshotViewSetting.h"
#include "OutfitViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FOutfitViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOutfitDropdown OutfitDropdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FOutfitViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FOutfitViewSetting) { return 0; }
