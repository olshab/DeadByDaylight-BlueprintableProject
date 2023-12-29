#pragma once

#include "CoreMinimal.h"
#include "EventEntryRewardsSubPresenter.h"
#include "EventEntryStoreSubPresenter.generated.h"

class UStoreCustomizationItemViewData;

UCLASS(Blueprintable)
class UEventEntryStoreSubPresenter : public UEventEntryRewardsSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _storeItems;

public:
	UEventEntryStoreSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryStoreSubPresenter) { return 0; }
