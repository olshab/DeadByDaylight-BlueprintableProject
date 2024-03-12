#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "AuricCellsBuyActionDelegate.h"
#include "Templates/SubclassOf.h"
#include "Layout/Margin.h"
#include "AuricCellsBundleViewData.h"
#include "CoreAuricCellsContainerWidget.generated.h"

class UCoreAuricCellsBundleWidget;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAuricCellsContainerWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAuricCellsBuyActionDelegate _buyActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreAuricCellsBundleWidget> _tileWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _tilePadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* Container;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreAuricCellsBundleWidget*> _tiles;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(const TArray<FAuricCellsBundleViewData>& bundlesData);

protected:
	UFUNCTION(BlueprintCallable)
	void OnBuyAction(FName bundleId);

public:
	UCoreAuricCellsContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAuricCellsContainerWidget) { return 0; }
