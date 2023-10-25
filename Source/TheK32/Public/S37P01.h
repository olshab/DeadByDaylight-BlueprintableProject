#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S37P01.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US37P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _killerRevealedTime;

	UPROPERTY(EditAnywhere)
	float _chaseLingeringTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealKillerStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealGeneratorStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _revealGeneratorStatusEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetKillerRevealedTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetChaseLingeringTimerAtLevel() const;

public:
	US37P01();
};

FORCEINLINE uint32 GetTypeHash(const US37P01) { return 0; }
