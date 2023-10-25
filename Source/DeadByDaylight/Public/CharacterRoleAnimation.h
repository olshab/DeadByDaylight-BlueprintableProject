#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationDropdown.h"
#include "CharacterRoleAnimation.generated.h"

USTRUCT(BlueprintType)
struct FCharacterRoleAnimation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterAnimationDropdown Data;

public:
	DEADBYDAYLIGHT_API FCharacterRoleAnimation();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterRoleAnimation) { return 0; }
