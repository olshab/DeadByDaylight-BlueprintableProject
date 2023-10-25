#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "S38P03.generated.h"

class US38P03Interaction;
class UInteractionDefinition;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US38P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _onGroundEffectClass;

	UPROPERTY(EditAnywhere)
	float _hasteDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<US38P03Interaction> _interactionBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _perkInteraction;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteDurationAtLevel() const;

private:
	UFUNCTION()
	void Authority_OnPickSelfUp(FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnPerkActivated(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnExitGatesPowered(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	US38P03();
};

FORCEINLINE uint32 GetTypeHash(const US38P03) { return 0; }
