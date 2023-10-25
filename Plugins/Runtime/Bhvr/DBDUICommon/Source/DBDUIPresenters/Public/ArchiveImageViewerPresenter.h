#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "ArchiveImageViewerPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UArchiveImageViewerPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> ArchiveImageViewerWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnTextVisibilityChanged();

	UFUNCTION(BlueprintCallable)
	void OnImageViewerVoiceOverPlayed();

	UFUNCTION(BlueprintCallable)
	void OnImageViewerVoiceOverAutoplay(bool autoplay);

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

	UFUNCTION(BlueprintCallable)
	void OnArchivesVoiceOverPlayed(bool playing);

	UFUNCTION(BlueprintCallable)
	void OnArchivesVoiceOverAutoplay(bool autoplay);

	UFUNCTION(BlueprintCallable)
	bool CanShowFullScreenMode() const;

public:
	UArchiveImageViewerPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveImageViewerPresenter) { return 0; }
