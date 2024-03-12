#pragma once

#include "CoreMinimal.h"
#include "VideoPlayer.h"
#include "UObject/SoftObjectPtr.h"
#include "GameFramework/Actor.h"
#include "VideoThumbnailPlayer.generated.h"

class UAudioComponent;
class UMediaPlayer;
class UMediaSource;
class UMediaSoundComponent;
class UUserWidget;

UCLASS(Blueprintable)
class DBDVIDEOPLAYER_API AVideoThumbnailPlayer : public AActor, public IVideoPlayer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UMediaPlayer* MediaPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UMediaSoundComponent* SoundComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UUserWidget* VideoPlayerWidget;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAudioComponent* _audioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSoftObjectPtr<UMediaSource> _source;

private:
	UFUNCTION(BlueprintCallable)
	void OnVideoAssetLoaded();

	UFUNCTION(BlueprintCallable)
	void OnMediaOpened(const FString& openedUrl);

	UFUNCTION(BlueprintCallable)
	void OnMediaClosed();

	UFUNCTION(BlueprintCallable)
	void OnEndReached();

public:
	AVideoThumbnailPlayer();
};

FORCEINLINE uint32 GetTypeHash(const AVideoThumbnailPlayer) { return 0; }
