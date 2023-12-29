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
	float _numberOfGroundTest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _trapRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxElevationDifferentialOnTrapEdge;

public:
	UDreamSnareTrapPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDreamSnareTrapPlacementValidationStrategy) { return 0; }
