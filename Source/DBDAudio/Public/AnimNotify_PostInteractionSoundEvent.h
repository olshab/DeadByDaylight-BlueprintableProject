#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PostInteractionSoundEvent.generated.h"

class UAkAudioEvent;
class UInteractionAudioComponent;

UCLASS(Blueprintable)
class DBDAUDIO_API UAnimNotify_PostInteractionSoundEvent : public UAnimNotify
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* SoundEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UInteractionAudioComponent> InteractionAudioClass;

public:
	UAnimNotify_PostInteractionSoundEvent();
};

FORCEINLINE uint32 GetTypeHash(const UAnimNotify_PostInteractionSoundEvent) { return 0; }
