#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ESkillCheckType.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "Gearhead.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGearhead : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedRevealToKillerEffect;

	UPROPERTY(EditAnywhere)
	float _surviorAuraDurations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _perkDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ESkillCheckType _skillCheckType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _basicAttack;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnCamperRemoved(ACamperPlayer* removedPlayer);

	UFUNCTION(BlueprintCallable)
	void Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	UGearhead();
};

FORCEINLINE uint32 GetTypeHash(const UGearhead) { return 0; }
