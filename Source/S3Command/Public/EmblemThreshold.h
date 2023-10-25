#pragma once

#include "CoreMinimal.h"
#include "EmblemThreshold.generated.h"

USTRUCT(BlueprintType)
struct FEmblemThreshold
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> Thresholds;

public:
	S3COMMAND_API FEmblemThreshold();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemThreshold) { return 0; }
