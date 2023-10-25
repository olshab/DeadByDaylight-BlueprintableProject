#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "UObject/ScriptInterface.h"
#include "EBlindType.h"
#include "BlindableBaseComponent.generated.h"

class UChargeableComponent;
class IBlindingEffectorInterface;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlindableBaseComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsBlinded, Transient)
	bool _isBlinded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	FTagStateBool _isBeingBlinded;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _chargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<AActor*, TScriptInterface<IBlindingEffectorInterface>> _authority_blindingEffectors;

public:
	UFUNCTION(BlueprintCallable)
	void SetChargeable(UChargeableComponent* value);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsBlinded();

	UFUNCTION(BlueprintCallable)
	void OnChargeableCompletionPercentChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete);

public:
	UFUNCTION(BlueprintPure)
	bool IsBlinded() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveBlindingEffector(TScriptInterface<IBlindingEffectorInterface> effector);

	UFUNCTION(BlueprintCallable)
	void Authority_Blinded(EBlindType blindType, float blindnessDuration, AActor* effectorActor);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddBlindingEffector(TScriptInterface<IBlindingEffectorInterface> effector);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBlindableBaseComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlindableBaseComponent) { return 0; }
