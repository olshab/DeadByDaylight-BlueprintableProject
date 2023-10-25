#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AkObservedPlayerSoundLoop.h"
#include "KillerFlashlightSFXComponent.generated.h"

class UFlashlightTargetFXComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UKillerFlashlightSFXComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkObservedPlayerSoundLoop _targetSoundLoop;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UFlashlightTargetFXComponent*> _flashlightTargets;

public:
	UKillerFlashlightSFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerFlashlightSFXComponent) { return 0; }
