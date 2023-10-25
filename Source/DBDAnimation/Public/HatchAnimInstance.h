#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "HatchAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UHatchAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOpen;

public:
	UHatchAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHatchAnimInstance) { return 0; }
