#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavedSeenPopupData.generated.h"

USTRUCT(BlueprintType)
struct FSavedSeenPopupData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, SaveGame)
	FDateTime LastSeenDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 LastSeenCumulativeSession;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 TimesSeen;

public:
	DEADBYDAYLIGHT_API FSavedSeenPopupData();
};

FORCEINLINE uint32 GetTypeHash(const FSavedSeenPopupData) { return 0; }
