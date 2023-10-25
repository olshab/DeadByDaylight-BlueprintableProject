#pragma once

#include "CoreMinimal.h"
#include "RoleItemCategoryDropdown.h"
#include "ScreenshotViewSetting.h"
#include "CharacterItemCategoryViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FCharacterItemCategoryViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRoleItemCategoryDropdown CharacterDropdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FCharacterItemCategoryViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterItemCategoryViewSetting) { return 0; }
