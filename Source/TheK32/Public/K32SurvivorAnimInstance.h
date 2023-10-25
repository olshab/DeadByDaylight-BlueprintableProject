#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "K32SurvivorAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK32SurvivorAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAssimilated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnerBeingCarried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSpeedingUpEmpGeneration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRetrievingItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isUsingEmp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasBeenAssimilatedByAnotherSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasBeenAssimilatedByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasBeenCleansedFromAssimilation;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetHasBeenCleansedFromAssimilation();

	UFUNCTION(BlueprintCallable)
	void ResetHasBeenAssimilatedByKiller();

	UFUNCTION(BlueprintCallable)
	void ResetHasBeenAssimilatedByAnotherSurvivor();

public:
	UK32SurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK32SurvivorAnimInstance) { return 0; }
