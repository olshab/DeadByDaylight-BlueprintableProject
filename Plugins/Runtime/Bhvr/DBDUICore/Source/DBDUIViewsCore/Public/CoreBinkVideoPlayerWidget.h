#pragma once

#include "CoreMinimal.h"
#include "CinematicViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "CoreBinkVideoPlayerWidget.generated.h"

class UDBDImage;
class UBinkMediaPlayer;
class UScaleBox;
class UUITweenInstance;
class UCanvasPanel;
class USizeBox;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreBinkVideoPlayerWidget : public UCoreBaseUserWidget, public ICinematicViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* VideoBinkCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* VideoBinkBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	USizeBox* VideoBinkSizeBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UScaleBox* VideoBinkScaleBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* VideoBinkImage;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBinkMediaPlayer* _binkMediaPlayer;

public:
	UFUNCTION(BlueprintCallable)
	void SetSize_Implementation(FVector2D size);

	UFUNCTION(BlueprintCallable)
	void OnSubtitlesChanged(const TArray<FString>& subtitlesText);

	UFUNCTION(BlueprintCallable)
	void OnMediaOpened(const FString& openedUrl);

	UFUNCTION(BlueprintCallable)
	void OnMediaClosed();

private:
	UFUNCTION(BlueprintCallable)
	void OnFadeOutAnimationComplete(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable)
	void OnFadeInAnimationComplete(UUITweenInstance* tween);

public:
	UFUNCTION(BlueprintCallable)
	void OnEndReached();

	UFUNCTION(BlueprintCallable)
	void FadeOutAnimation_Implementation(const float fadeOutDuration, const float delay);

	UFUNCTION(BlueprintCallable)
	void FadeInAnimation_Implementation(const float fadeInDuration, const float delay);

public:
	UCoreBinkVideoPlayerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreBinkVideoPlayerWidget) { return 0; }
