#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NamedButton.h"
#include "ScreenshotToolAsset.generated.h"

class UScreenshotToolViewAsset;
class UDataTable;
class UScreenshotToolConfigurationAsset;
class UScreenshotToolAnimationAsset;

UCLASS(Blueprintable)
class UScreenshotToolAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FNamedButton ReloadDBBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UScreenshotToolViewAsset* Views;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UScreenshotToolAnimationAsset* Animations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UScreenshotToolConfigurationAsset* Configuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* ViewsOverridesDB;

public:
	UScreenshotToolAsset();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotToolAsset) { return 0; }
