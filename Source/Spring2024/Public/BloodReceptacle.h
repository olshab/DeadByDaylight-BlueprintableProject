#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "BloodReceptacle.generated.h"

class UStaticMeshComponent;
class UBloodReceptacleOutlineUpdateStrategy;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable, Abstract)
class ABloodReceptacle : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UStaticMeshComponent* _bloodReceptacleStaticMesh;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _bloodReceptacleCollectionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBloodReceptacleOutlineUpdateStrategy* _outlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _preventingCollectionStateTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _collectionRadius;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnChargeCollected();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeCollected();

private:
	UFUNCTION()
	void Authority_OnEnterCollectionZone(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	ABloodReceptacle();
};

FORCEINLINE uint32 GetTypeHash(const ABloodReceptacle) { return 0; }
