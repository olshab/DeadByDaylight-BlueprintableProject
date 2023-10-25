#pragma once

#include "CoreMinimal.h"
#include "BaseKillerAttackSubAnimInstance.h"
#include "HillbillyChainsawSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHillbillyChainsawSubAnimInstance : public UBaseKillerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRevvingChainsaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRevvingChainsawCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChainsawSprinting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isWaitingForChainsaw;

public:
	UHillbillyChainsawSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawSubAnimInstance) { return 0; }
