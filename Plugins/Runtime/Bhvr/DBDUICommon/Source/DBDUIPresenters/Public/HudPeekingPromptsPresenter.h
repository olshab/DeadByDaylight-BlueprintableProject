#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "ELeanState.h"
#include "HudPeekingPromptsPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHudPeekingPromptsPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> LeaningArrowsWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void UpdatePeekingState(ELeanState potentialLeanState);

	UFUNCTION(BlueprintCallable)
	void HandleBestPlayerInteractionsChanged();

	UFUNCTION(BlueprintCallable)
	bool CanPlayerLean() const;

public:
	UHudPeekingPromptsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudPeekingPromptsPresenter) { return 0; }
