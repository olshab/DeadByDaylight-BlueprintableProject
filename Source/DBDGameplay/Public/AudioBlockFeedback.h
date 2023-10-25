#pragma once

#include "CoreMinimal.h"
#include "BlockFeedbackBase.h"
#include "AudioBlockFeedback.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable, Abstract)
class AAudioBlockFeedback : public ABlockFeedbackBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _akAudioEventBlockStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _akAudioEventBlockStop;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAkComponent* _blockableAudioComponent;

public:
	AAudioBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const AAudioBlockFeedback) { return 0; }
