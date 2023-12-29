#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "StoreCollectionsSubPresenter.generated.h"

class UStoreCollectionViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreCollectionsSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCollectionViewData*> _specialCollectionsViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCollectionViewData*> _featuredCollectionsViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCollectionViewData*> _allCollectionsViewData;

public:
	UStoreCollectionsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCollectionsSubPresenter) { return 0; }
