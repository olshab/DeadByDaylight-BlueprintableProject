#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EK25ChainState.h"
#include "EK25ChainDetachmentReason.h"
#include "DBDTunableRowHandle.h"
#include "FastTimer.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "UObject/NoExportTypes.h"
#include "EK25ChainCreationStrategy.h"
#include "K25Chain.generated.h"

class AK25Projectile;
class UCurveFloat;
class AK25SurvivorChainAttachmentAnchor;
class USplineComponent;
class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class AK25Chain : public AActor, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _attachedToProjectileInfluenceCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _reelbackInfluenceCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _offsetMultiplierInfluenceCurve;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _reelingBackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _chainOffsetMinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _chainOffsetMaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _reelbackChainOffsetMinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _reelbackChainOffsetMaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _chainInstanceSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _quickChainOffsetTimerLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _reachingSurvivorAnchorTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _chainScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _chainOffsetTimerLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FVector> _currentChainPoints;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isAcquiredFromPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sphereTraceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _chainStartPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _reelBackPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _reelbackStartPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK25Projectile* _projectileAttachedTo;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<AK25SurvivorChainAttachmentAnchor> _survivorAnchorAttachedTo;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<AK25SurvivorChainAttachmentAnchor> _targetAnchorToReach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USplineComponent* _chainSplineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInstancedStaticMeshComponent* _chainInstancedMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _currentInfluenceCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FVector _chainCurveOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EK25ChainState _chainState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FFastTimer _curveOffsetStrengthTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FFastTimer _reelbackTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FFastTimer _reachSurvivorAnchorPositionTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FVector> _forcedPositions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EK25ChainCreationStrategy _chainCreationStrategy;

public:
	UFUNCTION(BlueprintCallable)
	void SetSplineComponent(USplineComponent* component);

	UFUNCTION(BlueprintCallable)
	void SetInstancedMeshComponent(UInstancedStaticMeshComponent* instancedMesh);

protected:
	UFUNCTION(BlueprintPure)
	bool IsAttachedToControlledProjectile() const;

public:
	UFUNCTION(BlueprintPure)
	AK25SurvivorChainAttachmentAnchor* GetSurvivorChainAttachmentAnchor() const;

	UFUNCTION(BlueprintPure)
	FVector GetChainStartLocation() const;

	UFUNCTION(BlueprintPure)
	FVector GetChainEndLocation() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorStoppedRemovingChainSFX(bool hasRemovedChainDueToInteraction);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorStartedRemovingChainSFX();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainUnleashedWithProjectile();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainStartedToReelback();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainDisappears();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainDetachedFromSurvivor(EK25ChainDetachmentReason detachmentReason);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainAttachedToSurvivor(bool wasReachingSurvivorAnchorPoint);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainAppears();

public:
	AK25Chain();
};

FORCEINLINE uint32 GetTypeHash(const AK25Chain) { return 0; }
