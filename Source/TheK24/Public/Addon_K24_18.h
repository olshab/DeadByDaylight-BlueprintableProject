#pragma once

#include "CoreMinimal.h"
#include "ImposeStatusEffectOnEventAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K24_18.generated.h"

class AZombieEscapeDoorPointsActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K24_18 : public UImposeStatusEffectOnEventAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AZombieEscapeDoorPointsActor> _zombieEscapeDoorPointsActor;

public:
	UAddon_K24_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K24_18) { return 0; }
