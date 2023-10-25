#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "EnduranceEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UEnduranceEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _enduranceHighlightEffectClass;

public:
	UEnduranceEffect();
};

FORCEINLINE uint32 GetTypeHash(const UEnduranceEffect) { return 0; }
