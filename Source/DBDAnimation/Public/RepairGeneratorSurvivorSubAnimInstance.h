#pragma once

#include "CoreMinimal.h"
#include "SkillCheckFailureTracker.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "AnimInstanceLeader.h"
#include "UObject/NoExportTypes.h"
#include "GameEventData.h"
#include "RepairGeneratorSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API URepairGeneratorSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimInstanceLeader, public ISkillCheckFailureTracker
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector _snapPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 _side;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 _repairAnimIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isRepairingGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _rightFootDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _animSequenceVariationCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isVomiting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasSkillCheckFailed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isS34P01Accumulating;

public:
	UFUNCTION(BlueprintCallable)
	virtual void ResetSkillCheckFailed() override PURE_VIRTUAL(ResetSkillCheckFailed,);

protected:
	UFUNCTION()
	virtual void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) override PURE_VIRTUAL(OnSkillCheckFailed,);

public:
	URepairGeneratorSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const URepairGeneratorSurvivorSubAnimInstance) { return 0; }
