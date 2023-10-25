#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "WellMakeIt.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UWellMakeIt : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _wellMakeItNotificationEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _wellMakeItEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _healingSpeed;

	UPROPERTY(EditAnywhere)
	float _perkDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHealingSpeed() const;

private:
	UFUNCTION()
	void Authority_OnUnHook(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UWellMakeIt();
};

FORCEINLINE uint32 GetTypeHash(const UWellMakeIt) { return 0; }
