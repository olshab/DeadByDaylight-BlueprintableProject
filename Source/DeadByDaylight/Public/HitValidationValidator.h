#pragma once

#include "CoreMinimal.h"
#include "HitValidationValidator.generated.h"

USTRUCT(BlueprintType)
struct FHitValidationValidator
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleInflation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

public:
	DEADBYDAYLIGHT_API FHitValidationValidator();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidationValidator) { return 0; }
