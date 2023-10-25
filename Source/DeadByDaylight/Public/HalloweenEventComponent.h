#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "HalloweenEventComponent.generated.h"

class USectionnedChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHalloweenEventComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Vial, Export, meta=(AllowPrivateAccess=true))
	USectionnedChargeableComponent* _toxinVialComponent;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SpawnVial(float initialCharge);

	UFUNCTION(BlueprintCallable)
	void OnRep_Vial();

	UFUNCTION()
	void OnFinishedPlaying(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintPure)
	bool IsVialFull() const;

	UFUNCTION(BlueprintPure)
	USectionnedChargeableComponent* GetVial() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHalloweenEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHalloweenEventComponent) { return 0; }
