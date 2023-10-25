#pragma once

#include "CoreMinimal.h"
#include "MaterialOriginalState.generated.h"

class UMaterialInterface;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FMaterialOriginalState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UMeshComponent* MeshWithChangedMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UMaterialInterface*> OriginalMaterial;

public:
	DEADBYDAYLIGHT_API FMaterialOriginalState();
};

FORCEINLINE uint32 GetTypeHash(const FMaterialOriginalState) { return 0; }
