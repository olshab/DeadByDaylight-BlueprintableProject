#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyCreatedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPartyCreatedAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

public:
	DBDANALYTICS_API FPartyCreatedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyCreatedAnalytics) { return 0; }
