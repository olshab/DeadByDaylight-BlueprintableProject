#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioFXComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAudioFXComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _audioAmbientDetector;

public:
	UFUNCTION(BlueprintCallable)
	void SetAudioAmbientDetector(UPrimitiveComponent* audioAmbientDetector);

private:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged(bool locallyObserved);

	UFUNCTION(BlueprintCallable)
	void OnDeafenCompleted();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Deafen(float duration);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Deafen(float duration);

public:
	UAudioFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAudioFXComponent) { return 0; }
