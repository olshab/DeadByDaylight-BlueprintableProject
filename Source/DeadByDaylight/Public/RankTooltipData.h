#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "EPlayerRole.h"
#include "PlayerRoleRankData.h"
#include "RankTooltipData.generated.h"

USTRUCT(BlueprintType)
struct FRankTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole CurrentPlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPlayerRoleRankData SurvivorRankData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPlayerRoleRankData KillerRankData;

public:
	DEADBYDAYLIGHT_API FRankTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FRankTooltipData) { return 0; }
