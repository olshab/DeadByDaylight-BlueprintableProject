#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SetBBEntry.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_SetBBEntry : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBToSetKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ToSetValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter RandomSetChance;

public:
	UBTService_SetBBEntry();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_SetBBEntry) { return 0; }
