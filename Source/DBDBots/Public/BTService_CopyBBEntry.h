#pragma once

#include "CoreMinimal.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_CopyBBEntry.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_CopyBBEntry : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFrom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CopyOnlyValidKeyValue;

public:
	UBTService_CopyBBEntry();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_CopyBBEntry) { return 0; }
