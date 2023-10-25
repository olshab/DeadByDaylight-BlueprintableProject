#pragma once

#include "CoreMinimal.h"
#include "VideoPlayer.h"
#include "GameFramework/Actor.h"
#include "StreamVideoPlayer.generated.h"

class UAudioComponent;
class UMediaPlayer;
class UStreamMediaSource;
class UMediaSoundComponent;
class UUMGStreamVideoWidget;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AStreamVideoPlayer : public AActor, public IVideoPlayer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UMediaPlayer* MediaPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UMediaSoundComponent* SoundComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UUMGStreamVideoWidget* StreamVideoWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UStreamMediaSource* StreamMediaSource;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAudioComponent* _audioComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnVideoAssetLoaded();

	UFUNCTION(BlueprintCallable)
	void OnSkipButtonTriggered();

	UFUNCTION(BlueprintCallable)
	void OnMediaOpened(const FString& openedUrl);

	UFUNCTION(BlueprintCallable)
	void OnMediaClosed();

	UFUNCTION(BlueprintCallable)
	void OnEndReached();

public:
	AStreamVideoPlayer();
};

FORCEINLINE uint32 GetTypeHash(const AStreamVideoPlayer) { return 0; }
