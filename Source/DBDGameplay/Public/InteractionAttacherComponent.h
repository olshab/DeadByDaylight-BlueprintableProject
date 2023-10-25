#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "EInteractionOwnerType.h"
#include "InteractionAttacherComponent.generated.h"

class UInteractionDefinition;
class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UInteractionAttacherComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_InteractionDefinitions, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UInteractionDefinition*> _interactionDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ChargeableComponents, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UChargeableComponent*> _chargeableComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UInteractionDefinition> _interactionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EInteractionOwnerType _restriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _useChargeableInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _chargeableComponentID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _chargeableComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _secondsToCharge;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_InteractionDefinitions();

	UFUNCTION(BlueprintCallable)
	void OnRep_ChargeableComponents();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInteractionAttacherComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionAttacherComponent) { return 0; }
