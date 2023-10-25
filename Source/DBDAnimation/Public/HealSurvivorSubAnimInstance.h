#pragma once

#include "CoreMinimal.h"
#include "SkillCheckFailureTracker.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "HealSurvivorSubAnimInstance.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UHealSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public ISkillCheckFailureTracker
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHealingACrawlingTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHealingOtherNoMedkit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHealingOtherMedkit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHealingSelfNoMedkit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHealingSelfMedkit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isWakingUpOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingHealed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isBeingMended;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isMendingOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasSkillCheckFailed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasHealerSkillCheckFailed;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetHealerSkillCheckFailed();

	UFUNCTION(BlueprintCallable)
	void OnHealerSkillCheckResponseAesthetic(bool success, ADBDPlayer* healer);

public:
	UFUNCTION(BlueprintCallable)
	virtual void ResetSkillCheckFailed() override PURE_VIRTUAL(ResetSkillCheckFailed,);

protected:
	UFUNCTION()
	virtual void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) override PURE_VIRTUAL(OnSkillCheckFailed,);

public:
	UHealSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHealSurvivorSubAnimInstance) { return 0; }
