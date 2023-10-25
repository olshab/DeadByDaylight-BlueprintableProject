#pragma once

#include "CoreMinimal.h"
#include "BaseCharacterRotationStrategy.h"
#include "K25SurvivorChainRotationStrategy.generated.h"

class UK25SurvivorChainAttachmentComponent;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25SurvivorChainRotationStrategy : public UBaseCharacterRotationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ACamperPlayer> _cachedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK25SurvivorChainAttachmentComponent* _cachedChainAttachmentComponent;

public:
	UK25SurvivorChainRotationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK25SurvivorChainRotationStrategy) { return 0; }
