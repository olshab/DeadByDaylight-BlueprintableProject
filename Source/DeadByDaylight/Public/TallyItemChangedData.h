#pragma once

#include "CoreMinimal.h"
#include "InventorySlotData.h"
#include "EEnergyTypeEnum.h"
#include "TallyItemChangedData.generated.h"

USTRUCT(BlueprintType)
struct FTallyItemChangedData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FInventorySlotData Item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FInventorySlotData Addon1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FInventorySlotData Addon2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EEnergyTypeEnum EnergyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float EnergyLevel;

public:
	DEADBYDAYLIGHT_API FTallyItemChangedData();
};

FORCEINLINE uint32 GetTypeHash(const FTallyItemChangedData) { return 0; }
