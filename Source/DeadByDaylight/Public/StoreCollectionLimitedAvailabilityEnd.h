#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreCollectionLimitedAvailabilityEnd.generated.h"

USTRUCT(BlueprintType)
struct FStoreCollectionLimitedAvailabilityEnd
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FDateTime Date;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool VisibleAfterEndDate;

public:
	DEADBYDAYLIGHT_API FStoreCollectionLimitedAvailabilityEnd();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCollectionLimitedAvailabilityEnd) { return 0; }
