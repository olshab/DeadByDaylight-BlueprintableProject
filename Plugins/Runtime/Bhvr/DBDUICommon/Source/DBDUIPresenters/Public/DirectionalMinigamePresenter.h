#pragma once

#include "CoreMinimal.h"
#include "DirectionalMiniGameDefinition.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "EDirectionalInputKey.h"
#include "EDirectionalMinigameResult.h"
#include "DirectionalMinigamePresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UDirectionalMinigamePresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> DirectionalMinigameWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnMinigameStart(TArray<EDirectionalInputKey> sequence, int32 currentIndex);

	UFUNCTION(BlueprintCallable)
	void OnMinigameInit(FDirectionalMiniGameDefinition miniGameDefinition) const;

	UFUNCTION(BlueprintCallable)
	void OnMinigameEnterKey(EDirectionalInputKey enteredKey, int32 enteredIndex, bool isCorrect, int32 currentIndex);

	UFUNCTION(BlueprintCallable)
	void OnMinigameEnd(EDirectionalMinigameResult result);

public:
	UDirectionalMinigamePresenter();
};

FORCEINLINE uint32 GetTypeHash(const UDirectionalMinigamePresenter) { return 0; }
