#pragma once

#include "CoreMinimal.h"
#include "FlashlightableLightingStrategy.h"
#include "TracingConeFlashlightableLightingStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDGAMEPLAY_API UTracingConeFlashlightableLightingStrategy : public UFlashlightableLightingStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _aroundConeCircleTraceCount;

public:
	UTracingConeFlashlightableLightingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTracingConeFlashlightableLightingStrategy) { return 0; }
