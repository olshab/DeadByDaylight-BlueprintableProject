#pragma once

#include "CoreMinimal.h"
#include "TagStateBool.h"
#include "GhostStalkedUIData.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "GhostStalkedComponent.generated.h"

class UTimerObject;
class ASlasherPlayer;
class ADBDPlayer;
class UStatusEffect;
class UStalkedComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGHOSTFACE_API UGhostStalkedComponent : public UActorComponent, public IGhostStalkedUIData
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsSpottingKiller, bool, isSpotting);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsMarkedChanged, bool, isMarked);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsMarkedChanged OnIsMarkedChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsSpottingKiller OnIsSpottingKillerChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _ghostMarkedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _ghostKillerInstinctClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isMarked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _ghostKillerInstinctEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _markTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _killerInstinctDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _markDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stalkPointsDepleteDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _killer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStalkedComponent* _stalkedComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerSpottedChanged(ADBDPlayer* spotter, bool spotted);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Local_OnSpotKiller();

public:
	UFUNCTION(BlueprintPure)
	bool IsMarked() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Initialize(ASlasherPlayer* killer);

public:
	UFUNCTION(BlueprintPure)
	float GetMeterPercentage() const;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DebugGhost(bool debug);

public:
	UFUNCTION(BlueprintCallable, Client, Unreliable)
	void Client_OnSpotKiller();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnStalkedChargeFull(bool completed, const TArray<AActor*>& instigatorsForCompletion);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGhostStalkedComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGhostStalkedComponent) { return 0; }
