#pragma once

#include "CoreMinimal.h"
#include "EStoreItemUnlockType.h"
#include "StoreItemUnlockInfoViewData.generated.h"

USTRUCT(BlueprintType)
struct FStoreItemUnlockInfoViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreItemUnlockType Type;

public:
	DBDUIVIEWINTERFACES_API FStoreItemUnlockInfoViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreItemUnlockInfoViewData) { return 0; }
