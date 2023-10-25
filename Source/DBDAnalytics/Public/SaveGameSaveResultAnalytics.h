#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SaveGameSaveResultAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameSaveResultAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SaveSuccessful;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResponseCode;

public:
	DBDANALYTICS_API FSaveGameSaveResultAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSaveGameSaveResultAnalytics) { return 0; }
