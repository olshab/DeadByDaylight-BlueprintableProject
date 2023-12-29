#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "CoreMemoryDefaultTriggerBehaviour.generated.h"

class ACoreMemoryFragment;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryDefaultTriggerBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _authority_lineOfSightTimerRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _authority_DisableCollisionDetectionAtSpawn;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnTriggerZoneExited(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnTriggerZoneEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintCallable)
	void Authority_CheckLineOfSight(const ACoreMemoryFragment* fragment);

public:
	UCoreMemoryDefaultTriggerBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryDefaultTriggerBehaviour) { return 0; }
