#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K34AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class THEK34_API UK34AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDodson;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldUseLookAt;

public:
	UK34AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK34AnimInstance) { return 0; }
