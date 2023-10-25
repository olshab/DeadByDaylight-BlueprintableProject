#pragma once

#include "CoreMinimal.h"
#include "EEndGameReason.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EGameState.h"
#include "GameEventData.h"
#include "QuestEventsHandler.generated.h"

class UArchiveStoriesContainer;
class UQuestEventEvaluatorBase;
class ADBDPlayerState;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UQuestEventsHandler : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UQuestEventEvaluatorBase*> _evaluatorList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveStoriesContainer* _archiveStoriesContainer;

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayergameStateChanged(ADBDPlayerState* playerState, EGameState gameState);

	UFUNCTION(BlueprintCallable)
	void OnGameEnded(EEndGameReason reason);

	UFUNCTION()
	void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ShowInGameCurrentQuestInfos();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_InGameAddProgressionToCurrentQuest(const int32 amount);

public:
	UQuestEventsHandler();
};

FORCEINLINE uint32 GetTypeHash(const UQuestEventsHandler) { return 0; }
