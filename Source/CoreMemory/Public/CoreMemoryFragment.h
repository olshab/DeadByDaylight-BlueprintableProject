#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "ObjectStateProvider.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "CoreMemoryFragment.generated.h"

class UCoreMemoryFragmentComponent;
class UStaticMeshComponent;
class UCoreMemoryFragmentFXComponent;
class UDBDOutlineComponent;
class USphereComponent;
class UActivatorComponent;
class UGameplayTagContainerComponent;

UCLASS(Blueprintable, Abstract)
class ACoreMemoryFragment : public AActor, public IObjectStateProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _coreMemoryFragmentStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _coreMemoryTendrilStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCoreMemoryFragmentComponent* _coreMemoryFragmentComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCoreMemoryFragmentFXComponent* _coreMemoryFragmentFXComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _coreMemoryFragmentTriggerZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _coreMemoryFragmentCollectionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SpawnLocation, meta=(AllowPrivateAccess=true))
	FVector _spawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SpawnRotation, meta=(AllowPrivateAccess=true))
	FRotator _spawnRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _triggerZoneRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _collectionZoneRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _outlineColour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UGameplayTagContainerComponent* _objectState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UActivatorComponent* _activator;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SpawnRotation(const FRotator& rotation);

	UFUNCTION(BlueprintCallable)
	void OnRep_SpawnLocation(const FVector& location);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ACoreMemoryFragment();
};

FORCEINLINE uint32 GetTypeHash(const ACoreMemoryFragment) { return 0; }
