#pragma once

#include "CoreMinimal.h"
#include "FearMarketPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "CoreFearMarketWidget.generated.h"

class UCoreMenuPerkWidget;
class UHorizontalBox;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreFearMarketWidget : public UCoreGenericPopupWidget, public IFearMarketPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMenuPerkWidget* MenuPerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* BloodpointsRewardContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* BloodpointsValueTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* CostTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* AvailableTextTB;

public:
	UCoreFearMarketWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFearMarketWidget) { return 0; }
