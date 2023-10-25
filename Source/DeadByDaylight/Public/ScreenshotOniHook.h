#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolHook.h"
#include "UObject/NoExportTypes.h"
#include "ScreenshotOniHook.generated.h"

UCLASS(Blueprintable)
class UScreenshotOniHook : public UObject, public IScreenshotToolHook
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName OniId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName DemonModeTag;

public:
	UScreenshotOniHook();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotOniHook) { return 0; }
