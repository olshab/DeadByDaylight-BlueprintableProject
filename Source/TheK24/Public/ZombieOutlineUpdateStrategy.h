#pragma once

#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "ZombieOutlineUpdateStrategy.generated.h"

class AZombieCharacter;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UZombieOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AZombieCharacter* _zombieCharacter;

public:
	UZombieOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UZombieOutlineUpdateStrategy) { return 0; }
