#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlinkParams.generated.h"

USTRUCT(BlueprintType)
struct FBlinkParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetTranslation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Timestamp;

public:
	THENURSE_API FBlinkParams();
};

FORCEINLINE uint32 GetTypeHash(const FBlinkParams) { return 0; }
