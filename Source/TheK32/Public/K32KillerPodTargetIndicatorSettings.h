#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodTargetIndicatorSettings.generated.h"

USTRUCT(BlueprintType)
struct FK32KillerPodTargetIndicatorSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator SpawnForwardRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsVisible;

public:
	THEK32_API FK32KillerPodTargetIndicatorSettings();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodTargetIndicatorSettings) { return 0; }
