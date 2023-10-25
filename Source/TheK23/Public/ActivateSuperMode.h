#pragma once

#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "ActivateSuperMode.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UActivateSuperMode : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _activationMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _activationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _confirmationChargeDuration;

public:
	UActivateSuperMode();
};

FORCEINLINE uint32 GetTypeHash(const UActivateSuperMode) { return 0; }
