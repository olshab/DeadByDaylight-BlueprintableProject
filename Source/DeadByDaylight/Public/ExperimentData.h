#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ExperimentData.generated.h"

USTRUCT(BlueprintType)
struct FExperimentData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> AdditionalIds;

public:
	DEADBYDAYLIGHT_API FExperimentData();
};

FORCEINLINE uint32 GetTypeHash(const FExperimentData) { return 0; }
