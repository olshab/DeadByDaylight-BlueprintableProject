#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_RandomByRetry.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_RandomByRetry : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BaseSuccessRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PerRetrySuccessRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ResetWhenValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ResetAfterTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ResetOnCeaseRelevant;

public:
	UBTDecorator_RandomByRetry();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_RandomByRetry) { return 0; }
