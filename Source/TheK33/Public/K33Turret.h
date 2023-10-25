#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "K33Turret.generated.h"

class USpherePlayerOverlapComponent;
class UDropItemInteraction;
class UAuthoritativePoolableActorComponent;
class UMaterialHelper;
class UCollectItemInteraction;
class USceneComponent;
class UDBDOutlineComponent;
class UInteractor;
class UK33TurretOutlineUpdateStrategy;
class UChargeableComponent;
class UStateController;
class UMontagePlayer;
class UAnimationMontageSlave;
class UBoxComponent;
class UK33TurretDangerPredictionComponent;
class UDBDNavModifierComponent;

UCLASS(Blueprintable)
class THEK33_API AK33Turret : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USpherePlayerOverlapComponent* _interactableZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UInteractor* _turretInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDropItemInteraction* _dropInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCollectItemInteraction* _collectInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMaterialHelper* _materialHelper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK33TurretOutlineUpdateStrategy* _turretOutlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UChargeableComponent* _turretRepairChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxComponent* _turretCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxComponent* _tailAttackCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK33TurretDangerPredictionComponent* _dangerPredictionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDNavModifierComponent* _navModifierComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _laserRoot;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativePoolableActorComponent* _poolableActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStateController* _turretStateController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _detectionSocketName;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateTurretVolumeRTPC(const int32 turretsInRangeCount);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateMotionTrackerSoundVolume(const float distanceToKiller);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateLaserLength(const float laserLength);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretHeatChanged(float heatAmount);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretDetectionRangeChanged(float newRange);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerEnteredSpecialModeFXReaction();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_BipMotionTrackerFX(const float distanceToKiller);

public:
	AK33Turret();
};

FORCEINLINE uint32 GetTypeHash(const AK33Turret) { return 0; }
