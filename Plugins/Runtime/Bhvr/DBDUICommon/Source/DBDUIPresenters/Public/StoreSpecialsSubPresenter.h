#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "StoreSubPresenter.h"
#include "PremiumPurchaseCompleteData.h"
#include "UObject/ScriptInterface.h"
#include "StoreSpecialsSubPresenter.generated.h"

class IStoreSpecialsViewInterface;
class UStoreCustomizationItemViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreSpecialsSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IStoreSpecialsViewInterface> _storeSpecialsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _cachedSpecialsItems;

private:
	UFUNCTION(BlueprintCallable)
	void RequestMoveToCharactersPage(const FStoreRedirectionData& storeRedirectionData);

	UFUNCTION(BlueprintCallable)
	void OnPremiumTransactionCompleted(bool success, FName itemId, const FPremiumPurchaseCompleteData& purchaseCompleteData);

	UFUNCTION(BlueprintCallable)
	void OnAuricCellSpecialBuyAction(FName bundleId);

	UFUNCTION(BlueprintCallable)
	void OnArchivePassBannerClicked(const FName& archiveId);

public:
	UStoreSpecialsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialsSubPresenter) { return 0; }
