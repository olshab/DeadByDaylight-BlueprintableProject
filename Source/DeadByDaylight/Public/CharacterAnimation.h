#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationDropdown.h"
#include "CharacterAnimationAssetOutfitOverride.h"
#include "CharacterAnimation.generated.h"

USTRUCT(BlueprintType)
struct FCharacterAnimation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterAnimationDropdown Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharacterAnimationAssetOutfitOverride> OutfitOverrides;

public:
	DEADBYDAYLIGHT_API FCharacterAnimation();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterAnimation) { return 0; }
