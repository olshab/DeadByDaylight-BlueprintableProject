#pragma once

#include "CoreMinimal.h"
#include "ViewRotationStrategy.h"
#include "UObject/NoExportTypes.h"
#include "ConeAroundDirectionCameraStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UConeAroundDirectionCameraStrategy : public UObject, public IViewRotationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxPitchDifference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxYawDifference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxRollDifference;

public:
	UConeAroundDirectionCameraStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UConeAroundDirectionCameraStrategy) { return 0; }
