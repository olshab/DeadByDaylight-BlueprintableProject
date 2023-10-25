#pragma once

#include "CoreMinimal.h"
#include "BaseManifestInteraction.h"
#include "ManifestInteraction.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UManifestInteraction : public UBaseManifestInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _postManifestSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _postManifestSpeedCurveDuration;

public:
	UManifestInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UManifestInteraction) { return 0; }
