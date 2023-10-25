#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TrapInstallerComponent.generated.h"

class USurvivorTrapPerk;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTrapInstallerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USurvivorTrapPerk*> _ownedTrapPerks;

public:
	UTrapInstallerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTrapInstallerComponent) { return 0; }
