#pragma once

#include "CoreMinimal.h"
#include "AchievementBase.h"
#include "GameplayTagContainer.h"
#include "EDBDScoreTypes.h"
#include "OnGameEventAchievement.generated.h"

class AActor;

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UOnGameEventAchievement : public UAchievementBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> _gameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EDBDScoreTypes> _scoreTypes;

protected:
	UFUNCTION(BlueprintCallable)
	void OnScoreTypeEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target);

public:
	UOnGameEventAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UOnGameEventAchievement) { return 0; }
