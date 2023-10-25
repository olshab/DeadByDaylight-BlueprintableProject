#pragma once

#include "CoreMinimal.h"
#include "WalesCypherEventData.generated.h"

USTRUCT(BlueprintType)
struct FWalesCypherEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EnteredSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ExpectedSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 TimeoutThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Timeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool CharmGranted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 ValidCharacterSelcted;

public:
	DEADBYDAYLIGHT_API FWalesCypherEventData();
};

FORCEINLINE uint32 GetTypeHash(const FWalesCypherEventData) { return 0; }
