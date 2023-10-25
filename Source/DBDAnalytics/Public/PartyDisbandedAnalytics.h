#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyDisbandedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPartyDisbandedAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Error;

public:
	DBDANALYTICS_API FPartyDisbandedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyDisbandedAnalytics) { return 0; }
