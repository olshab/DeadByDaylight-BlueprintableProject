#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ScreenshotVFXCharmHookCharmData.generated.h"

class UFXSystemAsset;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FScreenshotVFXCharmHookCharmData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UFXSystemAsset> TargetSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VFXWarmupTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInterface> TargetMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> MaterialScalarParameters;

public:
	DEADBYDAYLIGHT_API FScreenshotVFXCharmHookCharmData();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotVFXCharmHookCharmData) { return 0; }
