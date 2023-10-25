#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h"
#include "BTDecorator_ExtIsBBEntryOfClass.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_ExtIsBBEntryOfClass : public UBTDecorator_IsBBEntryOfClass
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InvertConditition;

public:
	UBTDecorator_ExtIsBBEntryOfClass();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ExtIsBBEntryOfClass) { return 0; }
