#pragma once

#include "CoreMinimal.h"
#include "EventObjectiveTargetData.generated.h"

USTRUCT(BlueprintType)
struct FEventObjectiveTargetData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 progression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float bonus;

public:
	DBDUIVIEWINTERFACES_API FEventObjectiveTargetData();
};

FORCEINLINE uint32 GetTypeHash(const FEventObjectiveTargetData) { return 0; }
