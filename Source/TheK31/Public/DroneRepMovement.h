#pragma once

#include "CoreMinimal.h"
#include "EDroneFlyingHeight.h"
#include "UObject/NoExportTypes.h"
#include "DroneRepMovement.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDroneRepMovement
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsRotating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsRotationReversed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasReachTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDroneFlyingHeight FlyingHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightAdjustmentMovingTimeOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* InteractingActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InteractingActorAttachSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SnapTime;

public:
	THEK31_API FDroneRepMovement();
};

FORCEINLINE uint32 GetTypeHash(const FDroneRepMovement) { return 0; }
