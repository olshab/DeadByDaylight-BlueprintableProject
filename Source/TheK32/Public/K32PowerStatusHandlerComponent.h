#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "K32SurvivorStatus.h"
#include "FastTimer.h"
#include "K32PowerStatusHandlerComponent.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32PowerStatusHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lineOfSightTraceSphereSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _crossAssimilationRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _crossAssimilationDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _affectedByPowerCrossAssimilationBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _survivorProjectileTargetSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _traceProfile;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _maxOldSurvivorLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorLocationOverlapAvoidanceDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _recentLocationDistanceDelta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _assimilationCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SurvivorStatusList, meta=(AllowPrivateAccess=true))
	TArray<FK32SurvivorStatus> _survivorStatusList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, FFastTimer> _assimilationCooldownTimers;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SurvivorStatusList(TArray<FK32SurvivorStatus> oldSurvivorStatus);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SurvivorScream(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnInRangeOfAssimilationSpreadingSurvivor(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnAssimilationSpreadingToSurvivor(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInRangeOfAssimilationSpreadingSurvivor(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAssimilationSpreadingToSurvivor(const ACamperPlayer* originatingSurvivor, const ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAssimilationChanged(const ACamperPlayer* survivor, const bool isAssimilated);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_SurvivorScream(ACamperPlayer* survivor);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorAdded(ACamperPlayer* survivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK32PowerStatusHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32PowerStatusHandlerComponent) { return 0; }
