#pragma once

#include "CoreMinimal.h"
#include "AchievementBase.h"
#include "GameplayTagContainer.h"
#include "SurvivorRevealedKillerAuraAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API USurvivorRevealedKillerAuraAchievement : public UAchievementBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _survivorFlagTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag _killerFlagTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag _modifierTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _dontAwardIfKillerHasTags;

public:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Local_OnRevealKillerAura();

public:
	USurvivorRevealedKillerAuraAchievement();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorRevealedKillerAuraAchievement) { return 0; }
