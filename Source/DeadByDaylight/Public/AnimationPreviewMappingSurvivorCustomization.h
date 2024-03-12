#pragma once

#include "CoreMinimal.h"
#include "AnimationPreviewMappingSurvivorCustomization.generated.h"

USTRUCT(BlueprintType)
struct FAnimationPreviewMappingSurvivorCustomization
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Head;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Torso;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Legs;

public:
	DEADBYDAYLIGHT_API FAnimationPreviewMappingSurvivorCustomization();
};

FORCEINLINE uint32 GetTypeHash(const FAnimationPreviewMappingSurvivorCustomization) { return 0; }
