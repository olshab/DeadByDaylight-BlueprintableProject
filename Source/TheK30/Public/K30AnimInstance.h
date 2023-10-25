#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K30AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK30AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChargingPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSnapping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDrawingPath;

public:
	UK30AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK30AnimInstance) { return 0; }
