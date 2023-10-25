#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Curves/RichCurve.h"
#include "MovieSceneFloatChannelSerializationHelper.h"
#include "MovieSceneAkAudioRTPCSection.generated.h"

class UAkRtpc;

UCLASS(Blueprintable)
class AKAUDIO_API UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkRtpc* RTPC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere)
	FRichCurve FloatCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;

	UPROPERTY(EditAnywhere)
	FMovieSceneFloatChannel RTPCChannel;

public:
	UMovieSceneAkAudioRTPCSection();
};

FORCEINLINE uint32 GetTypeHash(const UMovieSceneAkAudioRTPCSection) { return 0; }
