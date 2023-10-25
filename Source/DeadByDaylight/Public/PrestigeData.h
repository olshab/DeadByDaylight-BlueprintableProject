#pragma once

#include "CoreMinimal.h"
#include "PrestigeData.generated.h"

USTRUCT(BlueprintType)
struct FPrestigeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Progress;

public:
	DEADBYDAYLIGHT_API FPrestigeData();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeData) { return 0; }
