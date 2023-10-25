#pragma once

#include "CoreMinimal.h"
#include "RoleItemCategoryDropdown.h"
#include "EGender.h"
#include "ScreenshotViewSetting.h"
#include "GenderViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FGenderViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRoleItemCategoryDropdown RoleItemCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGender Gender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FGenderViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FGenderViewSetting) { return 0; }
