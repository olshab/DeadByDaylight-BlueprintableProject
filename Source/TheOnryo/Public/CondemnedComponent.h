#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "CondemnedUIDataInterface.h"
#include "Templates/SubclassOf.h"
#include "ECondemnOrigin.h"
#include "CondemnedComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEONRYO_API UCondemnedComponent : public UActorComponent, public ICondemnedUIDataInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _condemnedRangeWhenTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxCondemnedLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerInstinctRevealDurationOnFullyCondemned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stacksOnTurnOffTV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stacksOnRetrieveVHS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stacksRemovedOnInsert;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stacksOnOnryoTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _reducedAddonStacksOnOnryoTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stacksOnPlayerHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxLockInStacksPerHook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _condemnedStackPerSecond;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _analyticScoreTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CondemnedLevel, meta=(AllowPrivateAccess=true))
	float _condemnedLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _lockedCondemnedLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	ECondemnOrigin _previousReasonForCondemn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HoldingVHS, meta=(AllowPrivateAccess=true))
	bool _isHoldingVHS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _condemnKillerInstinctEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _condemnKillerInstinctEffect;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _reactivateCondemnProgressEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _rangeToStopCondemnProgressAfterChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeAwayFromKillerToResumeCondemn;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_HoldingVHS();

	UFUNCTION(BlueprintCallable)
	void OnRep_CondemnedLevel(const float previousValue);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintPure)
	bool IsHoldingVHS() const;

	UFUNCTION(BlueprintPure)
	bool IsFullyCondemned() const;

	UFUNCTION(BlueprintPure)
	bool IsCondemned() const;

	UFUNCTION(BlueprintPure)
	float GetLockedCondemnedPercent() const;

	UFUNCTION(BlueprintPure)
	float GetCondemnedPercent() const;

	UFUNCTION(BlueprintPure)
	float GetCondemnedLevel() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetCondemnMoriableAndDownAllSurvivors();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetCondemnedLevel(const float level);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCondemnedComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCondemnedComponent) { return 0; }
