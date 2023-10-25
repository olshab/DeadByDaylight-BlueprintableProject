#pragma once

#include "CoreMinimal.h"
#include "ObjectPlacerComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "K33TurretPlacer.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TurretPlacer : public UObjectPlacerComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStaticMeshComponent> _turretVisualPlacementStaticMeshComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ReplicatedIsPlacementValid, meta=(AllowPrivateAccess=true))
	bool _replicatedIsPlacementValid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FVector _replicatedPlacementLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _turretStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FVector> _otherTurretsDropOffLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _turretMeshLerpSpeed;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedIsPlacementValid();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33TurretPlacer();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretPlacer) { return 0; }
