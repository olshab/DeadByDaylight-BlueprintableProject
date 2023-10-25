#pragma once

#include "CoreMinimal.h"
#include "RoleItemCategoryDropdown.h"
#include "CharacterAnimationDropdown.generated.h"

USTRUCT(BlueprintType)
struct FCharacterAnimationDropdown: public FRoleItemCategoryDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IncludeAllAnimations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAnimBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AnimAsset;

public:
	DEADBYDAYLIGHT_API FCharacterAnimationDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterAnimationDropdown) { return 0; }
