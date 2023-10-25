#pragma once

#include "CoreMinimal.h"
#include "StatusEffectSpawnData.h"
#include "PlayerStatusEffectSpawnerHelperInitParams.generated.h"

class ADBDPlayer;
class UObject;
class UGameplayModifierContainer;

USTRUCT(BlueprintType)
struct FPlayerStatusEffectSpawnerHelperInitParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* WorldContextObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* OriginatingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGameplayModifierContainer* OriginatingEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStatusEffectSpawnData> EffectsToSpawn;

public:
	DBDCOMPETENCE_API FPlayerStatusEffectSpawnerHelperInitParams();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerStatusEffectSpawnerHelperInitParams) { return 0; }
