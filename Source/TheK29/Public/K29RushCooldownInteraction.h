#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "InteractionDefinition.h"
#include "K29RushCooldownInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29RushCooldownInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _cooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCameraRestrictedForDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _cameraRestrictionTime;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetCameraInputLimit();

public:
	UK29RushCooldownInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK29RushCooldownInteraction) { return 0; }
