#pragma once

#include "CoreMinimal.h"
#include "BaseKillerAttackSubAnimInstance.h"
#include "KillerAttackSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UKillerAttackSubAnimInstance : public UBaseKillerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCarrying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActive;

public:
	UKillerAttackSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UKillerAttackSubAnimInstance) { return 0; }
