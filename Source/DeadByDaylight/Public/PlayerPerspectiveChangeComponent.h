#pragma once

#include "CoreMinimal.h"
#include "PlayerPerspectiveChangeCameraMovementData.h"
#include "Components/ActorComponent.h"
#include "PlayerPerspectiveChangeTargetData.h"
#include "PlayerPerspectiveChangeComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerPerspectiveChangeComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPlayerPerspectiveChangeCameraMovementData _currentCameraTransitionData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPlayerPerspectiveChangeTargetData _targetPerspective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldUpdateFirstPersonMeshAndModelAfterFinalize;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void TransitionToTargetPerspective(FPlayerPerspectiveChangeTargetData targetData, float transitionDuration);

protected:
	UFUNCTION(BlueprintCallable)
	void FinalizeTargetPerspective();

public:
	UPlayerPerspectiveChangeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerPerspectiveChangeComponent) { return 0; }
