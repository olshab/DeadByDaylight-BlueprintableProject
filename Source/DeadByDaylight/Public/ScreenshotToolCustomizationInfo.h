#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "ScreenshotToolCustomizationInfo.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotToolCustomizationInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory Category;

public:
	DEADBYDAYLIGHT_API FScreenshotToolCustomizationInfo();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolCustomizationInfo) { return 0; }
