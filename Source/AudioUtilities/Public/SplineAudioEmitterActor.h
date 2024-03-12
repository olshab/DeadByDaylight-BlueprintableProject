#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineAudioEmitterActor.generated.h"

class UAkComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class AUDIOUTILITIES_API ASplineAudioEmitterActor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USplineComponent* _theSpline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _emitter;

public:
	UFUNCTION(BlueprintCallable)
	USplineComponent* GetSplineComponent();

	UFUNCTION(BlueprintCallable)
	UAkComponent* GetEmitterComponent();

public:
	ASplineAudioEmitterActor();
};

FORCEINLINE uint32 GetTypeHash(const ASplineAudioEmitterActor) { return 0; }
