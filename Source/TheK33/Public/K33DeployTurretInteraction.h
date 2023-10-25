#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BasicChargeableInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "K33DeployTurretInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33DeployTurretInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _cancelMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cancelDeployDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FVector _dropOffLocation;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33DeployTurretInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33DeployTurretInteraction) { return 0; }
