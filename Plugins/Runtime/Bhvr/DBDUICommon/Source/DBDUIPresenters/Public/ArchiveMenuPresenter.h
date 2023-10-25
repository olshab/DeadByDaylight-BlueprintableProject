#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "EArchiveMenuState.h"
#include "EPlayerRole.h"
#include "ArchiveMenuPresenter.generated.h"

class UArchiveTomeSubPresenter;
class UArchiveRiftSubPresenter;
class UUserWidget;
class UArchiveCompendiumSubPresenter;
class USubPresenter;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UArchiveMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> ArchiveMenuWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveTomeSubPresenter* _archiveTomeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveRiftSubPresenter* _archiveRiftSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveCompendiumSubPresenter* _archiveCompendiumSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USubPresenter* _activeSubPresenter;

private:
	UFUNCTION(BlueprintCallable)
	void OnSlotSelectorClosed();

	UFUNCTION(BlueprintCallable)
	void OnShowImageViewer(bool voiceOverIsPlaying);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(EArchiveMenuState menuState, bool alreadySelected);

	UFUNCTION(BlueprintCallable)
	void OnInfoClicked();

	UFUNCTION(BlueprintCallable)
	void OnHideImageViewer();

	UFUNCTION(BlueprintCallable)
	void OnChallengeReminderSlotSelected(EPlayerRole role);

	UFUNCTION(BlueprintCallable)
	void OnChallengeReminderClicked(EPlayerRole role);

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

public:
	UArchiveMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveMenuPresenter) { return 0; }
