#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodSpawningIndicatorSettings.generated.h"

USTRUCT(BlueprintType)
struct FK32KillerPodSpawningIndicatorSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator SpawnForwardRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInValidLocationForKillerPod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDestroyingPod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTeleportingToSurvivor;

public:
	THEK32_API FK32KillerPodSpawningIndicatorSettings();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodSpawningIndicatorSettings) { return 0; }
