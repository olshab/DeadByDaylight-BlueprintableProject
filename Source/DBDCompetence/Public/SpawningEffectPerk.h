#pragma once

#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "Perk.h"
#include "PerkLevelEffectArray.h"
#include "SpawningEffectPerk.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpawningEffectPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FPerkLevelEffectArray _perkLevelEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FPlayerStatusEffectSpawnerHelper _effectSpawnerHelper;

public:
	USpawningEffectPerk();
};

FORCEINLINE uint32 GetTypeHash(const USpawningEffectPerk) { return 0; }
