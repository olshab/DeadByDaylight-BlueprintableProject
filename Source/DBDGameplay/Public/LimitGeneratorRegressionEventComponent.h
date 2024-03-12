#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "LimitGeneratorRegressionEventComponent.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULimitGeneratorRegressionEventComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRegressionEvent, int32, currentRegressionLevel, bool, survivorInteracting);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlockingStatusChanged, int32, currentRegressionLevel, bool, blocked);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCosmeticEvent, int32, currentRegressionLevel);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnRegressionEvent Cosmetic_OnRegressionEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCosmeticEvent Cosmetic_OnRegressionEventZoneEntered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCosmeticEvent Cosmetic_OnRegressionEventZoneExited;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCosmeticEvent Cosmetic_OnRepairStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCosmeticEvent Cosmetic_OnRepairStopped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBlockingStatusChanged Cosmetic_OnBlockingStatusChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_RegressionEventsSuffered, Transient, meta=(AllowPrivateAccess=true))
	int32 _regressionEventsSuffered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _numberLastRegressionEventsToShow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxNumberRegressionEventsAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _thresholdImmediateRegressionToConsiderRegressionEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _immediateRegressionPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _immediateRegressionPercentageLimitRegressionEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _killerProximityZoneRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCollisionProfileName _killerProximityZoneDefaultCollisionProfile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCollisionProfileName _killerProximityZoneNoCollisionProfile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _waitTimeAfterGeneratorWasInteractedUponToTriggerVfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _killerProximityZoneForRegressionEvents;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_RegressionEventsSuffered();

	UFUNCTION(BlueprintCallable)
	void OnKillerProximityZoneForRegressionEventsOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnKillerProximityZoneForRegressionEventsOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintPure)
	int32 GetMaxNumberRegressionEventsAllowed() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULimitGeneratorRegressionEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULimitGeneratorRegressionEventComponent) { return 0; }
