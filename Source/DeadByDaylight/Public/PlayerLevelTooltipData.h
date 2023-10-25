#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "PlayerLevelTooltipData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLevelTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerPrestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrentExperience;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 NextLevelExperience;

public:
	DEADBYDAYLIGHT_API FPlayerLevelTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerLevelTooltipData) { return 0; }
