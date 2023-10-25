#pragma once

#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "NavMeshObjectPlacementValidationStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UNavMeshObjectPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _navPathMaxLength;

public:
	UNavMeshObjectPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UNavMeshObjectPlacementValidationStrategy) { return 0; }
