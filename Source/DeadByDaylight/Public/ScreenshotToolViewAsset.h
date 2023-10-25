#pragma once

#include "CoreMinimal.h"
#include "ScreenshotViewSetting.h"
#include "Engine/DataAsset.h"
#include "ScreenshotToolViewAsset.generated.h"

UCLASS(Blueprintable)
class UScreenshotToolViewAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting Charm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting SurvivorHead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting SurvivorTorso;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting SurvivorLegs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting KillerHead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting KillerBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotViewSetting KillerWeapon;

public:
	UScreenshotToolViewAsset();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotToolViewAsset) { return 0; }
