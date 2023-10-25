#pragma once

#include "CoreMinimal.h"
#include "SpawningEffectPerk.h"
#include "HangmansTrick.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHangmansTrick : public USpawningEffectPerk
{
	GENERATED_BODY()

public:
	UHangmansTrick();
};

FORCEINLINE uint32 GetTypeHash(const UHangmansTrick) { return 0; }
