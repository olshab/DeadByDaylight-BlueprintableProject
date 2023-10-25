#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TriggerTimerOnLacerationAlmostFullEffect.generated.h"

class ULacerationComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTriggerTimerOnLacerationAlmostFullEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULacerationComponent* _lacerationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _duration;

public:
	UTriggerTimerOnLacerationAlmostFullEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTriggerTimerOnLacerationAlmostFullEffect) { return 0; }
