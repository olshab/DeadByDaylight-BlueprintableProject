#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPackCatalogPrice.generated.h"

USTRUCT(BlueprintType)
struct FStoreSpecialPackCatalogPrice
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CurrencyId;

	UPROPERTY(EditAnywhere, Transient)
	uint32 Price;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackCatalogPrice();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackCatalogPrice) { return 0; }
