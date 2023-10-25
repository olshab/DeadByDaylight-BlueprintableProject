#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationAssetDropdown.h"
#include "CharacterAnimationAssetOutfitOverride.generated.h"

USTRUCT(BlueprintType)
struct FCharacterAnimationAssetOutfitOverride: public FCharacterAnimationAssetDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OutfitId;

public:
	DEADBYDAYLIGHT_API FCharacterAnimationAssetOutfitOverride();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterAnimationAssetOutfitOverride) { return 0; }
