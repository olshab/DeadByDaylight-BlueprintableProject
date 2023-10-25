#pragma once

#include "CoreMinimal.h"
#include "BaseCloakInteraction.h"
#include "TunableStat.h"
#include "UncloakInteraction.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UUncloakInteraction : public UBaseCloakInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _postUncloakSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _postUncloakSpeedCurveDuration;

public:
	UUncloakInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UUncloakInteraction) { return 0; }
