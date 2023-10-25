#pragma once

#include "CoreMinimal.h"
#include "CharacterSlotData.h"
#include "TeachableData.h"
#include "KillerAttributesData.h"
#include "InventorySlotData.h"
#include "CharacterInfoData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterInfoData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCharacterSlotData SlotData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FTeachableData> TeachablePerksData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FInventorySlotData PowerData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FKillerAttributesData killerAttributesData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEnabled;

public:
	DEADBYDAYLIGHT_API FCharacterInfoData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterInfoData) { return 0; }
