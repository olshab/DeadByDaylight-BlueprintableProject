#pragma once

#include "CoreMinimal.h"
#include "SpecialEventSavedData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventSavedData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EventEntryScreenOpened;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EventSplashScreenSeen;

public:
	DEADBYDAYLIGHT_API FSpecialEventSavedData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventSavedData) { return 0; }
