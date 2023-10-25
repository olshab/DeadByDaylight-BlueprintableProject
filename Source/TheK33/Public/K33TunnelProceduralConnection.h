#pragma once

#include "CoreMinimal.h"
#include "K33SelectedControlStationOutlineFollower.h"
#include "GameFramework/Actor.h"
#include "Components/SplineMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "K33TunnelProceduralConnection.generated.h"

class USplineMeshComponent;
class UStaticMesh;
class USceneComponent;
class USplineComponent;
class UK33SelectedControlStationLinkedActorOutlineUpdateStrategy;
class UMaterial;
class UDBDOutlineComponent;

UCLASS(Blueprintable)
class THEK33_API AK33TunnelProceduralConnection : public AActor, public IK33SelectedControlStationOutlineFollower
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USplineComponent* _splineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _splineMeshContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK33SelectedControlStationLinkedActorOutlineUpdateStrategy* _outlineStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UStaticMesh* _staticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UMaterial* _staticMeshMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TEnumAsByte<ESplineMeshAxis::Type> _splineMeshAxis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector2D _meshScaling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USplineComponent* _splineMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USplineMeshComponent*> _splineMeshes;

public:
	AK33TunnelProceduralConnection();
};

FORCEINLINE uint32 GetTypeHash(const AK33TunnelProceduralConnection) { return 0; }
