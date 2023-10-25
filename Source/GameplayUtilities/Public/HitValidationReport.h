#pragma once

#include "CoreMinimal.h"
#include "HitValidatorInstigatorParams.h"
#include "HitValidatorTargetParams.h"
#include "UObject/NoExportTypes.h"
#include "HitValidationReport.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FHitValidationReport
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHitValidatorInstigatorParams InstigatorParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHitValidatorTargetParams TargetParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ValidationTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange TargetRecorderTimeRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACharacter* InstigatorOwningCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleInflation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsValidHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsValidDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsValidNotStunned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform InstigatorTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RewindedTargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SquareDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasPerformCollisionCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsValidCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform HitPrimitiveTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform HittablePrimitiveTransform;

public:
	GAMEPLAYUTILITIES_API FHitValidationReport();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidationReport) { return 0; }
