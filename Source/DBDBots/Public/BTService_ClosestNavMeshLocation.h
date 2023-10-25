#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "UObject/NoExportTypes.h"
#include "BTService_ClosestNavMeshLocation.generated.h"

class UNavigationSystemV1;
class ANavigationData;

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_ClosestNavMeshLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBAroundLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ValidLocationRefreshInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InvalidLocationRefreshInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NavDataAgentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NavMeshProjectionBoxExtent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UNavigationSystemV1* _navigationSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ANavigationData* _navigationData;

public:
	UBTService_ClosestNavMeshLocation();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_ClosestNavMeshLocation) { return 0; }
