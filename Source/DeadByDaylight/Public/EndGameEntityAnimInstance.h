#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EndGameEntityAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API UEndGameEntityAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFront;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBack;

public:
	UEndGameEntityAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UEndGameEntityAnimInstance) { return 0; }
