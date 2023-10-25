#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "K33CosmeticTunnelBlockVariationInfo.generated.h"

class AK33TunnelBlockCosmetic;

USTRUCT(BlueprintType)
struct FK33CosmeticTunnelBlockVariationInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentageChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AK33TunnelBlockCosmetic> TunnelBlockCosmeticClass;

public:
	THEK33_API FK33CosmeticTunnelBlockVariationInfo();
};

FORCEINLINE uint32 GetTypeHash(const FK33CosmeticTunnelBlockVariationInfo) { return 0; }
