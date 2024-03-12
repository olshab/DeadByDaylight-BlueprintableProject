#pragma once

#include "CoreMinimal.h"
#include "ArchivePassTooltipViewData.h"
#include "TimerFlagViewData.h"
#include "StoreArchivePassViewData.generated.h"

USTRUCT(BlueprintType)
struct FStoreArchivePassViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PassId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ArchiveId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText ArchiveTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FArchivePassTooltipViewData TooltipData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FTimerFlagViewData TimerFlagViewData;

public:
	DBDUIVIEWINTERFACES_API FStoreArchivePassViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreArchivePassViewData) { return 0; }
