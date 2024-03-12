#pragma once

#include "CoreMinimal.h"
#include "DisplayStandViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "DisplayStandRotationEvent.h"
#include "UObject/NoExportTypes.h"
#include "CoreDisplayStandWidget.generated.h"

class UDragZone;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreDisplayStandWidget : public UCoreBaseUserWidget, public IDisplayStandViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDisplayStandRotationEvent _displayStandRotationDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDragZone* DragZone;

protected:
	UFUNCTION(BlueprintCallable)
	void OnDrag(FVector2D cursorDelta);

public:
	UCoreDisplayStandWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreDisplayStandWidget) { return 0; }
