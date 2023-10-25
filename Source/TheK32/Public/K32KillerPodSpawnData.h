#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodSpawningInputData.h"
#include "K32KillerPodSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FK32KillerPodSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FK32KillerPodSpawningInputData InputData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CollisionPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator SpawnForwardRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SurfaceNormal;

public:
	THEK32_API FK32KillerPodSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodSpawnData) { return 0; }
