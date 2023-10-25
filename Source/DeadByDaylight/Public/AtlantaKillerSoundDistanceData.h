#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaKillerSoundDistanceData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaKillerSoundDistanceData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinRadiusSoundDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRadiusSoundDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinRangeSoundHeard;

public:
	DEADBYDAYLIGHT_API FAtlantaKillerSoundDistanceData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaKillerSoundDistanceData) { return 0; }
