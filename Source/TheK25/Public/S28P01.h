#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S28P01.generated.h"

class US28P01AuraReveal;
class ADBDPlayer;
class UChargeableComponent;
class UInteractionAttacherComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US28P01 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _auraRevealDuration;

	UPROPERTY(EditAnywhere)
	float _auraRevealRange;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<US28P01AuraReveal> _S28P01InteractionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _S28P01ChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	US28P01AuraReveal* _S28P01Interaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsPerkActive, Transient, meta=(AllowPrivateAccess=true))
	bool _isPerkActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_InteractionAttacherComponent, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionAttacherComponent* _interactionAttacherComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _playerOwner;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsPerkActive() const;

	UFUNCTION(BlueprintCallable)
	void OnRep_InteractionAttacherComponent();

	UFUNCTION(BlueprintCallable)
	void OnInteractionChargeChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete);

	UFUNCTION(BlueprintPure)
	float GetAuraRevealRange() const;

	UFUNCTION(BlueprintPure)
	float GetAuraRevealDuration() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US28P01();
};

FORCEINLINE uint32 GetTypeHash(const US28P01) { return 0; }
