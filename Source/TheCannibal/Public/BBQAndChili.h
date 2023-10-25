#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BBQAndChili.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBBQAndChili : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _auraRevealDuration;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _minDistanceToHookedPlayerByLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorImposedEffectClass;

public:
	UFUNCTION(BlueprintCallable)
	float GetMinDistanceToKillerByLevel(int32 level);

	UFUNCTION(BlueprintPure)
	float GetAuraRevealDuration() const;

public:
	UBBQAndChili();
};

FORCEINLINE uint32 GetTypeHash(const UBBQAndChili) { return 0; }
