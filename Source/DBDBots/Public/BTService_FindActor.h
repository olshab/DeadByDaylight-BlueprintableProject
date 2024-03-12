#pragma once

#include "CoreMinimal.h"
#include "BTService_FindGoalObject.h"
#include "UObject/NoExportTypes.h"
#include "BTService_FindActor.generated.h"

UCLASS(Blueprintable, Abstract)
class DBDBOTS_API UBTService_FindActor : public UBTService_FindGoalObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ActorLocationOffset;

public:
	UBTService_FindActor();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindActor) { return 0; }
