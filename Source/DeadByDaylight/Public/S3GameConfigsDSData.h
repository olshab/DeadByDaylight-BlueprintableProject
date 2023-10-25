#pragma once

#include "CoreMinimal.h"
#include "DDosGameConfigDS.h"
#include "S3GameConfigsDSData.generated.h"

USTRUCT(BlueprintType)
struct FS3GameConfigsDSData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDDosGameConfigDS Ddos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, float> MapHistoryWeights;

public:
	DEADBYDAYLIGHT_API FS3GameConfigsDSData();
};

FORCEINLINE uint32 GetTypeHash(const FS3GameConfigsDSData) { return 0; }
