#pragma once

#include "CoreMinimal.h"
#include "CharmDropdown.h"
#include "ScreenshotVFXCharmHookCharmData.h"
#include "ScreenshotVFXCharmHookCharm.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotVFXCharmHookCharm
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharmDropdown Charm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotVFXCharmHookCharmData Data;

public:
	DEADBYDAYLIGHT_API FScreenshotVFXCharmHookCharm();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotVFXCharmHookCharm) { return 0; }
