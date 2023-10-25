#pragma once

#include "CoreMinimal.h"
#include "EDragZoneAxis.h"
#include "Input/Events.h"
#include "OnDragEvent.h"
#include "Blueprint/UserWidget.h"
#include "DragZone.generated.h"

class UBorder;
class UDBDButton;

UCLASS(Blueprintable, EditInlineNew)
class UDragZone : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnDragEvent OnDragDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DeadZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDragZoneAxis Axis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UBorder* DebugPreview;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDButton* HitzoneButton;

private:
	UFUNCTION()
	void OnMouseReleaseGlobal(const FPointerEvent& mouseEvent);

	UFUNCTION(BlueprintCallable)
	void OnMousePressHitzone();

	UFUNCTION()
	void OnMousePressGlobal(const FPointerEvent& mouseEvent);

	UFUNCTION()
	void OnMouseMoveGlobal(const FPointerEvent& mouseEvent);

	UFUNCTION(BlueprintCallable)
	void OnMouseHoverHitzone();

	UFUNCTION()
	void OnAnalogInput(const FAnalogInputEvent& analogEvent);

public:
	UDragZone();
};

FORCEINLINE uint32 GetTypeHash(const UDragZone) { return 0; }
