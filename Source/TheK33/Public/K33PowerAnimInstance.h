#pragma once

#include "CoreMinimal.h"
#include "BaseKillerAttackSubAnimInstance.h"
#include "K33PowerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK33PowerAnimInstance : public UBaseKillerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isObstructionFar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _obstructionDistance;

public:
	UK33PowerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33PowerAnimInstance) { return 0; }
