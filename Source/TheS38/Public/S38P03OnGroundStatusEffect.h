#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "S38P03OnGroundStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US38P03OnGroundStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hastePercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _hasteStatusEffect;

private:
	UFUNCTION()
	void Authority_OnPickSelfUp(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnCamperHealthChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

	UFUNCTION(BlueprintCallable)
	void Authority_HealSelf();

public:
	US38P03OnGroundStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const US38P03OnGroundStatusEffect) { return 0; }
