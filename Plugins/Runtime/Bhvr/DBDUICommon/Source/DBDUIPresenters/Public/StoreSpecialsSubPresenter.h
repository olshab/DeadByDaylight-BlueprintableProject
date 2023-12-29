#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "StoreSpecialsSubPresenter.generated.h"

class UStoreSpecialsItemViewData;
class IStoreSpecialsViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreSpecialsSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IStoreSpecialsViewInterface> _storeSpecialsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreSpecialsItemViewData*> _cachedSpecialsItems;

private:
	UFUNCTION(BlueprintCallable)
	void OnPremiumTransactionCompleted(bool success);

	UFUNCTION(BlueprintCallable)
	void OnAuricCellSpecialOtherOptions();

	UFUNCTION(BlueprintCallable)
	void OnAuricCellSpecialBuyAction(FName bundleId);

public:
	UStoreSpecialsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialsSubPresenter) { return 0; }
