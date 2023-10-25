#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoudNoise.generated.h"

class UAkComponent;
class USceneComponent;
class UDecalComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ALoudNoise : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDecalComponent* _toInfinityDecal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UParticleSystemComponent* _distortionParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAkComponent* _ak_audio_loudNoise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	USceneComponent* _rootScene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _loudNoiseMinDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _loudNoiseLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _heightToAddToLoudNoiseLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _loudNoiseDecalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cameraDecalDistance;

public:
	ALoudNoise();
};

FORCEINLINE uint32 GetTypeHash(const ALoudNoise) { return 0; }
