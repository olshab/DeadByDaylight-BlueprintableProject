#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K29GuidedMovementInstance.generated.h"

USTRUCT(BlueprintType)
struct FK29GuidedMovementInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StartingPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EndingPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ForwardDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector XYForwardDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EndInImpact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EndAtLedge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EndingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> MovementCurve;

public:
	THEK29_API FK29GuidedMovementInstance();
};

FORCEINLINE uint32 GetTypeHash(const FK29GuidedMovementInstance) { return 0; }
