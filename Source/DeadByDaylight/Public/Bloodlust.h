#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GameplayTagContainer.h"
#include "Bloodlust.generated.h"

class ADBDPlayer;
class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBloodlust : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* BloodlustCurve;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BloodlustTime, meta=(AllowPrivateAccess=true))
	float _bloodlustTime;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _bloodlustResettingGameEvents;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_BloodlustTime(float oldBloodlustTime);

	UFUNCTION(BlueprintCallable)
	void OnChaseStartedEvent(ADBDPlayer* chasedPlayer);

	UFUNCTION(BlueprintCallable)
	void OnAllChaseEndedEvent();

public:
	UFUNCTION(BlueprintPure)
	float GetBloodlustTime() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetBloodlust(const int32 amount, const bool enableDecay);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBloodlust();
};

FORCEINLINE uint32 GetTypeHash(const UBloodlust) { return 0; }
