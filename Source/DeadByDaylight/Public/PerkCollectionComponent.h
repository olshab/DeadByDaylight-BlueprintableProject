#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerkCollectionComponent.generated.h"

class UPerk;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPerkCollectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Array, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UPerk*> _array;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Array(const TArray<UPerk*>& oldArray);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPerkCollectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPerkCollectionComponent) { return 0; }
