#pragma once

#include "CoreMinimal.h"
#include "K33TunnelBlockSpawnDatum.h"
#include "K33TunnelBlockSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FK33TunnelBlockSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FK33TunnelBlockSpawnDatum> Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDataSet;

public:
	THEK33_API FK33TunnelBlockSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FK33TunnelBlockSpawnData) { return 0; }
