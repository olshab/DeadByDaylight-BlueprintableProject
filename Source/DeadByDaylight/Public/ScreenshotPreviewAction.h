#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECharacterToolItemType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "ScreenshotPreviewAction.generated.h"

class UTextureRenderTarget2D;
class UScreenshotPreviewWidget;

USTRUCT(BlueprintType)
struct FScreenshotPreviewAction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SkyboxEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize)
	TMap<ECharacterToolItemType, FIntPoint> FrameSizes;

	UPROPERTY(EditAnywhere)
	uint16 RenderResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTextureRenderTarget2D> RenderTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UScreenshotPreviewWidget> EditorWidgetClass;

public:
	DEADBYDAYLIGHT_API FScreenshotPreviewAction();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotPreviewAction) { return 0; }
