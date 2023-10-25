#pragma once

#include "CoreMinimal.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "Templates/SubclassOf.h"
#include "RestrictedPlacementAreaDefaultStrategy.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class URestrictedPlacementAreaDefaultStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> RestrictedActor;

public:
	URestrictedPlacementAreaDefaultStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URestrictedPlacementAreaDefaultStrategy) { return 0; }
