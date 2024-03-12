#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CoreEndGameCollapseProgressWidget.generated.h"

class UProgressBar;
class UCanvasPanel;
class UHorizontalBoxSlot;

UCLASS(Blueprintable, EditInlineNew)
class UCoreEndGameCollapseProgressWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* MarkerLeftCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* MarkerRightCanvas;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UHorizontalBoxSlot* _markerLeftBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UHorizontalBoxSlot* _markerRightBox;

public:
	UCoreEndGameCollapseProgressWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreEndGameCollapseProgressWidget) { return 0; }
