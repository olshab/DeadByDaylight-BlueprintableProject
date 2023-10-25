#pragma once

#include "CoreMinimal.h"
#include "FootBoneData.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FFootBoneData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCurveVector* RightFootCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCurveVector* LeftFootCurve;

public:
	DBDANIMATION_API FFootBoneData();
};

FORCEINLINE uint32 GetTypeHash(const FFootBoneData) { return 0; }
