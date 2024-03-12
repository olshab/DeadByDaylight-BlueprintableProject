#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "ToastNotificationViewData.h"
#include "CoreToastNotificationWidget.generated.h"

class UDBDImage;
class UCoreButtonWidget;
class UCoreKeyListenerButtonWidget;
class UDBDTextBlock;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class UCoreToastNotificationWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* ToastIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDTextBlock* ToastTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDTextBlock* ToastText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* TimeToastProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHorizontalBox* ButtonContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreKeyListenerButtonWidget* LeftButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreKeyListenerButtonWidget* RightButton;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCoreKeyListenerButtonWidget> ButtonWidgetClass;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisuals(const FToastNotificationViewData& toastData, const bool isInteractable);

private:
	UFUNCTION(BlueprintCallable)
	void OnTimerFinished();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnRightButtonClicked(UCoreButtonWidget* button);

private:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void OnOutAnimationFinished() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLeftButtonClicked(UCoreButtonWidget* button);

private:
	UFUNCTION(BlueprintCallable)
	void OnButtonClicked(const int32 buttonId);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChangeVisibility(bool isVisible);

public:
	UCoreToastNotificationWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreToastNotificationWidget) { return 0; }
