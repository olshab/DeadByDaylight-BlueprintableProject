#pragma once

#include "CoreMinimal.h"
#include "DailyRewardData.h"
#include "UObject/NoExportTypes.h"
#include "DailyRewardCalendarData.generated.h"

USTRUCT(BlueprintType)
struct FDailyRewardCalendarData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FDailyRewardData> DailyRewardList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrentlyActiveDailyRewardIndex;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime CalendarStartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime CalendarExpirationDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSet;

public:
	DEADBYDAYLIGHT_API FDailyRewardCalendarData();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRewardCalendarData) { return 0; }
