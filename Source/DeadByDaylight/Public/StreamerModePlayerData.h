#pragma once

#include "CoreMinimal.h"
#include "StreamerModePlayerData.generated.h"

USTRUCT(BlueprintType)
struct FStreamerModePlayerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAnonymousMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AnonymousSuffix;

public:
	DEADBYDAYLIGHT_API FStreamerModePlayerData();
};

FORCEINLINE uint32 GetTypeHash(const FStreamerModePlayerData) { return 0; }
