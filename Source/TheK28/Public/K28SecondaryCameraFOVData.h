#pragma once

#include "CoreMinimal.h"
#include "K28SecondaryCameraFOVData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FK28SecondaryCameraFOVData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fovChangeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _initialFovValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _targetFovValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _fovCurve;

public:
	THEK28_API FK28SecondaryCameraFOVData();
};

FORCEINLINE uint32 GetTypeHash(const FK28SecondaryCameraFOVData) { return 0; }
