#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "GameplayTagContainer.h"
#include "BTService_RunSkills.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_RunSkills : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag Context;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFilterKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBasicKeyOperation::Type> FilterOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RunEveryFrame;

public:
	UBTService_RunSkills();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_RunSkills) { return 0; }
