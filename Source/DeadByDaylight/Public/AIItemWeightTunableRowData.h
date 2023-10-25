#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AIItemWeightTunableRowData.generated.h"

USTRUCT(BlueprintType)
struct FAIItemWeightTunableRowData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CountWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EnergyWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ConditionalWeight;

public:
	DEADBYDAYLIGHT_API FAIItemWeightTunableRowData();
};

FORCEINLINE uint32 GetTypeHash(const FAIItemWeightTunableRowData) { return 0; }
