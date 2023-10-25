#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "ObjectOfObsession.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THESHAPE_API UObjectOfObsession : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _revealTimeIntervals;

	UPROPERTY(EditAnywhere)
	float _revealTimeDuration;

	UPROPERTY(EditAnywhere)
	float _actionSpeedBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _increaseObsessionChanceEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealToKillerStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _objectOfObsessionActionSpeedEffect;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UObjectOfObsession();
};

FORCEINLINE uint32 GetTypeHash(const UObjectOfObsession) { return 0; }
