#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "MainMenuButtonViewData.h"
#include "CoreMainMenuButtonWidget.generated.h"

class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMainMenuButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TimerTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* BonusTB;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetButtonData(const FMainMenuButtonViewData& buttonData);

public:
	UCoreMainMenuButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMainMenuButtonWidget) { return 0; }
