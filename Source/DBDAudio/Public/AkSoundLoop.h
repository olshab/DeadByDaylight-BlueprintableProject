#pragma once

#include "CoreMinimal.h"
#include "AkSoundLoop.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAkSoundLoop
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _startEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _endEvent;

public:
	DBDAUDIO_API FAkSoundLoop();
};

FORCEINLINE uint32 GetTypeHash(const FAkSoundLoop) { return 0; }
