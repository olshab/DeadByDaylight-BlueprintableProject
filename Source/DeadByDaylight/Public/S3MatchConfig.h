#pragma once

#include "CoreMinimal.h"
#include "S3MatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3MatchConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxMatchSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxEndGameCollapseSeconds;

public:
	DEADBYDAYLIGHT_API FS3MatchConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3MatchConfig) { return 0; }
