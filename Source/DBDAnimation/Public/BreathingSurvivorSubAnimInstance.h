#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "BreathingSurvivorSubAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UBreathingSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _breathing;

public:
	UBreathingSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBreathingSurvivorSubAnimInstance) { return 0; }
