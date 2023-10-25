#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EKillerSoundComparisonType.h"
#include "AtlantaKillerSoundConditionData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaKillerSoundConditionData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RTPCAudioID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ComparisonValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerSoundComparisonType ValueComparisonType;

public:
	DEADBYDAYLIGHT_API FAtlantaKillerSoundConditionData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaKillerSoundConditionData) { return 0; }
