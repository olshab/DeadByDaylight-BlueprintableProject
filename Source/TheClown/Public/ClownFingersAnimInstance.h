#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ClownFingersAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UClownFingersAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isObservedCharacterSlasher;

public:
	UClownFingersAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UClownFingersAnimInstance) { return 0; }
