#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "WallGrabInteractionDefinition.generated.h"

class UBlightPowerStateComponent;
class ABlightPowerEstimatedCollisionIndicator;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UWallGrabInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBlightPowerStateComponent* _blightPowerStateComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _wallDashAccelerationMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ABlightPowerEstimatedCollisionIndicator* _blightPowerCollisionIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ABlightPowerEstimatedCollisionIndicator> _collisionIndicatorActorClass;

public:
	UWallGrabInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UWallGrabInteractionDefinition) { return 0; }
