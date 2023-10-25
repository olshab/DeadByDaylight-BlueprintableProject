#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "K25P03.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hemorrhageEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _mangledEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _K25P03SurvivorStateTwoEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _numberOfSurvivorsWaitingForDamageStateChange;

	UPROPERTY(EditAnywhere)
	float _state2ActionSpeedDebuffPercentage;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorRemoved(ACamperPlayer* survivor);

	UFUNCTION()
	void OnDamageStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void OnCamperUnhookedFromScourgeHook(const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintPure)
	float GetActionSpeedDebuffPercentageAtLevel() const;

public:
	UK25P03();
};

FORCEINLINE uint32 GetTypeHash(const UK25P03) { return 0; }
