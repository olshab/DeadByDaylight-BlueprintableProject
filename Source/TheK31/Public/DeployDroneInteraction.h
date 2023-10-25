#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DeployDroneInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API UDeployDroneInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldDeploymentSetPowerOnCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _canPlaceDroneWhilePowerIsOnCooldown;

public:
	UDeployDroneInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDeployDroneInteraction) { return 0; }
