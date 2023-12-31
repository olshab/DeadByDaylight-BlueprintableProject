#pragma once

#include "CoreMinimal.h"
#include "TutorialUIReadyEventDynamicDelegate.h"
#include "GameFramework/Actor.h"
#include "TutorialsUtilities.generated.h"

class AAIController;
class UObject;
class ATutorialsUtilities;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ATutorialsUtilities : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, Transient, meta=(AllowPrivateAccess=true))
	FTutorialUIReadyEventDynamicDelegate OnTutorialUIReady;

public:
	UFUNCTION(BlueprintCallable)
	void TriggerTutorialHudFadeOut();

	UFUNCTION(BlueprintCallable)
	void TriggerTutorialHudFadeIn();

	UFUNCTION(BlueprintPure)
	static ATutorialsUtilities* GetTutorialsUtilities(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable)
	static void DestroyAI(AAIController* aiController);

public:
	ATutorialsUtilities();
};

FORCEINLINE uint32 GetTypeHash(const ATutorialsUtilities) { return 0; }
