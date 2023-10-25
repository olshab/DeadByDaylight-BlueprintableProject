#pragma once

#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioRTPCTemplate.generated.h"

class UMovieSceneAkAudioRTPCSection;

USTRUCT(BlueprintType)
struct FMovieSceneAkAudioRTPCTemplate: public FMovieSceneEvalTemplate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UMovieSceneAkAudioRTPCSection* Section;

public:
	AKAUDIO_API FMovieSceneAkAudioRTPCTemplate();
};

FORCEINLINE uint32 GetTypeHash(const FMovieSceneAkAudioRTPCTemplate) { return 0; }
