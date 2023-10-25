#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S31P01.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US31P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _loseHealthStateDetectionRadius;

	UPROPERTY(EditAnywhere)
	float _killerAuraRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedAuraReveal;

public:
	UFUNCTION(BlueprintPure)
	float GetKillerAuraRevealDuration() const;

public:
	US31P01();
};

FORCEINLINE uint32 GetTypeHash(const US31P01) { return 0; }
