#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DialogEventSettings.h"
#include "Components/ActorComponent.h"
#include "DialogHandlerComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDialogHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minimumDelayBetweenDialog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxSubtitleDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDialogEventSettings> _dialogEvents;

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _stopAudioGameplayEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAkAudioEvent* _stopAudioClip;

public:
	UDialogHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDialogHandlerComponent) { return 0; }
