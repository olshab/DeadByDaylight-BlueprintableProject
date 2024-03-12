#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "ESpecialEventStatus.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "ShopWalletUpdate.h"
#include "PlayerProfilePresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UPlayerProfilePresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> CorePlayerProfileWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void UnfocusPlayerProfile();

	UFUNCTION(BlueprintCallable)
	void ShowPlayerProfile();

	UFUNCTION(BlueprintCallable)
	void SetSpecialEventCurrency(const ECurrencyType specialEventCurrencyType);

	UFUNCTION(BlueprintCallable)
	void RefreshWallet();

	UFUNCTION(BlueprintCallable)
	void RefreshPlayerCard();

	UFUNCTION(BlueprintCallable)
	void OnWalletUpdated(const TArray<FShopWalletUpdate>& walletUpdates);

	UFUNCTION(BlueprintCallable)
	void OnUpdatePlayerProfileFilter(const uint8 filter);

	UFUNCTION(BlueprintCallable)
	void OnUpdatePlayerProfileCurrencyFilter(const uint8 currencyFilter);

	UFUNCTION(BlueprintCallable)
	void OnUpdatePlayerCardAnimationMode() const;

	UFUNCTION(BlueprintCallable)
	void OnSpecialEventStatusChanged(FName specialEventId, ESpecialEventStatus specialEventStatus);

	UFUNCTION(BlueprintCallable)
	void OnResetPlayerProfileFilter();

	UFUNCTION(BlueprintCallable)
	void OnResetPlayerProfileCurrencyFilter();

	UFUNCTION(BlueprintCallable)
	void OnPlayerProfileCurrencyClicked(ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void OnPlayerProfileClicked();

	UFUNCTION(BlueprintCallable)
	void HidePlayerProfile();

	UFUNCTION(BlueprintCallable)
	FText GetPlayerName() const;

	UFUNCTION(BlueprintCallable)
	void FocusPlayerProfile(const uint8 filter, const uint8 currencyFilter);

public:
	UPlayerProfilePresenter();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerProfilePresenter) { return 0; }
