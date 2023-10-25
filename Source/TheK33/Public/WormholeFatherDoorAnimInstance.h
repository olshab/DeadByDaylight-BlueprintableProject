#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WormholeFatherDoorAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UWormholeFatherDoorAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOpened;

private:
	UFUNCTION(BlueprintCallable)
	void OnStateChanged(bool hasBeenHacked);

public:
	UWormholeFatherDoorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UWormholeFatherDoorAnimInstance) { return 0; }
