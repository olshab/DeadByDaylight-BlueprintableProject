#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "InvalidLoadoutAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FInvalidLoadoutAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SlasherPerkCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PowerAddonCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CamperPerkCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemAddonCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CallingFunctionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterId;

public:
	DBDANALYTICS_API FInvalidLoadoutAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FInvalidLoadoutAnalytics) { return 0; }
