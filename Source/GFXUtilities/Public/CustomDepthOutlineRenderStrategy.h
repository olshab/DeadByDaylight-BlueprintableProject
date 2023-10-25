#pragma once

#include "CoreMinimal.h"
#include "BaseOutlineRenderStrategy.h"
#include "CustomDepthOutlineRenderStrategy.generated.h"

class UBatchMeshCommands;
class UMaterialInterface;

UCLASS(Blueprintable)
class GFXUTILITIES_API UCustomDepthOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInterface* _replacementMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UBatchMeshCommands*> _translucentCopies;

public:
	UCustomDepthOutlineRenderStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCustomDepthOutlineRenderStrategy) { return 0; }
