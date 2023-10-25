#pragma once

#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "DreamSnareTrapPlacementValidationStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDreamSnareTrapPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float NumberOfGroundTest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float TrapRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MaxElevationDifferentialOnTrapEdge;

public:
	UDreamSnareTrapPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDreamSnareTrapPlacementValidationStrategy) { return 0; }
