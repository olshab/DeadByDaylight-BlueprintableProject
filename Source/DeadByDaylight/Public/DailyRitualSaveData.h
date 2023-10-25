#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DailyRitualSaveData.generated.h"

USTRUCT(BlueprintType)
struct FDailyRitualSaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, SaveGame)
	FDateTime LastRitualPopupDate;

public:
	DEADBYDAYLIGHT_API FDailyRitualSaveData();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualSaveData) { return 0; }
