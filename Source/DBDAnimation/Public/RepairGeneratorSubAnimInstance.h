#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "RepairGeneratorSubAnimInstance.generated.h"

class UAnimSequence;
class AGenerator;
class ACamperPlayer;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API URepairGeneratorSubAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AGenerator* _owningGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingRepaired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACamperPlayer* _repairingSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _animSequence;

	UPROPERTY(EditAnywhere)
	FGameplayTag _interactionTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FGameplayTag _currentAnimId;

	UPROPERTY(EditAnywhere)
	TMap<FGameplayTag, UAnimSequence*> _taggedAnimSequences;

public:
	URepairGeneratorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const URepairGeneratorSubAnimInstance) { return 0; }
