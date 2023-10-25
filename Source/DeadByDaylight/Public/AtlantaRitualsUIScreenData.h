#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaRitualUIData.h"
#include "AtlantaRitualsUIScreenData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualsUIScreenData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime DailyRefreshTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime WeeklyRefreshTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAtlantaRitualUIData> DailyRituals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAtlantaRitualUIData> WeeklyRituals;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualsUIScreenData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualsUIScreenData) { return 0; }
