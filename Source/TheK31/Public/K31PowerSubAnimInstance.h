#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "K31PowerSubAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class THEK31_API UK31PowerSubAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChargingInspection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _inspectPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _inspectSequenceStartPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _inspectSequence;

public:
	UK31PowerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31PowerSubAnimInstance) { return 0; }
