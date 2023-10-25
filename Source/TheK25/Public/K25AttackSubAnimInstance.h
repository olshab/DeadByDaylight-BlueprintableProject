#pragma once

#include "CoreMinimal.h"
#include "KillerAttackSubAnimInstance.h"
#include "EAttackType.h"
#include "K25AttackSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class THEK25_API UK25AttackSubAnimInstance : public UKillerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasDownedTargetHoldingLamentConfiguration;

protected:
	UFUNCTION(BlueprintCallable)
	void OnAttackStart(const EAttackType attackType);

public:
	UK25AttackSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK25AttackSubAnimInstance) { return 0; }
