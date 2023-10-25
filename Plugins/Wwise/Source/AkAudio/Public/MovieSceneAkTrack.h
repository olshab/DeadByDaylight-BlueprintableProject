#pragma once

#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneAkTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI, Abstract)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UMovieSceneSection*> Sections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsAMasterTrack;

public:
	UMovieSceneAkTrack();
};

FORCEINLINE uint32 GetTypeHash(const UMovieSceneAkTrack) { return 0; }
