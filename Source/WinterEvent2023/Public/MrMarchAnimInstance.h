#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MrMarchAnimInstance.generated.h"

class AMrMarch;

UCLASS(Blueprintable, NonTransient)
class WINTEREVENT2023_API UMrMarchAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInJumpscare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSpawned;

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<AMrMarch> _mrMarch;

public:
	UMrMarchAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UMrMarchAnimInstance) { return 0; }
