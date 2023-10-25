#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorAimStateComponent.generated.h"

class ACollectable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USurvivorAimStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACollectable* _aimableCollectable;

public:
	USurvivorAimStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAimStateComponent) { return 0; }
