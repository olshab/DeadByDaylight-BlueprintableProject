#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "IAPCanceledAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FIAPCanceledAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString itemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString provider;

public:
	DBDANALYTICS_API FIAPCanceledAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FIAPCanceledAnalytics) { return 0; }
