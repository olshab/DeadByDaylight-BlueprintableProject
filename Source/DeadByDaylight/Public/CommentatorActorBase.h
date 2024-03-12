#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommentatorActorBase.generated.h"

class UAkComponent;

UCLASS(Blueprintable, Abstract)
class ACommentatorActorBase : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _audioComponent;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAudioStarted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAudioEnded();

public:
	ACommentatorActorBase();
};

FORCEINLINE uint32 GetTypeHash(const ACommentatorActorBase) { return 0; }
