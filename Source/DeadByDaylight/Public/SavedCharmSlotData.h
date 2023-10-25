#pragma once

#include "CoreMinimal.h"
#include "SavedCharmSlotData.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharmSlotData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, SaveGame)
	int8 SlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName CharmId;

public:
	DEADBYDAYLIGHT_API FSavedCharmSlotData();
};

FORCEINLINE uint32 GetTypeHash(const FSavedCharmSlotData) { return 0; }
