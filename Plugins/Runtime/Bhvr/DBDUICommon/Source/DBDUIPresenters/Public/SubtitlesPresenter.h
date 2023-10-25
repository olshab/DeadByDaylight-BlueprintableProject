#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "SubtitlesEntry.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "SubtitlesPresenter.generated.h"

class UUserWidget;
class UNavigationScreen;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API USubtitlesPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> SubtitlesWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfCharactersPerLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DurationPerLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool KeepSingleCharacter;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FSubtitlesEntry> _entryQueue;

	UPROPERTY(EditAnywhere, Transient)
	FTimerHandle _timerHandle;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UNavigationScreen> _navigationScreen;

private:
	UFUNCTION(BlueprintCallable)
	void OnEntryTimedOut();

	UFUNCTION(BlueprintCallable)
	bool IsSubtitlesEnabled() const;

public:
	USubtitlesPresenter();
};

FORCEINLINE uint32 GetTypeHash(const USubtitlesPresenter) { return 0; }
