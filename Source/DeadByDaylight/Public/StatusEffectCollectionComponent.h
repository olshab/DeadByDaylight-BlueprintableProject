#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusEffectCollectionComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStatusEffectCollectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Array, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _array;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _local_oldArray;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Array();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UStatusEffectCollectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStatusEffectCollectionComponent) { return 0; }
