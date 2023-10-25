#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseOutlineRenderStrategy.generated.h"

class UBatchMeshCommands;

UCLASS(Blueprintable)
class GFXUTILITIES_API UBaseOutlineRenderStrategy : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UBatchMeshCommands*> _batchCommands;

public:
	UBaseOutlineRenderStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBaseOutlineRenderStrategy) { return 0; }
