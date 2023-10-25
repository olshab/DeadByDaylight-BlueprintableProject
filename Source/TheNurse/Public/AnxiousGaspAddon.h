#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "AnxiousGaspAddon.generated.h"

class UCapsuleComponent;
class UAkAudioEvent;
class AActor;
class ACamperPlayer;
class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UAnxiousGaspAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAkAudioEvent* _screamSoundEvent;

	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreEventTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _detectionCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _detectionCapsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _survivorDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<AActor*> _alreadyDetectedPlayers;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void PlayScream(const ACamperPlayer* survivor) const;

private:
	UFUNCTION()
	void OnDetectorOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UAnxiousGaspAddon();
};

FORCEINLINE uint32 GetTypeHash(const UAnxiousGaspAddon) { return 0; }
