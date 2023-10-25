#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "UnknownPrivilegeErrorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FUnknownPrivilegeErrorAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PrivilegeResults;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PlatformResults;

public:
	DBDANALYTICS_API FUnknownPrivilegeErrorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FUnknownPrivilegeErrorAnalytics) { return 0; }
