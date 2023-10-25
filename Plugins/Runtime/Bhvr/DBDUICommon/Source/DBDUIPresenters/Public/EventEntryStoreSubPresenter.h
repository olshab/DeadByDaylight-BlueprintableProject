#pragma once

#include "CoreMinimal.h"
#include "EventEntryRewardsSubPresenter.h"
#include "EventEntryStoreSubPresenter.generated.h"

UCLASS(Blueprintable)
class UEventEntryStoreSubPresenter : public UEventEntryRewardsSubPresenter
{
	GENERATED_BODY()

public:
	UEventEntryStoreSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryStoreSubPresenter) { return 0; }
