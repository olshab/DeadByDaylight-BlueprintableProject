#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorStatusInterface.h"
#include "K29SurvivorStatusComponent.generated.h"

class ACamperPlayer;
class UK29PowerStatusHandlerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK29SurvivorStatusComponent : public UActorComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Replicated, Export)
	TWeakObjectPtr<UK29PowerStatusHandlerComponent> _powerStatusHandlerComponent;

	UPROPERTY(EditAnywhere, Replicated)
	TWeakObjectPtr<ACamperPlayer> _owningSurvivor;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK29SurvivorStatusComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29SurvivorStatusComponent) { return 0; }
