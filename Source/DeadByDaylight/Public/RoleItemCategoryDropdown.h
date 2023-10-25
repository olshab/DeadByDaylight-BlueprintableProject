#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "CharacterDropdown.h"
#include "RoleItemCategoryDropdown.generated.h"

USTRUCT(BlueprintType)
struct FRoleItemCategoryDropdown: public FCharacterDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IncludeOutfits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IncludeNone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory Category;

public:
	DEADBYDAYLIGHT_API FRoleItemCategoryDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FRoleItemCategoryDropdown) { return 0; }
