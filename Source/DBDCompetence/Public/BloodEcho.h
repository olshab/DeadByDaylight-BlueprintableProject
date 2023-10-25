#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "BloodEcho.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBloodEcho : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hemorrhageStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exhaustedStatusEffectClass;

	UPROPERTY(EditAnywhere)
	FGameplayTag _statusEffectDurationTag;

	UPROPERTY(EditAnywhere)
	float _cooldownDuration;

protected:
	UFUNCTION(BlueprintPure)
	float GetCooldownDurationAtLevel() const;

public:
	UBloodEcho();
};

FORCEINLINE uint32 GetTypeHash(const UBloodEcho) { return 0; }
