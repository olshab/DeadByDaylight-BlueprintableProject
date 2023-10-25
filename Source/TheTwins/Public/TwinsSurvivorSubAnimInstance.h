#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "TwinsSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTwinsSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRemovingTwin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouching;

public:
	UTwinsSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTwinsSurvivorSubAnimInstance) { return 0; }
