#pragma once

#include "CoreMinimal.h"
#include "HoudiniBakedOutput.h"
#include "HoudiniPDGWorkResultObjectBakedOutput.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniPDGWorkResultObjectBakedOutput
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FHoudiniBakedOutput> BakedOutputs;

public:
	HOUDINIENGINERUNTIME_API FHoudiniPDGWorkResultObjectBakedOutput();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniPDGWorkResultObjectBakedOutput) { return 0; }
