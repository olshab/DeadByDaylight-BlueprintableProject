#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "ETutorialStep.h"
#include "TutorialLevel.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ATutorialLevel : public ALevelScriptActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _tutorialStarted;

public:
	UFUNCTION(BlueprintCallable)
	void StartTutorial();

	UFUNCTION(BlueprintCallable)
	void SetHandledTutorialStep(ETutorialStep tutorialStep);

	UFUNCTION(BlueprintCallable)
	void RemoveObjective(FName objectiveId);

protected:
	UFUNCTION(BlueprintCallable)
	void OnTutorialStepUpdated(ETutorialStep tutorialStep);

	UFUNCTION(BlueprintCallable)
	void OnNotificationDismissed(FName notificationId);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HandleTutorialStepReached();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HandleNotificationDismissed(FName notificationId);

public:
	UFUNCTION(BlueprintCallable)
	void DisplayNotification(FName notificationId, float time);

	UFUNCTION(BlueprintCallable)
	void DisplayBlockingNotification(FName notificationId);

	UFUNCTION(BlueprintCallable)
	void CompleteObjective(FName objectiveId);

	UFUNCTION(BlueprintCallable)
	void AddObjective(FName objectiveId);

public:
	ATutorialLevel();
};

FORCEINLINE uint32 GetTypeHash(const ATutorialLevel) { return 0; }
