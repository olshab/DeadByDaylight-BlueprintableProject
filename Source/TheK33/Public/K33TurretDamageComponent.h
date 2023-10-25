#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "Templates/SubclassOf.h"
#include "K33TurretDamageComponent.generated.h"

class UCurveFloat;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TurretDamageComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentDamageAmount, meta=(AllowPrivateAccess=true))
	float _currentDamageAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAttackedByTurret, meta=(AllowPrivateAccess=true))
	FTagStateBool _isAttackedByTurret;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _stunnedAfterFullyDamagedEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stunnedAfterFullyDamagedDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _maxDamageAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _damageReductionRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _damageRatePerTurretCurveFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _damageReductionDelayDuration;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsAttackedByTurret();

	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentDamageAmount();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ReceivedMaxDamage();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33TurretDamageComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretDamageComponent) { return 0; }
