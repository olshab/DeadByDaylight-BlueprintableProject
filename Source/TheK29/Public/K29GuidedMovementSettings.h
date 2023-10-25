#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K29GuidedMovementSettings.generated.h"

class ADBDPlayer;
class AActor;

USTRUCT(BlueprintType)
struct FK29GuidedMovementSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* MovingActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StartPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ForwardDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleCenterHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumRequiredDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeedInCmPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCarryingSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> IgnoredActors;

public:
	THEK29_API FK29GuidedMovementSettings();
};

FORCEINLINE uint32 GetTypeHash(const FK29GuidedMovementSettings) { return 0; }
