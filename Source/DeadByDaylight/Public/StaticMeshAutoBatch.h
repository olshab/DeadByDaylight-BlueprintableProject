#pragma once

#include "CoreMinimal.h"
#include "StaticMeshAutoBatch.generated.h"

class UStaticMesh;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FStaticMeshAutoBatch
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* staticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UStaticMeshComponent*> staticMeshComponents;

public:
	DEADBYDAYLIGHT_API FStaticMeshAutoBatch();
};

FORCEINLINE uint32 GetTypeHash(const FStaticMeshAutoBatch) { return 0; }
