#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITunableParameter.h"
#include "DBDAIPassiveCameraComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIPassiveCameraComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotateCameraOnStationaryWaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotateCameraOnStationaryDegreePerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CameraRotationFullRotationDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CameraRotationBetweenTargetDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CameraRotationMinimumInteractionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CameraRotationTotalRaycasts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForwardViewHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FocusPointCandidateRemoveOppositeHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FocusPointCandidateForceKeepDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FocusPointCandidateMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InvalidKillerLocationRangeRatio;

public:
	UDBDAIPassiveCameraComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIPassiveCameraComponent) { return 0; }
