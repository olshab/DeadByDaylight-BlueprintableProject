#pragma once

#include "CoreMinimal.h"
#include "BaseKillerWeaponAnimInstance.h"
#include "EAttackType.h"
#include "K25WeaponAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class THEK25_API UK25WeaponAnimInstance : public UBaseKillerWeaponAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasDownedTargetHoldingLamentConfiguration;

protected:
	UFUNCTION(BlueprintCallable)
	void OnAttackStart(const EAttackType attackType);

public:
	UK25WeaponAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK25WeaponAnimInstance) { return 0; }
