#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ArchiveJournalSubPresenter.generated.h"

class IArchiveJournalViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UArchiveJournalSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IArchiveJournalViewInterface> _archiveJournalWidget;

private:
	UFUNCTION(BlueprintCallable)
	void OnVignetteSelected(const FString& vignetteId);

	UFUNCTION(BlueprintCallable)
	void OnShowImageViewer();

	UFUNCTION(BlueprintCallable)
	void OnPlayCinematic(const int32 index);

	UFUNCTION(BlueprintCallable)
	void OnImageViewerVoiceOverPlayed();

	UFUNCTION(BlueprintCallable)
	void OnImageViewerVoiceOverAutoplay(bool autoplay);

	UFUNCTION(BlueprintCallable)
	void OnEntrySelected(int32 entryIndex);

	UFUNCTION(BlueprintCallable)
	void OnClickPlayButton(int32 entryIndex);

	UFUNCTION(BlueprintCallable)
	void OnAutoplayChanged(bool autoplayActive, int32 entryIndex);

public:
	UArchiveJournalSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveJournalSubPresenter) { return 0; }
