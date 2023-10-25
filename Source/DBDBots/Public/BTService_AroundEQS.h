#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Services/BTService_RunEQS.h"
#include "BTService_AroundEQS.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_AroundEQS : public UBTService_RunEQS
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBAroundObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBAroundLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ValidLocationRefreshInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InvalidLocationRefreshInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InvalidateLocationUnderTargetDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool KeepResultWhileValid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NavDataAgentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NavMeshProjectionBoxExtent;

public:
	UBTService_AroundEQS();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_AroundEQS) { return 0; }
