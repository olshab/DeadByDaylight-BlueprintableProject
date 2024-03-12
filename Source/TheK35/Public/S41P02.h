#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S41P02.generated.h"

class UInteractionDefinition;
class UStatusEffect;
class UInteractionAttacherComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US41P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedRevealKillerAuraEffectClass;

	UPROPERTY(EditAnywhere)
	float _auraDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _selfHealNoMedkitSpeedPenaltyEffectClass;

	UPROPERTY(EditAnywhere)
	float _selfHealSpeedPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UInteractionDefinition> _s41p02HealInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_InteractionAttacherComponent, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionAttacherComponent* _interactionAttacherComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_InteractionAttacherComponent();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US41P02();
};

FORCEINLINE uint32 GetTypeHash(const US41P02) { return 0; }
