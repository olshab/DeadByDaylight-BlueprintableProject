#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudTutorialBlockingNotificationsPresenter.generated.h"

class ATutorialsUtilities;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHudTutorialBlockingNotificationsPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> CoreTutorialBlockingNotificationsWidget;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ATutorialsUtilities* _tutorialsUtilities;

private:
	UFUNCTION(BlueprintCallable)
	void OnTutorialNotificationClosedByUserInput();

	UFUNCTION(BlueprintCallable)
	void OnTutorialHudFadeOutTriggered();

	UFUNCTION(BlueprintCallable)
	void OnTutorialHudFadeInTriggered();

public:
	UHudTutorialBlockingNotificationsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudTutorialBlockingNotificationsPresenter) { return 0; }
