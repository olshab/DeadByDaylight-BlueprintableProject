#pragma once

#include "CoreMinimal.h"
#include "TierChangeDelegate.h"
#include "Components/ActorComponent.h"
#include "EvilWithinComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEvilWithinComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FTierChangeDelegate OnTierChange;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentTier, meta=(AllowPrivateAccess=true))
	int32 _currentTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _lastTierTimeStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> _allowedSurvivorInteractionsForKill;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentTier(int32 previousTier);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintPure)
	bool IsAtLastTier() const;

	UFUNCTION(BlueprintPure)
	float GetRequirementForTier(int32 tier) const;

	UFUNCTION(BlueprintPure)
	float GetPercentStalkingPointsInCurrentTier() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaxTier() const;

	UFUNCTION(BlueprintPure)
	int32 GetCurrentTier() const;

	UFUNCTION(BlueprintPure)
	bool CanStandKill(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool CanBeStandingKilled(const ADBDPlayer* player) const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnStalkPointsAdded(float stalkPoints);

	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerDisconnect(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_NotifyKill();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UEvilWithinComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEvilWithinComponent) { return 0; }
