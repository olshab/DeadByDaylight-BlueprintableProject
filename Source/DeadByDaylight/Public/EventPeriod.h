#pragma once

#include "CoreMinimal.h"
#include "EventPeriod.generated.h"

USTRUCT(BlueprintType)
struct FEventPeriod
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EndDate;

public:
	DEADBYDAYLIGHT_API FEventPeriod();
};

FORCEINLINE uint32 GetTypeHash(const FEventPeriod) { return 0; }
