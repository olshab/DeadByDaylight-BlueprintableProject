#pragma once

#include "CoreMinimal.h"
#include "BaseOutlineRenderStrategy.h"
#include "TranslucentOutlineRenderStrategy.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class GFXUTILITIES_API UTranslucentOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UMaterialInterface*> _replacementMaterials;

public:
	UTranslucentOutlineRenderStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTranslucentOutlineRenderStrategy) { return 0; }
