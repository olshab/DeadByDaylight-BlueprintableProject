#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "EInventoryItemType.h"
#include "EItemAvailability.h"
#include "LoadoutTooltipData.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ParentDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPastEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInventoryItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemAvailability Availability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EventBannerLabel;

public:
	DBDUIVIEWINTERFACES_API FLoadoutTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FLoadoutTooltipData) { return 0; }
