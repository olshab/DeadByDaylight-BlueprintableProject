#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "K28P01Effect.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28P01Effect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _playerOwner;

public:
	UK28P01Effect();
};

FORCEINLINE uint32 GetTypeHash(const UK28P01Effect) { return 0; }
