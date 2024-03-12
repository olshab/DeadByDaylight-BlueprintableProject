#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "LacerationUIData.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "LacerationComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK23_API ULacerationComponent : public UActorComponent, public ILacerationUIData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRepLaceration, meta=(AllowPrivateAccess=true))
	float _laceration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _onHitSpeedBoost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _lacerationOnHitSpeedBoostStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _maxLaceration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _lacerationExplosionDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _lacerationRegressionPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _lacerationRegressionPerSecondWhileRunning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _speedBoostIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _speedBoostDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stopTickingRegressionWhileInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stopTickingRegressionWhileInChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stopTickingRegressionWithinTerrorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _timeBeforeLacerationDecayStarts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _regressionBufferTimerAlwaysTicks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _lacerationToRemoveOnBasicAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _thresholdForGraceTimerScoreEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minThresholdForLowLacerationScoreEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxThresholdForLowLacerationScoreEvent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRepLaceration(float oldLaceration);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_KnifeHit(float newLaceration, bool causedDamage, bool causedKo, const FVector& impactLocation, const FVector& impactNormal);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKnifeHit(float lacerationPercent, bool isDangerous, bool causedDamage, bool causedKo, const FVector& impactNormal);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULacerationComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULacerationComponent) { return 0; }
