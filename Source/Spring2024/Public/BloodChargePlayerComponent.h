#pragma once

#include "CoreMinimal.h"
#include "EventObjectItemWidgetInterface.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "BloodChargePlayerComponent.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UBloodChargePlayerComponent : public UActorComponent, public IEventObjectItemWidgetInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodChargeLimitSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodChargeLimitKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodChargeStartAmountKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BloodChargeAmount, meta=(AllowPrivateAccess=true))
	int32 _bloodChargeAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _lastChargeChangeFromStealing;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_BloodChargeAmount(int32 oldAmount);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnHudPresenterReady() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorLoseCharge(int32 chargeCount, bool stolen);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorGainCharge(int32 chargeCount, bool stolen);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerLoseCharge(int32 chargeCount, bool stolen);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerGainCharge(int32 chargeCount, bool stolen);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_InitializeComponent();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBloodChargePlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodChargePlayerComponent) { return 0; }
