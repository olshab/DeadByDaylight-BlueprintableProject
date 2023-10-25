#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnappingData.generated.h"

USTRUCT(BlueprintType)
struct FSnappingData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DoSnapPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DoSnapRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DoSnapRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseZCoord;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SweepOnFinalSnap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator TargetRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

public:
	DEADBYDAYLIGHT_API FSnappingData();
};

FORCEINLINE uint32 GetTypeHash(const FSnappingData) { return 0; }
