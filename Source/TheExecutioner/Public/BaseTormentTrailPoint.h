#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TunableStat.h"
#include "BaseTormentTrailPoint.generated.h"

class USphereComponent;
class USplineMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class ABaseTormentTrailPoint : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USphereComponent* _collisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _collisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _tormentTrailAliveTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	USplineMeshComponent* _splineMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UStaticMesh*> _trailMeshList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	uint8 _indexInTrail;

protected:
	UFUNCTION(BlueprintCallable)
	void EndOfDisapearCosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisappearCosmetic();

public:
	ABaseTormentTrailPoint();
};

FORCEINLINE uint32 GetTypeHash(const ABaseTormentTrailPoint) { return 0; }
