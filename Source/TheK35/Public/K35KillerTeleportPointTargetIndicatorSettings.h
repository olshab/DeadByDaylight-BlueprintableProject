#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K35KillerTeleportPointTargetIndicatorSettings.generated.h"

USTRUCT(BlueprintType)
struct FK35KillerTeleportPointTargetIndicatorSettings
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
	THEK35_API FK35KillerTeleportPointTargetIndicatorSettings();
};

FORCEINLINE uint32 GetTypeHash(const FK35KillerTeleportPointTargetIndicatorSettings) { return 0; }
