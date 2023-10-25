#pragma once

#include "CoreMinimal.h"
#include "FrenzyIncreasedTierDelegate.h"
#include "FrenzyStartDelegate.h"
#include "FrenzyData.h"
#include "FrenzyReadyToStartDelegate.h"
#include "TunableStat.h"
#include "Components/ActorComponent.h"
#include "FrenzyEndDelegate.h"
#include "FrenzyEndNoCooldownDelegate.h"
#include "StartInjuredBleedoutDuringFrenzyDelegate.h"
#include "Templates/SubclassOf.h"
#include "EFrenzyEndReason.h"
#include "FrenzyComponent.generated.h"

class UStatusEffect;
class ASlasherPlayer;
class UInteractionDefinition;
class UGameplayTagContainerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THELEGION_API UFrenzyComponent : public UActorComponent, public IFrenzyData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFrenzyStartDelegate OnFrenzyStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFrenzyEndDelegate OnFrenzyEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFrenzyEndNoCooldownDelegate OnFrenzyEndedNoCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FStartInjuredBleedoutDuringFrenzyDelegate OnInjuredBleedoutStartedDuringFrenzy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFrenzyReadyToStartDelegate OnFrenzyReadyToStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFrenzyIncreasedTierDelegate OnFrenzyIncreasedTier;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _allowManuallyEndFrenzy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chargeToLoseOnRemoveBleedoutTimeAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chargeToLoseOnNonFrenzyAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chargeToLoseOnMissedFrenzyAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _cooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _frenzyMaxDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _frenzyRechargeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _usagePercentNeededToStartFrenzy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _slasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _cooldownInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _boltSlasherEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _frenzySlasherEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _frenzyTier0SlasherEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _frenzyTier1SlasherEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _frenzyTier2SlasherEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _frenzyTier3SlasherEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _frenzyTier4SlasherEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _frenzyCooldownEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _boltCamperEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _frenzyCamperEffect;

public:
	UFUNCTION(BlueprintCallable)
	void StartFrenzy();

	UFUNCTION(BlueprintCallable)
	void SetStartingFrenzy(bool startingFrenzy);

	UFUNCTION(BlueprintCallable)
	void SetObjectState(UGameplayTagContainerComponent* objectState);

	UFUNCTION(BlueprintCallable)
	void ResumeFrenzyChargeDepletion();

	UFUNCTION(BlueprintCallable)
	void PauseFrenzyChargeDepletion();

private:
	UFUNCTION(BlueprintCallable)
	void OnMoriStarted();

public:
	UFUNCTION(BlueprintCallable)
	void OnFrenzyCooldownStarted();

	UFUNCTION(BlueprintPure)
	bool IsStartingFrenzy() const;

	UFUNCTION(BlueprintPure)
	bool IsInFrenzyCooldown() const;

	UFUNCTION(BlueprintPure)
	bool IsInFrenzy() const;

private:
	UFUNCTION(BlueprintCallable)
	void InitializeFrenzy();

public:
	UFUNCTION(BlueprintPure)
	bool HasStartedInjuredBleedoutDuringThisFrenzy() const;

	UFUNCTION(BlueprintPure)
	int32 GetFrenzyTier() const;

	UFUNCTION(BlueprintCallable)
	void EndFrenzy(EFrenzyEndReason reason);

	UFUNCTION(BlueprintPure)
	bool CanStartFrenzy() const;

	UFUNCTION(BlueprintPure)
	bool CanManuallyEndFrenzy() const;

public:
	UFrenzyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFrenzyComponent) { return 0; }
