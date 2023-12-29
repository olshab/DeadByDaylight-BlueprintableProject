#pragma once

#include "CoreMinimal.h"
#include "EStoreSpecialPackItemType.h"
#include "ECurrencyType.h"
#include "StoreSpecialPackRuntimeItem.generated.h"

USTRUCT(BlueprintType)
struct FStoreSpecialPackRuntimeItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreSpecialPackItemType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(EditAnywhere, Transient)
	TMap<ECurrencyType, uint32> OriginalCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackRuntimeItem();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackRuntimeItem) { return 0; }
