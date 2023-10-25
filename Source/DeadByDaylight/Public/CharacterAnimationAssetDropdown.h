#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationAssetDropdown.generated.h"

USTRUCT(BlueprintType)
struct FCharacterAnimationAssetDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAnimBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AnimAsset;

public:
	DEADBYDAYLIGHT_API FCharacterAnimationAssetDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterAnimationAssetDropdown) { return 0; }
