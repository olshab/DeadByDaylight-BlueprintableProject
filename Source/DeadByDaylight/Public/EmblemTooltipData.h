#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "EmblemSlotData.h"
#include "EmblemTooltipData.generated.h"

USTRUCT(BlueprintType)
struct FEmblemTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FEmblemSlotData EmblemSlotData;

public:
	DEADBYDAYLIGHT_API FEmblemTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemTooltipData) { return 0; }
