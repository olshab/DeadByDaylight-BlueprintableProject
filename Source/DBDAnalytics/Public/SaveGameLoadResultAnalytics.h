#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SaveGameLoadResultAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameLoadResultAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool LoadSuccessful;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Message;

public:
	DBDANALYTICS_API FSaveGameLoadResultAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSaveGameLoadResultAnalytics) { return 0; }
