#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "ReelChainInteraction.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UReelChainInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _frontMovementAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumFrontVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _linkedPlayer;

public:
	UReelChainInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UReelChainInteraction) { return 0; }
