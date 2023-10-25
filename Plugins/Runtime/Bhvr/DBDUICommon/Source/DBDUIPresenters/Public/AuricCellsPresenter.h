#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "AuricCellsFirstPurchaseViewData.h"
#include "AuricCellsPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAuricCellsPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> AuricCellsWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FAuricCellsFirstPurchaseViewData _firstPurchaseViewData;

private:
	UFUNCTION(BlueprintCallable)
	void OnPremiumTransactionCompleted(bool success);

	UFUNCTION(BlueprintCallable)
	void OnBuyAction(FName bundleId);

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

public:
	UAuricCellsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UAuricCellsPresenter) { return 0; }
