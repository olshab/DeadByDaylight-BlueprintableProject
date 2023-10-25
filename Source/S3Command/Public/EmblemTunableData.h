#pragma once

#include "CoreMinimal.h"
#include "EmblemTunableItem.h"
#include "EmblemThreshold.h"
#include "EmblemTunableData.generated.h"

USTRUCT(BlueprintType)
struct FEmblemTunableData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEmblemTunableItem> EmblemValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FEmblemThreshold> EmblemThresholds;

public:
	S3COMMAND_API FEmblemTunableData();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemTunableData) { return 0; }
