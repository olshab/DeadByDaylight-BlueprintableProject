#pragma once

#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "SurvivorBearTrapAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class USurvivorBearTrapAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isTrapped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInteractionAnimation _interactionType;

public:
	USurvivorBearTrapAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorBearTrapAnimInstance) { return 0; }
