#pragma once

#include "CoreMinimal.h"
#include "ArchivesRiftUnlockSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FArchivesRiftUnlockSequenceData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PreviousTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPremiumUnlocked;

public:
	DBDUIVIEWINTERFACES_API FArchivesRiftUnlockSequenceData();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesRiftUnlockSequenceData) { return 0; }
