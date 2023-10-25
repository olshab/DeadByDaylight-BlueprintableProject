#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "EK32ItemBoxState.h"
#include "K32ItemBoxAnimInstance.generated.h"

class AK32ItemBox;

UCLASS(Blueprintable, NonTransient)
class UK32ItemBoxAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AK32ItemBox* _owningItemBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK32ItemBoxState _currentState;

public:
	UK32ItemBoxAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK32ItemBoxAnimInstance) { return 0; }
