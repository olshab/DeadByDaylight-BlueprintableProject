#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DedicatedServerPlayerEquipDisabledItemAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDedicatedServerPlayerEquipDisabledItemAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EquipedDisabledItemIds;

public:
	DBDANALYTICS_API FDedicatedServerPlayerEquipDisabledItemAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDedicatedServerPlayerEquipDisabledItemAnalytics) { return 0; }
