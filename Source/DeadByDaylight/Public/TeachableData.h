#pragma once

#include "CoreMinimal.h"
#include "InventorySlotData.h"
#include "ETeachableStatus.h"
#include "TeachableData.generated.h"

USTRUCT(BlueprintType)
struct FTeachableData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FInventorySlotData InventorySlotData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ETeachableStatus Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 UnlockLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Message;

public:
	DEADBYDAYLIGHT_API FTeachableData();
};

FORCEINLINE uint32 GetTypeHash(const FTeachableData) { return 0; }
