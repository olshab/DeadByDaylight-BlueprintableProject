#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "EHudParentContainerType.h"
#include "HudPresenter.generated.h"

class UHudScreen;
class ADBDPlayer;
class ADBDSpectator;
class UCoreHudRootWidget;
class APawn;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UHudPresenter : public UPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHudParentContainerType HudParentContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _pendingCharacter;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _presentedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDSpectator* _spectatorPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UHudScreen* _hudScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCoreHudRootWidget* _rootWidget;

private:
	UFUNCTION(BlueprintCallable)
	void OnPawnUnpossessed(APawn* pawn);

	UFUNCTION(BlueprintCallable)
	void OnPawnPossessed(APawn* pawn);

	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

	UFUNCTION(BlueprintCallable)
	bool IsVisibleForCurrentGameMode() const;

	UFUNCTION(BlueprintCallable)
	bool IsPendingPawnReady() const;

	UFUNCTION(BlueprintCallable)
	bool IsHudReady();

public:
	UHudPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudPresenter) { return 0; }
