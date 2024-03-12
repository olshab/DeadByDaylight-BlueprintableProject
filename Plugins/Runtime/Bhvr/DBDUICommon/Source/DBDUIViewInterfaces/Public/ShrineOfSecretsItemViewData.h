#pragma once

#include "CoreMinimal.h"
#include "LoadoutTooltipData.h"
#include "UObject/SoftObjectPtr.h"
#include "PriceTagViewData.h"
#include "ShrineOfSecretsItemViewData.generated.h"

class UMenuPerkViewData;
class UTexture2D;

USTRUCT(BlueprintType)
struct FShrineOfSecretsItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 BPCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UMenuPerkViewData* Perk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FLoadoutTooltipData PerkTooltip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPriceTagViewData PriceTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool PerkMaxed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool BPClaimed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsASurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Portrait;

public:
	DBDUIVIEWINTERFACES_API FShrineOfSecretsItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const FShrineOfSecretsItemViewData) { return 0; }
