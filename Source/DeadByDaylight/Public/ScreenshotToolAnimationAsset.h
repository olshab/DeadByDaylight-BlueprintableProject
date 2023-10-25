#pragma once

#include "CoreMinimal.h"
#include "OutfitAnimation.h"
#include "Engine/DataAsset.h"
#include "CharacterRoleAnimation.h"
#include "ScreenshotToolAnimationAsset.generated.h"

UCLASS(Blueprintable)
class UScreenshotToolAnimationAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOutfitAnimation> AnimByOutfit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharacterRoleAnimation> AnimByCharacter;

public:
	UScreenshotToolAnimationAsset();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotToolAnimationAsset) { return 0; }
