#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "K30RepeatGuardSpawnAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK30RepeatGuardSpawnAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 _guardIndexToRepeat;

public:
	UK30RepeatGuardSpawnAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30RepeatGuardSpawnAddon) { return 0; }
