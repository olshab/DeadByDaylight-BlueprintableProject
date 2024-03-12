#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionMediaData.generated.h"

USTRUCT(BlueprintType)
struct FStoreCollectionMediaData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Path;

public:
	DEADBYDAYLIGHT_API FStoreCollectionMediaData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionMediaData) { return 0; }
