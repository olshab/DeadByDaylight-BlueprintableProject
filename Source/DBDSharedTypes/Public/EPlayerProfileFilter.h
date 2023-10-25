#pragma once

#include "CoreMinimal.h"
#include "EPlayerProfileFilter.generated.h"

UENUM(BlueprintType)
enum class EPlayerProfileFilter : uint8
{
	Wallet = 1,
	PlayerName,
	PlayerLevel = 4,
	PlayerRank = 8,
	ZeroEntry = 0,
};
