#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ESortingOrder.h"
#include "ESortingOption.h"
#include "CoreSortButtonWidget.generated.h"

class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSortButtonWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _sortingOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* SortingOrderButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* SortingOptionButton;

protected:
	UFUNCTION(BlueprintCallable)
	ESortingOrder ToggleSortingOrder();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSortingOrderButtonVisibility(bool showSortingOrderButton);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSortingOrderClick(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnSortingOptionClick(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintPure)
	bool IsOptionEnabled(ESortingOption option) const;

public:
	UCoreSortButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreSortButtonWidget) { return 0; }
