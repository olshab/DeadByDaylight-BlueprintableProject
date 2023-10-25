#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "StoreFeaturedSubPresenter.generated.h"

class IStoreFeaturedViewInterface;
class UStoreSpecialOfferItemViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreFeaturedSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TScriptInterface<IStoreFeaturedViewInterface> _storeFeaturedWidget;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreSpecialOfferItemViewData*> _cachedSpecialOfferItems;

public:
	UFUNCTION(BlueprintCallable)
	void OnBackendStoreDataReceived(bool success);

public:
	UStoreFeaturedSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreFeaturedSubPresenter) { return 0; }
