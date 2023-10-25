#pragma once

#include "CoreMinimal.h"
#include "ScreenshotVFXCharmHookCharm.h"
#include "ScreenshotToolHook.h"
#include "UObject/NoExportTypes.h"
#include "ScreenshotVFXCharmHook.generated.h"

UCLASS(Blueprintable)
class UScreenshotVFXCharmHook : public UObject, public IScreenshotToolHook
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FScreenshotVFXCharmHookCharm> Charms;

public:
	UScreenshotVFXCharmHook();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotVFXCharmHook) { return 0; }
