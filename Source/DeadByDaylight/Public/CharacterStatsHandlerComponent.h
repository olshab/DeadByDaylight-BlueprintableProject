#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EDBDScoreTypes.h"
#include "GameEventData.h"
#include "CharacterStatsHandlerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterStatsHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target);

	UFUNCTION()
	void OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData);

private:
	UFUNCTION(BlueprintCallable)
	void InitializePreMatchStats();

public:
	UCharacterStatsHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterStatsHandlerComponent) { return 0; }
