#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "K35SurvivorDestroyKillerTeleportPointChargeableInteractionDefinition.generated.h"

class ACamperPlayer;
class UStatusEffect;
class AK35KillerTeleportPoint;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK35SurvivorDestroyKillerTeleportPointChargeableInteractionDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _horizontalDestroyCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _verticalDestroyCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _cameraCheckSphereRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lineOfSightCheckSphereRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _killerInstinctStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _failureKillerInstinctDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _secondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _interactionDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gracePeriodPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _successPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lineOfSightCollisionSize;

private:
	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

public:
	UFUNCTION(BlueprintPure)
	AK35KillerTeleportPoint* GetOwningKillerTeleportPoint() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorStartInteraction(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorFinishedInteraction(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorCancelledInteractionDuringGracePeriod(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorCancelledInteraction(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionNoLongerAvailable(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionAvailable(const ACamperPlayer* survivor);

public:
	UK35SurvivorDestroyKillerTeleportPointChargeableInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK35SurvivorDestroyKillerTeleportPointChargeableInteractionDefinition) { return 0; }
