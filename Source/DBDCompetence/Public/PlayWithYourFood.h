#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "PlayWithYourFood.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UPlayWithYourFood : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _movementSpeedPercentBuff;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _basicAndSpecialAttackTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _chargeGainedCooldown;

public:
	UFUNCTION(BlueprintPure)
	float GetMovementSpeedPercentBuffAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetChargeGainedCooldown() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnChaseEnded(ADBDPlayer* player, float chaseTime);

public:
	UPlayWithYourFood();
};

FORCEINLINE uint32 GetTypeHash(const UPlayWithYourFood) { return 0; }
