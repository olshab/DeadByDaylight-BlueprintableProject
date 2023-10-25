#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodSettings.generated.h"

USTRUCT(BlueprintType)
struct FK32KillerPodSettings
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
	FRotator LastForwardRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDisabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsControlledByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLastControlledKillerPod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SurfaceNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated)
	TArray<FVector> AttachmentPoints;

public:
	THEK32_API FK32KillerPodSettings();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodSettings) { return 0; }
