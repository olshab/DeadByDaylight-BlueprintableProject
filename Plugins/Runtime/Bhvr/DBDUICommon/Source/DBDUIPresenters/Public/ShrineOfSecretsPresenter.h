#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "ShrineOfSecretsItemViewData.h"
#include "ShrineOfSecretsPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UShrineOfSecretsPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> ShrineOfSecretsWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnPurchaseButtonClicked(const FShrineOfSecretsItemViewData& shrineOfSecretsItemViewData);

	UFUNCTION(BlueprintCallable)
	void OnItemBuyCompleted(const bool success);

	UFUNCTION(BlueprintCallable)
	void OnBackButtonClicked();

public:
	UShrineOfSecretsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UShrineOfSecretsPresenter) { return 0; }
