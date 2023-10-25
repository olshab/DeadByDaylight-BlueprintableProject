#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "AnimSequenceSelector.h"
#include "PalletAnimInstance.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UPalletAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPulledDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingPulledUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _isBeingDestroyedPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimSequenceSelector _destroyPalletAnim;

private:
	UFUNCTION(BlueprintCallable)
	void OnBeingPulledUpStopped();

	UFUNCTION(BlueprintCallable)
	void OnBeingPulledUpStarted(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnBeingDestroyedStopped();

	UFUNCTION(BlueprintCallable)
	void OnBeingDestroyedStarted(ADBDPlayer* player);

public:
	UPalletAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UPalletAnimInstance) { return 0; }
