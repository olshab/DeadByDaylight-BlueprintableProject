#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BaseLockerInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "K28SurvivorLockerAbductionInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28SurvivorLockerAbductionInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _survivorPanicInLockerAnimationMontageDescriptor;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_OverriddenInteractionInstance, Export)
	TWeakObjectPtr<UBaseLockerInteraction> _overriddenInteractionInstance;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _overridingTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDotProductFadeOutThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rotationMaxTime;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_OverriddenInteractionInstance();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28SurvivorLockerAbductionInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28SurvivorLockerAbductionInteraction) { return 0; }
