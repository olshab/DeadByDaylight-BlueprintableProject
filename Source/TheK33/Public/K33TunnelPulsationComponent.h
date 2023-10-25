#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K33TunnelPulsationComponent.generated.h"

class AK33TunnelPulse;
class ULocalActorPoolComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TunnelPulsationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _initialPulsePoolSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK33TunnelPulse> _tunnelPulseActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _pulseSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeBetweenPulseWaves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _numberOfPulsesPerWaves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeBetweenPulsesInWave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDistanceToTriggerNextPulseWave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULocalActorPoolComponent* _pool;

public:
	UK33TunnelPulsationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TunnelPulsationComponent) { return 0; }
