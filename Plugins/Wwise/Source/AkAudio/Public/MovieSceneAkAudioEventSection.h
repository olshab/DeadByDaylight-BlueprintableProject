#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneAkAudioEventSection.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAkAudioEvent* Event;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool RetriggerEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 ScrubTailLengthMs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool StopAtSectionEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MaxSourceDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString MaxDurationSourceID;

public:
	UMovieSceneAkAudioEventSection();
};

FORCEINLINE uint32 GetTypeHash(const UMovieSceneAkAudioEventSection) { return 0; }
