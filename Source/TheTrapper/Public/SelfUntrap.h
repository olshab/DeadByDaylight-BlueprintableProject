#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "AnimationMontageDescriptor.h"
#include "SelfUntrap.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class USelfUntrap : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _trapImmunityDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor _successfulEscapeHealthy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor _successfulEscapeInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor _successfulEscapeCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor _failedEscape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool _canEscape;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USelfUntrap();
};

FORCEINLINE uint32 GetTypeHash(const USelfUntrap) { return 0; }
