#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ESnowmanDestructionType.h"
#include "SnowmanAnimInstance.generated.h"

class ADBDPlayer;
class ASnowman;

UCLASS(Blueprintable, NonTransient)
class USnowmanAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingEntered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isControlled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingDestroyedDueToSurvivorRunExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingDestroyedDueToKillerAttackExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingDestroyedDueToKillerAttackWhileControlled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingDestroyedDueToKillerAttackWhileEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSurvivorUsingSnowmanMoving;

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ASnowman> _snowman;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ADBDPlayer> _playerUsingSnowman;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedEvent(ESnowmanDestructionType snowmanDestructionType);

public:
	USnowmanAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanAnimInstance) { return 0; }
