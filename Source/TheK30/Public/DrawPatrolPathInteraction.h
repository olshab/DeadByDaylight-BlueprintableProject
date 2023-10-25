#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "SecondaryInteractionProperties.h"
#include "DrawPatrolPathInteraction.generated.h"

class UCurveFloat;
class UStatusEffect;
class AInteractable;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDrawPatrolPathInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChargeStateChanged, bool, isCharging, bool, isChargeCompleted);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnChargeStateChanged OnChargeStateChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties _giveOrderProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties _releaseInteractionProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maximumInteractionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _pathLengthWarningPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _pathDrawingDurationWarningPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minSlopeToCheckStepUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _postPowerHasteClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _postPowerHasteValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _hasteDurationByPathLength;

protected:
	UFUNCTION(BlueprintCallable)
	void SetIsCharging(bool isCharging);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_StartPatrol();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendOrder(AInteractable* target);

private:
	UFUNCTION(BlueprintCallable)
	void OnCancellationTimerCompleted();

public:
	UFUNCTION(BlueprintPure)
	bool IsCharging() const;

	UFUNCTION(BlueprintPure)
	bool IsChargeCompleted() const;

public:
	UDrawPatrolPathInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDrawPatrolPathInteraction) { return 0; }
