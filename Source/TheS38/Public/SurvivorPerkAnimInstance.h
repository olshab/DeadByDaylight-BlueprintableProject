#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "SurvivorPerkAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class USurvivorPerkAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _tagsToTriggerAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInPerkInteraction;

public:
	USurvivorPerkAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorPerkAnimInstance) { return 0; }
