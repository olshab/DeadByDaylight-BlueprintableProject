#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETrapType.h"
#include "Templates/SubclassOf.h"
#include "PerkTrappableComponent.generated.h"

class AInteractable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPerkTrappableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrapAddedOrRemoved, const ETrapType, trapType);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTrapAddedOrRemoved OnAddTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTrapAddedOrRemoved OnRemoveTrap;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AInteractable> _interactableType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TrapsOnInteractable)
	TArray<ETrapType> _trapsOnInteractable;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TrapsOnInteractable();

public:
	UFUNCTION(BlueprintPure)
	bool HasTrap(const ETrapType trapType) const;

	UFUNCTION(BlueprintPure)
	bool HasAnyTrap() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPerkTrappableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPerkTrappableComponent) { return 0; }
