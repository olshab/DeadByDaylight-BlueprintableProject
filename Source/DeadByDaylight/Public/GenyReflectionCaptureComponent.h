#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ReflectionCaptureTwoStates.h"
#include "GenyReflectionCaptureComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGenyReflectionCaptureComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FReflectionCaptureTwoStates> generatorDrivenReflectionCapture;

public:
	UGenyReflectionCaptureComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGenyReflectionCaptureComponent) { return 0; }
