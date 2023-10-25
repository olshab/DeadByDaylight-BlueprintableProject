#pragma once

#include "CoreMinimal.h"
#include "ScreenshotViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LateralOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CharacterYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CharacterRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CharacterPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;

public:
	DEADBYDAYLIGHT_API FScreenshotViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotViewSetting) { return 0; }
