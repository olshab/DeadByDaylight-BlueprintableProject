#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AIDifficultyTunableRowData.generated.h"

USTRUCT(BlueprintType)
struct FAIDifficultyTunableRowData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VeryEasy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Easy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Medium;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Hard;

public:
	DEADBYDAYLIGHT_API FAIDifficultyTunableRowData();
};

FORCEINLINE uint32 GetTypeHash(const FAIDifficultyTunableRowData) { return 0; }
