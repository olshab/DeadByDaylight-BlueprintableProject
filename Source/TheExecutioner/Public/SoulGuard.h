#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "CamperHealResult.h"
#include "Templates/SubclassOf.h"
#include "SoulGuard.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USoulGuard : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _cooldownLevels;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _enduranceEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _recover;

	UPROPERTY(EditAnywhere)
	float _enduranceEffectDuration;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorHealed(const FCamperHealResult& healResult);

public:
	USoulGuard();
};

FORCEINLINE uint32 GetTypeHash(const USoulGuard) { return 0; }
