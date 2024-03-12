#pragma once

#include "CoreMinimal.h"
#include "EStoreSpecialPackItemType.h"
#include "StoreSpecialPackItem.generated.h"

USTRUCT(BlueprintType)
struct FStoreSpecialPackItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStoreSpecialPackItemType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CustomizationId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TomeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackItem();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackItem) { return 0; }
