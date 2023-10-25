#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScreenshotToolPathInfo.h"
#include "ScreenshotPreviewAction.h"
#include "ScreenshotExportAction.h"
#include "Templates/SubclassOf.h"
#include "ScreenshotToolConfigurationAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class UScreenshotToolConfigurationAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SceneSetupDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UpdateCameraFromViewSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoSelectActorInEditor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SaveAndCheckoutAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotToolPathInfo TempIconPathInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotToolPathInfo AssetPathInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ExportAllIconsInOneFrame;

	UPROPERTY(EditAnywhere)
	uint16 IconsExportedPerFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotPreviewAction PreviewAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScreenshotExportAction ExportAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UObject>> HookClasses;

public:
	UScreenshotToolConfigurationAsset();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotToolConfigurationAsset) { return 0; }
