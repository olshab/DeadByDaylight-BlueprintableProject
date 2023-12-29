#pragma once

#include "CoreMinimal.h"
#include "AuricCellsSpecialOtherOptionsActionDelegate.h"
#include "CoreAuricCellsBundleWidget.h"
#include "CoreAuricCellsSpecialOfferWidget.generated.h"

class UDBDTextBlock;
class UCoreKeyListenerButtonWidget;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAuricCellsSpecialOfferWidget : public UCoreAuricCellsBundleWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAuricCellsSpecialOtherOptionsActionDelegate _otherOptionsActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreKeyListenerButtonWidget* OtherOptionsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TimeLeftTextBlock;

protected:
	UFUNCTION(BlueprintCallable)
	void OnOtherOptionsClick(UCoreButtonWidget* selectedButton);

public:
	UCoreAuricCellsSpecialOfferWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAuricCellsSpecialOfferWidget) { return 0; }
