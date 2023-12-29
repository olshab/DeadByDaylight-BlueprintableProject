#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EventSpawnableSizeData.generated.h"

USTRUCT(BlueprintType)
struct FEventSpawnableSizeData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SizeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Budget;

public:
	DEADBYDAYLIGHT_API FEventSpawnableSizeData();
};

FORCEINLINE uint32 GetTypeHash(const FEventSpawnableSizeData) { return 0; }
