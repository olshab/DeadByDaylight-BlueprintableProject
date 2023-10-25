#pragma once

#include "CoreMinimal.h"
#include "ScreenshotViewSetting.h"
#include "RoleDropdown.h"
#include "EGender.h"
#include "RoleGenderViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FRoleGenderViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRoleDropdown RoleDropdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGender Gender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FRoleGenderViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FRoleGenderViewSetting) { return 0; }
