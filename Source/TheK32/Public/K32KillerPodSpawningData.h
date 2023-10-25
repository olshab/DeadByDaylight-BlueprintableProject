#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodSpawningData.generated.h"

class AK32KillerPod;
class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK32KillerPodSpawningData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CollisionPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator SpawnForwardRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SurfaceNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AK32KillerPod* PodToDestroy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACamperPlayer* TargetSurvivor;

public:
	THEK32_API FK32KillerPodSpawningData();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodSpawningData) { return 0; }
