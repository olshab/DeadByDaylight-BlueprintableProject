#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "Input/Events.h"
#include "ModalWidget.generated.h"

class UDBDButton;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UModalWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDButton* HitzoneButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeToFade;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void StartOpenAnimation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void StartCloseAnimation();

	UFUNCTION(BlueprintCallable)
	void OnUnhoveredInternal();

private:
	UFUNCTION()
	void OnMouseUpAnywhere(const FPointerEvent& pointerEvent);

	UFUNCTION()
	void OnMouseDownAnywhere(const FPointerEvent& pointerEvent);

protected:
	UFUNCTION(BlueprintCallable)
	void OnHoveredInternal();

	UFUNCTION(BlueprintCallable)
	void FinishOpenAnimation();

	UFUNCTION(BlueprintCallable)
	void FinishCloseAnimation();

public:
	UModalWidget();
};

FORCEINLINE uint32 GetTypeHash(const UModalWidget) { return 0; }
