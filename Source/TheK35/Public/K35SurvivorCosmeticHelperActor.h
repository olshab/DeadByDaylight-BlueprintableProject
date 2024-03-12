#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K35SurvivorCosmeticHelperActor.generated.h"

UCLASS(Blueprintable)
class AK35SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnPlayerLeftGame(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorLeftGame();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Comsetic_OnIntroCompleted();

public:
	AK35SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK35SurvivorCosmeticHelperActor) { return 0; }
