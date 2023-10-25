#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "BaseIndicatorWidget.generated.h"

class UCanvasPanel;
class UCanvasPanelSlot;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UBaseIndicatorWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UCanvasPanel* _safeZonePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UCanvasPanelSlot* _canvasPanelSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RadiusMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* IndicatorPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* Indicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ArrowImage;

protected:
	UFUNCTION(BlueprintCallable)
	void OnOutAnimationFinished();

public:
	UBaseIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UBaseIndicatorWidget) { return 0; }
