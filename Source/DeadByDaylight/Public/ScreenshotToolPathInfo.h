#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolPathInfo.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotToolPathInfo
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool IncludeDLCFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString Path;

public:
	DEADBYDAYLIGHT_API FScreenshotToolPathInfo();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolPathInfo) { return 0; }
