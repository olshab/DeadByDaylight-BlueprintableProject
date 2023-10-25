#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "K28SurvivorAbductionCameraBehaviourComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28SurvivorAbductionCameraBehaviourComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _targetSpringArmLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _targetLockerOffsetForCameraView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector2D _cameraLocationOffset;

public:
	UK28SurvivorAbductionCameraBehaviourComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28SurvivorAbductionCameraBehaviourComponent) { return 0; }
