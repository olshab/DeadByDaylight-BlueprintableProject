#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ExtIsAtLocation.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_ExtIsAtLocation : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBLoc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseAlternativeLoc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter AcceptableRadius;

public:
	UBTDecorator_ExtIsAtLocation();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ExtIsAtLocation) { return 0; }
