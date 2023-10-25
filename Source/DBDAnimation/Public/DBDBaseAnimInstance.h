#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Templates/SubclassOf.h"
#include "DBDBaseAnimInstance.generated.h"

class UAnimEffectHandler;
class UAnimEffectBlackBoard;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UDBDBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimEffectBlackBoard* _animEffectBlackBoard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimEffectHandler* _animEffectHandlerForSFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAnimEffectHandler* _animEffectHandlerForVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForSFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForVFX;

public:
	UFUNCTION(BlueprintPure)
	bool HasBeenNotified(const FName animNotify) const;

public:
	UDBDBaseAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBaseAnimInstance) { return 0; }
