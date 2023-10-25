#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CustomerSupportClientLoginAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FCustomerSupportClientLoginAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Provider;

public:
	DBDANALYTICS_API FCustomerSupportClientLoginAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCustomerSupportClientLoginAnalytics) { return 0; }
