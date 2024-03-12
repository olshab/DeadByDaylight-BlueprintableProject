#pragma once

#include "CoreMinimal.h"
#include "CharacterViewTarget.h"
#include "MenuCameraViewTargetWithLabel.generated.h"

USTRUCT(BlueprintType)
struct FMenuCameraViewTargetWithLabel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterViewTarget Dropdown;

public:
	DEADBYDAYLIGHT_API FMenuCameraViewTargetWithLabel();
};

FORCEINLINE uint32 GetTypeHash(const FMenuCameraViewTargetWithLabel) { return 0; }
