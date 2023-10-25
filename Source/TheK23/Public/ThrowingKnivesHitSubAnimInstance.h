#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "ThrowingKnivesHitSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UThrowingKnivesHitSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hitByKnifeTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _knifeHitCausedKOTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _knifeHitCausedDamageTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _useAlternateHitReactionState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _knifeHitStateHitAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _alternateKnifeHitStateHitAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hitByKnifeTriggerEventDriven;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _knifeHitCausedDamageTriggerEventDriven;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _knifeHitCausedKOTriggerEventDriven;

public:
	UThrowingKnivesHitSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UThrowingKnivesHitSubAnimInstance) { return 0; }
