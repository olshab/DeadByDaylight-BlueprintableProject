#pragma once

#include "CoreMinimal.h"
#include "BTTask_ExtMoveTo.h"
#include "BTTask_FleeMoveTo.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_FleeMoveTo : public UBTTask_ExtMoveTo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InScrambleMovementMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutScrambleMovementMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InScrambleMovementInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoopScrambleMovementInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoopScrambleMovementRandomDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CrouchWithinLastEvadeLoopPointRadius;

public:
	UBTTask_FleeMoveTo();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_FleeMoveTo) { return 0; }
