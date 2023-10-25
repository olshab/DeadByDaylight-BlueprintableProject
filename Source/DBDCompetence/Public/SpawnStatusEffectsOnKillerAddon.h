#pragma once

#include "CoreMinimal.h"
#include "StatusEffectsProperties.h"
#include "ItemAddon.h"
#include "SpawnStatusEffectsOnKillerAddon.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USpawnStatusEffectsOnKillerAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FStatusEffectsProperties> _statusEffectsToSpawn;

	UPROPERTY(EditAnywhere, Transient, Export)
	TArray<TWeakObjectPtr<UStatusEffect>> _imposedStatusEffects;

public:
	USpawnStatusEffectsOnKillerAddon();
};

FORCEINLINE uint32 GetTypeHash(const USpawnStatusEffectsOnKillerAddon) { return 0; }
