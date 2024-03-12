#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "StoreSubPresenter.generated.h"

class UShopManager;

UCLASS(Blueprintable, Abstract)
class UStoreSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UShopManager* _shopManager;

protected:
	UFUNCTION(BlueprintCallable)
	void SetItemSeen(const FString& itemId);

	UFUNCTION(BlueprintCallable)
	void OnSubTabSelected(int32 subTabId);

public:
	UStoreSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSubPresenter) { return 0; }
