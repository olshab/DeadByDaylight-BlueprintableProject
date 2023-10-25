#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "EGameState.h"
#include "HudSpectatePresenter.generated.h"

class UUserWidget;
class ADBDPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UHudSpectatePresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> CoreSpectateBarWidget;

private:
	UFUNCTION(BlueprintCallable)
	void OnPreviousPlayerTriggered();

	UFUNCTION(BlueprintCallable)
	void OnPlayerGameStateChanged(ADBDPlayerState* dbdPlayerState, EGameState newGameState);

	UFUNCTION(BlueprintCallable)
	void OnNextPlayerTriggered();

	UFUNCTION(BlueprintCallable)
	void OnLeaveTriggered();

public:
	UHudSpectatePresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudSpectatePresenter) { return 0; }
