#pragma once

#include "CoreMinimal.h"
#include "NewsContentDetails.h"
#include "NewsContentOnlineData.generated.h"

USTRUCT(BlueprintType)
struct FNewsContentOnlineData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FNewsContentDetails> News;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool News_isset;

public:
	DEADBYDAYLIGHT_API FNewsContentOnlineData();
};

FORCEINLINE uint32 GetTypeHash(const FNewsContentOnlineData) { return 0; }
