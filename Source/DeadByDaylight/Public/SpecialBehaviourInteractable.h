#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "SpecialBehaviourInteractable.generated.h"

class ADBDPlayerState;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ASpecialBehaviourInteractable : public AInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_SpecialBehaviourOwner, Transient)
	TWeakObjectPtr<ADBDPlayerState> _specialBehaviourOwner;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SpecialBehaviourOwner();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASpecialBehaviourInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ASpecialBehaviourInteractable) { return 0; }
