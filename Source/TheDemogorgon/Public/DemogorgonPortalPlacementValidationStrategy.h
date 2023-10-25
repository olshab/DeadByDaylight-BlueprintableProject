#pragma once

#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "DemogorgonPortalPlacementValidationStrategy.generated.h"

class UDemogorgonPortalPlacerStateComponent;
class UChargedAttackStateComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDemogorgonPortalPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargedAttackStateComponent* _chargedAttackState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceForWorldCollisionDetection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _numberOfGroundTest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _portalEdgeTestRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxElevationDifferentialOnPortalEdge;

public:
	UDemogorgonPortalPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalPlacementValidationStrategy) { return 0; }
