#pragma once

#include "CoreMinimal.h"
#include "PlayerStateData.h"
#include "EquippedPlayerCustomization.h"
#include "PlayerDataSync.generated.h"

USTRUCT(BlueprintType)
struct FPlayerDataSync
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPlayerStateData PlayerData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEquippedPlayerCustomization EquippedCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EquipedItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> EquipedItemAddonIds;

public:
	DEADBYDAYLIGHT_API FPlayerDataSync();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerDataSync) { return 0; }
