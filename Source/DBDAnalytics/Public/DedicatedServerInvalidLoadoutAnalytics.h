#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DedicatedServerInvalidLoadoutAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDedicatedServerInvalidLoadoutAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Reason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterId;

public:
	DBDANALYTICS_API FDedicatedServerInvalidLoadoutAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDedicatedServerInvalidLoadoutAnalytics) { return 0; }
