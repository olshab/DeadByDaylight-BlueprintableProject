#pragma once

#include "CoreMinimal.h"
#include "SearchableItemStrategy.h"
#include "WeightBasedItemData.h"
#include "WeightBasedSearchableItemStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWeightBasedSearchableItemStrategy : public USearchableItemStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FWeightBasedItemData> _weightBasedItems;

public:
	UWeightBasedSearchableItemStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UWeightBasedSearchableItemStrategy) { return 0; }
