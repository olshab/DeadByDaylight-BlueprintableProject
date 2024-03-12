#pragma once

#include "CoreMinimal.h"
#include "NewActiveTomePopupViewInterface.h"
#include "NewActiveTomePopupButtonClicked.h"
#include "CoreGenericPopupWidget.h"
#include "NewActiveTomePopupWidget.generated.h"

class UDBDTextBlock;
class UCoreInputSwitcherWidget;
class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UNewActiveTomePopupWidget : public UCoreGenericPopupWidget, public INewActiveTomePopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* BgImageContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* RiftTimeLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TomeTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TomeDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* TomeButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* RiftTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* RiftDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RiftButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FNewActiveTomePopupButtonClicked _currentTomeButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FNewActiveTomePopupButtonClicked _riftButtonClickedDelegate;

private:
	UFUNCTION(BlueprintCallable)
	void OnRiftButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCurrentTomeButtonClicked();

public:
	UNewActiveTomePopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UNewActiveTomePopupWidget) { return 0; }
