#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "BlinkAttack.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkAttack : public UPounceAttack
{
	GENERATED_BODY()

public:
	UBlinkAttack();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkAttack) { return 0; }
