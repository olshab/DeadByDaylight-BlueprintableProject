#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "TricksterSuperModeComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTricksterSuperModeComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRepIsInSuperMode, meta=(AllowPrivateAccess=true))
	bool _isInSuperMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRepIsSuperModeReady, meta=(AllowPrivateAccess=true))
	bool _isSuperModeReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRepIsInCooldown, meta=(AllowPrivateAccess=true))
	bool _isInCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chargesToAddOnKnifeHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _superModeMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _superModeReadyDepletionPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _superModeActiveDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _superModeCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _shouldDisableFlurryDuringCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _comboExtendSuperModeStatusEffectClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnRepIsSuperModeReady();

	UFUNCTION(BlueprintCallable)
	void OnRepIsInSuperMode();

	UFUNCTION(BlueprintCallable)
	void OnRepIsInCooldown();

	UFUNCTION(BlueprintCallable)
	void InitSuperModeMaxCharge();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTricksterSuperModeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTricksterSuperModeComponent) { return 0; }
