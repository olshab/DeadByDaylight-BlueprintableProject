#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "MoriableComponent.generated.h"

class UStatusEffect;
class UInteractionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMoriableComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_MoriInteractions, Transient, Export)
	TArray<UInteractionDefinition*> _moriInteractions;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _disruptAuraReadingStatusEffect;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_MoriInteractions();

public:
	UFUNCTION(BlueprintCallable)
	void OnMoriUpdateStart();

	UFUNCTION(BlueprintCallable)
	void OnMoriFinished(bool hasBeenKilledByMori);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UMoriableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMoriableComponent) { return 0; }
