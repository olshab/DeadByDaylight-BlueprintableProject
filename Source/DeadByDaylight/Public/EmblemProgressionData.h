#pragma once

#include "CoreMinimal.h"
#include "EmblemProgressionData.generated.h"

USTRUCT(BlueprintType)
struct FEmblemProgressionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ProgressionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float ProgressionPercent;

public:
	DEADBYDAYLIGHT_API FEmblemProgressionData();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemProgressionData) { return 0; }
