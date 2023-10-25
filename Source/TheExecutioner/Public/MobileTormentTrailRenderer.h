#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TormentTrailPointInfo.h"
#include "MobileTormentTrailRenderer.generated.h"

class UInstancedStaticMeshComponent;
class UMaterialInstanceDynamic;
class ABaseTormentTrailPoint;

UCLASS(Blueprintable)
class THEEXECUTIONER_API AMobileTormentTrailRenderer : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInstancedStaticMeshComponent* _pillarIsmComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInstancedStaticMeshComponent* _wireIsmComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInstancedStaticMeshComponent* _trailIsmComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInstancedStaticMeshComponent* _pillarOutlineIsmComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInstancedStaticMeshComponent* _wireOutlineIsmComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ABaseTormentTrailPoint*, FTormentTrailPointInfo> _instanceMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _trailMaterialInstanceDynamic;

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RemoveInstance(ABaseTormentTrailPoint* trailPoint);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AddInstance(ABaseTormentTrailPoint* trailPoint, bool isAttackTrailPoint);

public:
	AMobileTormentTrailRenderer();
};

FORCEINLINE uint32 GetTypeHash(const AMobileTormentTrailRenderer) { return 0; }
