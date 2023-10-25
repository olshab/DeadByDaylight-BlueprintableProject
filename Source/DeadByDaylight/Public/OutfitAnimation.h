#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationAssetOutfitOverride.h"
#include "OutfitAnimation.generated.h"

USTRUCT(BlueprintType)
struct FOutfitAnimation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterAnimationAssetOutfitOverride Data;

public:
	DEADBYDAYLIGHT_API FOutfitAnimation();
};

FORCEINLINE uint32 GetTypeHash(const FOutfitAnimation) { return 0; }
