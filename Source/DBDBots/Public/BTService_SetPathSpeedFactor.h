#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SetPathSpeedFactor.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_SetPathSpeedFactor : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpeedFactor;

public:
	UBTService_SetPathSpeedFactor();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_SetPathSpeedFactor) { return 0; }
