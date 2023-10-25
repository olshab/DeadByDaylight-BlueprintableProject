#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "TriggerReset.h"
#include "Triggered.h"
#include "Engine/EngineTypes.h"
#include "TriggerableWorldObjectComponent.generated.h"

class ADBDPlayer;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTriggerableWorldObjectComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FTriggered OnTriggered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FTriggerReset OnTriggerReset;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _triggerResetTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _randomChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rollFrequency;

private:
	UPROPERTY(EditAnywhere, Export)
	TWeakObjectPtr<UPrimitiveComponent> _conditionalTriggerVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> _conditionalVolumeOverlappingPlayers;

	UPROPERTY(EditAnywhere, Export)
	TWeakObjectPtr<UPrimitiveComponent> _guaranteedTriggerVolume;

public:
	UFUNCTION(BlueprintCallable)
	void SetGuaranteedTriggerVolume(UPrimitiveComponent* volume);

	UFUNCTION(BlueprintCallable)
	void SetConditionalTriggerVolume(UPrimitiveComponent* volume);

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnTriggerReset();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnTriggered(AActor* instigator, FVector triggerLocation);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void GetConditionalModifiers(ADBDPlayer* player, float& outAdditive, float& outMultiplicative);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanPlayerTriggerGuaranteed(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanPlayerTriggerConditional(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Trigger(AActor* instigator, FVector triggerLocation);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ResetTrigger();

protected:
	UFUNCTION()
	void Authority_GuaranteedVolumeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);

	UFUNCTION(BlueprintCallable)
	void Authority_ConditionalVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void Authority_ConditionalVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);

public:
	UTriggerableWorldObjectComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTriggerableWorldObjectComponent) { return 0; }
