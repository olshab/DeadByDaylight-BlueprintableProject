#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudMatchResultPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHudMatchResultPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> MatchResultWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void StartEndGameSequence();

	UFUNCTION(BlueprintCallable)
	void ShowEndSequence(float duration, bool isSlasher, int32 matchResult);

	UFUNCTION(BlueprintCallable)
	void OnMatchResultFadeOutCompleted();

	UFUNCTION(BlueprintCallable)
	void NotifyInParadiseOrEscaped();

public:
	UHudMatchResultPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudMatchResultPresenter) { return 0; }
