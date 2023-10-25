#pragma once

#include "CoreMinimal.h"
#include "EK33KillerBlockCollisionType.h"
#include "DistanceCheckPawnLocationOverride.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "UObject/SoftObjectPtr.h"
#include "Templates/SubclassOf.h"
#include "K33KillerTunnelStateComponent.generated.h"

class UK33TunnelMovementInputAccelerationConstraintStrategyComponent;
class AActor;
class AK33ControlStationTunnelConnection;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33KillerTunnelStateComponent : public UActorComponent, public IDistanceCheckPawnLocationOverride
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInTunnel, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInTunnel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK33TunnelMovementInputAccelerationConstraintStrategyComponent> _movementInputConstraintStrategyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK33TunnelMovementInputAccelerationConstraintStrategyComponent* _movementInputConstraintStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<AActor>> _inTunnelUntouchedClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AK33ControlStationTunnelConnection> _controlStationTunnelConnectionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK33ControlStationTunnelConnection* _controlStationTunnelConnectionInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _killerCameraSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _accelerationMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _heightOffsetForDistanceChecks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _defaultOcclusionRefreshInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minAnimPitchInTunnel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_WorldElementsVisibility, meta=(AllowPrivateAccess=true))
	bool _worldElementsVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TunnelElementsVisibility, meta=(AllowPrivateAccess=true))
	bool _tunnelElementsVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_KillerCollisionBlockType, meta=(AllowPrivateAccess=true))
	EK33KillerBlockCollisionType _killerCollisionBlockType;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_WorldElementsVisibility();

	UFUNCTION(BlueprintCallable)
	void OnRep_TunnelElementsVisibility();

	UFUNCTION(BlueprintCallable)
	void OnRep_KillerCollisionBlockType();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsInTunnel();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33KillerTunnelStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33KillerTunnelStateComponent) { return 0; }
