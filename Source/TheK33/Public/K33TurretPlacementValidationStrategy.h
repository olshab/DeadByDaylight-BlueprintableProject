#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "K33TurretPlacementValidationStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33TurretPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _navmeshProjectionBoxExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _navmeshProjectionBoxExtentForSnapping;

public:
	UK33TurretPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretPlacementValidationStrategy) { return 0; }
