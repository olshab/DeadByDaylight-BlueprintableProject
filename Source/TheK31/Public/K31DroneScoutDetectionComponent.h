#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K31DroneScoutDetectionSphereRaycastStruct.h"
#include "SurvivorDroneFrameDatum.h"
#include "K31DroneScoutDetectionComponent.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneScoutDetectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FK31DroneScoutDetectionSphereRaycastStruct> _raycastSphereData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, FSurvivorDroneFrameDatum> _survivorLastFrameData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, FSurvivorDroneFrameDatum> _survivorCurrentFrameData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _detectedSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseDetectionConeYawHalfAngleDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseDetectionHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseDetectionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _sphereTraceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _stateTagsPreventingSurvivorDetection;

private:
	UFUNCTION(BlueprintCallable)
	void OnLaserDeactivate(UActorComponent* component);

	UFUNCTION(BlueprintCallable)
	void OnLaserActive(UActorComponent* component, bool reset);

public:
	UK31DroneScoutDetectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneScoutDetectionComponent) { return 0; }
