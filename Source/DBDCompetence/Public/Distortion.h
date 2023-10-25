#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Distortion.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDistortion : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _activationDurations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AuraBlockIsActive, meta=(AllowPrivateAccess=true))
	bool _auraBlockIsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _regainTokenDurationTimer;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_AuraBlockIsActive();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnAuraBlockedCosmetic();

public:
	UFUNCTION(BlueprintPure)
	float GetRegainTokenDurationTimer() const;

	UFUNCTION(BlueprintPure)
	float GetActivationDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	bool AuraBlockCanBeActive() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDistortion();
};

FORCEINLINE uint32 GetTypeHash(const UDistortion) { return 0; }
