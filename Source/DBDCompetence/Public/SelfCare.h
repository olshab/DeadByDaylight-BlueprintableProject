#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "SelfCare.generated.h"

class UInteractionDefinition;
class UStatusEffect;
class UInteractionAttacherComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USelfCare : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _selfHealNoMedkitSpeedPenaltyEffectClass;

	UPROPERTY(EditAnywhere)
	float _selfHealSpeedPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UInteractionDefinition> _selfCareInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_InteractionAttacherComponent, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionAttacherComponent* _interactionAttacherComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_InteractionAttacherComponent();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USelfCare();
};

FORCEINLINE uint32 GetTypeHash(const USelfCare) { return 0; }
