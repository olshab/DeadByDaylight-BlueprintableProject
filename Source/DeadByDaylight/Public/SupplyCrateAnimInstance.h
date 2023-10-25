#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "SupplyCrateAnimInstance.generated.h"

class ASupplyCrateInteractable;
class ADBDPlayer;

UCLASS(Blueprintable, NonTransient)
class USupplyCrateAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ASupplyCrateInteractable* _owningSupplyCrate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingPriedOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAutoClosing;

private:
	UFUNCTION(BlueprintCallable)
	void OnBeingPriedOpenStopped();

	UFUNCTION(BlueprintCallable)
	void OnBeingPriedOpenStarted(ADBDPlayer* player);

public:
	USupplyCrateAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USupplyCrateAnimInstance) { return 0; }
