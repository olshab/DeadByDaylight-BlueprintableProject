#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "EAttackType.h"
#include "EContaminator.h"
#include "K24Power.generated.h"

class UChargeableComponent;
class USurvivorContaminationComponent;
class UCurveFloat;
class AZombieCharacter;
class UInteractionDefinition;
class APallet;
class ABreakableBase;

UCLASS(Blueprintable)
class AK24Power : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerWalkSpeedLevel3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _normalWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerMouseYawScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerYawAdjustTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerGamePadYawScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _activateK24PowerCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _activateK24PowerSecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _activatePowerChargeSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _activatePowerChargeLvl3SpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _playedPowerChargeSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _k24PowerCooldownInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _whipLengthLevel1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _whipLengthLevel2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _whipLengthLevel3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USurvivorContaminationComponent> _contaminationComponentBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _powerChargeSurvivorContaminatedPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _powerChargeZombieKilledPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _powerChargeSurvivorHitPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PowerLevelPoints, meta=(AllowPrivateAccess=true))
	float _powerLevelPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerLevelPointsToLevel2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerLevelPointsToLevel3;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void WhipAttackStart_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void WhipAttackMove_Cosmetic(FVector whipStartLocation, FVector whipEndLocation, bool isFirstRayCast);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void WhipAttackHit_Cosmetic(FVector whipStartLocation, FVector impactPointLocation, FVector whipEndLocation, bool isFirstHit, FVector impactNormal, const FName phyMaterial, bool hitACharacter);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void WhipAttackEnd_Cosmetic();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_PowerDestroyPallet(APallet* pallet);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_PowerDestroyBreakable(ABreakableBase* breakable);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_KillAZombie(AZombieCharacter* zombie, EAttackType attackType);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void PowerHitStateEnd_Cosmetic(FVector whipStartLocation, FVector whipEndLocation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void PowerCooldownEnd_Cosmetic();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_PowerLevelPoints();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnPowerStop_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnPowerStartCharge_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnPowerLevelChanged_Cosmetic(const int32 powerLevel);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_PowerDestroyPallet(APallet* pallet);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_PowerDestroyBreakable(ABreakableBase* breakable);

public:
	UFUNCTION(BlueprintPure)
	bool IsInPower() const;

	UFUNCTION(BlueprintPure)
	float GetWhipLength() const;

	UFUNCTION(BlueprintPure)
	int32 GetPowerLevel() const;

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorContaminated(const EContaminator contaminator);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK24Power();
};

FORCEINLINE uint32 GetTypeHash(const AK24Power) { return 0; }
