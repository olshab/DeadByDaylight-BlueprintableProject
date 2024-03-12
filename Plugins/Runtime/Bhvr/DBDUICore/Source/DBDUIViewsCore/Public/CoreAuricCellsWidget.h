#pragma once

#include "CoreMinimal.h"
#include "AuricCellsBuyActionDelegate.h"
#include "CoreBaseUserWidget.h"
#include "AuricCellsViewInterface.h"
#include "AuricCellsBackActionDelegate.h"
#include "CoreAuricCellsWidget.generated.h"

class UCoreAuricCellsContainerWidget;
class UDBDTextBlock;
class UCoreInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAuricCellsWidget : public UCoreBaseUserWidget, public IAuricCellsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAuricCellsBackActionDelegate _backActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAuricCellsBuyActionDelegate _buyActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreAuricCellsContainerWidget* Container;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* EmptyBundlesTitleTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* EmptyBundlesDescriptionTextBlock;

protected:
	UFUNCTION(BlueprintCallable)
	void OnBuyAction(FName bundleId);

public:
	UCoreAuricCellsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAuricCellsWidget) { return 0; }
