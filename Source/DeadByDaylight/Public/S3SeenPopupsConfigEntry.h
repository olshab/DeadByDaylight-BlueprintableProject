#pragma once

#include "CoreMinimal.h"
#include "S3SeenPopupsConfigEntry.generated.h"

USTRUCT(BlueprintType)
struct FS3SeenPopupsConfigEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxTimes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinLoginThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SessionsPerPopup;

public:
	DEADBYDAYLIGHT_API FS3SeenPopupsConfigEntry();
};

FORCEINLINE uint32 GetTypeHash(const FS3SeenPopupsConfigEntry) { return 0; }
