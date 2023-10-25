#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EKillerAbilities.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "BTService_FindObject.generated.h"

class ADBDAIBTController;
class UBehaviorTree;
class ASlasherPlayer;

UCLASS(Blueprintable, Abstract)
class DBDBOTS_API UBTService_FindObject : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerAbilities KillerAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBObjectLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RunEQSWhenFoundObject;

	UPROPERTY(EditAnywhere)
	FEQSParametrizedQueryExecutionRequest EQSRequest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBEQSResultLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RunDynamicSubtreeWhenFoundObject;

	UPROPERTY(EditAnywhere)
	FGameplayTag DynamicSubtreeTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBehaviorTree* DynamicSubtree;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDAIBTController* _aiOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ASlasherPlayer* _killer;

public:
	UBTService_FindObject();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindObject) { return 0; }
