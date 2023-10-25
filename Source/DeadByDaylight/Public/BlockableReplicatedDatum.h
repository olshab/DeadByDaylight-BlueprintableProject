#pragma once

#include "CoreMinimal.h"
#include "PlayerBlockData.h"
#include "BlockableReplicatedDatum.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBlockableReplicatedDatum
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Transient)
	TArray<TWeakObjectPtr<UObject>> Sources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPlayerBlockData> BlockedPlayersData;

public:
	DEADBYDAYLIGHT_API FBlockableReplicatedDatum();
};

FORCEINLINE uint32 GetTypeHash(const FBlockableReplicatedDatum) { return 0; }
