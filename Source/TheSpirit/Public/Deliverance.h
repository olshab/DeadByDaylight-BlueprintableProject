#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Deliverance.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDeliverance : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _brokenEffectDurationPerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _selfUnhookAlwaysSucceedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _brokenEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _selfUnhookAlwaysSucceedEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetBrokenEffectDurationAtLevel() const;

public:
	UDeliverance();
};

FORCEINLINE uint32 GetTypeHash(const UDeliverance) { return 0; }
