#pragma once

#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "ScreenshotViewSetting.h"
#include "CharacterViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FCharacterViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterDropdown CharacterDropdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FCharacterViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterViewSetting) { return 0; }
