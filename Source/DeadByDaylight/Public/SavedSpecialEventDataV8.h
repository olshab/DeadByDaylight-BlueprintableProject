#pragma once

#include "CoreMinimal.h"
#include "SavedSpecialEventDataV8.generated.h"

USTRUCT(BlueprintType)
struct FSavedSpecialEventDataV8
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool EventEntryScreenOpened;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool EventSplashScreenSeen;

public:
	DEADBYDAYLIGHT_API FSavedSpecialEventDataV8();
};

FORCEINLINE uint32 GetTypeHash(const FSavedSpecialEventDataV8) { return 0; }
