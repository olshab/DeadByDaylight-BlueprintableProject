#pragma once

#include "CoreMinimal.h"
#include "K30BaseStatusEffectAddon.h"
#include "Templates/SubclassOf.h"
#include "K30ApplyStatusOnWakeUpAddon.generated.h"

class AKnightGuard;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK30ApplyStatusOnWakeUpAddon : public UK30BaseStatusEffectAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AKnightGuard> _applicableGuard;

protected:
	UFUNCTION(BlueprintCallable)
	void Authority_OnWakeUp(AKnightGuard* currentGuard);

public:
	UK30ApplyStatusOnWakeUpAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30ApplyStatusOnWakeUpAddon) { return 0; }
