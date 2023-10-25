#pragma once

#include "CoreMinimal.h"
#include "SkillCheckFailureTracker.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "SabotageSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API USabotageSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public ISkillCheckFailureTracker
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isSabotaging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasSkillCheckFailed;

public:
	UFUNCTION(BlueprintCallable)
	virtual void ResetSkillCheckFailed() override PURE_VIRTUAL(ResetSkillCheckFailed,);

protected:
	UFUNCTION()
	virtual void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) override PURE_VIRTUAL(OnSkillCheckFailed,);

public:
	USabotageSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USabotageSurvivorSubAnimInstance) { return 0; }
