#pragma once

#include "CoreMinimal.h"
#include "EPawnInputPressTypes.h"
#include "BTService_OnRelevantBase.h"
#include "BTService_InputAtTiming.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_InputAtTiming : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPawnInputPressTypes InputType;

public:
	UBTService_InputAtTiming();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_InputAtTiming) { return 0; }
