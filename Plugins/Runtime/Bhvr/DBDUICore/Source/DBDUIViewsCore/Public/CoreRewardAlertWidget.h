#pragma once

#include "CoreMinimal.h"
#include "RewardViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "RewardOkActionDelegate.h"
#include "CoreRewardAlertWidget.generated.h"

class UCoreKeyListenerButtonWidget;
class UDBDTextBlock;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreRewardAlertWidget : public UCoreBaseUserWidget, public IRewardViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRewardOkActionDelegate _okActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* RewardTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreKeyListenerButtonWidget* OkButton;

protected:
	UFUNCTION(BlueprintCallable)
	void OnOkButtonClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreRewardAlertWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreRewardAlertWidget) { return 0; }
