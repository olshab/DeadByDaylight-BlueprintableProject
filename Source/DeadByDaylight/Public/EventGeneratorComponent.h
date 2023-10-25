#pragma once

#include "CoreMinimal.h"
#include "EventObjectComponent.h"
#include "GameplayTagContainer.h"
#include "EOfferingEffectType.h"
#include "EventGeneratorComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UEventGeneratorComponent : public UEventObjectComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _genCompletedScoreEvent;

	UPROPERTY(EditAnywhere)
	FGameplayTag _genCompletedNoOfferingScoreEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EOfferingEffectType _offeringEffectTypeNeeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _updateOutlineForSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _updateOutlineForSlasher;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_FireGenCompletedEventScore(bool isAutoCompleted);

public:
	UEventGeneratorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEventGeneratorComponent) { return 0; }
