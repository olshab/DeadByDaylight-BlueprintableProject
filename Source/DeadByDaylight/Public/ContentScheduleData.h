#pragma once

#include "CoreMinimal.h"
#include "ContentScheduleRecord.h"
#include "ContentScheduleData.generated.h"

USTRUCT(BlueprintType)
struct FContentScheduleData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FContentScheduleRecord> Schedule;

public:
	DEADBYDAYLIGHT_API FContentScheduleData();
};

FORCEINLINE uint32 GetTypeHash(const FContentScheduleData) { return 0; }
