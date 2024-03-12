#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SeancePerformerComponent.generated.h"

class USeancePerk;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USeancePerformerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USeancePerk*> _ownedSeancePerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _ritualInteractionMultiplierAdditive;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting(bool interrupted);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USeancePerformerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USeancePerformerComponent) { return 0; }
