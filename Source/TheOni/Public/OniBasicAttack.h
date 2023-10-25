#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "OniBasicAttack.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEONI_API UOniBasicAttack : public UPounceAttack
{
	GENERATED_BODY()

public:
	UOniBasicAttack();
};

FORCEINLINE uint32 GetTypeHash(const UOniBasicAttack) { return 0; }
