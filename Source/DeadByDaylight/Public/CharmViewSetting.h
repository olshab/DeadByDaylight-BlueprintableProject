#pragma once

#include "CoreMinimal.h"
#include "CharmDropdown.h"
#include "ScreenshotViewSetting.h"
#include "CharmViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FCharmViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharmDropdown CharmID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FCharmViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FCharmViewSetting) { return 0; }
