#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h"
#include "BTDecorator_ExtCompareBBEntries.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_ExtCompareBBEntries : public UBTDecorator_CompareBBEntries
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Tolerance;

public:
	UBTDecorator_ExtCompareBBEntries();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ExtCompareBBEntries) { return 0; }
