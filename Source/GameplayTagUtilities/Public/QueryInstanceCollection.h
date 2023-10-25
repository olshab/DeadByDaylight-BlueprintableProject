#pragma once

#include "CoreMinimal.h"
#include "QueryInstanceCollection.generated.h"

class UTagContainerQueryInstance;

USTRUCT(BlueprintType)
struct FQueryInstanceCollection
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTagContainerQueryInstance*> Instances;

public:
	GAMEPLAYTAGUTILITIES_API FQueryInstanceCollection();
};

FORCEINLINE uint32 GetTypeHash(const FQueryInstanceCollection) { return 0; }
