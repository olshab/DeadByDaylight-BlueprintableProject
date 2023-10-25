#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EAINodeRelevancyOptions.h"
#include "BTService_OnRelevantBase.generated.h"

UCLASS(Blueprintable, Abstract)
class DBDBOTS_API UBTService_OnRelevantBase : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAINodeRelevancyOptions When;

public:
	UBTService_OnRelevantBase();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_OnRelevantBase) { return 0; }
