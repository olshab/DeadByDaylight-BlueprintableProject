#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EGameType.h"
#include "GameInfoEventData.generated.h"

USTRUCT(BlueprintType)
struct FGameInfoEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EGameType GameType;

public:
	DEADBYDAYLIGHT_API FGameInfoEventData();
};

FORCEINLINE uint32 GetTypeHash(const FGameInfoEventData) { return 0; }
