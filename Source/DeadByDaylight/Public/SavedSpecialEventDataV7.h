#pragma once

#include "CoreMinimal.h"
#include "SavedSpecialEventDataV7.generated.h"

USTRUCT(BlueprintType)
struct FSavedSpecialEventDataV7
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<int32> SeenCinematics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool EventEntryScreenOpened;

public:
	DEADBYDAYLIGHT_API FSavedSpecialEventDataV7();
};

FORCEINLINE uint32 GetTypeHash(const FSavedSpecialEventDataV7) { return 0; }
