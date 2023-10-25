#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "ECurrencyType.h"
#include "UObject/ScriptInterface.h"
#include "ArchiveRiftSubPresenter.generated.h"

class IArchiveRiftViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UArchiveRiftSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IArchiveRiftViewInterface> _archiveRiftWidget;

private:
	UFUNCTION(BlueprintCallable)
	void OnToggleOutfitDisplay();

	UFUNCTION(BlueprintCallable)
	void OnRewardItemClicked(const FName itemId);

	UFUNCTION(BlueprintCallable)
	void OnRewardCurrencyClicked(const ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void OnClickPurchaseTiers();

	UFUNCTION(BlueprintCallable)
	void OnClickPurchasePremiumPass();

	UFUNCTION(BlueprintCallable)
	void OnBonusTierTooltipShown();

public:
	UArchiveRiftSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveRiftSubPresenter) { return 0; }
