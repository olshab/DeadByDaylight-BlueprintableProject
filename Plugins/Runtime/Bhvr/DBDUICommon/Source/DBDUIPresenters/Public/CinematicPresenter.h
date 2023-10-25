#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "CinematicPresenter.generated.h"

class USubtitlesManager;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UCinematicPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> CinematicWidgetClass;

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<USubtitlesManager> _subtitlesManager;

public:
	UFUNCTION(BlueprintCallable)
	void OnWidgetFadeOutAnimationDone();

	UFUNCTION(BlueprintCallable)
	void OnWidgetFadeInAnimationDone();

	UFUNCTION(BlueprintCallable)
	void OnSubtitlesUpdated(const TArray<FString>& subtitles);

	UFUNCTION(BlueprintCallable)
	void OnPlaybackStarted();

	UFUNCTION(BlueprintCallable)
	void OnPlaybackDone();

	UFUNCTION(BlueprintCallable)
	void MuteGameAudio(const bool shouldMute);

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_StopVideoPlayer();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ChangeVideoVolume(float volume);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ChangeVideoPlaybackMode(const FString& mode);

public:
	UCinematicPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UCinematicPresenter) { return 0; }
