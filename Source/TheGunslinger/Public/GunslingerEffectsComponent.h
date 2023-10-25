#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GunslingerEffectsComponent.generated.h"

class AHarpoonRifle;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UGunslingerEffectsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayOutOfAmmoSound);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsAimingChanged, bool, isAiming);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsAimingChanged OnIsAimingChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPlayOutOfAmmoSound PlayOutOfAmmoSound;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minimumTimeBetweenBroadcast;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AHarpoonRifle* _rifle;

private:
	UFUNCTION(BlueprintCallable)
	void OnItemUsedStateChanged(bool isPressed);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_PlayOutOfAmmoSound();

public:
	UGunslingerEffectsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGunslingerEffectsComponent) { return 0; }
