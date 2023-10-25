#pragma once

#include "CoreMinimal.h"
#include "EInventoryItemType.h"
#include "BaseTooltipData.h"
#include "ETeachableStatus.h"
#include "EItemRarity.h"
#include "TeachableTooltipData.generated.h"

USTRUCT(BlueprintType)
struct FTeachableTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity ItemRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInventoryItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString AvailabilityMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EffectMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool UseInCharacterSelectionScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ETeachableStatus TeachableStatus;

public:
	DEADBYDAYLIGHT_API FTeachableTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FTeachableTooltipData) { return 0; }
