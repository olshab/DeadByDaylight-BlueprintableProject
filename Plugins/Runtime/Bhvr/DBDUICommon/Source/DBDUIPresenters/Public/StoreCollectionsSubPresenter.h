#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "StoreCollectionsSubPresenter.generated.h"

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreCollectionsSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

public:
	UStoreCollectionsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCollectionsSubPresenter) { return 0; }
