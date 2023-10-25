#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaKillerSoundConditionData.h"
#include "AtlantaKillerSoundIndicatorData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaKillerSoundIndicatorData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinRadiusSoundDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRadiusSoundDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinRangeSoundHeard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeGlobalSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanDiminishWithDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAtlantaKillerSoundConditionData> GlobalSoundConditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAtlantaKillerSoundConditionData> DiminishWithDistanceConditions;

public:
	DEADBYDAYLIGHT_API FAtlantaKillerSoundIndicatorData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaKillerSoundIndicatorData) { return 0; }
