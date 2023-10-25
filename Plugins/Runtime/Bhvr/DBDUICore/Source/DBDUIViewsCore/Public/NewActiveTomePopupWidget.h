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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* BgImageContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* RiftTimeLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TomeTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TomeDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* TomeButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* RiftTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* RiftDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
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
