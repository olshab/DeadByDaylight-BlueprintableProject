#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FranklinsDemiseConsumedByEntityComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class UTimerObject;
class UChargerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFranklinsDemiseConsumedByEntityComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ConsumeTimer, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _consumeTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _camperStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _previousOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _originatingPerkOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargerComponent* _itemChargerComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ConsumeTimer();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnConsumedByEntity();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_StartConsume(float duration, ADBDPlayer* previousOwner, ADBDPlayer* slasher);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFranklinsDemiseConsumedByEntityComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFranklinsDemiseConsumedByEntityComponent) { return 0; }
