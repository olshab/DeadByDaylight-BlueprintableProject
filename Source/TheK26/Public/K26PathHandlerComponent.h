#pragma once

#include "CoreMinimal.h"
#include "K26PathData.h"
#include "K26Path.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K26PathHandlerComponent.generated.h"

class UK26AmmoHandlerComponent;
class AActor;
class UK26CrowPlacementValidatorComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26PathHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxPathDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _survivorPathVisibilityTimeOnFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _defaultProjectileDistanceFromFloor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxPathIterations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxGroundSearchingDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _visualPathPart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _visualPathEndArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _projectileSummonDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26AmmoHandlerComponent* _ammoHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26CrowPlacementValidatorComponent* _placementValidator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AvailablePathData, Transient, meta=(AllowPrivateAccess=true))
	TArray<FK26PathData> _availablePathData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FK26Path> _availablePaths;

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26CrowPlacementValidatorComponent* placementValidator);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_AvailablePathData();

	UFUNCTION(BlueprintCallable)
	void OnIterativeAvailablePathUpdate();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_FillAvailablePathArray(const int32 maxAmmo);

	UFUNCTION(BlueprintCallable)
	void Authority_OnMaxAmmoSet(const int32 maxAmmo);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK26PathHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK26PathHandlerComponent) { return 0; }
