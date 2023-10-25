#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ECurrencyType.h"
#include "Templates/SubclassOf.h"
#include "CurrencyLabelViewData.h"
#include "PlayerProfileCurrencyClickedDelegate.h"
#include "CoreWalletWidget.generated.h"

class UGridPanel;
class UCoreCurrencyLabelWidget;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreWalletWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreCurrencyLabelWidget> CoreCurrencyLabelWidgetClass;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* CurrencyContainer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<ECurrencyType, UCoreCurrencyLabelWidget*> _currencyWidgetMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPlayerProfileCurrencyClickedDelegate _currencyClickedDelegate;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateCurrency(const ECurrencyType type, int32 newBalance, int32 previousBalance);

	UFUNCTION(BlueprintCallable)
	void PlayNotEnoughCurrency(const ECurrencyType type);

private:
	UFUNCTION(BlueprintCallable)
	void OnCurrencyClicked(UCoreButtonWidget* buttonTarget);

public:
	UFUNCTION(BlueprintCallable)
	void InitWallet(const TArray<FCurrencyLabelViewData>& walletData);

	UFUNCTION(BlueprintCallable)
	void FullUpdateCurrency(const FCurrencyLabelViewData& viewData);

public:
	UCoreWalletWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreWalletWidget) { return 0; }
