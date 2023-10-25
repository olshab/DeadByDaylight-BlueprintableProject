#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "EEmblemQuality.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "UMGTallyEmblemProgressBar.generated.h"

class UProgressBar;
class UCanvasPanel;
class UUMGTallyEmblemMarker;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGTallyEmblemProgressBar : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* QualityContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGTallyEmblemMarker> EmblemQualityClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D _emblemQualityAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TMap<EEmblemQuality, FSlateBrush> _qualityFillImages;

public:
	UUMGTallyEmblemProgressBar();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyEmblemProgressBar) { return 0; }
