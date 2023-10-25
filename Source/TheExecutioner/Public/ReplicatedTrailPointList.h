#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedTrailItem.h"
#include "ReplicatedTrailPointList.generated.h"

class ATormentTrailController;

USTRUCT(BlueprintType)
struct FReplicatedTrailPointList: public FFastArraySerializer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FReplicatedTrailItem> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ATormentTrailController* TormentTrailController;

public:
	THEEXECUTIONER_API FReplicatedTrailPointList();
};

FORCEINLINE uint32 GetTypeHash(const FReplicatedTrailPointList) { return 0; }
