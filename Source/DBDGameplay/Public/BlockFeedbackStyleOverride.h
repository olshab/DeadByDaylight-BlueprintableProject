#pragma once

#include "CoreMinimal.h"
#include "BlockFeedbackStyleOverride.generated.h"

class ABlockFeedbackBase;

USTRUCT(BlueprintType)
struct FBlockFeedbackStyleOverride
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ABlockFeedbackBase*> BlockSelfFeedbacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ABlockFeedbackBase*> BlockOtherFeedbacks;

public:
	DBDGAMEPLAY_API FBlockFeedbackStyleOverride();
};

FORCEINLINE uint32 GetTypeHash(const FBlockFeedbackStyleOverride) { return 0; }
