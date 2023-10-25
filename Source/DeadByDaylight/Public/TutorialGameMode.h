#pragma once

#include "CoreMinimal.h"
#include "DBDBaseMatchGameMode.h"
#include "TutorialGameMode.generated.h"

class UAtlantaTutorialPlayerHudController;
class UTutorialObjectiveController;
class AGenerator;
class UTutorialNotificationController;
class UTutorialHighlightController;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API ATutorialGameMode : public ADBDBaseMatchGameMode
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanStartAtlantaTutorialChange, bool, canStartTutorial);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UTutorialObjectiveController* _tutorialObjectiveController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UTutorialNotificationController* _tutorialNotificationController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UTutorialHighlightController* _tutorialHighlightController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAtlantaTutorialPlayerHudController* _atlantaTutorialPlayerHudController;

public:
	UFUNCTION(BlueprintCallable)
	void SetEscapeGenerators(const TArray<AGenerator*>& escapeGenerators, int32 requiredActivationCount);

	UFUNCTION(BlueprintCallable)
	void SetEscapeActivated();

	UFUNCTION(BlueprintPure)
	UTutorialObjectiveController* GetTutorialObjectiveController() const;

	UFUNCTION(BlueprintPure)
	UTutorialNotificationController* GetTutorialNotificationController() const;

	UFUNCTION(BlueprintPure)
	UTutorialHighlightController* GetTutorialHighlightController() const;

	UFUNCTION(BlueprintPure)
	UAtlantaTutorialPlayerHudController* GetAtlantaTutorialPlayerHudController() const;

public:
	ATutorialGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ATutorialGameMode) { return 0; }
