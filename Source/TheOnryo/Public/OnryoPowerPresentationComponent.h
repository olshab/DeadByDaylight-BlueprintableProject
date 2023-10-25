#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "OnryoPowerPresentationComponent.generated.h"

class UOnryoTVInitialCooldownStateComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEONRYO_API UOnryoPowerPresentationComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UOnryoTVInitialCooldownStateComponent* _cooldownState;

public:
	UOnryoPowerPresentationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoPowerPresentationComponent) { return 0; }
