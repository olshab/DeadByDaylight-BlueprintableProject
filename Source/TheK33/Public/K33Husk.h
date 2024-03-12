#pragma once

#include "CoreMinimal.h"
#include "PoseableHusk.h"
#include "K33Husk.generated.h"

class UMontagePlayer;
class UTerrorRadiusEmitterComponent;
class UAkComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class THEK33_API AK33Husk : public APoseableHusk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UMontagePlayer* _montagePlayer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTerrorRadiusEmitterComponent* _terrorRadiusEmitterComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAkComponent* _huskAudioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _terrorRadiusDistanceOffsetCurve;

public:
	AK33Husk();
};

FORCEINLINE uint32 GetTypeHash(const AK33Husk) { return 0; }
