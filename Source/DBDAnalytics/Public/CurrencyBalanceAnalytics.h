#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CurrencyBalanceAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyBalanceAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CurrencyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrencyBalance;

public:
	DBDANALYTICS_API FCurrencyBalanceAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyBalanceAnalytics) { return 0; }
