#pragma once

#include "CoreMinimal.h"
#include "ObjectPlacementValidationStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DefaultObjectPlacementValidationStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDefaultObjectPlacementValidationStrategy : public UObjectPlacementValidationStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _objectPlacementRaycastStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _objectPlacementRaycastEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange _objectHeightRangeAroundBaseLocation;

public:
	UDefaultObjectPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDefaultObjectPlacementValidationStrategy) { return 0; }
